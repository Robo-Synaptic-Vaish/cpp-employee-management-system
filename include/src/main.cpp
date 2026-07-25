#include <iostream>
#include "../include/employee.h"

using namespace std;

int main()
{
    Employee emp1;

    emp1.setEmployee(101, "Rahul", "IT", 45000);

    emp1.displayEmployee();

    return 0;
}