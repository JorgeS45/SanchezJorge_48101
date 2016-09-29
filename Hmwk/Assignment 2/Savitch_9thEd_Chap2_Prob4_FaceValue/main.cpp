/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 24th, 2:00 PM
   Purpose: Calculating Face Value
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    float   intrate=15,         //interest rate percent
            intrst,             //interest
            years,              //months will be converted to make it a fraction.
            months=18,          
            intyrs,             //interest accumulated in inputted years
            fvalue=1000.0,      //face value
            mthpay,             //monthly payment
            need;               //for part 2, the amount the user needs
    
            
    //Input values
    
    //Process values -> Map inputs to Outputs
    intrate=intrate/PERCENT;            //convert interest rate percentage to fraction
    intrst=fvalue*intrate;              //interest
    years=months/12;
    intyrs=intrst*years;                //multiply interest by years
    mthpay=(fvalue/months)+0.005;       //monthly payment is equal to face value divided by months.
    fvalue=fvalue-intyrs;               //what the consumer is left with.
            
     
    //Display Output, part 1
    cout<<fixed<<setprecision(2)<<showpoint;        //set to 2 decimal places
    cout<<"If undeducted face value = 1000 and interest rate = 15% for 18 months: "<<endl;
    cout<<"Interest by year: "<<intrst<<endl;
    cout<<"Total interest : "<<intyrs<<endl;
    cout<<"Monthly interest: "<<mthpay<<endl;
    cout<<"Deducted face (what you are left with): "<<fvalue<<endl;
    
    //input values
    cout<<"What is the amount of your loan?"<<endl;
    cin>>need;
    cout<<"What is the interest rate?"<<endl;
    cin>>intrate;
    cout<<"What is the duration of the loan in months?"<<endl;
    cin>>months;
    
    //Calculations for the individual loan
    intrate=intrate/PERCENT;            //convert interest rate percentage to fraction
    intrst=need*intrate;                //interest in proportion to what the user needs
    years=months/12;                    //convert months to years for
    intyrs=intrst*years;                //multiply interest by years
    mthpay=(need/months)+0.005;         //monthly payment is equal to face value divided by months.
    fvalue=need+intyrs;                 //total amount owed
    
    //display calculations of inputted values
    cout<<"If undeducted face value = "<<need<<" and interest rate = "<<intrate<< " for "<<months<<" months: "<<endl;
    cout<<"Interest by year: "<<intrst<<endl;
    cout<<"Total interest: "<<intyrs<<endl;
    cout<<"Monthly interest: "<<mthpay<<endl;
    cout<<"Face value required for this amount: "<<fvalue<<endl;   

    //Exit Program
    return 0;
}