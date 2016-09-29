/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 23rd 2016, 12:23 PM
   Purpose: calculate number of slices depending on its size
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
    float   pi = 3.14159, //value of pi
            area,
            slice,
            dpizza,      //pizza diameter in inches
            rpizza;      //radius
    
    //Input values
    cout<<"What is the diameter of your pizza in inches?"<<endl;
    cin>>dpizza;
    
    //Process values -> Map inputs to Outputs
    rpizza=dpizza/2;
    area=pi*rpizza*rpizza;
    slice=area/14.125;      //calculate the number of slices
    
    //Display Output
    cout<<"With that pizza, the amount of slices you can make is: "<<endl<<slice<<"in^2";

    //Exit Program
    return 0;
}