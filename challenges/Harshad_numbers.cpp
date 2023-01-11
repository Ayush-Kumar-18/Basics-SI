#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    int temp = n;
    int hn_sum = 0;
    while(temp>0){
        int rem = temp%10;
        hn_sum += rem;
        temp /= 10;
    }
    if(n%hn_sum == 0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
