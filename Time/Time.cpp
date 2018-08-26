#include "Time.h"
#include<time.h>
#include<iostream>
using namespace std;

main()
{
    Time t;

    int hour, minute, second;
    //Get current hours, minutes, seconds
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    hour = aTime->tm_hour;
    minute = aTime->tm_min;
    second = aTime->tm_sec;

    t.setTime(hour, minute, second);

    cout << "Military Time - ";
    t.printMilitary();
    cout <<endl;
    cout << "Standard Time - ";
    t.printStandard();
    cout <<endl;

    system("PAUSE");
}

