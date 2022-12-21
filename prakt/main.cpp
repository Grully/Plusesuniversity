int main(){
    StudentList l = StudentList();
    while(true){
        cout<<"Enter 1 to add student on list: " << endl;
        cout<<"Enter 2 to delete last node: " << endl;
        cout<<"Enter 3 to delete first node: " << endl;
        cout << "Enter 4 to print list: " << endl;
        cout << "Enter 5 to sort list by last name: " << endl;
        cout << "Enter 6 to exit: " << endl;
        int a;
        cin >> a;
        switch(a){
            case 1: l.addToEnd();
            cout << "Added" << endl; break;
            case 2: l.remove_last();
            cout << "Removed" << endl; break;
            case 3: l.remove_first();
            cout << "Removed" << endl; break;
            case 4: l.print(); break;
            case 5: l.sort();
            cout << "Sorted" << endl; break;
            case 6: return 0;
        }
    }

}
