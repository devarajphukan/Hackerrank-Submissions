#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long int N,i,sum=0;
        cin>>N;
        for(i=N-1;i>=0;i--){
         sum = sum + i; 
        }
        cout<<sum<<endl;
    }
    return 0;
}
