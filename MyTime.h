// Add documentation for each function

#include <iostream>

    
class MyTime
{   
	public:

		// Constructor
		/**
		 * @brief Construct a new My Time object with default 0 values
		 * 
		 * @param h hours
		 * @param m minutes
		 */
		MyTime(int h = 0, int m = 0);   

		// Member functions

		/**
		 * @brief sets time according to arguements
		 * 
		 * @param h Hours
		 * @param m Minutes
		 */
		void Reset(int h, int m);

		/**
		 * @brief  prompts user to input time into class
		 * 
		 * @param ins Input Stream
		 */
		void input(std::istream& ins);            

		/**
		 * @brief outputs time class
		 * 
		 * @param outs 
		 */
		void output(std::ostream& outs) const;

		/**
		 * @brief Get the hours object
		 * 
		 * @return int hours
		 */
		int get_hours() const{return hours;}

		/**
		 * @brief Get the minutes object
		 * 
		 * @return int minutes
		 */
		int get_minutes() const{return minutes;}


		// Overloaded operator functions

		/**
		 * @brief adds two time classes together
		 * 
		 * @param t2 time class
		 * @return MyTime new time class
		 */
		MyTime operator + (const MyTime& t2) const;
	
		/**
		 * @brief subtracts t2 from t1
		 * 
		 * @param t2 time class
		 * @return MyTime new time class
		 */
		MyTime operator - (const MyTime& t2) const;
	
		/**
		 * @brief multiples time by an integer
		 * 
		 * @param num integer
		 * @return MyTime new time class
		 */
		MyTime operator * (int num) const;

		/**
		 * @brief divides time class by an integer
		 * 
		 * @param num integer
		 * @return MyTime new time class
		 */
		MyTime operator / (int num) const;

		/**
		 * @brief compares 2 times to test equivalancy
		 * 
		 * @param t2 
		 * @return true 
		 * @return false 
		 */
		bool operator == (const MyTime& t2) const;

		/**
		 * @brief tests if t1 is greater than t2
		 * 
		 * @param t2 
		 * @return true 
		 * @return false 
		 */
		bool operator < (const MyTime& t2) const;

		/**
		 * @brief tests if t2 is greater that or equal to t1
		 * 
		 * @param t2 
		 * @return true 
		 * @return false 
		 */
		bool operator <= (const MyTime& t2) const;
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };

 /**
  * @brief allows user to input time through input stream
  * 
  * @param ins input stream
  * @param t1 time class
  * @return std::istream& 
  */
std::istream& operator >>(std::istream& ins, MyTime& t1);
		
 /**
  * @brief allows user to output time through output stream
  * 
  * @param ins output stream
  * @param t1 time class
  * @return std::istream& 
  */
std::ostream& operator <<(std::ostream& outs, const MyTime& t1) ;