# include <iostream>
# include <string>

using namespace std;

class student{
    public :
    int roll;
    string name;
    float cgpa;
}; 
  int main(){
    
    student stu;
    cout<<"Enter your roll number"<<endl;
    cin>>stu.roll;
    cout<<"Enter your name"<<endl;
    cin>>stu.name;
    cout<<"Enter your cgpa"<<endl;
    cin>>stu.cgpa;

    cout<<"Full details of student : "<<endl<<stu.roll<<endl<<stu.name<<endl<<stu.cgpa<<endl;
   
    return 0;
}