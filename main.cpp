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
    cout << "+ There are three numbers in the code.\n";
    cout << "+ The code adds up to: \n" << CodeSum; 
    cout << "+ The codes multiply to give: \n" << CodeProduct;

    int GuessA, GuessB, GuessC;

    cout << endl;

    cout << "Guess 3 Numbers: \n";

    cin >> GuessA >> GuessB >> GuessC;

    cout << "You entered: \n" 
    << GuessA << GuessB << GuessC;
    
    // Store guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if guess are correct/incorrect
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
      cout << "You win! \n";
    } else {
      cout <<  "The dogs cannot come out! Try again! \n";
    }
    

    return 0;
}