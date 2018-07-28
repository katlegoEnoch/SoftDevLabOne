//File_name: scr_main.cpp
//Author:    Stax The Engipreneur
//Date:      26 July 2018
//Details:   Testing functionality of square drawing functionalities

/*It is entirely possible to implement the drawing function without knowledge of the implementation details of the class's member functions. The interface
provides sufficient information to build this function without knowing how the actual functions are implemented. In doing its task the function makes use
of some of the class's member functions and these functions are used by calling them and supplying arguments specified in the interface.

The screen class was originally intended as a storage and display class for text characters. Thus in keeping with the principle of limiting a single class's 
 * responsibility this function would perhaps be better defined in a seperate class that is responsible for drawing shapes on the screen. The screen's responsibilities
 * should be limited to managing its internal components - cursor, dimensions and background. Another reason is that a class that takes on too many tasks is 
 * challenging to debug and maintain.*/

// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
    char reply = 'y';
    
    //declare a 10 by 10 screen with blank background
    auto staxScreen = Screen{10,10,'#'};
    
    //initialize program variables
    string::size_type x,y,length;
    
    do{
        //prompt user for input
        cout << "Enter top-left location and length: ";
        cin  >> x >> y >> length;
        
        //attemp to draw square on screen with given values
        staxScreen.drawSquare(x,y,length);
        
        cout << "Would You Like do draw another square?(q to quit): ";
        cin  >> reply;
                    
    }while(reply != 'q');
        
    //indicate that main terminated successfully
    return 0;
}



