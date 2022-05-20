#include <iostream>
#include <string>
#include "Report.h"
using namespace std;

Report::Report(){
	
	reportNo=0;
}

Report::Report(int repno){
	
	reportNo=repno;
}

Report::~Report(){
	
	cout<<"Report was deleted"<<endl;
	
} 
