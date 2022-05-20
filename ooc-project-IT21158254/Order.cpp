 #include<iostream>
#include<cstring>
#include "OrderDetail.h"
#include "Payment.h"
#include "DeliveryDetails.h"
#include "Customer.h"
#inlcude "Order.h"
using namespace std;

Order::Order(){
	
	
}

Order:: Order(int pid,float pamount,int orderid,int quantity,int deliveryid){
	
	orderdetails=new OrderDetail(orderid,quantity);
	payment=new Payment(pid,pamount);
	deldetails=new DeliveryDetails(deliveryid);
	orderID=orderid;
	
}

Order::~Order(){
    
    cout<<"order ID:"<<orderID<<"deleted"<<endl;
    delete orderdetails;
    delete payment;
    delete orderdetails;
    cout<<"the end"<<endl;
	
	
}

	
	

