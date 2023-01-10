#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    cin>>n>>i;
    
    int mask = 1<<i;
    
    if((n&mask) == 0)
        cout<<"false"<<endl;
    else
        cout<<"true"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
