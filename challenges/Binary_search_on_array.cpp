#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool binaryS(int a[], int n, int k){
    int s = 0; 
    int e = n-1;
    
    while(s<=e){
        int m = s+(e-s)/2;
        
        if(a[m] == k){
            return true;
        }
        else if(a[m] > k)
            e = m-1;
        else
            s = m+1;
    }
    return false;
}

int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    if (binaryS(a, n, k)){
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
