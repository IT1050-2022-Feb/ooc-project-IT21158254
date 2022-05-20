#inlcude "User.h"
#include "Customer.h"
#include "Seller.h"
#include "Report.h"
#define SIZE5 1;


class Admin:public User{
	
   private:
   	string Admin_ID;
   	string password;
   	Customer *cus[SIZE5];
   	Seller *seller[SIZE5];
   	Report *report[SIZE5];
   public:
   	void deleteItemDetails();
   	void updateItemDetails();
   	void createCategory();
   	void manageusers();
   	Admin();
   	Admin(string Name,string Address,int pnumber,string email,string adminid,string pass,Customer *cu,Seller *se,Report *re);
   	~Admin(); 
   	
     
	
	
};