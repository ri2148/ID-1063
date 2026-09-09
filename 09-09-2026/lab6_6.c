// Code by Arjun
// Date:09-09-2026

#include <stdio.h>
#include <string.h>

// Function to read characters into the string
void readCharacters(char string[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &string[i]);
    }
    string[n] = '\0'; //Adding the null terminator to the string
}

//Main function
int main(void) {
    int n = 0; //Initialising n

    printf("Enter the number of characters: ");
    scanf("%d", &n); //Taking input for n

    char string[n + 1]; //Initialising the string (n + 1 to hold '\0')
    
    readCharacters(string, n);
    printf("%s", string); //Printing the string

}

