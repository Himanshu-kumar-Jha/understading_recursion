// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
#include<vector>
// number of ways to express all elements of an array using + and - to lead to a target sum
int numberofways(int index , vector<int>&nums , vector<int>&current, int sum , int target){
    if(index == nums.size()){
        if(sum == target ){
            return 1;
        }
        return 0;
    }
    //take 
    int left = numberofways(index+1, nums, current , sum+nums[index] , target);
    //don't take 
    int right = numberofways(index+1, nums, current , sum-nums[index] , target);
    return left+ right;
    
}
int main(){
    vector<int>nums = {1,1,1,1,1};
    vector<int>current;
    int index;
    int sum = 0;
    int target =3;
    
    cout<< numberofways(0 , nums, current , sum , target );

    return 0;
}
