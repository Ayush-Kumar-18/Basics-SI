#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = n+1; i<= 2*n-1; i++){
            for(int j = 1; j<= n-i+n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
