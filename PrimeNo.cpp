#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int n=7;
    int count=0;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count+=1;
            if(n/i!=i){
                count+=1;
            }
        }
    }
    if(count==2){
        cout<<"Prime";
    }
    else{
        cout<<"Nah";
    }

    return 0;
}