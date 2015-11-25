/******************************************************************************
Filename:			ToysAndhobbies.cpp
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
Purpose:			The ToysAndhobbies class is a subclass of Items, 
				and contains a description, price, and target age group.
				It displays info about itself when Report()
				is called.
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

#include "Item.h"

/******************************************************************************
Function Name:			ToysAndHobbies::ToysAndHobbies()
Purpose:			Constructor for the Toys/Hobbies class.
In Parameters:			int, char*, double
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
ToysAndHobbies::ToysAndHobbies(int age, char* description, double price) : Item(description, price) {
	this->suitableAge = age;
}

/******************************************************************************
Function Name:			ToysAndHobbies::ToysAndHobbies()
Purpose:			Copy constructor for the Toys/Hobbies class.
In Parameters:			ToysAndHobbies&
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
ToysAndHobbies::ToysAndHobbies(ToysAndHobbies& it) : Item(it) {
	this->suitableAge = it.suitableAge;
}

/******************************************************************************
Function Name:			ToysAndHobbies::Report()
Purpose:			Prints Toys/Hobbies information to the terminal
In Parameters:			N/A
Out Parameters:			N/A
Version:			1.0
Author:				Victor Fernandes
******************************************************************************/
void ToysAndHobbies::Report(){
	cout << endl << "** Toys AndHobbies Report **" << endl
		<< "Suitable Age Group: " << this->suitableAge << " years." << endl;
}