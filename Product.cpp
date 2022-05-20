#inlcude<iostream>
#include<cstring>
#inlcude "Product.h"
#include "OrderDetail.h"
using namespace std;

Product::Product(){
	
	productID=0;
}

Product::Product(int pid){
	
	productID=pid;
}

Product::~Product(){
	cout<<"product is deleted"<<endl;
	
}


