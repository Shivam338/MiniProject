/** 
* @file Calendar_Calc.h
* 
*
*/
#ifndef __CALENDAR_Calc_H__
#define __CALENDAR_Calc_H__

#include <stdio.h>

/**
*  Calculates the number of days present in a month and returns the integer
* @param[in] month
* @param[in] year 
* @return Number of days present in a month
*/
int NumberofDays(int mm, int yy);

/**
*  Calculates whether the year is Leap or not
* @param[in] year
*/
long int LeapYears(int yy);


#endif  /* #define __CALENDAR_Calc_H__ */
