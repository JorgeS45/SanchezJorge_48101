/* 
   File:   main
   Author: Jorge Sanchez
   Created on September 23rd 2016, 5:30 PM
   Purpose: grade assignments
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
    unsigned short  exrnum=1,                   //Exercise number, starts at 0
                    score1,score2,score3,       //score
                    ptspos1,ptspos2,ptspos3;    //points possible
    float           sum,                        //summation
                    ttlpos;                     //total possible
    float           gradepr;                    //grade
    
    //Input values
    cout<<"Input the scores and totals of 3 assignments: "<<endl;
    cout<<"Score received for exercise "<<exrnum<<": "<<endl;
    cin>>score1;
    cout<<"Total points possible for exercise "<<exrnum<<": "<<endl;
    cin>>ptspos1;
    
    exrnum+=1;
    
    cout<<"Score received for exercise "<<exrnum<<": "<<endl;
    cin>>score2;
    cout<<"Total points possible for exercise "<<exrnum<<": "<<endl;
    cin>>ptspos2;
    
    exrnum+=1;
    
    cout<<"Score received for exercise "<<exrnum<<": "<<endl;
    cin>>score3;
    cout<<"Total points possible for exercise "<<exrnum<<": "<<endl;
    cin>>ptspos3;   

    //Process values -> Map inputs to Outputs
    sum=score1+score2+score3;
    ttlpos=ptspos1+ptspos2+ptspos3;
    gradepr=(sum/ttlpos)*PERCENT+0.05;
    
    //display output
    cout<<"Your total is "<<sum<<" out of "<<ttlpos<<", or "
    <<fixed<<setprecision(2)<<showpoint<<gradepr<<"%.";

    //Exit Program
    return 0;
}