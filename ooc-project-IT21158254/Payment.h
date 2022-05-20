class Payment{
	
	private:
		int paymentID;
		string payment_mode;
		string date;
		float amount;
	public:
		Payment();
		Payment(int pid,float pamount);
		void validatePayment();
		void addPayment();
		void displayPayment();
		void cancelPayment();
		~Payment();
		
}; 