#include"headers.h"
#include"class.h"
using namespace std;
int dvd::readDvds()
{
	ifstream readDvds("dvds.dat",ios::binary);
	readDvds.seekg(0,ios::end);
	int pointer = readDvds.tellg();
	int temp;
	if(pointer == -1)
	{
		cout<<"No Records Present"<<endl;
		return -1;
	}
	int totalDvds = pointer/sizeof(dvd);
	cout<<"Total Dvds:"<<totalDvds<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	readDvds.seekg(0,ios::beg);
	dvd d1;
	temp=1;
	while(totalDvds--)
	{
	readDvds.read(reinterpret_cast<char*>(&d1),sizeof(dvd));
	cout<<temp<<". ";
	d1.showDvd();	
	cout<<"---------------------------------------------------------"<<endl;
	temp++;
	}

return 0;
}
