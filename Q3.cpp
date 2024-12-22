//sum of numbers in an array
#include<bits/stdc++.h>
using namespace std;
int sumOfArray(vector<int>&arr , int n ){ //upto index
if( n<0 ) return 0;
return arr[n] + sumOfArray(arr, n-1);
}
int main()
{
    std::vector<int>nums = {2,3,4,6,7,8};
    cout<<sumOfArray(nums,5);
    return 0 ;
}