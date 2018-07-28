//File_name: scr_main.cpp
//Author:    Stax The Engipreneur
//Date:      26 July 2018
//Details:   Testing functionality of square drawing functionalities

/*The screen string is better internally represented as a two dimensional array or vector. This would eliminate the need
 * of having to constantly convert between a 2D screen and a 1D screen storage object in performing the various tasks associtated with the screen class.
 * The interface could remain as it is but the screen could be represented INTERNALLY as a two dimensional vector.
 * 
 * It is important to avoid making changes to the interface because client code - like the one we created in these exercise - is written based on the interface. Changing
 * the interface would cause the client code to breakdown due to those changes and will require client code to be re-written to adapt to the interface changes.
 * 
 * We are free to make changes to the implementation because, unlike the interface, client code is not written based on the interface. Implementation code could change
 * but if the interface is not modified client code will not have to change*/



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



