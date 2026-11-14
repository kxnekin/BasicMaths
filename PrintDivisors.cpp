#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


int main() {
 
    int n=36;

    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<endl;
    //     }
    // }   TC -(O(N))

    vector<int>ls;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
             if((n/i)!=i){
            ls.push_back(n/i);
        }
        }
       
    }

    sort(ls.begin(),ls.end());

    for(int i=0;i<=ls.size();i++){
        cout<<ls[i]<<endl;
    }
    return 0;
}

