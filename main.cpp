#include <iostream>
#include "User.h"
#include "Admin.h"
#include "Seller.h"
#include "Cart.h"
#include "Category.h"
#include "Customer.h"
#include "DeliveryDetails.h"
#include "Discount.h"
#include "Feedback.h"
#include "Order.h"
#include "OrderDetail.h"
#include "Payment.h"
#include "Product.h"
#include "Report.h"
using namespace std;

int main()
{

	User *customer1 = new Customer();							   // Creating object in Customer
	User *Seller1 = new Seller();								   // Creating object in Seller
	User *admin1 = new Admin();									   // Creating object in Admin
	Cart *cart1 = new Cart();									   // Creating object in Cart
	Category *category1 = new Category()						   // Creating object in Cart
		DeliveryDetails *deliverydetails1 = new DeliveryDetails(); // Creating object in DeliveryDetails
	Discount *discount1 = new Discount();						   // Creating object in Discount
	Feedback *feedback1 = new Feedback();						   // Creating object in Feedback
	Order *order1 = new Order();								   // Creating object in Order
	OrderDetail *orderdetails = new OrderDetail();				   // Creating object in OrderDetail
	Payment *payment1 = new Payment();							   // Creating object in OrderDetail
	Product *Product1 = new Product();							   // Creating object in Product
	Report *report1 = new Report();								   // Creating object in Report

	// call functions

	cout << "\t-Customer-\n";
	customer1->verifyLogin();
	customer1->displayDetails();
	cout << endl;

	cout << "\t-Seller-\n";
	Seller1->verifyLogin();
	Seller1->displayDetails();
	cout << endl;

	cout << "\t-Admin-\n";
	admin1->verifyLogin();
	admin1->displayDetails();
	cout << endl;

	cout << "\t-Cart-\n";
	cart1->addItem();
	cart1->CalcTotalPrice();
	cart1->DisplayTotalPrice();
	cart1->Checkout();
	cout << endl;

	cout << "\t-Category-\n";
	category1->getProductsInCategory();
	category1->DisplayCategoryDetails();
	cout << endl;

	cout << "\t-Category-\n";
	category1->getProductsInCategory();
	category1->DisplayCategoryDetails();
	cout << endl;

	cout << "\t-DeliveryDetails-\n";
	DeliveryDetails->DeliveryDetails();
	DeliveryDetails->updateDeliveryStatus();
	cout << endl;

	cout << "\t-Discount-\n";
	discount1->addDiscount();
	discount1->displayDiscout();
	cout << endl;

	cout << "\t-Feedback-\n";
	feedback1->DisplayFeedback();
	feedback1->displayRate();
	cout << endl;

	cout << "\t-Order-\n";
	order1->placeOrder();
	order1->Display();
	cout << endl;

	cout << "\t-OrderDetail-\n";
	orderdetails->displayOrderTotal();
	orderdetails->displayOrderDetails();
	cout << endl;

	cout << "\t-Payment-\n";
	payment1->addPayment();
	payment1->displayPayment();
	cout << endl;

	cout << "\t-Product-\n";
	Product1->displayAvailability();
	Product1->displayItemDetails();
	cout << endl;

	cout << "\t-Report-\n";
	report1->displayReport();
	report1->genarateItemReport();
	cout << endl;

	delete customer1;
	delete Seller1;
	delete admin1;
	delete cart1;
	delete category1;
	delete deliverydetails1;
	delete discount1;
	delete feedback1;
	delete order1;
	delete orderdetails;
	delete payment1;
	delete Product1;
	delete report1;

	return 0;
}
