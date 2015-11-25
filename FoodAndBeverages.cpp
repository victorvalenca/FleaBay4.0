/******************************************************************************
Filename:			FoodAndBeverages.cpp
Version:			1.0
Author:				Victor Fernandes
Student No.:			040772243
Course Name/Number:		CST8219 - C++ Programming
Lab Section:			302
Assignment #:			3
Assignment Name:		FleaBay in C++
Due Date:			December 5, 2015
Submission Date:		November 25, 2015
Professor:			Andrew Tyler
Purpose:			The Food/Beverage class is a subclass of Items, 
				and contains an expiry date, description, and price.
				It displays info about itself when Report()
				is called.
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

#include "Item.h"

/******************************************************************************
Function Name:			FoodAndBeverages::FoodandBeverage()
Purpose:			Constructor for the Deals class.
In Parameters:			Date, char*, double
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
FoodAndBeverages::FoodAndBeverages(Date expDate, char* description, double price) : Item(description, price){
	this->expiryDate.day = expDate.day;
	this->expiryDate.month = expDate.month;
	this->expiryDate.year = expDate.year;
}

/******************************************************************************
Function Name:			FoodAndBeverages::FoodandBeverage()
Purpose:			Copy constructor for the Food/Beverage class.
In Parameters:			FoodAndBeverages&
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
FoodAndBeverages::FoodAndBeverages(FoodAndBeverages& it) : Item(it){
	this->expiryDate.day = it.expiryDate.day;
	this->expiryDate.month = it.expiryDate.month;
	this->expiryDate.year = it.expiryDate.year;
}

/******************************************************************************
Function Name:			FoodAndBeverages::Report()
Purpose:			Prints Food/Beverage information to the terminal
In Parameters:			N/A
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
void FoodAndBeverages::Report(){
	cout << endl << "** Food and Beverages Report **" << endl
		<< "Closing Date: " 
		<< this->expiryDate.day << "/"
		<< this->expiryDate.month << "/"
		<< this->expiryDate.year << endl;
}