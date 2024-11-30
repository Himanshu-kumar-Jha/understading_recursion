#include<iostream>

//Print number form 1 to n and n to 1 
void OneToN(int current , int n)
{
    if(current > n)
    {
        return;
    }
    std::cout<<current<<" ";
    OneToN(current+1, n);
}

void NToOne(int current , int n)
{
    if(current > n)
    {
        return;
    }

    NToOne(current+1, n);
    std::cout<<current<<" ";
}
int main()
{
    int n =10;
    NToOne(1 , 10);
    return 0;
}