// address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address {
	protected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(street, city, state, zip);
		void printAddress();
		string getStreet();
		void setStreet();
		string getCity();
		void setCity();
		string getState();
		void getState();
		string getZip();
		void getZip();
}; // end class def
