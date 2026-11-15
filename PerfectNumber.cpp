#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int n=28;
    int copy=n;
    int sum=0;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum==copy){
        cout<<"Yes";
    }
    else{
        cout<<"Nah";
    }

    return 0;
}