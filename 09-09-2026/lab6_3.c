#include<stdio.h>
int main(void){
char string[100];
printf("Enter any word: ");

fgets(string, sizeof(string), stdin);
string[strcspn(string, "\n")] = '\0';

char temp='\0';
temp=string[0];
string[0]=string[1];
string[1]=temp;
printf("Modified word: %s ", string);
}
