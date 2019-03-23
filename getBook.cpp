#include"headers.h"
#include"class.h"
using namespace std;
int book::getBook()
{

	cout<<"Enter BookName"<<endl;
	cin>>bookName;
	cout<<"Enter ISBN:"<<endl;
	cin>>ISBN;
	cout<<"Publications:"<<endl;
	cin>>publications;
	strcpy(status,"ON_SHELF");	

	return 0;

}
