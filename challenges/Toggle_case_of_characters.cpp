#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    int len = s.size();
    for(int i = 0; i<len; i++){
        if(s[i] >= 65 && s[i]<=90){
            s[i] = s[i]+32;
        }
        else{
            s[i] = s[i]-32;
        }
    }
    cout<<s<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
