
class Product
{

private:
	int productID;
	string productName;
	string pro_description;
	float unit_price;

public:
	Product();
	Product(int pid);
	~Product();
	void displayItemDetails();
	void displayAvailability();
	void deleteItemDetails();
	void setProductdetails();
};
