/******************************************************************************
Filename:			Deals.cpp
Version:			1.0
Author:				Victor Fernandes
Student No.:			040772243
Course Name/Number:		CST8219 - C++ Programming
Lab Section:			302
Assignment #:			3
Assignment Name:		FleaBay in C++
Due Date:			December 5, 2015
Submission Date:		October 21, 2015
Professor:			Andrew Tyler
Purpose:			The Deals class is a subclass of Items. It contains
				a closure (expiry date), description, and price.
				It reports itself when called.
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

#include "Item.h"

/******************************************************************************
Function Name:			Deals::Deals()
Purpose:			Constructor for the Deals class.
In Parameters:			Date, char*, double
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
Deals::Deals(Date closeDate, char* description, double price) : Item(description, price){
	this->closingDate.day = closeDate.day;
	this->closingDate.month = closeDate.month;
	this->closingDate.year = closeDate.year;
}

/******************************************************************************
Function Name:			Deals::Deals()
Purpose:			Copy constructor for the Deals object.
In Parameters:			Deals&
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
Deals::Deals(Deals& item) : Item(item){
	this->closingDate.day = item.closingDate.day;
	this->closingDate.month = item.closingDate.month;
	this->closingDate.year = item.closingDate.year;
}

/******************************************************************************
Function Name:			Deals::Report()
Purpose:			Print Deal information to the terminal
In Parameters:			N/A
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
void Deals::Report(){
	cout << endl << "** Deal Report **" << endl
		<< "Closing Date: " 
		<< this->closingDate.day << "/"
		<< this->closingDate.month << "/"
		<< this->closingDate.year << endl;
}