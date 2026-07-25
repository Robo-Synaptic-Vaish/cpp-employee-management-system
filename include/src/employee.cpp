#include "../include/employee.h"
#include <iostream>

using namespace std;

Employee::Employee()
{
    employeeId = 0;
    name = "";
    department = "";
    salary = 0;
}

void Employee::setEmployee(int id, string empName, string empDepartment, double empSalary)
{
    employeeId = id;
    name = empName;
    department = empDepartment;
    salary = empSalary;
}

void Employee::displayEmployee()
{
    cout << "Employee ID: " << employeeId << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: $" << salary << endl;
}

int Employee::getEmployeeId()
{
    return employeeId;
}

string Employee::getName()
{
    return name;
}