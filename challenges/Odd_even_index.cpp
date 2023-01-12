#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline(cin, s);
    
    int n = s.size();int k = 0;
    char b[n];
     for(int i = 1; i<n; i+=2){
        b[k] = s[i];
        k++;
    }
    for(int i = 0; i<n; i+=2){
        b[k] = s[i];
        k++;
    }
    for(int i = 0; i<n; i++){
    cout<<b[i];
    }
    
    return 0;
}
