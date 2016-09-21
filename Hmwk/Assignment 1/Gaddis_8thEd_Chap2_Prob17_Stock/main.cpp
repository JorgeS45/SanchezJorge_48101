/* 
 * File:   main.cpp
 * Author: Jorge Sanchez
 * Created on September 9, 2016, 4:34 PM
 * Purpose: Calculate cost of stock
 */

//Include system level libraries
#include <iostream> //Input?output libraries
using namespace std; //Libraries compiled under standard namespace

//User Libraries

//Global Constants
const char PERCENT=100;

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nShares=750;     //number of shares
    float ppShare=3.5e1f;           //Price per share $'s
    unsigned char Comish=2;         //Commission percentage
    float PricePd,ComPd,TotPd;    //Price, Commission, Total Paid $'s
    
    //Calculate the amounts paid in $'s
    PricePd = nShares*ppShare;
    ComPd = PricePd*Comish/ PERCENT;
    TotPd = PricePd+ComPd;
    
    //output the results
    cout<<"Price of Stock Purchase Problem"<<endl;
    cout<<"Number of shares purchased =   "<<nShares<<endl;
    cout<<"Price Per Share            = $ "<<ppShare<<endl;
    cout<<"Commission = "<<static_cast<int>(Comish)<<"%"<<endl;
    cout<<"Price paid for the shares  = $ "<<PricePd<<endl;
    cout<<"Price paid in commission   = $ "<<ComPd<<endl;
    cout<<"Total Paid                 = $ "<<TotPd<<endl;
    
    return 0;
}