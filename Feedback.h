
class Feedback{
	
	private:
		int feedback_ID;
		string feedback_msg;
		string fname;
		int rate;
	public:
		void setFeedback();
		void displayFeedback();
		void displayRate();
		Feedback();
		Feedback(int fid,string name,int Rate);
		~Feedback();
};
