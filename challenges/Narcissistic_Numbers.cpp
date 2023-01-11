#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n == 0){
        cout<<"Yes"<<endl;
        return 0;
    }
    int t = n;
    int countD = 0;
    while(t>0){
        countD++;
        t /= 10;
    }
    int temp = n;
    int nn = 0;
    while(temp>0){
        int rem = temp%10;
        nn += pow(rem, countD);
        temp /= 10;
    }
    if(nn == n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
