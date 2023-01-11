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
            for(int s = 1; s<=n-i; s++){
                cout<<" ";
            }
            for(int j = 1;j<=i; j++){
                cout<<"*";
            }
            for(int j = i-1; j>0; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
