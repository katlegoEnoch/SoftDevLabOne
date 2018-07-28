//File_name: scr_main.cpp
//Author:    Stax The Engipreneur
//Date:      28 July 2018
//Details:   Code uses Screen object to print letter K on 6by6 grid

/*Uses of const identifier
 const string& s -> s is reference to a string constant. In this case the memory address of the first element of a string is passed into a function and 
  under normal circumstances the code would have ability to modify that string if they wished to. const declares the string as read-only and any attempts
   to modify it would result in program crashing

  void display() const -> display is a member function of the Screen class and const is used to declare it constant function meaning that it cannot modify
  the state of any of its object's data member - unless that data member is declared as mutable.
   
    The const keyword is used again to declare all member functions that don't need to modify the state of the object's data member as constant functions.
     * 
 In the header file const string::size_type TOP_LEFT = 0 -> TOP_LEFT is defined as a string constant and its value cannot be modified either by the object's
  own member functions or external functions
   * 

 at() member function returns a reference to the character at the specified location in the string. The at() carries out the same indexing operation as the 
  [] operator defined for array but also includes range checking. In the Screen code it is used to assign a value to a specific element of the screen string.*/

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
        staxScreen.down();
        //write * at current location
        staxScreen.set('*');
    }//end of part1
    
    //move cursor to 4,2
    staxScreen.move(4,2);
    staxScreen.set("**");
    
    //move cursor forward and down and place * there
    for(int i = 0; i < 2;i++){
        staxScreen.forward();
        staxScreen.down();
        staxScreen.set('*');
    }//end of part 2
    
    //go back to 'center'
    staxScreen.move(4,3);
    
    //move cursor forward and up and place * there
    for(int i = 0; i < 2;i++){
        staxScreen.forward();
        staxScreen.up();
        staxScreen.set('*');
    }//end of part 2
    
    //finish off the letter k...
    
    //display the screen
    staxScreen.display();
    
    //indicate that main terminated successfully
    return 0;
}

