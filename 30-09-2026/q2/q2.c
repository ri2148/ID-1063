//code by Arjun
//date:30-09-2026
#include <stdio.h>
//main function
int main(void) {
int n, m;

if (scanf("%d %d", &n, &m) != 2) return 0;
int grid[100][100];
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
scanf("%d", &grid[i][j]);
}
}

//Direction arrays for all 8 neighbors
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                printf("-1");
            } else {
                int mine_count = 0;
                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        if (grid[ni][nj] == 1) {
                            mine_count++;
                        }
                    }
                }
                printf("%d", mine_count);
            }
        }
        printf("\n");
    }

    return 0;
}

