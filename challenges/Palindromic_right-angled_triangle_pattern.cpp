#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    for(int i = 1; i<= n; i++){
        char ch = 'A';
        for(int j = 1; j<= i; j++){
            cout<<char(ch++)<<" ";
        }
        for(int j = 1; j<=i-1; j++){
            cout<<char(--ch -1)<<" ";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
