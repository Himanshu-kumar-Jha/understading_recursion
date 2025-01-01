#include<iostream>
using namespace std;
#include<vector>
//quick sort
int partitionLogic(vector<int>&nums, int start , int end){
    int pivoit =  nums[start];
    int i = start;
    int j = end;

    while(i<j){
        while(nums[i]<=pivoit && i<=end){
            i++;
        }
        while(nums[j]>pivoit && j>=start){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[start],nums[j]); //place pivoit at it's correct place
    return j;
}

void quickSort(vector<int>&nums, int start , int end){
if(start>=end){
    return;
}
int pivoit = partitionLogic(nums,start,end);
quickSort(nums,start,pivoit-1);
quickSort(nums,pivoit+1,end);
}

int main(){
    vector<int>nums = {9,8,7,6,5,4,3,2,1};
    int n = nums.size();
    int start = 0;
    int end = n-1;
    quickSort(nums,start,end);
    for(auto a : nums){
        cout<<a<<" ";
    }
    return 0;
}