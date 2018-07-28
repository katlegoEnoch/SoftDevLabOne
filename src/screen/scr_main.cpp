//File_name: scr_main.cpp
//Author:    Stax The Engipreneur
//Date:      25 July 2018
//Details:   Testing functionality of up wrap-around feature

// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
    //declare a 6 by 6 screen with blank background
    auto staxScreenUp = Screen{6,6,'#'};
    auto staxScreenDown = Screen{6,6,'#'};
    
    //test down wrap-around functionality
    staxScreenDown.move(6,6);
    //write to current cursor location
    staxScreenDown.set('*');
    //move up
    staxScreenDown.down();
    //write at new cursor location
    staxScreenDown.set('*');
    
    //test up wrap-around functionality
    staxScreenUp.move(1,6);
    //write to current cursor location
    staxScreenUp.set('*');
    //move up
    staxScreenUp.up();
    //write at new cursor location
    staxScreenUp.set('*');
   
    
    
    //display the screen
    staxScreenUp.display();
    cout << endl;
    staxScreenDown.display();
    
    //indicate that main terminated successfully
    return 0;
}

/*This function is not adding a new feature to the Screen class. It doesn't provide its clients with an extra feature.
 * The client is able to command the object to move forward,home, end etc using the existing member functions. This, therefore,
 renders this function unnecessary as it doesn't add any new feature to the class. */

