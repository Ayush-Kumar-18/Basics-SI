#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if (n == 1 || n==2){
        cout<<1<<endl;
        return 0;
    }
    int a = 1;
    int b = 1;
    int c = 0;
    for(int i = 3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    cout<<c<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
