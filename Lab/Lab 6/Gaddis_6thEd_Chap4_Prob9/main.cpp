/* 
 * File:   main.cpp
 * Author: Bryce Brainard
 * Created on June 30, 2015, 12:57 PM
 * Purpose: Math tutor program
 */
 
//System Library
#include <iomanip>
#include <iostream>//I/O Library
#include <cstdlib>
#include <ctime>
using namespace std;//Namespace for iostream
 
//User Libraries
 
//Function Prototypes
 
//Global Constants
 
//Execution begins here
 
int main(int argc, char** argv) {
    
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned short op1, op2, result, answer;
    char op;
    bool doAgain;
    
    //Loop based upon continuing to play with the math tutor
    do{
        //determine op1/op2
        op1 = rand()% 900 + 100;//[100-999]
        op2 = rand()% 900 + 100;//[100-999]
        op = rand()%5;
        //Display the problem
        cout<<setw(6)<<op1<<endl;
        switch(op){
            case 0:{
                cout<<" + "<<op2<<endl;
                answer = op1+op2;
                break;
            }
            case 1:{
                cout<<" - "<<op2<<endl;
                answer = op1 - op2;
                break;
            }
            case 2: {
                cout<<" * "<<op2<<endl;
                answer = op1 * op2;
                break;
            }
            case 3:{
                cout<<" / "<<op2<<endl;
                answer = op1 / op2;
                break;
            }
            case 4:{
                cout<<" % "<<op2<<endl;
                answer = op % op2;
                break;
            }
        }
        cout<<"------"<<endl;
        doAgain = false;
        //Input value for the sum
        cin>>result;
        //If correct output Congratulations else try again?
        if(result==answer){
            cout<<endl<<"Congratulations"<<endl;            
        }else{
            cout<<endl<<"Wrong Answer"<<endl;
            cout<<"The answer was = "<<answer<<endl;
        }
        //Prompt if they would like to continue
        cout<<"Would you like to continue y/n"<<endl;
        char response;
        cin>>response;
        if(response=='y')doAgain = true;
        else doAgain = false;
    }while(doAgain);
    
    //Exit stage right
    return 0;
}