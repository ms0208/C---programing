#  include<iostream>
using namespace std;

class student{
    
    public :
    int a,b,c,d;
    student(){
        cout<<"Enter value a "<<endl;
        cin>>a;
        cout<<"Enter value b "<<endl;
        cin>>b;
    }
    ~ student(){
        cout<<"Enter a value c "<<endl;
        cin>>c;
        cout<<"Enter a value d "<<endl;
        cin>>d;
    }
};
int main(){
    int a,b,c,d;
    student stu;
    {
        cout<<"value of a "<<a<<endl;

            cout <<"value of b "<<b<<endl;
        
        cout<<"exit "<<endl;
    };

    
    
    return 0;
}