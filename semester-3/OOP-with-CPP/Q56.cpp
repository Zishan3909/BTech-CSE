//Template are the foundation of generic programming which involves writing code in a way that is independent of any particular type .
//Write a program that can create a list(create a class list)of given type (int, float ,char etc) and perform insertion and deletion on list object.
#include <iostream>
using namespace std;

template <class T>
class  List {
    T a[100];
    int n;

    public:
    List(){
        n = 0;
    }
    void insert(T x){
        if (n >= 100) {
            cout << "List is full!" << endl;
            return;
        }
        a[n] = x;
        n++;
    }
    void deleteElement(int pos){
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }
    void display(){
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    List<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout<<"Original List: ";
    list.display();

    list.deleteElement(2);
    cout<<"List after deletion: ";
    list.display();

    return 0;
}
