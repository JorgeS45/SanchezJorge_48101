/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on September 17, 2016, 3:44 PM
 * Purpose:  Add, Subtract, Multiply, Divide, Mod
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int Op1,Op2;
    
    //Input or initialize values Here
    cout<<"Input 2 integer values to Add, Sub, Mult, Div, Mod"<<endl;
    cin>>Op1>>Op2;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<Op1+Op2<<"="<<Op1<<"+"<<Op2<<endl;
    cout<<Op1-Op2<<"="<<Op1<<"-"<<Op2<<endl;
    cout<<Op1*Op2<<"="<<Op1<<"*"<<Op2<<endl;
    cout<<Op1/Op2<<"="<<Op1<<"/"<<Op2<<endl;
    cout<<Op1%Op2<<"="<<Op1<<"%"<<Op2<<endl;

    //Exit
    return 0;
}