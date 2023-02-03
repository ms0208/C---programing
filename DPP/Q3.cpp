#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the Rancho marks\n";
    cin>>x;
    cout<<"Enter the Farhan marks\n";
    cin>>y;
    cout<<"Enter the Raju Rastogi marks\n";
    cin>>z;
    if(x>y && x>z)
    {
        cout<<"Rancho have highest marks\n";
    }
    else if(y>x && y>z)
    {
        cout<<"Farhan have highest marks\n";
    }
    else if(z>x && z>y)
    {
        cout<<"Raju Rastogi have highest marks\n";
    }
}