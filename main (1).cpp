/******************************************************************************
Kaden Rodriguez
CSCI 272
Lesson 4
Copy Constructor Example
3/3/2026
*******************************************************************************/
#include "Car.h";

int main()
{
    Car car1;
    Car car1; // default constructor
    Car car2("Tesla","X", 2022); // parametrized constructor
    Car car3(car2); //copy Constructor
    Car* pCar1 = new Car; // default constructor
    Car* pCar2 = new Car("Tesla","X", 2022); // parametrized constructor
    Car car[20]; 
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    car[0].startEngine();
    car1.accelerate();
    return 0;
}