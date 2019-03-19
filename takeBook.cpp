#include"headers.h"
#include"class.h"
int book::takeBook(int bookNo)
{

	fstream readBooks("books.dat",ios::binary|ios::in|ios::out);
	readBooks.seekg(0,ios::end);
	book b1;
        int pointer = readBooks.tellg();
        if(pointer == -1)
        {
                cout<<"No Records Present"<<endl;
                return -1; //problem
        }
        int totalBooks = pointer/sizeof(book);
	if( (bookNo>totalBooks) || (bookNo<1) )
	{
		cout<<"Invalid"<<endl;
		return -1;
	
	}
	
	readBooks.seekg(0,ios::beg);

	readBooks.seekg(sizeof(book)*(bookNo-1),ios::beg);
	readBooks.read(reinterpret_cast<char*>(&b1),sizeof(book));
	if(strncmp(b1.status,"OFF_SHELF",9) == 0)
	{
		strcpy(b1.status,"ON_SHELF"); //changing status
	}
	else
	{
		cout<<"Already Checked In"<<endl;
		return -1;
	}
	readBooks.seekg(sizeof(book)*(bookNo-1),ios::beg);
	readBooks.write(reinterpret_cast<char*>(&b1),sizeof(book));


		


return 0;
}
