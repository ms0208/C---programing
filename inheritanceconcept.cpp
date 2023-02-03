# include<iostream>
using namespace std;
class A{
    protected:
    int no;
    public:
    void getno(){
        cout<<"Enter a number ";
        cin>>no;
    }
};
 class B : public A{ 
     public:   // propterties of A come in B.
     void square(){
         cout<<"Square number is "<<(no*no)<<endl;
     }


 };  
 int main(){
     B obj;
     obj.getno();
     obj.square();
     return 0;
 }


