#ifndef IPAYABLE_H
#define IPAYABLE_H

class IPayable{
public:
    virtual float currentPayDue(int days, float salary) = 0;
};

#endif