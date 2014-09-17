//
//  car.cpp
//  SueClassExample
//
//  Created by cj on 9/17/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "car.h"


//Constructor with Params
Car::Car(string m, int d, int w ){
    
    manufacturer = m;
    numDoors = d;
    numWheels = w;
}
//Deconstructor
Car::~Car(){
    
}


//Setters
void Car::setManufacturer(string m){
    manufacturer = m;
}
void Car::setNumDoors(int d){
    numDoors = d;
    
}
void Car::setNumWheels(int w){
    numWheels = w;
}

//Getters
string Car::getManufacturer(){
    return manufacturer;
}
int Car::getNumDoors(){
    return numDoors;
}
int Car::getNumWheels(){
    return numWheels;
}