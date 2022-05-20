#include "User.h"
#include "Product.h"
#include "Discount.h"
#include "Feedback.h"
#define SIZE4 1;

class Seller:public User{
	
	private:
		string Seller_ID;
		string password;
		Product *product[SIZE4];
		Discount *discount[SIZE4];
		Feedback *feedback[SIZE4];
	public:
		Seller(string Name,string Address,int pnumber,string email,string sellerid,string pass,int pid,int disid,int percentage,Feedback *f);
		Seller();
		~Seller();
		void addProductDetails();
		void approveFeedbacks();
	
	
};
