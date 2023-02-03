#include<iostream>
using namespace std;
#include<stdlib.h> 
class List{
public:

virtual void store(int)=0; virtual void retrieve()=0;
};
class stack:public List{

private:
int *arr; int n,top;
public:

stack()
{ n=10;
arr=new int(n);
 
top=-1;

}


void store(int val)
{ if(top==n-1)
{ textbackground(GREEN); cout<<"\n \tSTACK OVERFLOW\n";
}
else
{ top++;

arr[top]=val;
}
}
void pop()

{ if(top==-1)
cout<<"\n \tSTACK UNDERFLOW\n"; else
{cout<<"\n Deleted element="<<arr[top]; top--;
}
}

void retrieve();

};
 
void stack::retrieve()
{ if(top==-1)

cout<<"\n \tSTACK IS EMPTY\n"; else
{ for(int i=0;i<=top;i++) cout<<"\n Element="<<arr[i];
}
}
class queue{
int* arr;

int i,front,last; public:
queue()
{ arr=new int(10); front=-1;
last=-1;
}

void store(int val)
{ if(last==9)
cout<<"\n \tQUEUE OVERFLOW\n"; else
{ if(front==-1) front=0;
 
last++; arr[last]=val;
}

}
void delet()
{ if(front>=last || front==-1) cout<<"\n \tQUEUE IS EMPTY\n"; else
{cout<<"\n Deleted element="<<arr[front]; front++;

}
}
void retrieve();

~queue()
{ delete arr;
}

};
void queue::retrieve()
{
for(i=front;i<=last;i++)

cout<<"\n Elements in queue="<<arr[i];
}
 
void main()
{
     stack obj1; stack* a; a=&obj1; queue obj;
int v,ch,choice,o;
cout<<"\n 1.OPERATIONS USING STACK !! 2.OPERATION USING QUEUE";
cout<<"\n Enter your operation="; cin>>o;
if(o==1) goto a; else goto b; a:do{
cout<<"\n 1.STORE\n 2.DELETE\n 3.RETREIVE\n4.EXIT"; cout<<"\n\n ENTER YOUR CHOICE=";
cin>>ch; switch(ch)
{ case 1:{cout<<"\n Enter value to insert:"; cin>>v;
a->store(v); break;
 
}
case 2:{ obj1.pop(); break;
}
case 3:{a->retrieve();
break;

}
case 4: exit(0);
};
}while(ch!=4); b:do{
cout<<"\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n4.EXIT"; cout<<"\n\n ENTER YOUR CHOICE=";
cin>>ch; switch(ch)
{ case 1:{cout<<"\n Enter value to insert:"; cin>>v;
obj.store(v); break;
}
case 2:{ obj.delet(); break;
}
 
case 3:{ obj.retrieve(); break;
}	case 4: exit(0);

};
}while(ch!=4);
return 0;
}
