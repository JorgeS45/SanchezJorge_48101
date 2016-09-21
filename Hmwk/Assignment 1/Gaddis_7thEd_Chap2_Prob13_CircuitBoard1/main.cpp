/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 10, 2016, 5:50 PM
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
    float perprof=4e-1;     //Percent of profit on circuit board
    float itmcost=12.67f;   //cost of item
    float profit;             //profit made on item
    float total;            //total of item and profit
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    profit=itmcost*perprof;
    total=profit+itmcost;
    
    //Display Output
    cout<<"profit of item is $ "<<profit<<endl;
    cout<<"total cost is $ "<<total<<endl;
    
    //Exit Program
    return 0;
}