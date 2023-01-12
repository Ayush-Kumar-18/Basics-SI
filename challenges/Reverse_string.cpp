#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    int n = s.size();
    int i = 0; 
    int j = n-1;
    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout<<s;
    return 0;
}
