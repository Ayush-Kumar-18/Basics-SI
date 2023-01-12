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
    vector<char> v;
    int c = 1;
    for(int i = 0; i<n; i+=c){
        c = 1;
        char ch = s[i];
        for(int j = i+1; j<n; j++){
            if(s[j]!= ch){
                break;
            }
            c++;
        }
        v.emplace_back(ch);
        char m;
        if(c<10){
            m = c+48;
            v.emplace_back(m);
        }
        else if(c<100){
            int d = c/10;
            char dc = d+48;
            v.emplace_back(dc);
            int r = c%10;
            m = r+48;
            v.emplace_back(m);
        }
        else{
            v.emplace_back('1');
            v.emplace_back('0');
            v.emplace_back('0');

        }
        
    }
    
    for(auto i : v){
        cout<<i;
    }
    return 0;
}
