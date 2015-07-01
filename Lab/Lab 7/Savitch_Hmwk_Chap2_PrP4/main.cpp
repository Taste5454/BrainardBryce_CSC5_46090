/* 
 * File:   main.cpp
 * Author: Bryce Brainard
 * Created on July 1, 2015, 1:11 PM
 * Purpose: Homework, Savitch Chapter 2 Practice Problem 4
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
    string name;
    string iName;
    string food;
    string num;
    string adj;
    string col;
    string anml;
    unsigned short min = 100;
    unsigned short max = 120;
    
    //Input Values
    cout<<"Input first or last name of your instructor"<<endl;
    cin>>iName;
    cout<<"Input your first or last name"<<endl;
    cin>>name;
    cout<<"Input a type of food"<<endl;
    cin>>food;
    cout<<"Input an integer value between "<<min<<" and "<<max<<endl;
    cin>>num;
    cout<<"Input an adjective"<<endl;
    cin>>adj;
    cout<<"Input your favorite color"<<endl;
    cin>>col;
    cout<<"Input the name of your favorite animal"<<endl;
    cin>>anml;
   
    //Output results
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<col<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<num<<". Next, my "<<adj<<" pet"<<endl;
    cout<<anml<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<name;
    
    //Exit stage right
    return 0;
}
