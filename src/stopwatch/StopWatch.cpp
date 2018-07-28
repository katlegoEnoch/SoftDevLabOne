//File_name: StopWatch.h
//Author:    Stax The Engipreneur
//Date:      28 July 2018
//Details:   Implementation of StopWatch member functions

#include "StopWatch.h"

#include <ctime>
#include <iostream>
using namespace std;

//class constructor - initializes state of object
StopWatch::StopWatch()
{
    init_time_ = 0.0;
    end_time_ = 0.0;
    duration_ = 0.0;
}

double StopWatch::getProcessTime()
{
    clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;

}


//reset timer - same StopWatch can be used over and over again
//because we're computing the time difference between when stop and start were called it might not be necessary to reset timer
void StopWatch::reset_timer()
{
    init_time_ = 0.0;
    end_time_ = 0.0;
    duration_ = 0.0;
}

//sets the initial time
void StopWatch::start_timer()
{
    //sample output of getProcessTime when start is called
    init_time_ = getProcessTime();
}

//sets the final time
void StopWatch::stop_timer()
{
    //sample output of getProcessTime when stop is called
    end_time_ = getProcessTime();
}

//computes the duration of event
double StopWatch::duration()
{
    //difference between when start and stop where called
    duration_ = end_time_ - init_time_;
    return duration_;
}

