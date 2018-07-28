//File_name: StopWatchMain.cpp
//Author:    Stax The Engipreneur
//Date:      28 July 2018
//Details:   Main function testing implementation of Stopwatch class

#include "StopWatch.h"

#include <iostream>
using std::cout;
using std::endl;

//sections of code that'll be timed by our StopWatch object
void section1();
void section2();

int main()
{
    //create a StopWatch
    StopWatch staxWatch;
    
    //start its timer
    staxWatch.start_timer();
    
    //run section of code
    section1();
    
    //stop the StopWatch's timer
    staxWatch.stop_timer();
    
    //display duration of event
    cout << "Section1 code ran for " << staxWatch.duration() << "s" << endl;
    
    //reset timer and time another section of code
    staxWatch.reset_timer();
    
    //start timer
    staxWatch.start_timer();
    
    //run section of code
    section2();
    
    //stop the timer
    staxWatch.stop_timer();
    
    //display duration of event
    cout << "Section2 code ran for " << staxWatch.duration() << "s" << endl;
    
    
    //indicate that main terminated successfully
    return 0;
}

//section of code
void section1()
{
    //runner must be long for code to work
    for(long int i = 0; i < 1000000000; i++){
        //do nothing again
    }
}

//section of code
void section2()
{
    //runner must be long for code to work
    for(long int i = 0; i < 100000000; i++){
        //do nothing
    }
}