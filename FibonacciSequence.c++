#include<iostream>
using namespace std;
// Write a program to generate the Fibonacci sequence up to 100.
int main(){
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    cout << "Fibonacci sequence:" << endl;
    cout << num1<< ", " <<num2 << ", ";

    while (num3 <= 100){
        num3 = num1 + num2;
        if (num3 < 100){
            cout << num3 <<", ";
            }
        num1 = num2;
        num2 = num3;
    }
return 0;
}