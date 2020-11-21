#include <iostream>
using namespace std;

// Function definitions
void PrintIntroduction(int Difficulty)
{
    cout << endl;

  // Print welcome messages to console
    cout << 
    "  _____ _____ _____ _____ \n"
    " | __  |     | __  |  |  |\n"
    " | __ -|  |  |    -|    -|\n"
    " |_____|_____|__|__|__|__|\n";

    cout << "\nEnter 3 numbers to let the dogs out!\n";
    cout << "\nLevel Difficulty: " << Difficulty;
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA  *  CodeB  *  CodeC;

    cout << "\n\n+ There are three numbers in the code.";
    cout << "\n+ The code adds up to: " << CodeSum; 
    cout << "\n+ The codes multiply to give: " << CodeProduct;

    int GuessA, GuessB, GuessC;

    cout << "\n\nGuess 3 Numbers. \n\n";

    cout << "(Please add a space after each number.)\n\n";
    
    cin >> GuessA >> GuessB >> GuessC;

    cout << "\nYou entered: " 
    << GuessA << " " << GuessB << " " << GuessC;
    
    // Store guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if guess are correct/incorrect
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
      cout << "\n\nYou win!";
      return true;

    } else {
      cout << "\n\nThe dogs cannot come out! Try again!";
      return false;
    }
}

int main() {

    int LevelDifficulty = 1;

    while(true)
    {
      bool bLevelComplete = PlayGame(LevelDifficulty);

      cin.clear();
      cin.ignore();

      if(bLevelComplete)
      {
        ++LevelDifficulty;
      }
    }
    

    return 0;
}

// this game is stupid but i made it wtf i cant believe i understand all this now holy shit