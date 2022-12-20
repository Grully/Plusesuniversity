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
      void print() {
    if (is_empty()) return;
    NodeStudent* p = first;
    while (p) { 
      p->printNode();
      p = p->next;
    }
    cout << endl;
      }
        void remove_first() {
        if (is_empty()) return;
        NodeStudent* p = first;
        first = p->next;
        delete p;
    }

    void remove_last() {
        if (is_empty()) return;
        if (first == last) {
            remove_first();
            return;
        }
        NodeStudent* p = first;
        while (p->next != last) p = p->next;
        p->next = nullptr;
        delete last;
        last = p;
    }
        NodeStudent* operator[] (const int index) {
        if (is_empty()) return nullptr;
        NodeStudent* p = first;
        for (int i = 0; i < index; i++) {
            p = p->next;
            if (!p) return nullptr;
        }
        return p;
    }
};

int main(){
    StudentList l = StudentList();
    l.addToEnd();
    return 0;
}
