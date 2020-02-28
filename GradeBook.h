//GradeBook.h
//Definition of class GradeBook
#include <string>

class GradeBook{
public:
	explicit GradeBook(std::string);	
	~GradeBook();
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const;
	void determineClassAverage();
private:
	std::string courseName;
	int total = 0;
};
