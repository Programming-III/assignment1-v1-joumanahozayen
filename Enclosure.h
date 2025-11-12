#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
using namespace std;
class Enclosure{
    private:
    Animal*a;
    int capacity;
    int currentCount;
    
    public:
    Enclosure();
    Enclosure(Animal*a,int capacity,int currentCount);
    ~Enclosure();
    void addAnimal(Animal*a);
    void displayAnimals();
};
#endif
