#include <iostream>
#include <string>
using namespace std;

class User{
	
	protected:
		
		string name;
		string address;
		int phoneNo;
		string emailAddress;
	public:
		void verifyLogin();
		void displayDetails();
		void setUserDetails();
		User();
		User(string Name,string Address,int pnumber,string email);
		~User();
};

