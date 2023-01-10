#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);
    int mat[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j< c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        int sum = 0;
        for(int j = 0; j< c; j++){
            sum += mat[i][j];
        }
        printf("%d\n", sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
