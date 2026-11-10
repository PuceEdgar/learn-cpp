// Lesson5.8-string-view.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string_view>

void printStringView(std::string_view str) //this will accept string literals, std::string objects, and std::string_view objects as arguments. It does not take ownership of the string data, so it is efficient and avoids unnecessary copies.
{
	std::cout << "String view: " << str << "\n";
}

int main()
{
	using namespace std::string_literals;      // access the s suffix
	using namespace std::string_view_literals; // access the sv suffix

	std::cout << "foo\n";   // no suffix is a C-style string literal
	std::cout << "goo\n"s;  // s suffix is a std::string literal
	std::cout << "moo\n"sv; // sv suffix is a std::string_view literal


	printStringView("Hello, World!");

	std::string s2{ "Hello, World!" };
	printStringView(s2);

	std::string_view s3{ s2 };
	printStringView(s3);

	//Assignment changes what the std::string_view is viewing
	std::string name{ "Alex" };
	std::string_view sv{ name }; // sv is now viewing name
	std::cout << sv << '\n'; // prints Alex

	sv = "John"; // sv is now viewing "John" (does not change name)
	std::cout << sv << '\n'; // prints John

	std::cout << name << '\n'; // prints Alex

	constexpr std::string_view s{ "Hello, world!" }; // s is a string symbolic constant
	std::cout << s << '\n'; // s will be replaced with "Hello, world!" at compile-time

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
