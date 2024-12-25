#include<iostream>
using namespace std;
#include<vector>
//Generate all Subsets
void generateAllSubsets(vector<int>&nums , int index , vector<int>&current ,vector<vector<int>>&result){
    if(index == nums.size()){
        result.push_back(current);
        return;
    }
    current.push_back(nums[index]);
    generateAllSubsets(nums , index+1 , current , result);
    current.pop_back();
    generateAllSubsets(nums , index+1 , current , result);

}
//Generate Subsets with sum K
void generateSubsetWithSum(vector<int>&nums , int index , vector<int>&current , vector<vector<int>>&result , int currentsum , int sum){

    if(index == nums.size()){
        if(currentsum == sum){
        result.push_back(current);
    }
        return;
    }
    //take 
    currentsum+=nums[index];
    current.push_back(nums[index]);
    generateSubsetWithSum(nums,index+1, current , result , currentsum , sum);
    //don't take
    currentsum-=nums[index];
    current.pop_back();
    generateSubsetWithSum(nums, index+1 , current , result , currentsum , sum);
}

//function to print only  one subset
bool generateOnlyOneSubset(vector<int>&nums , int index , vector<int>&current , vector<vector<int>>&result , int currentsum , int sum){

    if(index == nums.size()){
        if(currentsum == sum){
            result.push_back(current);
           return true;
    }
    else return false;  
    }
    //take 
    currentsum+=nums[index];
    current.push_back(nums[index]);
    if(generateOnlyOneSubset(nums,index+1, current , result , currentsum , sum)==true){
        return true;
    }
    //don't take
    currentsum-=nums[index];
    current.pop_back();
    if(generateOnlyOneSubset(nums, index+1 , current , result , currentsum , sum)==true){
        return true;
    }
    return false;
}

//Number of subsets
int numberOfSubsetsWithSumK(vector<int>&nums , int index , vector<int>&current , int currentsum , int sum){

    if(index == nums.size()){
        if(currentsum == sum){
            return 1;
        }
        return 0;
    }
    //take 
    currentsum+=nums[index];
    int leftRecursionCall = numberOfSubsetsWithSumK(nums,index+1, current , currentsum , sum);
    //don't take
    currentsum-=nums[index];
    int rightRecursionCall = numberOfSubsetsWithSumK(nums, index+1 , current , currentsum , sum);
    return leftRecursionCall+rightRecursionCall;
}

int main(){
    vector<int>nums = {1,2,3};
    int sum = 3;
    vector<vector<int>>result;
    vector<int>current;
    int index = 0;
    int currentSum = 0;

    //Generate all subsets
    generateAllSubsets(nums , index , current , result);
    for(auto c : result){
        for(auto d : c){
            cout<<d<<" ";
        }
        cout<<endl;
    }
    
    //Generate Subset with sum K
   generateSubsetWithSum(nums , index , current , result , currentSum , sum);
    for(auto c : result){
        for(auto d : c){
            cout<<d<<" ";
        }
        cout<<endl;
    }
    //Generate only one subset
    
    generateOnlyOneSubset(nums , index , current , result , currentSum , sum);
    for(auto c : result){
        for(auto d : c){
            cout<<d<<" ";
        }
        cout<<endl;
    }
    //Number of subsets
    cout<<"Number of subsets with sum "<<sum<<" is "<<numberOfSubsetsWithSumK(nums , index , current , currentSum , sum);

    return 0;
}