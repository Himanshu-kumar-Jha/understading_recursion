// Print first n fibbonacci numbers
#include<iostream>
using namespace std;
#include<vector>

void generateFibb(vector<int>&ans , int i , int n){
    if(i>=n) return;
    ans.push_back(ans[i-1]+ans[i-2]);
    generateFibb(ans,i+1,n);
}

vector<int>fibbNumbers(int n)
{
vector<int>ans;
if(n>=1) ans.push_back(1);
if(n>=2) ans.push_back(1);
generateFibb(ans,2,n); 
return ans;
}
int main()
{
    vector<int>ans= fibbNumbers(5);
    for(int a : ans)
    {
        cout<<a<<endl;
    }
    return 0;
}