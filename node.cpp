#include<iostream>
#include<string>

using namespace std;
class NodeStudent {

public:
	int firstSubject;
	int secondSubject;
	int thirdSubject;
	string firstName;
	string lastName;
	NodeStudent* next;
	NodeStudent() {
		firstSubject = 0;
		secondSubject = 0;
		thirdSubject = 0;
		firstName = "";
		lastName = "";
		next = nullptr;
	}
	NodeStudent(int firstSubject, int secondSubject, int thirdSubject, string firstName, string lastName) {
		this->firstSubject = firstSubject;
		this->secondSubject = secondSubject;
		this->thirdSubject = thirdSubject;
		this->firstName = firstName;
		this->lastName = lastName;
		this->next = nullptr;
	}

	void printNode() {
		cout << "First name: " << firstName << endl << "Last name: " << lastName << endl;
		cout << "Grade for firstSubject is: " << firstSubject << "\nGrade for second subject is: " << secondSubject << "\nGrade for third subject is: " << thirdSubject << endl;
		
	}

};
