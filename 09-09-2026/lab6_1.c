#include<stdio.h>
double Calculate_area(double length, double width){
return length*width;
}
int main(void){
double width=0.0f, length=0.0f;
printf("Enter the length of the rectangle: ");
scanf(" %lf", &length);
printf("Enter the width of the rectangle: ");
scanf(" %lf", &width);
double ar=Calculate_area(length, width);
printf("The area of the rectangle is %.2lf", ar);
}

