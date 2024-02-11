// Write a program that accepts a string as input, capitalizes the first letter of each word in the 
// string, and then returns the result string.
#include <iostream>
#include <string>

using namespace std;

int main() {
  string input, output;

  cout << "Enter a string: ";
  getline(cin, input);

  for (int i = 0; i < input.length(); i++)
    output += (i == 0 || input[i - 1] == ' ') ? toupper(input[i]) : tolower(input[i]);

  cout << "Capitalized string: " << output << endl;

  return 0;
}

