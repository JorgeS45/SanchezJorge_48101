/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 10, 2016, 5:42 PM
   Purpose:  Make a diamond pattern
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char s=' ';         //Character s is a space
    char x;             //Character x is a bit of the shape
    
    //Input values
    cout<<"What character would you like to use to make the Diamond"<<endl;
    cin>>x;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    cout<<s<<s<<x<<s<<x<<s<<s<<endl;
    cout<<s<<x<<s<<s<<s<<x<<s<<endl;
    cout<<x<<s<<s<<s<<s<<s<<x<<endl;
    cout<<s<<x<<s<<s<<s<<x<<s<<endl;
    cout<<s<<s<<x<<s<<x<<s<<s<<endl;
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    
    //Exit Program
    return 0;
}