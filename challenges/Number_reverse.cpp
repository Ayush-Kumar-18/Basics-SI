#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long num, newNo = 0;
    cin>>num;
    bool flag = false;
    if(num < 0){
        num = num * -1;
        flag = true;
    }

    while(num>0){
        long long rem = num%10;
        newNo = newNo*10 + rem;
        num /= 10;
    }
    
    if(flag){
        newNo = newNo * -1;
    }
    
    cout<<newNo<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
