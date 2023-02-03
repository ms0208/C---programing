# include<iostream>
using namespace std;

class car{
    public:
    int a;
    float b;
};
class model:public car {
    int a;
};
int main(){
    car c;{
    cout<<"Enter car name "<<endl;
    cin>>c.a;
    cout<<"Enter car price "<<endl;
    cin>>c.b;
    };
    model mo;
    cout<<"Enter number of car "<<endl;
    cin>>c.a;
    return 0;

}