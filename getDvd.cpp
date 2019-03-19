#include"headers.h"
#include"class.h"
using namespace std;
int dvd::getDvd()
{
	cout<<"Enter DVDName"<<endl;
	cin>>dvdName;
	cout<<"Enter Serial:"<<endl;
	cin>>serial;
	cout<<"Publications:"<<endl;
	cin>>publications;
	strcpy(status,"ON_SHELF");	
	

	return 0;

}
