#include<iostream>
using namespace std;

int main(){

    // Count the no of didgits in a given number

    int n=7789;
    int count =0;

    while(n>0){
        int lastDigit = n%10;
        count+=1;
        n=n/10;
    }

    cout<<count;


    return 0;
}