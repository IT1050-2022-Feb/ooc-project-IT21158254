#include "Feedback.h"
#include <iostream>
#include <string>
using namespace std;

Feedback::Feedback(){
	
		 feedback_ID=0;
		 feedback_msg="";
		 fname="";
	     rate=0;
}

Feedback::Feedback(int fid,string name,int Rate){
	
	 feedback_ID=0;
	 fname=name;
	 rate=Rate;
}
Feedback::~Feedback(){
	
	cout<<"Feedback was deleted"<<endl;
	
}
