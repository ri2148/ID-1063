#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void uniform(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate integer numbers between 1 and 100
for (i = 0; i < len; i++)
{
int num = (rand() % 100) + 1;
fprintf(fp,"%d\n", num);
}
fclose(fp);

}

void uniformVector(int n)
{
// Generate n random integer numbers in range [1, 100] using uniform() function
uniform("uniform_vector.dat", n);

FILE *fp = fopen("uniform_vector.dat", "r");

int arr[n];
int min_idx = 0;

// Read numbers into array and find index of the smallest value
for (int i = 0; i < n; i++)
{
fscanf(fp, "%d", &arr[i]);
if (arr[i] < arr[min_idx])
{
min_idx = i;
}
}

// Print original array
printf("Original array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

// Set the smallest value to 0
arr[min_idx] = 0;

// Print modified array
printf("Modified array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

fclose(fp);
}

int main(){
srand(time(NULL));
printf("Enter n: ");
int n;
scanf("%d",&n);
uniformVector(n);
return 0;
}

