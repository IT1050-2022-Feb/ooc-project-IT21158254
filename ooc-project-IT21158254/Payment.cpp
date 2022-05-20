#include<iostream>
#include<cstring>
#inlcude "Payment.h"
using namespace std;



Payment::Payment(){
	paymentID=0;
    payment_mode=" ";
    date=" ";
    amount=0.0;
	
}

Payment::Payment(int pid,float pamount){
	 paymentID=pid;
	 amount=pamount;
}
 
float displayPayment(){
	
	return amount;
}

Payment::~Payment(){
	
	
	cout<<"deleted payment ID:"<<paymentID<<endl;
	
	
}

