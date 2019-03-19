#include"headers.h"
#include"class.h"
#include"declarations.h"
int checkIn()
{

/**********************************CheckIn Menu*************************************************/
	cout<<"1.CheckIn A Book"<<endl;
	cout<<"2.CheckIn A Periodical"<<endl;
	cout<<"3.CheckIn A DVD"<<endl;

	int choice;
	int number;
	cout<<"Enter Choice!"<<endl;
	cin>>choice;
	
	switch(choice)
	{

		case 1:
				
			{
		       		book b1;
				b1.readBooks();
				cout<<"Please Give the Book No. to CheckIn or else Give 0  to  quit "<<endl;	
				cin>>number;
				if(number == 0)
					break;
				if( b1.takeBook(number) == 0)
				{

					cout<<"*********************************UPDATED*************************************"<<endl;
					b1.readBooks();
				}

		      	}

			break;
		case 2:
				
			{
		       		periodical p1;
				p1.readPeriodicals();
				cout<<"Please Give the Periodical No. to CheckIn or else Give 0  to  quit "<<endl;	
				cin>>number;
				if(number == 0)
					break;
				if( p1.takePeriodical(number) == 0)
				{

					cout<<"*********************************UPDATED*************************************"<<endl;
					p1.readPeriodicals();
				}


		      	}
			break;
		case 3:
				
			{
		       		dvd d1 ;
				d1.readDvds();
				cout<<"Please Give the DVD No. to CheckIn or else Give 0  to  quit "<<endl;	
				cin>>number;
				if(number == 0)
					break;
				if( d1.takeDvd(number) == 0)
				{

					cout<<"*********************************UPDATED*************************************"<<endl;
					d1.readDvds();
				}


		      	}
			break;



	}




/***********************************************************************************************/


return 0;
}
