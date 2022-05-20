#include <iostream>
#include <cstring>
#include "Category.h"
#include "Product.h"
using namespace std;

Category::Category()
{

	categoryID = 0;
}

Category::Category(int categoryid, int pid)
{
	categoryID = categoryid;
	product[0] = new Product(pid);
}
Category::~Category()
{

	cout << "category is removed" << endl;
	for (int i = 0; i < SIZE1; i++)
	{
		delete product[i];
	}
	cout << "the end" << endl;
}
