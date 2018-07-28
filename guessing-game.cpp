//File_name: guessing-game.cpp
//Author:    Stax The Engipreneur
//Date:      22 July 2018
//Details:   Implementation of guessing game algorithm

//The value of RAND_MAX can be printed out using the cout command

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    //initialize program variables
    int randNum, userGuess;
    enum GameStatus{WIN,LOSE,CONTINUE};
    
    //create GameStatus object
    GameStatus gameStatus;
    
    //keep track of number of guesses
    int guessCount = 1;
    
    //seed the generator
    srand(time(0));
    
    //generate a number at random between 1 and 100
    randNum = 1 + rand()%100;
    
    do{
        //prompt user for input
        cout << "Guess number between 1 and 100: ";
        cin  >> userGuess;
        
        //process user's input
        //option 1...
        if(userGuess == randNum){
            //set the game status
            gameStatus = WIN;
            //print win message
            cout << "\nPlayer Wins!\n";
        }//end if
        //option 2..
        else if(userGuess < randNum){
            //set the game status
            gameStatus = CONTINUE;
            //print relevant message
            if(guessCount < 5){
               cout << "Guess Higher!\n";
            }
        //user guess is either same, higher or lower
        }//end else if
        //option 3..
         else{
            //set the gameStatus
            gameStatus = CONTINUE;
            //print relevant message
            if(guessCount < 5)
                cout << "Guess Lower!\n";
        }//end else
    
        //increment counter
        guessCount++;
    }while(gameStatus == CONTINUE && guessCount <= 5);
    
    //print loose message if relevant
    if(gameStatus != WIN){
        cout << "Player Losses!\n";
    }
    
    return 0;
    
}


