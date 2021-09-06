#ifndef MANAHER_H
#define MANAGER_H

#include <iostream>
#include "Employee.h"

class Manager: public Employee{
/*
The manager class has attributes for department name, store ID (an integer), salary per day, and
days worked since last paycheck. The `currentPayDue` function should calculate the pay based on
the days worked and the salary per day.
*/

    std::string departmentName;
    int storeID;
    float salaryPerDay;
    int daysWorkedSinceLastPaycheck;
    //also get firstName, LastName, and employeeStatus
    
public:
    //constructor (parameterized)
    Manager();
    float currentPayDue(int days, float salary);
    std::string getEmploymentStatus();
};

#endif