#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class NodeStudent {
	int firstSubject;
	int secondSubject;
	int thirdSubject;
	string firstName;
	string lastName;
	NodeStudent* listreference;
	int index;

public:
	NodeStudent() {
		firstSubject = 0;
		secondSubject = 0;
		thirdSubject = 0;
		firstName = "";
		lastName = "";
		listreference = nullptr;
		index = 1;
	}
	NodeStudent(int firstSubject, int secondSubject, int thirdSubject, string firstName, string lastName, int index) {
		this->firstSubject = firstSubject;
		this->secondSubject = secondSubject;
		this->thirdSubject = thirdSubject;
		this->firstName = firstName;
		this->lastName = lastName;
		this->listreference = nullptr;
		this->index = index;
	}

	void printNode() {
		cout << index << ". ";
		cout << "First name: " << firstName << endl << "Last name: " << lastName << endl;
		cout << "Grade for firstSubject is: " << firstSubject << "\nGrade for second subject is: " << secondSubject << "\nGrade for third subject is: " << thirdSubject << endl;
		
	}

};
