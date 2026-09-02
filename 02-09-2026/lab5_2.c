#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double vec1[n], vec2[n];

    printf("Enter the values of the first vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vec1[i]);
    }

    printf("Enter the values of the second vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vec2[i]);
    }

    double dot_product = 0.0;
    for (int i = 0; i < n; i++) {
        dot_product += vec1[i] * vec2[i];
    }

    printf("The dot product is %g.\n", dot_product);

    return 0;
}

