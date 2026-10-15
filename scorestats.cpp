/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>// so its able to be formatted into two decimals 
#include <algorithm>// for min and max

using namespace std;


int main(){
    //full delecration
    int scores[5] = {51,60,70,80,90};
   
    double sum , average;
    double highest = scores[0];
    double lowest = scores[0];
    
    //access elements - zero based indexing
    cout << " Enter score 1: " << scores[4] << endl;
    
    cout <<" Enter Score 2: " << scores[3] << endl;
    
    cout << " Enter score 3: " << scores[2] << endl;
    
    cout << " Enter Score 4: " << scores[1] << endl;
    
    cout<< " enter Score 5 : " << scores[0] << endl;
    
    
    //prints all my scores onto one line
    for(int i = 0; i < 5; i++){
        cout << scores[i] << " ";
    }
    
    //find highest and lowest
    for( int i = 0; i < 5; i++ ){
        if(scores[i] > highest) highest = scores[i];
        if(scores[i] < lowest) lowest = scores[i];
    }
    
    cout << "\nHighest: " << highest << "\nLowest: " << lowest <<endl;
    
    const int SIZE = 5;
    int scorestats[5];
    
    for(int i = 0; i < SIZE; i++){
        cout << " Scores: " << i <<endl;
        cin >> scorestats[i];
    }
     
    
   
  
    
 
    
    return 0;
}