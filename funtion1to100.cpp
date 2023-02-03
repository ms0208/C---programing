# include<iostream>
using namespace std;
void number(int n)  {// In c++ first declare and define in same place then call.

    for(int i = 0;i<=100;i++){
        cout<<"the squaem number of "<< i << " is "<< i*i <<endl;
    }
}

int main() {
    int n;
    number(n);
    return 0;
}


