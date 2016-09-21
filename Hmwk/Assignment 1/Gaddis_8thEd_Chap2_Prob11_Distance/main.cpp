/* 
   File:   main
   Author: Jorge Sanchez
   Created on August 11, 2016, 3:41 PM
   Purpose:  Distance per tank of gas
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
    float carGas;           //INPUT - The car have gallon
    float townMPG;          //INPUT - The MPG in town
    float highwayMPG;       //INPUT - The MPG on highway
    float distanceTown;     //INPUT - distance the car can travel in town
    float distanceHigh;     //INPUT - distance the car can travel on highway
    
    //Input values
    carGas = 20;
    townMPG = 23.5;
    highwayMPG = 28.9;
        
    //Process values -> Map inputs to Outputs
    distanceTown=carGas*townMPG;
    distanceHigh=carGas*highwayMPG;
    
    //Display Output
    cout<<"The car can travel in town "<<distanceTown<<" miles"<<endl;
    cout<<"The car can travel on highway "<<distanceHigh<<" miles"<<endl;
    
    //Exit Program
    return 0;
}