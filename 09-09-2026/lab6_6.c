// code by Arjun
// date:09-09-2026
// using- https://github.com/gadepall/cprog/blob/main/codes/msoft/libs/matfun.h

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Header for malloc and free

// Function to read characters into the string
void readCharacters(char string[], int n) {
for (int i = 0; i < n; i++) {
scanf("%c", &string[i]); 
}
string[n] = '\0'; //Adding the null terminator to the string
}

//Main function
int main(void) {
int n = 0; //Initialising n

printf("Enter the number of characters: ");
scanf("%d", &n); //Taking input for n
int c=getchar(); // Consumes the newline character left in buffer by scanf

// Dynamically allocating memory for the string (n + 1 to hold '\0')
char *string = (char *)malloc((n + 1) * sizeof(char));

if (string == NULL) {
printf("Memory allocation failed!\n");
return 1;
}

readCharacters(string, n);
printf("%s\n", string); //Printing the string

free(string); // Freeing dynamically allocated memory

return 0;
}

