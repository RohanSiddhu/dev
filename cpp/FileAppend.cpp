/* CSE202 - Object Oriented Programming with C++ 
	CA - 2
	Q2. Write a program in C++ to open and read the contents of the Text1.txt
	using the file stream class. Close the file and again open to update the
	contents of given file Text1.txt.
	Text1.txt : I am enjoying learning OOPS concepts

	After update
	Text1.txt: I am enjoying learning OOPS concepts
			   Now learnt C++; Java is my next target.
	
	Coded By: Rohan Siddhu
	Date: 13/04/2021
	Last Modified: 13/04/2021
*/

#include <iostream>
#include <fstream>

int main() {
	std::fstream file("Text1.txt", std::ios::in);
	if (!file) {
		std::cerr << "\n File could not be opened for reading!\n";
		std::cout << "\n Creating new file.\n";

		file.open("Text1.txt", std::ios::out);
		if (!file) {
			std::cerr << "\n File could not be created!\n";
			return 1;
		}
		file.write("I am enjoying learning OOPS concepts.\n", sizeof("I am enjoying learning OOPS concepts.\n"));
		file.close();
	}

	char ch = 0;

	ch = file.get();
	std::cout << ch;
	while (!file.eof()) {
		ch = file.get();
		std::cout << ch;
	}
	file.close();

	file.open("Text1.txt", std::ios::app);
	if (!file) {
		std::cerr << "\n File could not be opened for appending!\n";
		return 1;
	}
	file.write("Now learnt C++; Java is my next target.\n", sizeof("Now learnt C++; Java is my next target.\n"));
	file.close();

	return 0;
}