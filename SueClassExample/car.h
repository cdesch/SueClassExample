//
//  car.h
//  SueClassExample
//
//  Created by cj on 9/17/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef __SueClassExample__car__
#define __SueClassExample__car__

#include <iostream>
#include <string>

using namespace std;
class Car {
private:
    string manufacturer;
    int numDoors;
    int numWheels;
    
public:
    
    Car(string m, int d, int w ); //Constructor with Params
    ~Car(); //Deconstructor
    
    
    //Setters
    void setManufacturer(string m);
    void setNumDoors(int d);
    void setNumWheels(int w);
    
    //Getters
    string getManufacturer();
    int getNumDoors();
    int getNumWheels();
    
};

#endif /* defined(__SueClassExample__car__) */
