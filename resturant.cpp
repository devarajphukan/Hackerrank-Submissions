#include <iostream>
using namespace std;
static int gcd (int l, int b){
    if(l==0){
        return b;
    }
    else if(b==0){
        return l;
    }
    else{
        return gcd(b,l%b);
    }
}

int main() {
    
    int T;
    cin>>T;
    while(T--){
        int l,b;
        cin>>l>>b;
        cout<<(l*b)/(gcd(l,b)*gcd(l,b))<<endl;
        
    }
    return 0;
}

