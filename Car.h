#include <iostream>
#include <string>
using namespace std;
class Car {
    private:
        string brand{"Volkswagen"};
        string model="Polo";
        int year {2012};
    public:
        ~Car(){// Destructor
        std::cout<<"Object is destroyed"<<std::endl;
        }

        void startEngine() {// Code to start the car's engine
        cout<<"start engine"<<endl;
        }
        void accelerate() {// Code to accelerate the car
        cout<<"accelerate engine"<<endl;
        }
        Car(){
            
        }
        Car(string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
        Car(constCar & other){
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        
};
