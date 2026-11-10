// Lesson5.7-strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
	std::getline(std::cin >> std::ws, name); //by default std::cin reads until the first whitespace, so we use std::getline to read the entire line including spaces. std::ws is used to consume any leading whitespace characters before reading the input.

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color); 

    std::cout << "Your name is " << name << " and your favorite color is " << color << " and name + color is: " << std::ssize(name) + std::ssize(color) << '\n';
    std::cout << "Your name is " << name << " and your favorite color is " << color << " and name + color is: " << static_cast<int>(name.length()) + static_cast<int>(color.length()) << '\n';
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
