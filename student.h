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
		Student();
		~Student();
};
