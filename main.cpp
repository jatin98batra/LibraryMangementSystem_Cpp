#include"headers.h"
#include"class.h"
#include"declarations.h"
int main()
{
	int choice;
	char reply = 'y';
	do
	{
	choice=menu();
	selection(choice);
	cout<<"Do you Want to Continue?(y/n)"<<endl;
	cin>>reply;
	}while((reply == 'y')||(reply == 'Y'));

return 0;
}
