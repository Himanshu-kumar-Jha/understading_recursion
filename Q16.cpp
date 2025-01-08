//sort an array using recursion
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void sortArray(vector<int>&arr, int start , int end)
{
    if(start>=end){
        return;
    }
    if(arr[start]>=arr[end]){
        swap(arr[start],arr[end]);
    }
    sortArray(arr,start+1,end-1);

}
int main(){
    vector<int>arr= {9,8,7,6};
    sortArray(arr,0,3);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}