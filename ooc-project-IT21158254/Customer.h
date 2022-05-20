#include "OrderDetail.h"
#include "Cart.h"
#inlcude "User.h"


class Customer::public User{
	
	private:
		string Cust_ID;
		string password;
		Cart *cart;
	public:
		void addFeedback();
		void updateProfile();
		void search();
		void buyproduct();
		Customer();
		Customer(string Name,string Address,int pnumber,string email,string Custid,string pass,int cartid,string cartname);
		~Customer();
	
	
};
