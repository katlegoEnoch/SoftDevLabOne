//File_name: scr_main.cpp
//Author:    Stax The Engipreneur
//Date:      25 July 2018
//Details:   Testing functionality of overloaded move function

/*This function is not adding a new feature to the Screen class. It doesn't provide its clients with an extra feature.
 * The client is able to command the object to move forward,home, end etc using the existing member functions. This, therefore,
 renders this function unnecessary as it doesn't add any new feature to the class. */


// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
    //declare a 6 by 6 screen with blank background
    auto staxScreen = Screen{6,6,' '};
    
    //set current cursor location
    //part 1: draw vertical line
    for(int i = 0; i < 5; i++){
        //write * at current location
        //staxScreen.set('*');
        //move cursor to next row
        staxScreen.move(Direction::DOWN);
        //write * at current location
        staxScreen.set('*');
    }//end of part1
    
    //move cursor to 4,2
    staxScreen.move(4,2);
    staxScreen.set("**");
    
    //move cursor forward and down and place * there
    for(int i = 0; i < 2;i++){
        staxScreen.move(Direction::FORWARD);
        staxScreen.move(Direction::DOWN);
        staxScreen.set('*');
    }//end of part 2
    
    //go back to 'center'
    staxScreen.move(4,3);
    
    //move cursor forward and up and place * there
    for(int i = 0; i < 2;i++){
        staxScreen.move(Direction::FORWARD);
        staxScreen.move(Direction::UP);
        staxScreen.set('*');
    }//end of part 2
    
    //finish off the letter k...
    
    //display the screen
    staxScreen.display();
    
    //indicate that main terminated successfully
    return 0;
}


