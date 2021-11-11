/*
* Weather Program:
* Find total rainfall for each year,
* average yearly rainfall and average
* rainfall for each month
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float subTotal, total;
    int year, month;

    // Hardcoding random rainfall data from 2010-2014
    float rain[YEARS][MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };


    printf("YEAR\t\tRAINFALL  (inches)\n");
    
    // Outerloop checking each year
    for (year = 0, total = 0; year < YEARS; year++)
    {
        // Innerloop checking each month of a year
        for(month = 0, subTotal = 0; month < MONTHS; month++)
        {
            // adding subTotal for each month in a year
            subTotal += rain[year][month];
        }
        // Printing the total amount of rainfall each year
        printf("%5d \t%15.1f\n", 2010 + year, subTotal);
        total += subTotal;
    }

    printf("\nThe yearly average is %.1f inches. \n\n", total/YEARS);

    // Calculating monthly averages
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    
    // Outerloop checking each month
    for (month = 0; month < MONTHS; month++) {
        // Innerloop checking each year
        for (year = 0, subTotal = 0; year < YEARS; year++)
            subTotal += rain[year][month];
        printf("%4.1f ", subTotal/YEARS);
    }

    printf("\n");

    return 0;
}