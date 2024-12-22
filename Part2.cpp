/*
Number of unique paths in a grid of size n * m you can only move down and right 1 unit at a time 
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
step 1 -> let think about a base case like n = 1 and m = 1
   only one way
   n = 2 , m =1 
   one way 
   n  = 1 , m =4 
   one way 

   so if n or m ==1 there is only one way
   so base case is if(n==1 || m==1) return 1;

   step 2 -> by observing unique paths of  n-1 , m and n , m -1 paths we conclude
   paths(n,m) = path(n-1,m)+path(n , m-1)

   step 3 ->recurence relation 
   paths(n,m) = path(n-1,m)+path(n , m-1)


*/
int numOfWays(int n , int m){
    if(n == 1 || m == 1){
        return 1;
    }
    return numOfWays(n-1, m) + numOfWays(n , m-1);

}
int main(){
    int n = 3;
    int m = 3;
    cout<< numOfWays(n , m); 

    return 0;
}