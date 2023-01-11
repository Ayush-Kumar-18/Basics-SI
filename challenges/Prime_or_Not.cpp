#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long  n;
    cin>>n;
    if(n==1){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i = 2; i < n/i; i++){
        if(n % i == 0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    
    cout<<"Yes"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
