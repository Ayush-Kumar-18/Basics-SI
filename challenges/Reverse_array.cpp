#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    size_t n; 
    cin>>n;
    size_t a[n];
    for(size_t i = 0; i<n; i++){
        cin>>a[i];
    }
    size_t s = 0;
    size_t e = n-1;
    while(s<n/2){
        size_t temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    for(size_t i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
