#include<bits/stdc++.h>
using namespace std;
/*
Sum of all non negetive numbers upto a given n recursively

Step 1 -> To identify the min possible value whose outcome is known.

that is 0 and 1 , summ till 0 is 0 and sum till 1 is one .

Step 2 -> Play around with examples and visualise

They can be arranged in form of a triangle.

like n =2 , 0+1+2 = 3

*
* *

like n = 3 , 0+1+2+3 = 6
*
* *
* * *

Step 3 ->  Try to connect harder case to smaller case 
Can you know ans(n==5) by knowing the answer for ans(n==4) ? 
Yes by adding 5 to ans(n==4)

step 4 -> Find the recurance relation 
so we can observe that we can find sum(n) = sum(n-1) + n

step 5 -> Write the code 




*/

int sumTilln(int n){
    if(n==0){
        return 0;
    }
    return sumTilln(n-1) + n;
}

int main(){
cout<<sumTilln(5);
    return 0;
}