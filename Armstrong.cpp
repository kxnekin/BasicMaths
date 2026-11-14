#include <bits/stdc++.h>
using namespace std;



int main() {

    int n=371;
    int copy=n;
    int sum=0;

    while(n>0){
        int lastDigit=n%10;
        sum=sum+(lastDigit*lastDigit*lastDigit);
        n=n/10;
    }

    if(sum==copy){
        cout<<"Yes it is";
    }
    else{
        cout<<"Nah";
    }

    return 0;
}