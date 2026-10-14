#include <stdio.h>

typedef struct {
int degree;
double coeff[100];
} Polynomial;


//Function to compute higher powers
double power_rec(double x, int n) {
if (n == 0) return 1.0;
double half = power_rec(x, n / 2);
if (n % 2 == 0) return half * half;
return x * half * half;
}
//Main function begins
int main(void) {
Polynomial p, deriv;
double x, val = 0.0;

printf("Enter degree: ");
scanf("%d", &p.degree);

printf("Enter coefficients (a0 to a%d): ", p.degree);
for (int i = 0; i <= p.degree; i++) {
scanf("%lf", &p.coeff[i]);
}

printf("Enter x: ");
scanf("%lf", &x);

for (int i = 0; i <= p.degree; i++) {
val += p.coeff[i] * power_rec(x, i);
}
printf("P(%.2f) = %.4f\n", x, val);
}
