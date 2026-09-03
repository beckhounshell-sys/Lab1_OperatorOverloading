// Add documentation for each function

#include <iostream>
    
class MyTime
{   
	public:

		// CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
		// DEFAULT ARGUMENTS
		MyTime();
		MyTime(int h, int m);   

		// Member functions
		void Reset(int h, int m);

		void input(std::istream& ins);            

		void output(std::ostream& outs);

		int get_hours() const{return hours;}

		int get_minutes() const{return minutes;}

		// Friend functions
		friend MyTime operator + (const MyTime& t1, const MyTime& t2);
	
		friend MyTime operator - (const MyTime& t1, const MyTime& t2);
	
		friend MyTime operator * (const MyTime& t1, int num);

		friend MyTime operator / (const MyTime& t1, int num);

		friend std::istream& operator >>(std::istream& ins, MyTime& t);
		
		friend std::ostream& operator <<(std::ostream& outs, const MyTime& t);

		friend bool operator == (const MyTime& t1, const MyTime& t2);

		friend bool operator < (const MyTime& t1, const MyTime& t2);

		friend bool operator <= (const MyTime& t1, const MyTime& t2);
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };