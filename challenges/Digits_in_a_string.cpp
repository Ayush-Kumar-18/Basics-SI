#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isAllDigit(string s, int len){
    int c=0;
    for (int i = 0; i < len; i++) {
      if (s[i] >= '0' && s[i] <= '9'){
         c++;
      }

    }
    return c;
}

int main() {
    string s;
    cin>>s;
    int len = s.length();
    
    if(isAllDigit(s, len)==len)
        cout<<"Yes";
    else
        cout<<"No";
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
