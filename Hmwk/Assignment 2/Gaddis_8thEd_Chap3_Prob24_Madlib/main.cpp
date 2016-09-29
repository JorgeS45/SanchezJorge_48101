/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 23rd 2016, 3:30 PM
   Purpose: Make a Mad Lib
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //Loading string functions
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string  name,
            age,
            city,
            college,
            prof,       //Profession
            animal,
            petname;
    
    //Input values
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"What city do you live in?"<<endl;
    cin>>city;
    cout<<"What is the name of the college you are attending?"<<endl;
    cin>>college;
    cout<<"What is your profession?"<<endl;
    cin>>prof;
    cout<<"What type of animal do you like?"<<endl;
    cin>>animal;
    cout<<"What would you name the animal?"<<endl;
    cin>>petname;   
    
    //Process values -> Map inputs to Outputs
    
   
    //Display Output
    cout<<endl<<"There once was a person named "<<name<<" who lived in "<<city<< ". At the age of\n"
            <<age<<", "<<name<< " went to college at "<<college<< ". "<<name<<" graduated and went to work\n"
            "as a "<<prof<<". Then, "<<name<<" adopted a "<<animal<<" named "<<petname<<". They\n"
            "lived happily ever after!"<<endl;
            
    

    //Exit Program
    return 0;
}