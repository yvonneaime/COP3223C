// Yvonne Aime
// COP3223 
// September 13, 2023
// Lecture Assignment 2 - Part 1

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


// Constants - Time variables 
#define SECONDS_IN_MIN 60
#define MINS_PER_HOUR 60
#define HOURS_PER_DAY 24
#define DAYS_PER_MONTH 30.42
#define DAYS_PER_WEEK 7
#define DAYS_PER_YEAR 365
#define MONTHS_PER_YEAR 12

int main() {
    long int now; 

    // Used to store the number of seconds in a year, month, week, day, hour
    int year, month, week, day, hour; 

    // Number of seconds since Jan 01, 1970. 
    now = time(NULL);
    
    // Seconds in a YEAR conversion
    year = now / (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY * DAYS_PER_YEAR);
    now -= year * (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY * DAYS_PER_YEAR);
    
    // Seconds in a MONTH conversion
    month = (now /(SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH));
    now -=  month * (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH);

    // Seconds in a WEEK conversion
    week = now / (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY* DAYS_PER_WEEK);
    now -= week * (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY * DAYS_PER_WEEK);

    // Seconds to DAYS conversion
    day = now / (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
    now -= day * (SECONDS_IN_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
    
    // Seconds to HOURS conversion 
    hour = now / (SECONDS_IN_MIN  * MINS_PER_HOUR);
    now -= hour * (SECONDS_IN_MIN * MINS_PER_HOUR);

    // Print final results
    printf("\n%d years, ", year);
    printf("%d months, ", month);
    printf("%d weeks, ", week);
    printf("%d day, ", day);
    printf("and %d hours, since January 1, 1970.", hour);

    return 0;
}
