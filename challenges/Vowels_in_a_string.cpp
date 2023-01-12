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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int len = s.size();
    for(int i = 0; i<len; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i]!= 'o' && s[i] != 'i' && s[i] != 'u'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
