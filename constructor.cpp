# include<iostream>
using namespace std;
class student {
    int a,b,sum;
    public :
    student(){ // constructor whuch is dont call.
        cout<<"Enter a number a "<<endl; // to intialses a value
        cin>>a;
        cout<<"Enter a number b "<<endl;
        cin>>b;

        sum = a+b;
    }
    void putdata(); // to print a value
};
void student :: putdata(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The sum is "<<sum<<endl;
}
int main(){
    student stu;
    stu.putdata();
    return 0;
}