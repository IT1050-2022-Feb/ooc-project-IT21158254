#include "User.h"
#include "Cart.h"
#include "OrderDetail.h"
#include <iostream>
#include <string>
using namespace std;


Customer::Customer(){
	
		Cust_ID="";
	    password="";
		cart=new Cart(0,"");
	
}

Customer::Customer(string Name,string Address,int pnumber,string email,string Custid,string pass,int cartid,string cartname):User(string Name,string Address,int pnumber,string email){
	
		Cust_ID=Custid;
	    password=pass;
		cart=new Cart(cartid,cartname);
	
}

Customer::~Customer(){
	
	cout<<"Customer deleted account"<<endl;
	delete cart;
	cout<<"end"<<endl;
	
}

