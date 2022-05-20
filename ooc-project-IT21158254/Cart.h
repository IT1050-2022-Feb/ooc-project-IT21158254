#include "Product.h"
#define SIZE2 2;
class Cart{
	
	private:
		int cart_ID;
		string cart_name;
		Product *product[SIZE2];
	
	
	public:
		Cart();
		Cart(int cartid,string cartname);
	    ~Cart();
	    void addCartItem(Product *pro1,Product *pro2);
	    void deleteCartItem();
	    void calcTotalPrice;
	    void displayTotalPrice();
	    void Checkout();
	
};
