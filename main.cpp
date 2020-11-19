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

    int GuessA, GuessB, GuessC;

    cout << endl;

    cout << "Guess 3 Numbers: " << endl;

    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;

    cout << "You entered: " 
    << GuessA << GuessB << GuessC << endl;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
      cout << "You win!" << endl;
    } else {
      cout <<  "The dogs cannot come out! Try again!" <<  endl;
    }
    

    return 0;
}