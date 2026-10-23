// student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student {
	protected:
		std::string nameFirst;
		std::string nameLast;
		int credits;
		Address* address;
		Date* dateBorn;
		Date* dateGraduation;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		void setLastFirst();
		Address getAddress(); // should this be a pointer?
		void setAddress();
		Date getBorn(); // pointer?
		void setBorn();
		Date getGraduation(); // pointer?
		void setGraduation();
}; // end class def
