class StudentList {

public:
    NodeStudent* first;
    NodeStudent* last;
    StudentList() : first(nullptr), last(nullptr) {}
  
  bool is_empty() {
    return first == nullptr;
}

  void addToEnd() {
    cout << "Enter data in format int firstSubject, int secondSubject, int thirdSubject, string firstName, string lastName" << endl;
    int FirstSubject;
    cin >> FirstSubject;
    int SecondSubject;
    cin >> SecondSubject;
    int ThirdSubject;
    cin >> ThirdSubject;
    string FirstName;
    cin >> FirstName;
    string LastName;
    cin >> LastName;
    NodeStudent* p = new NodeStudent(FirstSubject, SecondSubject, ThirdSubject, FirstName, LastName);
    if (is_empty()) {
      first = p;
      last = p;
      return;
    }
    last->next = p;
    last = p;
}
};

int main(){
    StudentList l = StudentList();
    l.addToEnd();
    return 0;
}
