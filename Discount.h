#include "Payment.h"

class Discount{
	
	private:
		int discount_ID;
		int Percentage;
		int discount;
		
	public:
		void generateDiscount();
		void addDiscount( Payment *p);
		void displayDiscount();
		Discount();
		Discount(int discountid,int percentage);
	    ~Discount();
		
	
	
	
};
