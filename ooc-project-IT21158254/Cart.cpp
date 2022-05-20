#include<iostream>
#include<cstring>
  #include "Cart.h"
#include "Product.h"

Cart::Cart(){
	
	cart_ID=0;
	cart_name="";
}
Cart::Cart(int cartid,string cartname){
	
	cart_ID=cartid;
	cart_name=cartname;
    
	
}

void Cart::addCartItem(Product *pro1,Product *pro2){
	product[0]=pro1;
	product[1]=pro2;
}

Cart::~Cart(){
	
	cout<<"cart is deleted"<<endl;
	
}



