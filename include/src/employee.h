#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
using namespace std;

class Employee
{
    private:
        int employeeId;
        string name;
        string department;
        double salary;

    public:
        Employee();

        void setEmployee(int id, string empName, string empDepartment, double empSalary);

        void displayEmployee();

        int getEmployeeId();

        string getName();
};

#endif


//we don't want main.cpp directly messing with the employee's data 
//we interact with the employee through functions such as
//that's encapsulation