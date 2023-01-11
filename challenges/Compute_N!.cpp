#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if (n == 0){
        cout<<1;
        return 0;
    }
    long long fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    cout<<fact<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
