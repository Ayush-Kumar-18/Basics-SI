#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= n-i+1; j++){
            if(i == 1 || j == 1 || i+j == n+1){
                cout<<"* ";
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
