# include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c = a+b;
    return c;

}
int multiply(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
void vote(int age)
{
        
        cout<<"enter your age"<<endl;
        cin>>age;
        if(age >= 18){
        cout<<"Elgible for vote"<<endl;
    }
    else{
        cout<<"not elgible for vote"<<endl;
    }
}
int main(){
    int a,b,c,age;
    cout<<"enter number a"<<endl;
    cin>>a;
    cout<<"enter number b"<<endl;
    cin>>b;
    cout<<"the sum is "<<sum(a,b)<<endl;
    cout<<"the multiply is"<<multiply(a,b)<<endl;
    vote(age);

    
    return 0;
}