#ifndef REPTILE_H
#define REPTILE_H
#include "animal.h"
#include <iostream>
using namespace std;
class Reptile:public Animal{
    private:
    bool isVenomous;
    
    public:
    Reptile();
    Reptile(string name, int age,bool isHungry,bool isVenomous);
    ~Reptile();
};
#endif
