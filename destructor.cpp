# include<iostream>
using namespace std;
class object{
     int a,b;
    public:
    object(){
        cout<<"Object created"<<endl;
        
       
    }
    ~ object(){
        cout<<"object destroyed"<<endl;


    }
        
    
};
int main(){
    cout<<"Main Object"<<endl;
    object obj ;
    {
        cout<<"object 1"<<endl;
        object obj2, obj3, obj4, obj5;
        cout<<"Exist"<<endl;// obj are remove by destructor.
    }
    cout<<"Exist from main"<<endl;
    return 0;
}