#include <iostream>

using namespace std;
int fun(int n);

int main()
{
    int a = 5;
    cout<<"Gia tri fun(5): "<<fun(a)<<endl;

    a = 5;
    cout<<"Gia tri fun(5): "<<fun(a)<<endl;
    return 0;
}
int fun(int n)
{
    static int x = 0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}