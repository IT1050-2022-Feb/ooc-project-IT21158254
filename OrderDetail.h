
class OrderDetail{
	
	private:
		int orderID;
	    int productID;
	    int quantity;
	
	public:
		void displayOrderTotal();
		void displayOrderDetails();
		OrderDetail();
		OrderDetail(int orderID,int quantity);
		~OrderDetail();
		
	
	
	
}; 
