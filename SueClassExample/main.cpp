//
//  main.cpp
//  SueClassExample
//
//  Created by cj on 9/17/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <string>
#include "car.h"
using namespace std;
int main(int argc, const char * argv[]){

    // insert code here...
    std::cout << "Hello, World!\n";
    
    //Create a new car
    Car myChevyObject("Chevy", 4, 2); //Create object using constructor
    
    cout << "Print Car Info: " << endl;
    cout << "--> Manufacturer: "<< myChevyObject.getManufacturer() << endl;
    cout << "--> Number of Doors: "<< myChevyObject.getNumDoors() << endl;
    cout << "--> Number of Wheels: "<< myChevyObject.getNumWheels() << endl;
    
    
    //Create Next Object
    Car myFordObject("Ford", 2, 4);  //Create object using constructor
    
    cout << "Print Car Info: " << endl;
    cout << "--> Manufacturer: "<< myFordObject.getManufacturer() << endl;
    cout << "--> Number of Doors: "<< myFordObject.getNumDoors() << endl;
    cout << "--> Number of Wheels: "<< myFordObject.getNumWheels() << endl;
    
    
    return 0;
}

