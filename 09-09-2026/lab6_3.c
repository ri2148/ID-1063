#include<stdio.h>
int main(void){
char string[100];
printf("Enter any word: ");
scanf(" %s", string);
char temp='\0';
temp=string[0];
string[0]=string[1];
string[1]=temp;
printf("Modified word: %s ", string);
}
