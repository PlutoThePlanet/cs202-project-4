#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Ipayable.h"

class Employee: public IPayable{
    std::string firstName;
    std::string lastName;
    std::string employmentStatus; //active, retired, dismissed
    
public:
    virtual std::string getEmploymentStatus() = 0;
};

#endif