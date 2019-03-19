#include"headers.h"
#include"class.h"
#include"declarations.h"
using namespace std;
int selection(int choice)
{
	switch(choice)
	{
		
		case 1:	
			{
				book b1;
				b1.getBook();
				ofstream bookFile;
				bookFile.open("books.dat",ios::binary|ios::app);
				bookFile.write(reinterpret_cast<char*>(&b1),sizeof(b1));
			}
			break;
		case 2:
			{
				periodical p1;
				p1.getPeriodical();
				ofstream periodicalFile;
				periodicalFile.open("periodicals.dat",ios::binary|ios::app);
				periodicalFile.write(reinterpret_cast<char*>(&p1),sizeof(p1));
			}
			break;
		case 3: 
			{
				dvd d1;
				d1.getDvd();
				ofstream dvdFile;
				dvdFile.open("dvds.dat",ios::binary|ios::app);
				dvdFile.write(reinterpret_cast<char*>(&d1),sizeof(d1));
			}
			break;


		case 4:	
			{
				book b2;
				b2.readBooks();
			}

			break;
		case 5:	
			{
				periodical p2;
				p2.readPeriodicals();
			}
			break;
		case 6:	
			{
				dvd d2;
				d2.readDvds();
			}
			break;
		case 7:	
			{
				checkIn();
			}
			break;
		case 8:	
			{	
				checkOut();	
			}
			break;



		default:
			cout<<"Oh ! The option isn't present on this version , contact your nearest branch"<<endl;
			break;
			
		 		
	
	
	}
	



return 0;
}
