# include<iostream>
using namespace std;

class operation{
    private :
    int a,b ,sum ,multiply;
    public :
    void getdata(int a,int b);
    void putdata(int a, int b);
};
void operation :: getdata(int a,int b){
    
    
}
void operation :: putdata(int a,int b){
    sum = a+b;
    multiply = a*b;
    cout<<"The sum of two number "<<sum<<endl;
    cout<<"The multiply of two number "<<multiply<<endl;
};
int main(){
    operation math;
    math.getdata(100,200);
    math.putdata(100,200);
    return 0;
}