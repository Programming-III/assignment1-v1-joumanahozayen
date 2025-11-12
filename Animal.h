#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal(string name, int age,bool isHungry);
    Animal();
    ~Animal();
    int getAge();
    string getName();
    void display();
    void feed();
};
#endif
