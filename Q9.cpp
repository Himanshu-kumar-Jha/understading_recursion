//Generate Subset
#include<iostream>
using namespace std;
#include<vector>

vector<vector<int>>result;
vector<int>current;

void generateSubset(vector<int>&nums , int index , vector<int>&current ,vector<vector<int>>&result){
    if(index == nums.size()){
        result.push_back(current);
        return;
    }
    current.push_back(nums[index]);
    generateSubset(nums , index+1 , current , result);
    current.pop_back();
    generateSubset(nums , index+1 , current , result);

}
int main(){

 vector<int>nums = {1,2,3};
 generateSubset(nums , 0 , current , result);
for(auto c : result){
    for(auto d : c){
        cout<<d<<" ";
    }               
    cout<<endl;
}
return 0;
}