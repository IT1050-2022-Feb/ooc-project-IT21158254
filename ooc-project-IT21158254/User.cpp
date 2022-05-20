#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(){
	
		name="";
		 address="";
		phoneNo=0;
		 emailAddress="";
	
}
User::User(string Name,string Address,int pnumber,string email){
	
	
		name=Name;
		 address=Address;
		phoneNo=pnumber;
		 emailAddress=email;
	
}

User::~User(){
	
	cout<<"Destructor is runing"<<endl;
} 





