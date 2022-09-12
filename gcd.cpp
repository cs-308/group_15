#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a>b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    while(b!=0){
        int k = b;
        b = a%k;
        a = k;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter the variables: "<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}