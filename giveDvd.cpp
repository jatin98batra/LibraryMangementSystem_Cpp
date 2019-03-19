#include"headers.h"
#include"class.h"
int dvd::giveDvd(int dvdNo)
{

	fstream readDvds("dvds.dat",ios::binary|ios::in|ios::out);
	readDvds.seekg(0,ios::end);
	dvd d1;
        int pointer = readDvds.tellg();
        if(pointer == -1)
        {
                cout<<"No Records Present"<<endl;
                return -1; //problem
        }
        int totalDvds = pointer/sizeof(dvd);
	if( (dvdNo>totalDvds) || (dvdNo<1) )
	{
		cout<<"Invalid"<<endl;
		return -1;
	
	}
	
	readDvds.seekg(0,ios::beg);

	readDvds.seekg(sizeof(dvd)*(dvdNo-1),ios::beg);
	readDvds.read(reinterpret_cast<char*>(&d1),sizeof(dvd));
	if(strncmp(d1.status,"ON_SHELF",8) == 0)
	{
		strcpy(d1.status,"OFF_SHELF"); //changing status
	}
	else
	{
		cout<<"Already Checked Out"<<endl;
		return -1;
	}
	readDvds.seekg(sizeof(dvd)*(dvdNo-1),ios::beg);
	readDvds.write(reinterpret_cast<char*>(&d1),sizeof(dvd));


		


return 0;
}
