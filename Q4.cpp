//Digit sum of a number 
#include<iostream>
using namespace std;
int sumOfDigits(int x )
{
if(x == 0){
    return 0;
}
return  x%10+sumOfDigits(x/10);

}
int main()
{
    cout<<sumOfDigits(9870);


return 0;
}