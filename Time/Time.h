#ifndef TIME_H
#define TIME_H
#include<iostream>
using namespace std;
//Lesson1
class Time
{
    public:
        Time(); //constructor
        void setTime(int, int, int);
        void printMilitary();
        void printStandard();
    private:
        int hour; //0-23
        int minute; //0-59
        int second; //0-59
};

//Constructor, initialized to zero
Time::Time() {hour = minute = second = 0;}

//Set the time, with short if [ (condition) ? first code : (<else) second code ]
void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printMilitary()
{
    if(hour < 10) {cout << 0;}
    cout << hour;
    if(minute < 10) {cout << 0;}
    cout << minute;
}

void Time::printStandard()
{//Stampa sempre 12 se siamo a mezzanotte o alle 12, altrimenti l'ora modulo 12 che stamperà sempre un orario compreso tra 0 e 12
    if(hour == 0 || hour == 12) {cout << 12;} else {cout << hour % 12;}
    cout << ":";
    if(minute < 10) {cout << 0;}
    cout << minute;
    cout << ":";
    if(second < 10) {cout << 0;}
    cout << second;
    cout << " ";
    if(hour < 12) {cout << "AM";} else {cout << "PM";}
}

#endif
