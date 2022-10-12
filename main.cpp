/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished. Follow along with CSCI130_RockPaperScissors2.pdf
             to complete the game.
Last Modified by: Wojtek Jaroszynski
Last Modified on: 9/30/2022
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
string UserWinCelebration();

//////////////////// MAIN ////////////////////////////////////////////////////
int main()
{
    // declare vars
    char userPick;                  // user's selection for game
    bool valid_pick = false;        // flag controlled while loop for obtaining user input
    char computerPick;    // randomly selected computer selection for game
    string randPickWin;
    
    // Display rules of the game.
    cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
    cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
    cout << "L (for Lizard), and K (for Spock)." << endl;
    
    // Obtain userPick. Prompt until a valid selection is made.
    while (valid_pick == false)
    {
        cout << "You pick: ";
        cin >> userPick;
        
        if ( (userPick == 'R') || (userPick == 'P') || (userPick == 'S' ) ||
            (userPick == 'L') || (userPick == 'K') )
        {
            valid_pick = true;
        }
        else
            cout << "Invalid Selection. Try again. " << endl;
    }
    
    // Repeat selection back to user.
    TranslatePick(0, userPick);
    
    // Obtain computer selection.
    computerPick = ComputerSelectRPSLK();
    TranslatePick(1, computerPick); // Inform user of computer selection
    
    // HANDOUT (PART A): Determine the winner of the game.
    // HANDOUT (PART B): Inform the user who won.

  if((userPick=='R')&&(computerPick== 'P' || computerPick== 'K')){
    cout << " You lose ";
    }
    else if ((userPick=='R')&&(computerPick== 'S' || computerPick== 'L' )){
    cout << " You win " << endl;
      cout << UserWinCelebration();
      
      }
    else if ((userPick=='P')&&(computerPick== 'R' || computerPick== 'K' )){
    cout << " You win " << endl;
      cout << UserWinCelebration();
    }
    else if ((userPick=='P')&&(computerPick== 'S' || computerPick== 'L' )){
    cout << " You lose ";
      }
      else if((userPick=='L')&&(computerPick== 'P' || computerPick== 'K' )){
     cout << " You win " << endl;
        cout << UserWinCelebration();
        }
    else if ((userPick=='L')&&(computerPick== 'S' || computerPick== 'R' )){
    cout << " You lose ";
      }
    else if((userPick=='K')&&(computerPick== 'P' || computerPick== 'L' )){
    cout << " You lose ";
    }
    else if ((userPick=='K')&&(computerPick== 'S' || computerPick== 'R' )){
    cout << " You win " << endl;
      cout << UserWinCelebration();
      }
    else if((userPick=='S')&&(computerPick== 'P' || computerPick== 'L' )){
     cout << " You win " << endl; 
      cout << UserWinCelebration();
    }
    else if ((userPick=='S')&&(computerPick== 'K' ||  computerPick== 'R' )){
    cout << " You lose ";
      } 
      else{
        cout << " It's a tie ";
      }
  
  
       
  
  
    
    
    
    
    
    
    // HANDOUT (PART C): Randomly display celebratory messages if user won.



    return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a 
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection)
{
    // declare local function variables
    string who_text;
    
    // identify which statements to insert into the output below
    if (flag_who == 0)
        who_text = "You";
    else
        who_text = "The Computer";
    
    // display output where the char selection is translated into words
    if (selection == 'R')
        cout << who_text <<" selected Rock." << endl;
    else if (selection == 'P')
        cout << who_text <<" selected Paper." << endl;
    else if (selection == 'S')
        cout << who_text <<" selected Scissors." << endl;
    else if (selection == 'L')
        cout << who_text <<" selected Lizard." << endl;
    else if (selection == 'K')
        cout << who_text <<" selected Spock." << endl;
    else // something is wrong
        cout << "Check code for errors. Message from TranslatePick fcn." << endl;
        
    return;
        
}

/* Descprition: This function is used to make a random character selection in the 
        game Rock, Paper, Scissors, Lizard, Spock
   Parameters:  there are no inputs */
char ComputerSelectRPSLK()
{
    // declare local function variables
    char randPickChar;
    int randPick;
    
    // pick a random number from 0 to 4
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 5; // gives us 0 to 4
    //cout << randPick; // uncomment to debug
    
   char randomselec[5] = { 'R', 'P', 'S', 'L', 'K'};
  return randomselec[randPick];
}

string UserWinCelebration()
{
    // declare local function variables
    string randPickWin;
    int randPick;
    
    // pick a random number from 0 to 4
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 5; // gives us 0 to 4
    //cout << randPick; // uncomment to debug
    
    string randomselec[5] = { "You Have Triumphed!", "You Are the Champion!",  "WOOOO! HOOOO!", "You Live to Fight Another Day!", "Yay you are Victorious!"};
  return randomselec[randPick];
    

} 


