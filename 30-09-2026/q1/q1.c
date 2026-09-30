//code by Arjun
//Date:30-09-26

#include <stdio.h>
#include "matfun.h"
//main function
int main(void){
//taking input
int r1, c1;
scanf("%d %d", &r1, &c1);

double **A = createMat(r1, c1);
readMat(A, r1, c1);

int r2, c2;
scanf("%d %d", &r2, &c2);

double **B = createMat(r2, c2);
readMat(B, r2, c2);

double **C = matmul(A, B, r1, c1, c2);

printMat(C, r1, c2);
return 0;
}

