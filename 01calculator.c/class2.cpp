#include <iostream>
sing namespace std;

// Implement a class called employee that has private member variables name, employeeId and salary. Includde member functions to calculate and set SALARY based on employees performance
class Employee
{
    private:
        string name;
        int employeeId;
        double salary;
    public:
        void setEmployeeDetails(string n, int id, double s)
        {
            name = n;
            employeeId = id;
            salary = s;
        }
        void calculateSalary(double performance)
        {
            salary = salary + (salary * performance);
        }
        void displayEmployeeDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << employeeId << endl;
            cout << "Salary: " << salary << endl;
        }
};

