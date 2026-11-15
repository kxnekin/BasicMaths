#include <bits/stdc++.h>
using namespace std;


int main() {

    int n=10;
    int oddCount=0;
    
    while(n>0){
        int lastDigit=n%10;
        if(n%10!=0){
            oddCount+=1;
        }
        n=n/10;
    }

    cout<<oddCount;

    return 0;
}