#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int gcd(long long int i, long long int j){
    if(i==0){
        return j;
    }
    else if(j==0){
        return i;
    }
    else{
        return gcd(j,i%j);
    }
}

int main() {
    long long int T;
    cin>>T;
    while(T--){
        long long int x1,y1,x2,y2,i,j,k;
        cin>>x1>>y1>>x2>>y2;
        i = abs(x1-x2);
        j = abs(y1-y2);
        k = gcd(i,j) - 1;
        cout<<k<<endl;
    }
    return 0;
}

