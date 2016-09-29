/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 28th, 8:16 PM
   Purpose: make a metric ton out of cereal boxes
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float ton = 35273.92;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   cereal,             //to be received as ounces
            crl4ton,            //cereal needed to weigh a ton
            box2ton;            //weight of cereal in tons
    
    //Input values
    cout<<"How much does the cereal package weigh in ounces?"<<endl;
    cin>>cereal;   
    
    //Process values -> Map inputs to Outputs
    crl4ton=ton/cereal;            //how much cereal do you need to make a ton?
    box2ton=cereal/ton;              //output     
    
    //Display Output
    cout<<"The package, in tons, weighs "<<box2ton<<"."<<endl;
    cout<<"To weigh a metric ton, you need "<<crl4ton<<" boxes of "<<cereal<<" oz.";
          
    //Exit Program
    return 0;
}