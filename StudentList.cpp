#include "NodeStudent.h"
class StudentList {

public:
    NodeStudent* first;
    NodeStudent* last;
    int size;

    StudentList() : first(nullptr), last(nullptr), size(0) {}

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
        size++;
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
        size--;
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
        size--;
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

    void sort() {
        NodeStudent* a, * b;
        NodeStudent* p1, * p2, * r1, * r2;

        for (p1 = r1 = first; p1 != nullptr; p1 = p1->next) {
            a = p2 = r2 = p1;
            for (b = p1->next; b != nullptr; b = b->next) {
                if (b->lastName < p2->lastName) {
                    r2 = a;
                    p2 = b;
                }
                a = b;
            }

            if (p1 != p2) {
                if (p1 == first)
                    first = p2;
                else
                    r1->next = p2;

                b = p2->next;
                if (p1 == r2) {
                    p2->next = p1;
                    p1->next = b;
                }
                else {
                    a = p1->next;
                    r1->next = p2;
                    r2->next = p1;
                    p1->next = b;
                    p2->next = a;
                }
                p1 = p2;
            }
            r1 = p1;
        }
    }
};

