#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Write a function that counts the number of ways you can partition n objects using parts upto m.
step 1 -> part(n,m) what if n == 0 ? no of partition always are  1. 
          if m == 0 no of partitions are 0.

step 2 -> genralise after looking at patterns. 
          part(n,m) = part(n-m, m) + part(n, m-1);
        
          

*/
int partitions (int n , int m){
    if(n==0){
        return 1;
    }
    else if(m==0 || n < 0){
        return 0;
    }
    else {
        return partitions(n-m,m)+ partitions(n , m-1);
    }
}
int main(){
    cout << partitions(5,5);

    return 0;
}