# include<iostream>
# include<string>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
};
class staffno : public Employee{
    public:
    int Stno;
};
int main(){
    Employee OFI;
    staffno NU;
    string name;
    cout<<"Enter Employee name "<<endl;
    cin>>OFI.name;
    cout<<"Enter Employee salary "<<endl;
    cin>>OFI.salary;
    cout<<"Enter staff no "<<endl;
    cin>>NU.Stno;
    cout<<" full details is "<<endl<<OFI.name<<endl<<OFI.salary<<endl<<NU.Stno<<endl;
    return 0;
};


