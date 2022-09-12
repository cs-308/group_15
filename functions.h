
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