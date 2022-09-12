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

int gcdRecu(int a, int b){
    if(b==0){
        return a;
    }
    if(a>b){
        return gcdRecu(b, a%b);
    }
    else{
        return gcdRecu(a, b%a);
    }
}

int main(){
    int a, b;
    cout<<"Enter the variables: "<<endl;
    cin>>a>>b;
    // cout<<gcd(a,b)<<endl;
    cout<<gcdRecu(a,b)<<endl;
    return 0;
}