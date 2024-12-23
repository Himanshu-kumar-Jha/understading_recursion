//Super digit 
#include<iostream>
using namespace std;

int superDigit(int n){
    if(n<10) return n;
    int sum = 0;
    
    while(n>0){
        int rem = n%10;
        sum+=rem;
        n=n/10;
    }
    return superDigit(sum);
}

int main(){
    cout<<superDigit(1234);
    return 0;
}