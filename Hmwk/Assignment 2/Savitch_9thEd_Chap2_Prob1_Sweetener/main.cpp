/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 24th 2016, 4:50 PM
   Purpose: how many grams of artificial sweetener kills a person depending on their weight.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float killdtr,                //amount, in grams, that would kill the dieter
          pslim,                 //Pop soda limit
          dtsdlim,                //diet soda limit
          gcvt;                   //Convert lb to grams
    
    const char msmse=35;           //grams, mass of mouse
    
    unsigned short sodapop=350;     //grams

    float dtsdAS=100,     //Diet Soda artificial sweetener
          killmse=7,       //5 grams kills mouse, 1/7 of its body weight
          wtdtr=45400;    //grams, weight of dieter (100 lb)
    
    //Input values

    
    //Process values -> Map inputs to Outputs
    killdtr=wtdtr/killmse;             //proportional; 1/7 of total mass kills mouse, 1/7 will kill human
    pslim=(killdtr/sodapop);           //Pop Soda limit, multiply by to round it.
    dtsdlim=killdtr/(sodapop/dtsdAS);  //Diet soda limit
    
    
    //Display Output
    cout<<fixed<<setprecision(0);   //no fractions for layman intentions, omitted showpoint
    cout<<endl<<"For someone who weighs 100 lbs..."<<endl;
    cout<<"Lethal dose             :"<<setw(4)<<killdtr<<" grams."<<endl;
    cout<<"Soda Pop limit          :"<<setw(4)<<pslim<<" cans."<<endl;
    cout<<"Diet soda pop limit     :"<<setw(4)<<dtsdlim<<" cans."<<endl;
    
    //Input values, take in a user inputted weight.
    cout<<"Input weight in pounds."<<endl;
    cin>>wtdtr;
    
    //Process values
    gcvt=(wtdtr/0.0022046);             //convert to grams
    killdtr=gcvt/killmse;               //proportional; 1/7 of total mass kills mouse, 1/7 will kill human
    pslim=(killdtr/sodapop);            //Pop Soda limit, multiply by to round it.
    dtsdlim=killdtr/(sodapop/dtsdAS);   //Diet soda limit
    
    //Display Output
    cout<<endl<<"For someone who weighs "<<wtdtr<<" lbs..."<<endl;
    cout<<"Lethal dose             : "<<setw(6)<<killdtr<<" grams"<<endl;
    cout<<"Soda Pop limit          : "<<setw(6)<<pslim<<" cans."<<endl;
    cout<<"Diet soda pop limit     : "<<setw(6)<<dtsdlim<<" cans."<<endl;      
            
         

    //Exit Program
    return 0;
}