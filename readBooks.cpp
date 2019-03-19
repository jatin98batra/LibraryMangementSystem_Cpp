#include"headers.h"
#include"class.h"
using namespace std;
int book::readBooks()
{
	ifstream readBooks("books.dat",ios::binary);
	readBooks.seekg(0,ios::end);
	int temp;
	int pointer = readBooks.tellg();
	if(pointer == -1)
	{
		cout<<"No Records Present"<<endl;
		return -1;
	}
	int totalBooks = pointer/sizeof(book);
	cout<<"Total Books:"<<totalBooks<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	readBooks.seekg(0,ios::beg);
	book b1;
	temp=1;
	while(totalBooks--)
	{
	readBooks.read(reinterpret_cast<char*>(&b1),sizeof(book));
	cout<<temp<<". ";
	b1.showBook();	
	temp++;
	cout<<"---------------------------------------------------------"<<endl;
	}

return 0;
}
