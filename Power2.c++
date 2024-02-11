#include<iostream>
using namespace std;
int main(){
    int number;
//      Power of Two
// Write a program that takes an integer as input and returns true if the input is a power of two.
// Examples: 
// 8=> returns true
// 6=> returns false

    cout << "**Power of 2 checker**" << endl;
    cout << "Enter a number to check: ";
    cin >> number;

    if (number > 0){
        while((number >=1) &&( number%2==0)){
        number/=2;
        cout << number <<endl;
        }

        if(number == 1){
            cout << "~~The number is a power of 2~~" << endl;
        }
        else {
            cout << "! !The number is not a power of 2! !";
        }
    
    }
    return 0;
}