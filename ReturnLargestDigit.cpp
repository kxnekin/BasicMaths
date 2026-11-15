#include <bits/stdc++.h>
#include<climits>
using namespace std;



int main() {
    
    int n=180;
    int largest=INT_MIN;

    while(n>0){
    int lastDigit=n%10;
    largest=max(largest,lastDigit);
    n=n/10;
    }
    cout<<largest<<endl;

    return 0;
}