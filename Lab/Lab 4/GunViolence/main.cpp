/* 
 * File:   main.cpp
 * Author: Bryce Brainard 
 * Created on June 25, 2015, 11:18 AM
 * Purpose: Calculate the percentage of violent crimes in the United states
 * and compare it to the UK
 */

//System Libraries
#include <iostream> // I/O library
#include <iomanip>
using namespace std; //Set namespace std

//User Libraries

//Global constants

//Function prototypes

int main(int argc, char** argv) {
    //Declare Variables
    float usPop, ukPop, usVc, ukVc, pCus, pCuk;
        
    //Initialize variables
    usPop = 3.18e8f; // Population in the United States
    ukPop = 6.41e7f; // Population in the United Kingdom
    usVc  = 1.188e7f; // Number of violent crimes in the US by year
    ukVc  = 6.52e6f; // Number of violent crimes in the UK by year   
    pCus; // Percentage of violent crimes in the US
    pCuk; // Percentage of violent crimes in the UK
    
    //Calculate Unknowns
    pCus = (usVc / usPop) * 100; //Calculate percentage of crimes in the US
    pCuk = (ukVc / ukPop) * 100; //Calculate percentage of crimes in the UK
    
    //Output the results
    cout<<"Percentage of violent crimes in the United States = "<<fixed<<showpoint<<setprecision(2)<<pCus<<"%"<<endl;
    cout<<"Percentage of violent crimes in the United Kingdom = "<<pCuk<<"%"<<endl;
    
    //Exit stage right
   
    return 0;
}