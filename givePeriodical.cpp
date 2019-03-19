#include"headers.h"
#include"class.h"
int periodical::givePeriodical(int periodicalNo)
{

	fstream readPeriodicals("periodicals.dat",ios::binary|ios::in|ios::out);
	readPeriodicals.seekg(0,ios::end);
	periodical p1;
        int pointer = readPeriodicals.tellg();
        if(pointer == -1)
        {
                cout<<"No Records Present"<<endl;
                return -1; //problem
        }
        int totalPeriodicals = pointer/sizeof(periodical);
	if( (periodicalNo>totalPeriodicals) || (periodicalNo<1) )
	{
		cout<<"Invalid"<<endl;
		return -1;
	
	}
	
	readPeriodicals.seekg(0,ios::beg);

	readPeriodicals.seekg(sizeof(periodical)*(periodicalNo-1),ios::beg);
	readPeriodicals.read(reinterpret_cast<char*>(&p1),sizeof(periodical));
	if(strncmp(p1.status,"ON_SHELF",8) == 0)
	{
		strcpy(p1.status,"OFF_SHELF"); //changing status
	}
	else
	{
		cout<<"Already Checked Out"<<endl;
		return -1;
	}
	readPeriodicals.seekg(sizeof(periodical)*(periodicalNo-1),ios::beg);
	readPeriodicals.write(reinterpret_cast<char*>(&p1),sizeof(periodical));


		


return 0;
}
