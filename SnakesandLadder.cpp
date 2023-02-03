# include<iostream>
# include<conio.h>
# include<stdlib.h>
using namespace std; 
int main() {
    int i,a,b=0,c=0;

    
    
    for(i=1;i<100&&b<100&&c<100;i++){

         
        cout<<"Enter a dice between 1 t0 6"<<endl;
        cin>>a;
         
        

        
    
        if(i% 2 != 0){
        
            b= b+a;
            if(b==4){
                b=36;
            }
            if(b==26){
                b=55;
            }
            if(b==47){
                b=58;
            }
            if(b==67){
                b=98;
            }
            if(b==23){
                b=11;
            }
            if(b==45){
                b=21;
            }
            if(b==97){
                b=10;
            }
            if(b==87){
                b=14;
            }
        
        cout<<endl<<"now Player 1 = "<<b<<endl;
        cout<<endl<<"now Player 2 = "<<c<<endl;
        cout<<"Press key to continue"<<endl;
        }
        if(i %2 ==0){
              c= c+a;
            if(c==4){
                c=36;
            }
            if(c==26){
                c=55;
            }
            if(c==47){
                c=58;
            }
            if(c==67){
                c=98;
            }
            if(c==23){
                c=11;
            }
            if(c==45){
                c=21;
            }
            if(c==97){
                c=10;
            }
            if(c==87){
                c=14;
            }
        
        cout<<endl<<"now Player 2 = "<<c<<endl;
        cout<<endl<<"now Player 1 = "<<b<<endl;
       cout<<"Press key to continue"<<endl;

        }
    }
        if(b>c){
            cout<<"Player 1 is wins"<<endl;

        }
        else if(b==c){
            cout<<"Player 1 and Player 2 is equal"<<endl;
        }
        else if(c>b) {
            cout<<"Player 2 is wins"<<endl;

        }
        else {
            cout<<"Invalid";
        }

    
    return 0;
}