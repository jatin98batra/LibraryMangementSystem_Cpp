class book
{
	private:
	char bookName[20];
	char ISBN[20];
	char publications[20];
	char status[20];
	public:
	book(){}
	int takeBook(int);
	int giveBook(int);
	int getBook();
	int readBooks();
	int showBook()
	{
		cout<<"bookName: "<<bookName<<endl;
		cout<<"ISBN: "<<ISBN<<endl;
		cout<<"publications: "<<publications<<endl;
		cout<<"Status: "<<status<<endl;
		return 0;
	}

};


class periodical
{
	private:
	char periodicalName[20];
	char month[20];
	char publications[20];
	char status[20];
	public:
	periodical(){}
	int takePeriodical(int);
	int givePeriodical(int);
	int getPeriodical();
	int readPeriodicals();
	int showPeriodical()
	{
		cout<<"PeriodicalName: "<<periodicalName<<endl;
		cout<<"Month/Year: "<<month<<endl;
		cout<<"publications: "<<publications<<endl;
		cout<<"Status: "<<status<<endl;
		return 0;
	}

};


class dvd
{
	private:
	char dvdName[20];
	int serial;
	char publications[20];
	char status[20];
	public:
	dvd(){}
	int takeDvd(int);
	int giveDvd(int);
	int getDvd();
	int readDvds();
	int showDvd()
	{
		cout<<"DVD Name: "<<dvdName<<endl;
		cout<<"Serial: "<<serial<<endl;
		cout<<"publications: "<<publications<<endl;
		cout<<"Status: "<<status<<endl;
		return 0;
	}

};
