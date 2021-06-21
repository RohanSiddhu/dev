/* CSE202 - Object Oriented Programming with C++
	CA - 2
	Q1. Write a program in C++ to accept date in dd:mm:yyyy format. Store these values
		in MyDate Class with members as day, month and year. Convert this date into one
		variable “Duration” of the current years. This duration means number of days passed
		in the current year since Jan 1.
		Hint :Use type conversion method from class type to basic type conversions.
		Note: consider days in February as 28 for all years.
	
	Coded By: Rohan Siddhu
	Date: 13/04/2021
	Last Modified: 13/04/2021
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

class MyDate {
private:
	uint16_t m_day;
	uint16_t m_month;
	uint16_t m_year;
	uint16_t m_duration;
public:
	MyDate() :m_day(0), m_month(0), m_year(0), m_duration(0) {};
	MyDate(uint16_t d, uint16_t m, uint16_t y);

	void Input();
	void Print() const;
	uint16_t Duration() const;
	void ShowDuration() const;
};

MyDate::MyDate(uint16_t d, uint16_t m, uint16_t y) {
	m_day = d; m_month = m; m_year = y;
	m_duration = Duration();
}

void MyDate::Input() {
	std::string date;
	char str[5] = { 0 };

	std::cout << "Enter Date (dd:mm:yyyy): ";
	std::cin >> date;
	
	date.copy(str, 2, 0);
	m_day = atoi(str);
	date.copy(str, 2, 3);
	m_month = atoi(str);
	date.copy(str, 4, 6);
	m_year = atoi(str);

	if (m_day == 0 || m_month == 0 || m_year == 0 || m_month > 12) {
		std::cout << "Wrong input value!\n";
		exit(1);
	}

	if (!(m_duration = Duration())) {
		std::cout << "Wrong input value!\n";
		exit(1);
	}
}

void MyDate::Print() const {
	std::cout.setf(std::ios::adjustfield, std::ios::right);
	std::cout << std::setw(2) << std::setfill('0') << m_day << ":" << m_month << ":" << m_year;
}

uint16_t MyDate::Duration() const {
	const uint16_t nDay[] = {
		0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365
	};

	uint16_t duration = 0;
	if (m_month != 0)
		duration = nDay[m_month - 1] + m_day;
	if (duration > nDay[m_month]) {
		return 0;
	}
	else {
		return duration;
	}
}

void MyDate::ShowDuration() const {
	if (!m_duration) {
		std::cout << "Invalid Date!\n";
		return;
	}
	else {
		std::cout << "No of days since Jan 1 of the current year: " << m_duration << std::endl;
	}
}

int main() {
	MyDate date;

	date.Input();
	date.ShowDuration();

	return 0;
}