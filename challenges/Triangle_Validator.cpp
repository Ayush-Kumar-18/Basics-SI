#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin>>a>>b>>c;
    
    if(a+b > c && a+c > b && b+c > a)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
