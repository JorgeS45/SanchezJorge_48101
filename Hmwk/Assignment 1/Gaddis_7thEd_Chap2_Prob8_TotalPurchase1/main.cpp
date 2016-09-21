/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 9th 2016 7:52 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char PERCENT=100;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float item1=12.95f;   //First Item
    float item2=24.95f;   //Second Item
    float item3=6.95f;    //Third Item
    float item4=14.95f;   //Fourth Item
    float item5=3.95f;    //Fifth Item
    float saltax=6e-2f;    //Sales Tax
    float subtot;         //Subtotal of items
    float amntax;         //Amount of tax on price
    float total;           //Full total
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    subtot=item1+item2+item3+item4+item5;
    amntax=subtot*saltax;
    total=subtot+amntax;
    
    //Display Output
    cout<<"Subtotal is $   "<<subtot<<endl;
    cout<<"amount tax is $ "<<amntax<<endl;
    cout<<"Total is is $   "<<total<<endl;
    
    //Exit Program
    return 0;
}
