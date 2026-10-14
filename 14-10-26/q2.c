//Code by Arjun
//13-10-26

#include <stdio.h>

char *my_strcat(char *dest, const char *src) {
char *ptr = dest;

while (*ptr != '\0') {
ptr++;
}

while (*src != '\0') {
*ptr = *src;
ptr++;
src++;
}

*ptr = '\0';

return dest;
}

int main(void) {
char dest[200];
char src[100];

printf("Enter destination string: ");
fgets(dest, sizeof(dest), stdin);

printf("Enter source string to append: ");
fgets(src, sizeof(src), stdin);

int i = 0;
while (dest[i] != '\0') {
if (dest[i] == '\n') {
dest[i] = '\0';
break;
}
i++;
}

i = 0;
while (src[i] != '\0') {
if (src[i] == '\n') {
src[i] = '\0';
break;
}
i++;
}

my_strcat(dest, src);

printf("\nAfter concatenation:\n");
printf("dest: %s\n", dest);

return 0;
}

