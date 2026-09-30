//code by arjun
//date:30-09-2026
#include <stdio.h>

//main function
int main(void){

//initialising variables
unsigned int hours, minutes, seconds;
printf("Enter hours, minutes and seconds: ");
scanf("%u %u %u", &hours, &minutes, &seconds);

//calculating total seconds
unsigned int total_seconds = (hours * 3600) + (minutes * 60) + seconds;
printf("%u\n", total_seconds);

return 0;
}

