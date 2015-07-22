#include <iostream>
using namespace std;
int main(){
    int T;
    cin>> T;
    while(T--){
        long long int K;
        cin>>K;
        if(K%2==0){
            cout<<(K/2)*(K/2)<<endl;
        }
        else{
            cout<<(K/2)*(K/2 + 1)<<endl;
        }
        
    }
}
