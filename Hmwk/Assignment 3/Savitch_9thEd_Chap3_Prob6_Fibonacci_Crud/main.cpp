/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on October 1, 2016, 4:50 PM
 * Purpose:  Fibonacci and Crud
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float crudWt,curntWt;       //Crud weight in lbs
    int fi=1,fip1=1,fip2;       //Fibonacci sequence
    int days=0,i=1;             //Number of Days
    
    //Input Data
    cout<<"How many lbs of crud do you have?"<<endl;
    cin>>crudWt;
    
    //Process the Data - Day 0
    curntWt=crudWt*fi;
    cout<<"i  Fi Days Weight"<<endl;
    cout<<i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data - Day 5
    curntWt=crudWt*fip1;
    days+=5;
    cout<<++i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data - Day 10
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<++i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data - Day 15
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<++i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data - Day 20
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<++i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data - Day 30
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<++i<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
   
    return 0;
}