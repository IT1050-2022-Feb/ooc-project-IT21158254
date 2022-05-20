#include "OrderDetail.h"
#include "Payment.h"
#include "DeliveryDetails.h"
#inlcude "Customer.h"

class Order{
	
	private:
		int orderID;
	    string orderStatus;
	    float orderTotal;
	    OrderDetail *orderdetails;
	    Payment *payment;
	    DeliveryDetails *deldetails;
	public:
		void placeOrder();
		void updateOrderStatus();
		void CalcOrderTotal();
		void setOrderDetails();
	    Order()
	    Order(int pid,float pamount,int orderid,int quantity,int deliveryid);
	    ~Order();
	
	
};

