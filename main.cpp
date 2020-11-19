#include <iostream>
using namespace std;

void PlayGame() 
{
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
    cout << "+ There are three numbers in the code.";
    cout << "\n+ The code adds up to: " << CodeSum; 
    cout << "\n+ The codes multiply to give: " << CodeProduct;

    int GuessA, GuessB, GuessC;

    cout << "\n\nGuess 3 Numbers: \n\n";

    cin >> GuessA >> GuessB >> GuessC;

    cout << "\nYou entered: " 
    << GuessA << GuessB << GuessC;
    
    // Store guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if guess are correct/incorrect
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
      cout << "\n\nYou win!";
    } else {
      cout << "\nThe dogs cannot come out! Try again!";
    }
}

int main() {

    PlayGame();

    return 0;
}