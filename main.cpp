#include <iostream>
using namespace std;

// CMD + SHIFT + B to build/run program

int main() {

    // Print welcome messages to console
    cout << " -- BORK BORK BORK -- " << endl;
    cout << endl;
    cout << "Enter 3 numbers to let the dogs out." << endl;


    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA  *  CodeB  *  CodeC;

    cout << endl;
    cout << "+ There are three numbers in the code." << endl;
    cout << "+ The code adds up to: " << CodeSum << endl; 
    cout << "+ The codes multiply to give: " << CodeProduct << endl;

    int PlayerGuess;

    cout << endl;
    cout << "Enter a guess:" << endl;
    cin >> PlayerGuess;
    cout << "You entered: " << PlayerGuess << endl;

    return 0;
}