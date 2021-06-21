/**
 * File : time.cpp
 * Description : This program use a class 'Time' to handle time ralaited task.
 * Coded by : Rohan Siddhu
 * Date : 09/04/2020
 */

#include <iostream>
#include <stdlib.h>

class Time
{
    private:
        int m_hrs, m_min;
    public:
        /* Constructors */
        Time()
        {
            m_hrs = m_min = 0;
        }
        Time(int min)
        {
            m_hrs = min / 60, m_min = min % 60;
        }
        Time(int hrs, int min)
        {
            m_hrs = hrs, m_min = min;
        }

        /* Operator Overloaded */
        Time operator +(Time &obj2)
        {
            m_hrs = m_hrs + obj2.m_hrs + (obj2.m_min + m_min) / 60;
            m_min = (m_min + obj2.m_min) % 60;

            return Time(m_hrs, m_min);
        }
        Time operator -(Time &obj2)
        {
            m_hrs -= obj2.m_hrs;
            m_min -= obj2.m_min;

            return Time(m_hrs, m_min);
        }
        operator int()
        {
            return (m_hrs * 60 + m_min);
        }

        /* Member Function Prototype Declaration */
        void ShowData();
        void ShowMin();
        void GetData(const char* str = "");
        void GetMin(const char* str = "");
};

void Time::ShowData()
{
    std::cout << m_hrs << " hrs " << m_min << " min ";
}

void Time::ShowMin()
{
    std::cout << (m_hrs * 60 + m_min) << " min";
}

void Time::GetData(const char* str)
{
    std::cout << str << "\nHours: ";
    std::cin >> m_hrs;
    std::cout << "Minutes: ";
    std::cin >> m_min;
}

void Time::GetMin(const char* str)
{
    int min;
    std::cout << str;
    std::cin >> min;
    m_hrs = min / 60, m_min = min % 60;
}

int main()
{
    Time t, t1(150), t2(2, 15);
    int min = 0;
    system("cls");

    t.ShowData();
    std::cout << "\n";
    t1.ShowData();
    std::cout << "\n";
    t2.ShowData();

    t1.GetData("\n\nEnter Time 1:");
    t2.GetData("Enter Time 2:");

    t = t1 + t2;
    
    std::cout << "Sum of T1 and T2 is ";
    t.ShowData();

    t1.GetMin("\nEnter time in minutes: ");
    t2.GetMin("Enter time in minutes:");

    t = t1 - t2;

    std::cout << "Difference is:";
    t.ShowData();

    std::cout << "\n\nEnter minutes:";
    std::cin >> min;
    t = min;

    t.ShowData();

    t.GetData();
    min = t;
    std::cout << "\nMinutes: " << min;

    std::cin.get();
    return 0;
}