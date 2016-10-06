/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on October 5, 2016, 10:33 AM
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
    short a,b,c; //characters for numbers 1,2 and 3
    
    //Input or initialize values Here
    cout<<"Input three numbers: "<<endl;
    cin>>a>>b>>c;
    
    //Process/Calculations Here
    cout<<"Frome least to greatest "<<endl;
    {if ((a<b)&&(a<c)&&(b<c)) cout<<a<<","<<b<<","<<c<<endl;
    else if ((a<b)&&(a<c)&&(b>c)) cout<<a<<","<<c<<","<<b<<endl;
    else if ((a>b)&&(a>c)&&(b<c)) cout<<b<<","<<c<<","<<a<<endl;
    else if ((a>b)&&(a<c)&&(b<c)) cout<<b<<","<<a<<","<<c<<endl;
    else if ((a>b)&&(a>c)&&(b>c)) cout<<c<<","<<b<<","<<a<<endl;
    else if ((a<b)&&(a>c)&&(b>c)) cout<<c<<","<<a<<","<<b<<endl;
    
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

