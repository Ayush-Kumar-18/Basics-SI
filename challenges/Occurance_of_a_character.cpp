#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    char ch;
    getline(cin, s);
    cin>>ch;
    int c = 0, len = s.size();
    for(int i = 0; i < len ; i++){
        if(s[i] == ch)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
