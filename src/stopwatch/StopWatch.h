//File_name: StopWatch.h
//Author:    Stax The Engipreneur
//Date:      28 July 2018
//Details:   StopWatch interface

/*We are required to model a simple stopwatch that'll be used to time the duration of a section of code. There are all sorts of stopwatches that can pause, display minutes
 and hours but our task is to model a simple one. Once a StopWatch object has been created by client code, it can be commanded to start its timer,stop its timer,reset
 its timer and display length of time that passed between the start timer and stop timer commands. Using these functions clients can 'sandwich' the section of code they
  * wish to measure in between a start and stop command.*/
#ifndef STOPWATCH_H
#define STOPWATCH_H

//user-defined type called StopWatch. We can create a stopwatch and use it to time events.
class StopWatch{
//
    public:
        //construtor
        StopWatch();
        //resets time timer - in case user wants to use same watch to time another event
        void reset_timer();
        //set the timer in motion
        void start_timer();
        //brings the timer to a halt
        void stop_timer();
        //returns the duration between 'start' and 'stop'
        double duration();
        //within the class
    private:
        // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
        double getProcessTime();
        
    private:
        //initial - time when timer was started
        double init_time_;
        //time when timer was stopped
        double end_time_;
        //length of time between start and stop
        double duration_;

};//end class definition

#endif
