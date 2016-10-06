/* 
   File:   main
   Author: Jorge Sanchez
   Created on October 1, 2016, 2:45 PM
   Purpose: Determine the Band of Radiation from the Wave Length
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float waveLen;
    
    //Input values
    cout<<"Input wave length of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    
    //Process values -> Map inputs to Outputs then display
    if     (waveLen>1e-2f) cout<<"Radio Band"<<endl;
    else if(waveLen>1e-3f) cout<<"Micro Wave Band"<<endl;
    else if(waveLen>7e-7f) cout<<"Infra-Red Band"<<endl;
    else if(waveLen>4e-7f) cout<<"Visible Band"<<endl;
    else if(waveLen>1e-8f) cout<<"Ultra-Violet Band"<<endl;
    else if(waveLen>1e-11f)cout<<"X-Ray Band"<<endl;
    else                   cout<<"Gamma-Ray Band"<<endl;

    //Exit Program
    return 0;
}