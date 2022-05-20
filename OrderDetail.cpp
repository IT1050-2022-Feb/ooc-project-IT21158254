#inlcude<iostream>
#include<cstring>
#inlcude "Payment.h"
#inlcude "Product.h"
using namespace std;

OrderDetail::OrderDetail(){
	orderID=0;
	quantity=0;
	
}
OrderDetail::OrderDetail(int orderid,int Quantity){
	
	orderID=orderid;
	quantity=Quantity;
}

OrderDetail::~OrderDetail(){
   
   cout<<"Order details deleted"<<endl;
	
} 
