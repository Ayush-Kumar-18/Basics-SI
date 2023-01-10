#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++){
        int d = a[i];
        for(int j = i+1; j<n; j++){
            if(d == a[j]){
                printf("%d", d);
                exit(0);
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}