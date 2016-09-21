/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 20, 2016, 3:14 PM
   Purpose:  Make big CS
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
    char v='*';//Character used for border
    char h=' ';//Character used for white space
    char a;    //Character used to create the C
    char e;    //Character used to make the S
    char i;    //Character used to make the !
    
    //Input values
    cout<<"Choose a character to make the CS"<<endl;
    cin>>a>>e>>i;
    //Process values -> Map inputs to Outputs
    
    //Display Output -> The Big C
    cout<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<endl;
    cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<endl;
    cout<<h<<h<<a<<a<<a<<a<<h<<h<<h<<h<<e<<e<<h<<h<<h<<i<<i<<endl;
    cout<<h<<a<<h<<h<<h<<h<<a<<h<<h<<e<<h<<h<<e<<h<<h<<i<<i<<endl;
    cout<<a<<h<<h<<h<<h<<h<<h<<h<<h<<e<<h<<h<<h<<h<<h<<i<<i<<endl;
    cout<<a<<h<<h<<h<<h<<h<<h<<h<<h<<e<<h<<h<<h<<h<<h<<i<<i<<endl;
    cout<<a<<h<<h<<h<<h<<h<<h<<h<<h<<h<<e<<h<<h<<h<<h<<i<<i<<endl;
    cout<<a<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<e<<h<<h<<h<<i<<i<<endl;
    cout<<a<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<e<<h<<h<<h<<h<<endl;
    cout<<h<<a<<h<<h<<h<<h<<a<<h<<h<<e<<h<<h<<e<<h<<h<<i<<i<<endl;
    cout<<h<<h<<a<<a<<a<<a<<h<<h<<h<<h<<e<<e<<e<<h<<h<<i<<i<<endl;
    cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<endl;
    cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<endl;
    cout<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    
    cout<<"Computer Science is cool stuff!!"<<endl;
    //Exit Program
    return 0;
    
}