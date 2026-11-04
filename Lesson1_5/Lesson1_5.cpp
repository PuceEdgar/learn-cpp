// Lesson1_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
	
	//int a;
	//std::cout << a << "\n"; //prints garbage value because a is uninitialized. It is not safe to use uninitialized variables.

	//in c++ std::cout is used to print to the console, but first it is written to buffer for efficiency. C++ decides when to flush the buffer. std::endl is used to end the line and flush the output buffer immediately.
	//using std::endl is not recommended because it is less efficient than using '\n' and flushing the buffer manually when needed.

	std::cout << "Slower direct write to console" << std::endl; //adds new line and flushes the buffer and writes
	std::cout << "Faster write to buffer" << '\n'; //writes to buffer and adds new line, but does not flush it

	std::cout << "Input example" << "\n"; 
	std::cout << "Please enter number: ";

	int x{}; // define variable x to hold user input (and value-initialize it)
	std::cin >> x; // read user input from console and store it in variable x

	std::cout << "You entered: " << x << "\n"; // print the value of x to the console

	std::cout << "Now enter 2 numbers separated by space: ";
	int y{};
	int z{};

	std::cin >> y >> z; // read two numbers from user input and store them in variables y and z
	std::cout << "You entered: " << y << " and " << z << "\n";

	//std::cin works like std::cout. it reads input into buffer and then flushes it to the variable. It can read multiple values separated by spaces or new lines.
	
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
