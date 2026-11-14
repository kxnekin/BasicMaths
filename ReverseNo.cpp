#include <bits/stdc++.h>
using namespace std;



int main() {

    int n=7798;
    int revNo=0;

    while(n>0){
        int lasDigit=n%10;
        revNo=(revNo*10)+lasDigit;
        n=n/10;
    }

    cout<<revNo;

    return 0;
}