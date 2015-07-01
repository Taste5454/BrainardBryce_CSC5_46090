/* 
 * File:   main.cpp
 * Author: Bryce Brainard
 * Created on July 1, 2015, 1:44 PM
 * Purpose: Homework, Savitch Chapter 2 Practice Problem 5
 */
 
//System Library
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream
 
//User Libraries
 
//Function Prototypes
 
//Global Constants
 
//Execution begins here
 
int main(int argc, char** argv) {
 
    //Declare variables
    float radius, vol;
    
    //Input radius of sphere
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
    //Calculate volume
    vol = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
        
    //Output results
    cout<<" The volume is "<<vol<<endl;
    
    //Exit stage right
    return 0;
}
