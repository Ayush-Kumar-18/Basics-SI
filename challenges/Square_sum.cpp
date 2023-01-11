#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    size_t n, s=0;
    cin>>n;
    for(size_t i = 1; i<= n; i++){
        s += i*i;
    }
    cout<<s<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
