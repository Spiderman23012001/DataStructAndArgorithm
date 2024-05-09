#include <iostream>

using namespace std;
int fun(int n);

int main()
{
    cout<<"Tran duc tin"<<endl;
    return 0;
}
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}