#include<iostream.h>
#include<conio.h>
class swap
{
public:
void swa(int &a,int &b)
{
    a=a*b;
    b=a/b;
    a=a/b;
}
};

int main()
{
clrscr();
swap s;
int a,b;
cout<<"Enter A=";
cin>>a;
cout<<"Enter B="<<endl;
cin>>b;
cout<<endl<<"Before Swap"<<endl;
cout<<a<<endl<<b<<endl;
s.swa(a,b);
cout<<"After Swap"<<endl;
cout<<a<<endl<<b;
getch();
return 0;
}