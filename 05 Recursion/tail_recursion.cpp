#include<iostream>
using namespace std;

// function
// O(n)
void fun(int n);
void fun1(int n);
int main()
{
    cout<<"Tail Recursion"<<endl;
    fun(3);
    cout<<"While Loop"<<endl;
    fun1(3);
    return 0;
}
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
void fun1(int n)
{
    int i =n;
    while (i>0)
    {
        cout<<i<<endl;
        i--;
    }
    
}