// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
#include<vector>
// number of ways to express all elements of an array using + and - to lead to a target sum
int numberOfWays(int index , vector<int>&nums , int sum , int target){
    if(index == nums.size()){
        if(sum == target ){
            return 1;
        }
        return 0;
    }
    //take 
    int left = numberOfWays(index+1, nums,  sum+nums[index] , target);
    //don't take 
    int right = numberOfWays(index+1, nums, sum-nums[index] , target);
    return left+ right;
    
}
int main(){
    vector<int>nums = {1,1,1,1,1};
    vector<int>current;
    int index;
    int sum = 0;
    int target =3;
    
    cout<< numberOfWays(0 , nums,  sum , target );

    return 0;
}
