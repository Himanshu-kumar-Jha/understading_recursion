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
int main(){
    vector<int>arr = {9,8,7,6,5,4,2,1};
    int n = arr.size();
    mergeSort(arr,0,n-1);
    for(auto a : arr){
        cout<<a<<" ";
    }

    return 0;
}