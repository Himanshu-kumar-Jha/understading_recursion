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

void OneToN(int n)
{
if(n==0)
{
    return;
}
OneToN(n-1);
std::cout<<n<<" ";
}

void NToOne(int n)
{
    if(n==0)
    {
        return;
    }
    std::cout<<n<<" ";
    NToOne(n-1);
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
    NToOne(10);
    return 0;
}