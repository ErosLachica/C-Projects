#include <stdio.h>
#include <stdbool.h>

int main()
{
    int minutes;
    double minutesInYear = (24*60) * 365;
    double days = 0;
    double years = 0;

    printf("Enter the number of minutes to be converted: ");

    scanf("%d", &minutes);
    
    days = minutes/(24.0*60.0);
    years = minutes/minutesInYear;
    
    printf("# of minutes: %d\n", minutes);
    printf("# of days: %f\n", days);
    printf("# of years: %f\n", years);

    return 0;
}