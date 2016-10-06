/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on October 5, 2016, 10:30 AM
 * Purpose:  Sort numbers from least to greatest
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short a,b; //characters for numbers 1 and 2
    
    //Input or initialize values Here
    cout<<"Input two numbers: "<<endl;
    cin>>a>>b;
    
    //Process/Calculations Here
    if (a<b) cout<<a<<b<<endl;
    else cout<<"From least to greatest "<<b<<","<<a<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
}

