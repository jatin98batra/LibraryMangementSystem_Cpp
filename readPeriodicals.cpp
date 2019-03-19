#include"headers.h"
#include"class.h"
using namespace std;
int periodical::readPeriodicals()
{
	ifstream readPeriodicals("periodicals.dat",ios::binary);
	readPeriodicals.seekg(0,ios::end);
	int temp;
	int pointer = readPeriodicals.tellg();
	if(pointer == -1)
	{
		cout<<"No Records Present"<<endl;
		return -1;
	}
	int totalPeriodicals = pointer/sizeof(book);
	cout<<"Total Periodicals:"<<totalPeriodicals<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	readPeriodicals.seekg(0,ios::beg);
	periodical p1;
	temp=1;
	while(totalPeriodicals--)
	{
		readPeriodicals.read(reinterpret_cast<char*>(&p1),sizeof(periodical));
		cout<<temp<<". ";
		p1.showPeriodical();	
		cout<<"---------------------------------------------------------"<<endl;
		temp++;
	}

return 0;
}
