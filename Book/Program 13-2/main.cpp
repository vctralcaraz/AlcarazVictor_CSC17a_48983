/* 
 * File:   main.cpp
 * Author: Victor Alcaraz
 * Created on October 12, 2015, 1:43 PM
 * Purpose: Gaddis Book Program Example 13-2
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries
#include "Rectangle.h"

//global functions

//Function Prototypes

//execution
int main(int argc, char** argv) {
    int number;         //to hold a number
    int totalArea;      //the total area
    Rectangle kitchen;  //to hold kitchen dimensions
    Rectangle bedroom;  //to hold bedroom dimensions
    Rectangle den;      //to hold den dimensions
    
    //get the kitchen's dimensions.
    cout<<"What is the kitchen's length? ";
    cin>>number;
    cin.ignore();
    kitchen.setLength(number);
    cout<<"What is the kitchen's width? ";
    cin>>number;
    cin.ignore();
    kitchen.setWidth(number);
    
    //get the bedroom's dimensions.
    cout<<"What is the bedroom's length? ";
    cin>>number;
    cin.ignore();
    bedroom.setLength(number);
    cout<<"What is the bedroom's width? ";
    cin>>number;
    cin.ignore();
    bedroom.setWidth(number);
    
    //get the den's dimensions.
    cout<<"What is the den's length? ";
    cin>>number;
    cin.ignore();
    den.setLength(number);
    cout<<"What is the den's width? ";
    cin>>number;
    cin.ignore();
    den.setWidth(number);
    
    //Calculate the total area of the three rooms
    totalArea=kitchen.getArea()+bedroom.getArea()+den.getArea();
    
    //display the total area of the three rooms
    cout<<"The total area of the three rooms is "<<totalArea<<endl;
    
    return 0;
}