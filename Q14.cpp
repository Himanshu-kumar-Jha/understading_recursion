#include<iostream>
using namespace std;
#include<vector>
#include<stack>
//quick sort
//time complexity is O(nlogn) in average case and O(n^2) in worst case
//iterative approach
int partition(vector<int>& nums, int start, int end) {
    int pivoit = nums[end];
    int i = nums[start];
    int j = nums[end-1];
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
    swap(nums[end],nums[j]); //place pivoit at it's correct place
    return j;
}

// Function to perform iterative Quick Sort
void quickSortIterative(vector<int>& arr) {
    stack<pair<int, int>> stk;
    stk.push({0, arr.size() - 1});
    while (!stk.empty()) {
        int low = stk.top().first;
        int high = stk.top().second;
        stk.pop();

        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            stk.push({low, pivotIndex - 1});
            stk.push({pivotIndex + 1, high});
        }
    }
}
int partitionLogicMiddleElement(vector<int>&nums , int start , int end){
    int pivoit = nums[(start+end)/2];
    int i = start ;
    int j = end;
    while(i<j){
        while(nums[i]<=pivoit){
            i++;
        }
        while(nums[j]>pivoit){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[(start+end)/2],nums[j]); //place pivoit at it's correct place
    return j;
}

int partitionLogicLastElement(vector<int>&nums, int start , int end){
    int pivot = nums[end]; // Pivot is the last element
    int i = start - 1;     // Pointer for the smaller element

    for (int j = start; j < end; ++j) {
        if (nums[j] <= pivot) {
            ++i;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[end]);
    return i + 1; 
}

int partitionLogicFirstElement(vector<int>&nums, int start , int end){
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
int pivoit = partitionLogicLastElement(nums,start,end);
quickSort(nums,start,pivoit-1);
quickSort(nums,pivoit+1,end);
}

int main(){
    vector<int>nums = {9,8,3,7,6,5,4,4,3,3,2,1};
    int n = nums.size();
    int start = 0;
    int end = n-1;
    quickSort(nums,start,end);
    for(auto a : nums){
        cout<<a<<" ";
    }
    return 0;
}