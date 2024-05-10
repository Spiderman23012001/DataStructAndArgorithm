#include <iostream>
using namespace std;
// 
int head_r(int n);
int head_r_while(int n);
int main()
{
    cout<<"Head Recursion"<<endl;
    head_r(3);
    cout<<"Head while"<<endl;
    head_r_while(3);
    return 0;
}
int head_r(int n)
{
    if(n>0)
    {
        head_r(n-1);
        cout<<n<<endl;
    }
}
int head_r_while(int n)
{
    int i = 1;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}