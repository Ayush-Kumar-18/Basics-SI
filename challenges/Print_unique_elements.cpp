#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> v;
    for(int i = 0; i<n; i++){
        int temp = arr[i]; bool check = true;
        for(int j = 0; j<n; j++){
            if(i == j) continue;
            if(arr[j] == temp){
                check = false;
                break;
            }
        }
        if(check){
            v.emplace_back(temp);
        }
    }
    for(auto i:v){
        cout<< i <<" ";
    }
    
    return 0;
}
