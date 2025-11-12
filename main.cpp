#include "animal.h"
#include "mammal.h"
#include "bird.h"
#include "reptile.h"
#include "enclosure.h"
#include "visitor.h"
#include <iostream>
using namespace std;

 Animal::Animal(string name, int age,bool isHungry){
     this->name =name;
      this->age =age;
       this->isHungry =isHungry;
 }
    Animal::Animal(){
        name="";
        age=0;
        isHungry= false;
    }
    Animal::~Animal(){
        
    }
    int Animal:: getAge(){
        return age;
    }
    string Animal:: getName(){
        return name;
    }
    void Animal:: display(){
        cout<<"Animal's name: "<<name<<endl;
        cout<<"Animal's age: "<<age<<endl;
        cout<<"Is animal hungry: "<<isHungry<<endl;
    }
    void Animal:: feed(){
        if(isHungry==false){
            cout<<" Not Hungry";
        }
        else {
            cout<<"Hungry";
        }
    }
    
     Mammal::Mammal(): Animal(){
         furColor="";
     }
    Mammal::Mammal(string name, int age,bool isHungry,string furColor):  Animal(name,age,isHungry){
      this->furColor=furColor;  
    }
    Mammal::~Mammal(){
        
    }
    
    Bird::Bird(): Animal(){
        wingSpan=0.0;
    }
    Bird::Bird(string name, int age,bool isHungry,float wingSpan):Animal(name,age,isHungry){
        this->wingSpan=wingSpan;
    }
    Bird::~Bird(){
        
    }
    
    Reptile::Reptile(): Animal(){
    isVenomous = false;
    }
    Reptile::Reptile(string name, int age,bool isHungry,bool isVenomous):Animal(name,age,isHungry){
        this->isVenomous=isVenomous;
    }
    Reptile::~Reptile(){
        
    }
    
    Enclosure::Enclosure(){
    a= new  {};
    capacity=0;
    currentCount=0;
    }
    Enclosure::Enclosure(Animal*a,int capacity,int currentCount){
        a=new[capacity];
        this->capacity=capacity;
        this->currentCount=currentCount;
    }
    Enclosure::~Enclosure(){
        delete []a;
    }
    void Enclosure:: addAnimal(Animal*a){
        if(currentCount<capacity){
            a[currentCount]== (Animal)a;
            currentCount++;
        }
        else{
            cout<<"there is no space"<<endl;
        }
    }
    void Enclosure::displayAnimals(){
       for(int i=0;i<currentCount;i++) {
           cout<<getName()<<"(Age: "<<getAge()<<","<<feed()<<endl;
       }
    }
    
    Visitor::Visitor(){
        visitorName="";
        ticketsBought=0;
    }
    Visitor::Visitor(string visitorName,int ticketsBought){
        this->visitorName=visitorName;
        this->ticketsBought=ticketsBought;
    }
    Visitor::~Visitor(){
        
    }
    void Visitor:: displayInfo(){
        cout<<"Visitor Info:"<<endl;
        cout<<"Name :"<<visitorName<<endl;
        cout<<"Tickets Bought :"<<ticketsBought<<endl;
    }


int main()
{
    Enclosure(Animal*a ,5,3);
    
    a[0]= Mammal("lion",5,true,"orange");
    a[1]= Bird("Parrot",2,false,2.0);
    a[2]=Reptile("snake",3,true,true);
    
    a->displayAnimals();
    
    
  Visitor v("Sarah Ali",3);
  v.displayInfo();
  
    return 0;
}
