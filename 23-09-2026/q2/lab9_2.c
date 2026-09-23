//code by Arjun
//date:23-09-2026

#include <stdio.h>

//Function to calculate total days elapsed up to and including the given date
int daysElapsed(int day, int month) {
int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int totalDays = 0;

//Adding days of previous months
for (int i = 1; i < month; i++) {
totalDays += daysInMonths[i];
}
    
//Adding remaining days of the current month
totalDays += day; 
return totalDays;
}
//Main function
int main(void) {
int day=0, month=0;
printf("Day: ");
scanf("%d", &day);
printf("Month: ");
scanf("%d", &month);
int result = daysElapsed(day, month);
printf("Output: %d\n", result);
    
return 0;
}

