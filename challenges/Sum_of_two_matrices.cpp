#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);
    int mat1[r][c];
    int mat2[r][c];
    int res[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            res[i][j] = mat1[i][j]+mat2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
