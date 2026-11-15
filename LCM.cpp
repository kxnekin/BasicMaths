#include <bits/stdc++.h>
using namespace std;

int main() {

    int n1 = 4;
    int n2 = 6;

    int gcd = 1;

    for(int i = 1; i <= min(n1,n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    int LCM = (n1 * n2) / gcd;

    cout << LCM << endl;

    return 0;
}