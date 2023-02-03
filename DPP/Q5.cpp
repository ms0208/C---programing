#include<iostream>
using namespace std;
int main()
{
    int a[20] = {2,34,56,12,43,76,89,234,760,111,232};
    int i,K=0;
    for(i=0;i<11;i++)
    {
        if(a[i] % 2 == 0)
        {
            K++;
        }
    }
    cout<<"The number of even integer: "<<K;
}