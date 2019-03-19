#! /bin/bash

library:main.o menu.o selection.o getBook.o getPeriodical.o getDvd.o readBooks.o readPeriodicals.o readDvds.o checkIn.o checkOut.o giveBook.o givePeriodical.o giveDvd.o takeBook.o takePeriodical.o takeDvd.o
	g++ -o library menu.o main.o selection.o getBook.o getPeriodical.o getDvd.o readBooks.o readPeriodicals.o readDvds.o checkIn.o checkOut.o giveBook.o givePeriodical.o giveDvd.o takeBook.o takePeriodical.o takeDvd.o

main.o:main.cpp declarations.h headers.h class.h
	g++ -c main.cpp
menu.o:menu.cpp headers.h declarations.h
	g++ -c menu.cpp

selection.o:selection.cpp declarations.h headers.h class.h
	g++ -c selection.cpp

checkIn.o:checkIn.cpp declarations.h headers.h class.h
	g++ -c checkIn.cpp

checkOut.o:checkOut.cpp declarations.h headers.h class.h
	g++ -c checkOut.cpp



#All the class related functions
getBook.o:getBook.cpp headers.h declarations.h class.h
	g++ -c getBook.cpp
getPeriodical.o:getPeriodical.cpp headers.h declarations.h class.h
	g++ -c getPeriodical.cpp
getDvd.o:getDvd.cpp headers.h declarations.h class.h
	g++ -c getDvd.cpp
readBooks.o:readBooks.cpp headers.h declarations.h class.h
	g++ -c readBooks.cpp
readPeriodicals.o:readPeriodicals.cpp headers.h declarations.h class.h
	g++ -c readPeriodicals.cpp
readDvds.o:readDvds.cpp headers.h declarations.h class.h
	g++ -c readDvds.cpp
giveBook.o:giveBook.cpp headers.h declarations.h class.h
	g++ -c giveBook.cpp
givePeriodical.o:givePeriodical.cpp headers.h declarations.h class.h
	g++ -c givePeriodical.cpp
giveDvd.o:giveDvd.cpp headers.h declarations.h class.h
	g++ -c giveDvd.cpp
takeBook.o:takeBook.cpp headers.h declarations.h class.h
	g++ -c takeBook.cpp
takePeriodical.o:takePeriodical.cpp headers.h declarations.h class.h
	g++ -c takePeriodical.cpp
takeDvd.o:takeDvd.cpp headers.h declarations.h class.h
	g++ -c takeDvd.cpp

