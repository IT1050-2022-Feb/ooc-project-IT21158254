#include "Product.h"
#define SIZE1 1;
class Category{
	 private:
	 	int categoryID;
	 	string categoryName;
	 	string description;
	 	Product *product[SIZE1];
	 	
	public:
		void getProductsInCategory();
		void DisplayCategoryDetails();
		Category();
		Category(int categoryid,int pid);

	
	
	
};
