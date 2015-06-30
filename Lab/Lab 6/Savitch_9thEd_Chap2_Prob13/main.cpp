/* 
 * File:   main.cpp
 * Author: Bryce Brainard
 * Created on June 30, 2015, 12:13 PM
 * Purpose: How many candy bars can I eat / day without
 * gaining weight? 
 */
 
//System Library
#include <fstream>//File Library
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream
 
//User Libraries
 
//Function Prototypes
 
//Global Constants
 
//Execution begins here
 
int main(int argc, char** argv) {
    //Declare variables
    unsigned short wtLbs, htInch, ageYrs, bmr;
    unsigned char  nChcBar, calChoc = 230;
    char sex;
    ifstream input;
    
    //Loop as long as we have data
    input.open("bmr.dat");
    //Exhaust the data in the file
    while(!input.eof()){
        //Read from file
        input>>sex>>wtLbs>>htInch>>ageYrs;
        //Calculate BMR due to Sex
        if(sex=='F'){
            bmr = 655 + 4.3 * wtLbs + 4.7 * htInch - 4.7 * ageYrs;
        }else{
            bmr = 66 + 6.3 * wtLbs + 12.9 * htInch - 6.8 * ageYrs;
        }
        //What is the equivalent number of chocolate bars
        nChcBar = bmr / calChoc;
        //Output the results
        cout<<"Sex    = "<<sex<<endl;
        cout<<"Weight = "<<wtLbs<<endl;
        cout<<"Height = "<<htInch<<endl;
        cout<<"Age    = "<<ageYrs<<endl;
        cout<<"Your BMR = "<<bmr<<"(cal)"<<endl;
        cout<<"Number of candy bars you may consume  = "<<static_cast<int>(nChcBar)<<endl;
        cout<<endl<<endl;
               
    }
    //Input Values
   
    //Calculate unknowns
  
    //Output results
  
    //Exit stage right
    return 0;
}