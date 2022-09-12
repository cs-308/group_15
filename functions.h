
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