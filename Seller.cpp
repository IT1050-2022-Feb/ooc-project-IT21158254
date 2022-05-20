#include <iostream>
#include <string>
#include "Product.h"
#include "User.h"
#include "Discount.h"
#include "Feedback.h"
#define SIZE4 1;
using namespace std;

Seller::Seller(){
	
	Seller_ID="";
	password="";
	product[0]=new Product(0);
	discount[0]=new Discount(0,0);
	
}
Seller::Seller(string Name,string Address,int pnumber,string email,string sellerid,string pass,int pid,int disid,int percentage,Feedback *f):User(string Name,string Address,int pnumber,string email){
	
	Seller_ID=sellerid;
	password=pass;
	product[0]=new Product(pid);
	discount[0]=new Discount(disid,percentage);
	feedback[0]=f;
	
	
}

Seller::~Seller()
	
	cout<<"Seller Deleted account"<<endl;
	delete product[0];
	delete discount[0];
	cout<<"End"<<endl;
}




