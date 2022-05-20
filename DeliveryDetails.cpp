#include<iostream>
#include<cstring>
#include "DeliveryDetails.h"
using namespace std;

DeliveryDetails::DeliveryDetails(){
	
	deliveryID=0;
}

DeliveryDetails::DeliveryDetails(int deliveryid){
	
   deliveryID=deliveryid;
}

DeliveryDetails::~DeliveryDetails(){
	
	cout<<"Delivery Details ID:"<<deliveryID<<endl;
}
 
