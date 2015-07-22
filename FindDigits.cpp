#include<iostream>
using namespace std;
int main() {
    
    int T;
    long long int N;
    cin>>T;
    
    while(T--){
        cin>>N;
        long long int i=1,c=0;
        long long int M=N;
        while(M>0){
            i=M-10*(M/10);
            M=M/10;
            if(i!=0 ){
				 if((N-i*(N/i))==0){
                 c++;
            }
        }}
        
        cout<<c<<endl;
        
}
return 0;
}
