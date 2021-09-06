#ifndef SHOPWORKER_H
#define SHOPWORKER_H

#include <iostream>
#include "Employee.h"

class Shopworker: public Employee{
/*
The shopworker class has attributes for department name, shop phone number, hours worked,
hourly rate, and shop ID (an integer). The shop worker is paid by the hour, so pay
should be hours worked times the hourly rate.
*/
std::string departmentName;
std::string shopPhoneNumber;
int hoursWorked;
float hourlyRate;
int shopID;
//also get firstName, LastName, and employeeStatus

public:
    //constructor (parameterized)
    //default constructor
    float currentPayDue(int days, float salary);
    std::string getEmploymentStatus();
};

#endif