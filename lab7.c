#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random100to200();


int main() {
    int matrix[20][20], rows, cols, duplicate, value;
    srand(time(NULL));

    scanf("%d %d", &rows, &cols);
    if ((rows <= 2 || rows >= 20) || (cols <= 2 || cols >= 20)) {
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            duplicate = 1;
            while (duplicate) {
                value = random100to200();
                duplicate = 0;

                for (int r = 0; r <= i; r++) {
                    for (int k = 0; k < (r == i ? j : cols); k++) {
                        if (value == matrix[r][k]) {
                            duplicate = 1;
                        }
                    }
                }
            }
            matrix[i][j] = value;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int random100to200() {
    return (rand() % 101) + 100;
}
