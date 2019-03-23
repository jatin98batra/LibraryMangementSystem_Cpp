#include"headers.h"
using namespace std;
int menu()
{

int choice;
cout<<"--------------------------------------------Library Management System---------------------------------------"<<endl;


cout<<"0.Quit"<<endl;
cout<<"1.Enter New Book to the Database"<<endl;
cout<<"2.Enter New Periodical to the Database"<<endl;
cout<<"3.Enter New DVD to the Database"<<endl;
cout<<"4.Book Database"<<endl;
cout<<"5.Periodical Database"<<endl;
cout<<"6.DVD Database"<<endl;
cout<<"7.Check-IN"<<endl;
cout<<"8.Check-OUT"<<endl;
cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
cout<<endl<<endl;




while(1)
{
	cin>>choice;
	if((choice>8)||(choice<0))
	{
		cout<<"Wrong Choice"<<endl;
		continue;
	}
	else
		break;


}
return choice;


}
