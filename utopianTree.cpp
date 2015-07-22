#include<iostream>
using namespace std;
int main() {
    
    int T,N,i;
    cin>>T;
   
    while(T--){
        long int h=1;
        cin>>N;
        
        for(i=1;i<=N;i++){
            if(i%2==0){
                h++;
            }
            else{
                h=2*h;
            }
        }
        cout<<h<<"\n";
        }
    return 0;
}
