//Code by Arjun
//Date:14-10-26

#include<stdio.h>

//Struct initialised
struct City {
char city_name[100];
char country_name[100];
long population;
double latitude;
double longitude;
};

int main(void) {
struct City c;
//Input
printf("Enter city name: ");
fgets(c.city_name, sizeof(c.city_name), stdin);

printf("Enter country name: ");
fgets(c.country_name, sizeof(c.country_name), stdin);

int i = 0;
while (c.city_name[i] != '\0') {
if (c.city_name[i] == '\n') {
c.city_name[i] = '\0';
break;
}
i++;
}

i = 0;
while (c.country_name[i] != '\0') {
if (c.country_name[i] == '\n') {
c.country_name[i] = '\0';
break;
}
i++;
}

printf("Enter population: ");
scanf("%ld", &c.population);

printf("Enter latitude: ");
scanf("%lf", &c.latitude);

printf("Enter longitude: ");
scanf("%lf", &c.longitude);

printf("City Name:    %s\n", c.city_name);
printf("Country Name: %s\n", c.country_name);
printf("Population:   %ld\n", c.population);
printf("Latitude:     %.6f\n", c.latitude);
printf("Longitude:    %.6f\n", c.longitude);

return 0;
}


}
