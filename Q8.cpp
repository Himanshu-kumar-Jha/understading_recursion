//Generate Parenthesis
#include<iostream>
using namespace std;
#include<vector>

vector<string>Parenthesis;

void generate(string s , int openingBrackets , int closingBrackets)
{
    //base condition 
   cout<<s<<endl;
    if(openingBrackets == 0 && closingBrackets == 0)
    {
        Parenthesis.push_back(s);
    }   
   // condition to put opening brackets
if(openingBrackets > 0)
{
    s.push_back('(');
    generate(s , openingBrackets-1,closingBrackets);
   s.pop_back();
}
if(closingBrackets > 0){
    if(openingBrackets < closingBrackets)
    {
        s.push_back(')');
        generate(s , openingBrackets , closingBrackets-1);
        s.pop_back();
    }
}
    
}
int main(){
    string k = "";
    generate(k,2,2);
    
  for(string c : Parenthesis)
   {
    cout<<c<<endl;
   }


    return 0;
}
