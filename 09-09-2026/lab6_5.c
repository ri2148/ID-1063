//code by Arjun
//Date:09-09-2026

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//function to check palindrome
bool isPalindrome(const char str[], int length) {
for (int i = 0; i < length / 2; i++) {
if (str[i] != str[length - 1 - i]) {
return false;
}
}
return true;
}
//main function
int main() {
char word[100];

printf("Enter a word: ");
fgets(word, sizeof(word), stdin); //Taking input
word[strcspn(word, "\n")]='\0';


//Printing result
if (isPalindrome(word, n)) {
printf("PALINDROME\n"); 
} else {
printf("NOT A PALINDROME\n");
}
}



