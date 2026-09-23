#include<stdio.h>
#include<string.h>

int main(void){
char word[100];
char alph1;
char alph2;
printf("Input: ");
fgets(word, sizeof(word), stdin);
word[strcspn(word, "\n")]='\0';
int n=sizeof(word)/sizeof(word[0]);
printf("Enter 2 characters: ");
scanf("%c", &alph1);
scanf("%c", &alph2);
for(int i=0; i<n; i++){
if(string[i]==alph1){
string[i]=alph2;
}
}
}
