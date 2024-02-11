#include<iostream>
using namespace std;
/* Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
 multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
 "FizzBuzz".*/
int main(){

    for (int i=1; i <= 100; i++){
        if(i%3==0){
            cout << "Fizz,\n";
            continue;
        }
         if(i%5==0){
            cout << "Buzz,\n";
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
