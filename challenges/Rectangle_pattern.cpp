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
        int num = n;
        for(int j = 1; j<=n; j++){
            if(i+j == n+1){
                cout<<"*";
                num--;
            }
            else
                cout<<num--;
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
