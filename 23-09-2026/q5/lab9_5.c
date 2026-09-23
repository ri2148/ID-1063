//code by Arjun
//date:23-09-2026

#include<stdio.h>
#include<math.h>

//Function to return index
int firststable(double a[], int n, double tolerance){
for(int i=0; i<n; i++){
if(fabs(a[i+1]-a[i])<=tolerance){ //checking conditon
return i;
}
else{
continue;
}
}
return -1; //If condition not met
}

//main function begins
int main(void){
int n=0;
printf("Input: ");
//Taking input
scanf("%d", &n);
double a[n];
for(int i=0; i<n; i++){
scanf("%lf", &a[i]);
}
double tolerance=0;
scanf("%lf", &tolerance);
//printing output
printf("Output: %d", firststable(a, n, tolerance));
}
