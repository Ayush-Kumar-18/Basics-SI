#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int t = n;
    int countD = 0;
    while(t>0){
        countD++;
        t /= 10;
    }
    int temp = n;
    int arm = 0;
    while(temp>0){
        int rem = temp%10;
        arm += pow(rem, countD);
        temp /= 10;
    }
    if(arm == n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
