#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int n=121;
    int copy=n;
    int revNo=0;

      while(n>0){
        int lasDigit=n%10;
        revNo=(revNo*10)+lasDigit;
        n=n/10;
    }

  

    if(revNo=copy){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Nah";
    }

    return 0;
}