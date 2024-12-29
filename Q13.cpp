//Merge sort 
#include<iostream>
using namespace std;
#include<vector>
void merge(vector<int>&arr , int start , int mid , int end){
    vector<int>temp;
    int i = start;
    int j = mid+1;
    while(i<=mid and j <=end)
    {
         if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
         }
         else{
             temp.push_back(arr[j]);
             j++;
         }
    }
    //if anything left in the first half
            while(i<mid+1){
                temp.push_back(arr[i]);
                i++;
            }
            //if anything left in the second half
            while(j<end+1){
                temp.push_back(arr[j]);
                j++;
            }
            //put the elements back in the original array
            for(int i = start ; i<=end ; i++){
                arr[i] = temp[i-start];
            }
}
void mergeSort(vector<int>&arr , int start , int end){
    if(start>=end){
        return;
    }
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
void mergeSortIterative(vector<int>&arr, int n) {
    for (int size = 1; size < n; size = 2 * size) {
        for (int left = 0; left < n; left += 2 * size) {
            int mid = min(n - 1, left + size - 1);
            int right = min((left + 2 * size - 1), (n - 1));
            merge(arr, left, mid, right);
        }
    }
}

int main(){
    vector<int>arr = {9,8,7,6,5,4,2,1};
    int n = arr.size();
    mergeSortIterative(arr,n);
    for(auto a : arr){
        cout<<a<<" ";
    }
    return 0;
}