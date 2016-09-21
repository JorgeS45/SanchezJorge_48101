/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on September 10, 2016, 9:10 PM
 * Purpose: Calculate Sea level rise
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CVNMMFT=304.8;  //Conversion mm to feet from Google
const float CVNMMM=1000;    //Conversion from mm to meters

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rate=1.5;                     //Sea level rise rate in mm per year
    int nYear1=5,nYear2=7,nYear3=10;    //years to calculate rise
    float rise1,rise2,rise3;            //solution for the three years from above
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    
    //Output Located Here
    cout<<"The rate of Sea Level rise = "<<rate<<"mm/year."<<endl;
    cout<<"After "<<nYear1<<" years, the sea will rise "<<rise1<<" mm."<<endl;
    cout<<"After "<<nYear2<<" years, the sea will rise "<<rise2<<" mm."<<endl;
    cout<<"After "<<nYear3<<" years, the sea will rise "<<rise3<<" mm."<<endl;

    //Exit
    return 0;
}