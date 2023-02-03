# include<iostream>
using namespace std;
class operstion{
    public:
    int sum =0,multiply = 1,difference=0;
    float divide =1;
    
};
 int main(){
     operstion s;
     for(int i=1;i<=10;i++){
         s.sum = s.sum+i;
         s.multiply = s.multiply *i;
         s.difference = s.difference -i;
         s.divide = s.divide /i;


     }
     cout<<"the sum is "<<s.sum<<endl;
     cout<<"the multiply is "<<s.multiply<<endl;
     cout<<"the differencw is "<<s.difference<<endl;
     cout<<"the divide is "<<s.divide<<endl;
     return 0;
 }