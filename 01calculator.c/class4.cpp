#include <iostream>
using namespace std;

// Implement a class called date that has private member variables for day, month and year. Includde member functions to set andd get these variables as well as to validate if the date is valid.
class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }
        bool isLeapYear()
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if (year % 400 == 0)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return true;
                }
            }
            else
            {
                return false;
            }
        }
        bool isValidDate()
        {
            if (month < 1 || month > 12)
            {
                return false;
            }
            if (day < 1 || day > 31)
            {
                return false;
            }
            if (month == 2)
            {
                if (isLeapYear())
                {
                    if (day > 29)
                    {
                        return false;
                    }
                }
                else
                {
                    if (day > 28)
                    {
                        return false;
                    }
                }
            }
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                if (day > 30)
                {
                    return false;
                }
            }
            return true;
        }
        void displayDate()
        {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        }
};