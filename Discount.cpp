#include <iostream>
#include <string>
#include "Discount.h"
#include "Payment.h"


using namespace std;

Discount::Discount(){
	
	discount_ID=0;
	Percentage=0;
    discount=0;
}
Discount::Discount(int discountid,int percentage){
	discount_ID=discountid;
	Percentage=percentage;
}

void Discount::addDiscount( Payment *p){
	
	discount=(Percentage * p->displayPayment())/100;
}

Discount::~Discount(){
	
	cout<<"discount removed"<<endl;
	
}  




