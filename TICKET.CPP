//CREATED BY RAHUL TIMBALIYA 
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class ticket
{
public:
int rupay,person,rs,dstation,i;
ticket()
{
      i=1;
}
int dhari();
int malsika();
int vekariya();
int lalpur();
int kalavad();
int kalshari();
int visavadar();
int moniya();
int asham();
int khambhaliya();
int virpur();
int bilkha();
int khadiya();
int dungarpur();
int display();
};
int ticket::dhari()
{

 cout<<"1.MALSIKA"<<endl;
 cout<<"2.VEKARIYA"<<endl;
 cout<<"3.LALPUR"<<endl;
 cout<<"4.KALAVAD"<<endl;
 cout<<"5.KALSHARI"<<endl;
 cout<<"6.VISAVADAR"<<endl;
 cout<<"7.MONIYA"<<endl;
 cout<<"8.ASHAM"<<endl;
 cout<<"9.KHAMBAHLIYA"<<endl;
 cout<<"10.VIRPUR"<<endl;
 cout<<"11.BILKHA"<<endl;
 cout<<"12.KHADIYA"<<endl;
 cout<<"13.DUNGARPUR"<<endl;
 cout<<"14.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;
if(dstation<=14)
{
 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;

 cin>>person;
 switch(dstation)
 {
	case 1:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=12;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=20;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=22;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	   rs=25;
	   rupay=person*rs;
	   break;
	}
	case 6:
	{
	rs=30;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=32;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=34;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=35;
	rupay=person*rs;
	break;
	}
	case 10:
	{
	rs=36;
	rupay=person*rs;
	break;
	}
	case 11:
	{
	rs=38;
	rupay=person*rs;
	break;
	}
	case 12:
	{
	rs=40;
	rupay=person*rs;
	break;
	}
	case 13:
	{
	rs=41;
	rupay=person*rs;
	break;
	}
	case 14:
	{
	rs=42;
	rupay=person*rs;
	}
 }
 }
 else
 {
 cout<< "ENTER THE WRITE NO "<<endl;
 }

 return 0;
 }
 int ticket::malsika()
 {
 cout<<"1.VEKARIYA"<<endl;
 cout<<"2.LALPUR"<<endl;
 cout<<"3.KALAVAD"<<endl;
 cout<<"4.KALSHARI"<<endl;
 cout<<"5.VISAVADAR"<<endl;
 cout<<"6.MONIYA"<<endl;
 cout<<"7.ASHAM"<<endl;
 cout<<"8.KHAMBAHLIYA"<<endl;
 cout<<"9.VIRPUR"<<endl;
 cout<<"10.BILKHA"<<endl;
 cout<<"11.KHADIYA"<<endl;
 cout<<"12.DUNGARPUR"<<endl;
 cout<<"13.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=8;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=10;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=14;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=18;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=20;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=22;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=23;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=25;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=27;
	rupay=person*rs;
	break;
	}
	case 10:
	{
	rs=30;
	rupay=person*rs;
	break;
	}
	case 11:
	{
	rs=34;
	rupay=person*rs;
	break;
	}
	case 12:
	{
	rs=36;
	rupay=person*rs;
	break;
	}
	case 13:
	{
	rs=39;
	rupay=person*rs;
	break;
	}

 }
 return 0;
 }
 int ticket::vekariya()
 {
 cout<<"1.LALPUR"<<endl;
 cout<<"2.KALAVAD"<<endl;
 cout<<"3.KALSHARI"<<endl;
 cout<<"4.VISAVADAR"<<endl;
 cout<<"5.MONIYA"<<endl;
 cout<<"6.ASHAM"<<endl;
 cout<<"7.KHAMBAHLIYA"<<endl;
 cout<<"8.VIRPUR"<<endl;
 cout<<"9.BILKHA"<<endl;
 cout<<"10.KHADIYA"<<endl;
 cout<<"11.DUNGARPUR"<<endl;
 cout<<"12.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=10;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=12;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=15;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=17;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=20;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=21;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=24;
	rupay=person*rs;
	break;
	}
	case 10:
	{
	rs=27;
	rupay=person*rs;
	break;
	}
	case 11:
	{
	rs=30;
	rupay=person*rs;
	break;
	}
	case 12:
	{
	rs=32;
	rupay=person*rs;
	break;
	}

 }
 return 0;
 }
 int ticket::lalpur()
 {
 cout<<"1.KALAVAD"<<endl;
 cout<<"2.KALSHARI"<<endl;
 cout<<"3.VISAVADAR"<<endl;
 cout<<"4.MONIYA"<<endl;
 cout<<"5.ASHAM"<<endl;
 cout<<"6.KHAMBAHLIYA"<<endl;
 cout<<"7.VIRPUR"<<endl;
 cout<<"8.BILKHA"<<endl;
 cout<<"9.KHADIYA"<<endl;
 cout<<"10.DUNGARPUR"<<endl;
 cout<<"11.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=9;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=12;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=14;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=16;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=19;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=22;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=25;
	rupay=person*rs;
	break;
	}
	case 10:
	{
	rs=27;
	rupay=person*rs;
	break;
	}
	case 11:
	{
	rs=30;
	rupay=person*rs;
	break;
	}
 }
 return 0;
 }
 int ticket::kalavad()
 {
 cout<<"1.KALSHARI"<<endl;
 cout<<"2.VISAVADAR"<<endl;
 cout<<"3.MONIYA"<<endl;
 cout<<"4.ASHAM"<<endl;
 cout<<"5.KHAMBAHLIYA"<<endl;
 cout<<"6.VIRPUR"<<endl;
 cout<<"7.BILKHA"<<endl;
 cout<<"8.KHADIYA"<<endl;
 cout<<"9.DUNGARPUR"<<endl;
 cout<<"10.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=10;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=11;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=13;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=16;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=18;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=21;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=23;
	rupay=person*rs;
	break;
	}
	case 10:
	{
	rs=25;
	rupay=person*rs;
	break;
	}
 }
 return 0;
 }
 int ticket::kalshari()
 {
 cout<<"1.VISAVADAR"<<endl;
 cout<<"2.MONIYA"<<endl;
 cout<<"3.ASHAM"<<endl;
 cout<<"4.KHAMBAHLIYA"<<endl;
 cout<<"5.VIRPUR"<<endl;
 cout<<"6.BILKHA"<<endl;
 cout<<"7.KHADIYA"<<endl;
 cout<<"8.DUNGARPUR"<<endl;
 cout<<"9.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=9;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=11;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=14;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=17;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=19;
	rupay=person*rs;
	break;
	}
	case 8:
	{
	rs=20;
	rupay=person*rs;
	break;
	}
	case 9:
	{
	rs=22;
	rupay=person*rs;
	break;
	}
 }
 return 0;
 }
 int ticket::visavadar()
 {
 cout<<"1.MONIYA"<<endl;
 cout<<"2.ASHAM"<<endl;
 cout<<"3.KHAMBAHLIYA"<<endl;
 cout<<"4.VIRPUR"<<endl;
 cout<<"5.BILKHA"<<endl;
 cout<<"6.KHADIYA"<<endl;
 cout<<"7.DUNGARPUR"<<endl;
 cout<<"8.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	 case 1:
	 {
	 rs=5;
	 rupay=person*rs;
	 break;
	 }
	 case 2:
	 {
	 rs=7;
	 rupay=person*rs;
	 break;
	 }
	 case 3:
	 {
	 rs=10;
	 rupay=person*rs;
	 break;
	 }
	 case 4:
	 {
	 rs=12;
	 rupay=person*rs;
	 break;
	 }
	 case 5:
	 {
	 rs=15;
	 rupay=person*rs;
	 break;
	 }
	 case 6:
	 {
	 rs=18;
	 rupay=person*rs;
	 break;
	 }
	 case 7:
	 {
	 rs=20;
	 rupay=person*rs;
	 break;
	 }
	 case 8:
	 {
	 rs=22;
	 rupay=person*rs;
	 break;
	 }
 }
 return 0;
 }
 int ticket::moniya()
 {
 cout<<"1.ASHAM"<<endl;
 cout<<"2.KHAMBAHLIYA"<<endl;
 cout<<"3.VIRPUR"<<endl;
 cout<<"4.BILKHA"<<endl;
 cout<<"5.KHADIYA"<<endl;
 cout<<"6.DUNGARPUR"<<endl;
 cout<<"7.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=8;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=9;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=11;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=15;
	rupay=person*rs;
	break;
	}
	case 6:
	{
	rs=18;
	rupay=person*rs;
	break;
	}
	case 7:
	{
	rs=20;
	rupay=person*rs;
	break;
	}
 }
 return 0;
 }
int ticket::asham()
{
 cout<<"1.KHAMBAHLIYA"<<endl;
 cout<<"2.VIRPUR"<<endl;
 cout<<"3.BILKHA"<<endl;
 cout<<"4.KHADIYA"<<endl;
 cout<<"5.DUNGARPUR"<<endl;
 cout<<"6.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
{
	 case 1:
	 {
	 rs=5;
	 rupay=person*rs;
	 break;
	 }
	 case 2:
	 {
	 rs=7;
	 rupay=person*rs;
	 break;
	 }
	 case 3:
	 {
	 rs=11;
	 rupay=person*rs;
	 break;
	 }
	 case 4:
	 {
	 rs=15;
	 rupay=person*rs;
	 break;
	 }
	 case 5:
	 {
	 rs=17;
	 rupay=person*rs;
	 break;
	 }
	 case 6:
	 {
	 rs=19;
	 rupay=person*rs;
	 break;
	 }
}
return 0;
}
int ticket::khambhaliya()
{
 cout<<"1.VIRPUR"<<endl;
 cout<<"2.BILKHA"<<endl;
 cout<<"3.KHADIYA"<<endl;
 cout<<"4.DUNGARPUR"<<endl;
 cout<<"5.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=9;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=13;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=15;
	rupay=person*rs;
	break;
	}
	case 5:
	{
	rs=17;
	rupay=person*rs;
	break;
	}
 }
return 0;
}
int ticket::virpur()
{
 cout<<"1.BILKHA"<<endl;
 cout<<"2.KHADIYA"<<endl;
 cout<<"3.DUNGARPUR"<<endl;
 cout<<"4.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=5;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=11;
	rupay=person*rs;
	break;
	}
	case 4:
	{
	rs=15;
	rupay=person*rs;
	break;
	}
 }
return 0;
}
int ticket::bilkha()
{
 cout<<"1.KHADIYA"<<endl;
 cout<<"2.DUNGARPUR"<<endl;
 cout<<"3.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	rs=7;
	rupay=person*rs;
	break;
	}
	case 2:
	{
	rs=10;
	rupay=person*rs;
	break;
	}
	case 3:
	{
	rs=14;
	rupay=person*rs;
	break;
	}
 }
return 0;
}
int ticket::khadiya()
{
 cout<<"1.DUNGARPUR"<<endl;
 cout<<"2.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	 case 1:
	 {
	 rs=5;
	 rupay=person*rs;
	 break;
	 }
	 case 2:
	 {
	 rs=10;
	 rupay=person*rs;
	 break;
	 }
 }
return 0;
}
int ticket::dungarpur()
{
 cout<<"1.JUNAGADH"<<endl<<endl;
 cout<<"ENTER THE DESTINATION NO"<<endl;
 cin>>dstation;

 cout<<endl;
 cout<<"EMTER THE NUMBER OF TICKET"<<endl;
 cin>>person;
	switch(dstation)
 {
	case 1:
	{
	 rs=7;
	 rupay=person*rs;
	 break;
	}
 }
return 0;
}
 int ticket::display()
 {
 cout<<"****************************"<<endl;
 cout<<"***********GSRTC************"<<endl;
 cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
 cout<<setw(19)<<"   ***********************"<<endl;
 cout<<setw(19)<<"   *          *          * "<<endl;
 cout<<setw(19)<<"   * * AMRELI DEVISION * *"<<endl;
 cout<<setw(19)<<"   *          *          *"<<endl;
 cout<<setw(19)<<"   ***********************"<<endl;
 cout<<setw(20)<<"       * DHARI DEPOT *   "<<endl;
 cout<<endl;
 cout<<"******XXXXXXXXXXXXXXX*******"<<endl;
 cout<<setw(17)<<"TICKET NO="<<i<<endl;
 cout<<setw(15)<<"TICKET="<<person<<endl;
 cout<<setw(12)<<rs<<"x"<<person<<endl;
 cout<<setw(12)<<"RS="<<rupay<<endl;
 cout<<"******XXXXXXXXXXXXXXX*******"<<endl;
 cout<<"....WISH YOU HAPPY JOURNY...."<<endl;
 cout<<".THANKS FOR TRAVELING WITH US.";
 i++;
  return 0;
 }
int main()
{
	clrscr();
	ticket t;
	int cstation;
	while(1)
{
	 cout<<"1.DHARI"<<endl;
	 cout<<"2.MALSIKA"<<endl;
	 cout<<"3.VEKARIYA"<<endl;
	 cout<<"4.LALPUR"<<endl;
	 cout<<"5.KALAVAD"<<endl;
	 cout<<"6.KALSHARI"<<endl;
	 cout<<"7.VISAVADAR"<<endl;
	 cout<<"8.MONIYA"<<endl;
	 cout<<"9.ASHAM"<<endl;
	 cout<<"10.KHAMBAHLIYA"<<endl;
	 cout<<"11.VIRPUR"<<endl;
	 cout<<"12.BILKHA"<<endl;
	 cout<<"13.KHADIYA"<<endl;
	 cout<<"14.DUNGARPUR"<<endl;
	 cout<<"15.EXIT"<<endl<<endl;
	 cout<<"ENTER CURRENT STATIO NO"<<endl;
	 cin>>cstation;
	 clrscr();
	 switch(cstation)
{
	 case 1:
	 {
	 t.dhari();
	 getch();
	 clrscr();
	 t.display();
	 break;
	 }
	 case 2:
	 {
	t.malsika();
	getch();
	clrscr();
	t.display();
	getch();
	break;
	 }
	 case 3:
	 { t.vekariya();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 4:
	 {
	 t.lalpur();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 5:
	 {
	 t.kalavad();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 6:
	 {
	 t.kalshari();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 7:
	 {
	 t.visavadar();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 8:
	 {
	 t.moniya();
	 getch();
	 clrscr();
	 t.display();

	 getch();
	 break;
	 }
	 case 9:
	 {
	 t.asham();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 10:
	 {
	 t.khambhaliya();
	 getch();
	 clrscr(),
	 t.display();
	 getch();
	 break;
	 }
	 case 11:
	 {
	 t.virpur();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 12:
	 {
	 t.bilkha();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 13:
	 {
	 t.khadiya();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 14:
	 {
	 t.dungarpur();
	 getch();
	 clrscr();
	 t.display();
	 getch();
	 break;
	 }
	 case 15:
	 {
	 cout<<"ENTER ANY KEY TO EXIT.....";
	 getch();
	 return 0;
	 }

}
getch();
clrscr();
}
}
