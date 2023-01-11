#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a, b;
    cin>>a>>b;
    long long pow = 1;    
    for(int i = 1; i<=b; i++){
        pow = pow*a;
    }
    cout<<pow<<endl;
    return 0;
}
