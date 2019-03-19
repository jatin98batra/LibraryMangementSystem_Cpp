#include"headers.h"
#include"class.h"
using namespace std;
int periodical::getPeriodical()
{
	cout<<"Enter PeriodicalName"<<endl;
	cin>>periodicalName;
	cout<<"Enter month-year: "<<endl;
	cin>>month;
	cout<<"Publications:"<<endl;
	cin>>publications;
	strcpy(status,"ON_SHELF");	
	

	return 0;

}
