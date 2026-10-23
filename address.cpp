// address.cpp

#include <iostream>
#include <address.h>

Address::Address() { // Address constructor
	Address::street = "0000 Street";
	Address::city = "City";
	Address::state = "State";
	Address::zip = "00000";
} // end constructor

void Address::init(street, city, state, zip) { // initializes Address
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
} // end init

void Address::printAddress() { // displays address
	std::cout << Address::street << std::endl;
	std::cout << Address::city << " ";
	std::cout << Address::state << ", ";
	std::cout << Address::zip << std::endl;
} // end printAddress

std::string Address::getStreet() { // returns value of street
	return Address::street;
} // end getStreet()
