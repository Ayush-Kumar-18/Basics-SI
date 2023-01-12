#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string s = "Gd";
    
    s.insert(s.begin()+1, n, 'o');
    cout<<s;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
