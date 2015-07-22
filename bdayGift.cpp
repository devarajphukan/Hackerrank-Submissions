#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i;
    long long int n;
    long double sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lld",&n);
        sum = sum + n;
    }
   printf("%0.1Lf",sum/2);   
    return 0;
}

