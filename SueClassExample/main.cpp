//
//  main.cpp
//  SueClassExample
//
//  Created by cj on 9/17/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

/*
 The Box class and Rectangle class are the in terms of function. They have two different names and the syntax is different in terms of how we have defined them, but they function EXACTLY the same.
 */


#include <iostream>
#include <string>
#include "car.h"
using namespace std;


//Box Class
class Box{
    
private:
    int height;
    int width;
    
public:
    Box(); // default Constructor
    ~Box(); //Deconstructor
    Box(int h, int w);
    
    //member functions
    int getArea();  //Returns area of the box, height times width
    void print();
    
    //setters
    void setHeight(int h);
    void setWidth(int w);
    
    //Getters
    int getHeight();
    int getWidth();
    
};
// default Constructor
Box::Box(){
    this->height = 0;
    this->width = 0;
}
//Deconstructor
Box::~Box(){
}

Box::Box(int h, int w){
    this->height = h;
    this->width = w;
}

//member functions
 //Returns area of the box, height times width
int Box::getArea(){
    return this->height * this->width;
}
void Box::print(){
    std::cout << "H: " << this->height << " W: " << this->width << std::endl;
}

//setters
void Box::setHeight(int h){
    this->height = h;
}
void Box::setWidth(int w){
    this->width = w;
}

//Getters
int Box::getHeight(){
    return this->height;
}
int Box::getWidth(){
    return this->width;
}


//Rectangle Class

class Rectangle{
private:
    int height;
    int width;
    
public:
    // default Constructor
    Rectangle(){
        this->height = 0;
        this->width = 0;
    }
    //Deconstructor
    ~Rectangle(){
        
    }
    //Constructor with Params
    Rectangle(int h, int w){
        this->height = h;
        this->width = w;
    }
    
    //member functions
    //Returns area of the box, height times width
    int getArea(){
        return this->height * this->width;
    }
    void print(){
        std::cout << "H: " << this->height << " W: " << this->width << std::endl;
    }
    
    //setters
    void setHeight(int h){
        this->height = h;
    }
    void setWidth(int w){
        this->width = w;
    }
    
    //Getters
    int getHeight(){
        return this->height;
    }
    int getWidth(){
        return this->width;
    }
};


void testCarClass(){
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

    std::cout << std::endl;
    
}

void testBoxAndRectangleClasses(){
    
    //Testing Box Object
    std::cout << "**** TESTING BOX OBJECT *****" << std::endl;
    Box* myBoxObject = new Box(5,4);
    std::cout << "Print object function: ";
    myBoxObject->print();
    std::cout << "Print: Function  getArea(): " << myBoxObject->getArea() << std::endl;
    std::cout << "Print: Function  getHeight(): " << myBoxObject->getHeight() << std::endl;
    std::cout << "Print: Function  getWidth(): " << myBoxObject->getWidth() << std::endl;
    
    int newBoxHeight = 20;
    int newBoxWidth = 30;
    std::cout << "Set Height to " <<  newBoxHeight << " with setHeight() function" << std::endl;
    myBoxObject->setHeight(newBoxHeight);
    std::cout << "Set Height to " <<  newBoxWidth << " with setWidth() function" << std::endl;
    myBoxObject->setWidth(newBoxWidth);
    std::cout << "Print object function: ";
    myBoxObject->print();
    std::cout << "Print: Function  getArea(): " << myBoxObject->getArea() << std::endl;
    std::cout << "Print: Function  getHeight(): " << myBoxObject->getHeight() << std::endl;
    std::cout << "Print: Function  getWidth(): " << myBoxObject->getWidth() << std::endl;
    std::cout << std::endl;
    
    //Testing Rectangle Object
    std::cout << "**** TESTING RECTANGLE OBJECT *****" << std::endl;
    Rectangle* myRectangleObject = new Rectangle(3,10);
    std::cout << "Print object function: ";
    myRectangleObject->print();
    std::cout << "Print: Function  getArea(): " << myRectangleObject->getArea() << std::endl;
    std::cout << "Print: Function  getHeight(): " << myRectangleObject->getHeight() << std::endl;
    std::cout << "Print: Function  getWidth(): " << myRectangleObject->getWidth() << std::endl;
    
    int newRectangleHeight = 45;
    int newRectangleWidth = 33;
    std::cout << "Set Height to " <<  newRectangleHeight << " with setHeight() function" << std::endl;
    myRectangleObject->setHeight(newRectangleHeight);
    std::cout << "Set Height to " <<  newRectangleWidth << " with setWidth() function" << std::endl;
    myRectangleObject->setWidth(newRectangleWidth);
    std::cout << "Print object function: ";
    myRectangleObject->print();
    std::cout << "Print: Function  getArea(): " << myRectangleObject->getArea() << std::endl;
    std::cout << "Print: Function  getHeight(): " << myRectangleObject->getHeight() << std::endl;
    std::cout << "Print: Function  getWidth(): " << myRectangleObject->getWidth() << std::endl;

    std::cout << std::endl;
    
    
}

int main(int argc, const char * argv[]){

    // insert code here...
    std::cout << "Classes Examples\n";
    
    
    testCarClass();
    testBoxAndRectangleClasses();

    return 0;
}

