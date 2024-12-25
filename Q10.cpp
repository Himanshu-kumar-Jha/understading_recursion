#include<iostream>
using namespace std;
#include<vector>
// Understanding multiple recursion calls over fibonacci series
int fibonacci(int n){
    
    if(n<=1){
        return n ;
    }
    int last = fibonacci(n-1);
    cout<<"Last is "<<last<<endl;
    int secondLast = fibonacci(n-2);
    cout<<"Second Last is "<<secondLast<<endl;
    cout<<"Returning "<<last+secondLast<<endl;
    return last+secondLast;
}

int main(){
    int ans = fibonacci(5);

    return 0;
}
