#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "employee.h"
#include "manager.h"
#include "shopworker.h"

const int NUM_ARGS = 2;

int main(int argc, char const *argv[]){
    std::ifstream fin;
    std::vector <Employee*> employees;

    //file is included in command line
    if (argc < NUM_ARGS) {
        std::cout << "Correct usage:" << std::endl;
        std::cout << argv[0] << " filename" << std::endl;
        return 0;
    }

    //open file and check for opening
    fin.open(argv[1]);
    if((fin.is_open()) == false){
        std::cout << "File " << argv[1] << "could not be opened" << std::endl;
        return 0;
    }

    std::string employeeData; //temporary string to hold all the data of one employee
    std::istringstream streamLine(employeeData); //treat this one line of data as its own stream

    //needed data types (employee data)
    std::string job;

    //skipping ****
    //do while string == ****
    //keep going
    //-->look up npos to help with skipping


    //read in employee data, check for job type, create an onbject and place in vector
    while(getline(fin, employeeData)){ //while you can still pull lines of text
        streamLine >> job; 
        if(job == "Manager"){
            //read in the rest of the data for manager
            //steamline >> Last name, first name, employment status, department name, shop phone number, shop ID, hourly rate, hours worked;
            Employee *manager = new Manager();
            employees -> emplace_back(manager);
        }else if(job == "ShopWorker"){
            //read in the rest of the data for shopWorker
            //streamLine >> Last name, first name, employment status, department name, store ID, salary per day, days since last paycheck;

            Employee *shopWorker = new ShopWorker();
            employees -> emplace_back(shopWorker);
        }
    }

    //print out all employees
    for (Employee *emp: employees) {
        if(auto * manager = dynamic_cast<Manager*>(emp)){
            std::cout << (*manager) << std::endl;
        } else{
            std::cout << *(dynamic_cast<ShopWorker*>(emp)) << std::endl;
        }
    }

    //end program
    fin.close();
    return 0;
}

/*
Read the filename from the command line. Print an error message if no filename is provided
Open the file for reading
Skip all lines that begin with ****
for each remaining line in the file
    If the first word is "Manager",
        Create a new Manager object with the remaining data in that line
    else if the first word is "ShopWorker",
        Create a new ShopWorker object from the remaining data in that line
    Add the pointer to the object to the Employees vector
    
for (Employee *emp: employees) {
    if(auto * manager = dynamic_cast<Manager*>(emp)) {
        std::cout << (*manager) << std::endl;
    } else {
        std::cout << *(dynamic_cast<ShopWorker*>(emp)) << std::endl;
    }
}
*/