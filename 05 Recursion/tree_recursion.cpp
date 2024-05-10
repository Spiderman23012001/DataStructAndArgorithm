#include <iostream>
using namespace std;

void tree_recursion(int n);
void tree_while(int n);
int main()
{
    tree_recursion(3);
    return 0;
}
void tree_recursion(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        tree_recursion(n-1);
        tree_recursion(n-1);
    }
}
void tree_while(int n);