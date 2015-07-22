#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int a,b,x;
        cin>>a>>b>>x;
        long int i=pow(a,b);
        int j = floor(i/x);
        int k = (j+1)*x;
        int l = j*x;
        if(abs(i-k) > abs(i-l)){
            cout<<l<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
    return 0;
}
