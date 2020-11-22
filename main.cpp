#include <iostream>
#include <ctime>
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
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

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
    cout << "\n\nYou win!\n\n";
    return true;

  } else {
    cout << "\n\nThe dogs cannot come out! Try again!";
    return false;
  }
}

int main() {

    srand(time(NULL));
    
    int LevelDifficulty = 1;
    int const MaxDifficulty = 3;

    while(LevelDifficulty <= MaxDifficulty)
    {
      //This is a statement that always fucks me up...

      // It's doing so many things:

      // 1. bLevelComplete is a boolean variable. It can store 
      //    bools. Why? because PlayGame's return type is a bool.
      // 2. It's calling PlayGame() 
      // 3. PlaylayGame is then getting shoved in to it which
      //    is also its own bool function that returns
      //    true or false
      // 3. Then the fucking thing also takes in a parameter
      //    that is being passed around like a ho several times
      //    in both function declarations above

      //  STFU get outta here

      bool bLevelComplete = PlayGame(LevelDifficulty);

      cin.clear();
      cin.ignore();

      if(bLevelComplete)
      {
        ++LevelDifficulty;
      }
    }

    // Game winning message
    cout << "All the dogs are out! They love you so much!\n\n";
    cout << " -- THANK YOU FOR PLAYING -- \n\n";
    
    return 0;
}

// this game is stupid but i made it wtf i cant believe i understand all this now holy shit