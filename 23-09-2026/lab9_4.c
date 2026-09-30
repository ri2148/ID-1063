#include <stdio.h>

// Function to process and convert grayscale matrix to black-and-white
void convertToBlackAndWhite(int image[100][100], int m, int n, int T) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Apply threshold logic
            if (image[i][j] >= T) {
                image[i][j] = 255;
            } else {
                image[i][j] = 0;
            }
        }
    }
}

// Function to print the matrix
void printImage(int image[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", image[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int m, n, T;

    if (scanf("%d %d", &m, &n) != 2) {
        return 0;
    }

    if (scanf("%d", &T) != 1) {
        return 0;
    }

    int image[100][100];

    // Read input image
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    // Call functions to transform and output the image
    convertToBlackAndWhite(image, m, n, T);
    printImage(image, m, n);

    return 0;
}

