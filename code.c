#include <stdio.h>

int calculateSavings(int *day, int totalDays)
{
    if (*day > totalDays) return 0;
    int today = *day;
    (*day)++;
    return today + calculateSavings(day, totalDays);
}

int main()
{
    int totalDays;
    int day = 1;
    if (printf("Enter how many days you saved money: ") && scanf("%d", &totalDays))
    {
        if (totalDays <= 0)
        {
            printf("Total savings in %d days = 0\n", totalDays);
            return 0;
        }
        int total = calculateSavings(&day, totalDays);
        printf("Total savings in %d days = %d\n", totalDays, total);
    }
    return 0;
}
