//Create a Base class that consists of private, protected and public data members and member functions.
//Try using different access modifiers for inheriting Base class to the Derived class and create a table that summarizes the above three modes (when derived in public, protected and private modes)
//and shows the access specifier of the members of base class in the derived class.
#include <iostream>
using namespace std;

class Base {
private:
    int private_data;
    void private_function() {
        private_data = 10;
    }

protected:
    int protected_data;
    void protected_function() {
        protected_data = 20;
    }

public:
    int public_data;
    void public_function() {
        public_data = 30;
    }
};

class Derived_Public : public Base {
public:
    void access_members() {
        public_data = 30;
        protected_data = 20;
        protected_function();
        public_function();
    }
};

class Derived_Private : private Base {
public:
    void access_members() {
        public_data = 30;
        protected_data = 20;
        protected_function();
        public_function();
    }
};

class Derived_Protected : protected Base {
public:
    void access_members() {
        public_data = 30;
        protected_data = 20;
        protected_function();
        public_function();
    }
};

int main() {
    Derived_Public public_object;
    Derived_Protected protected_object;
    Derived_Private private_object;

    public_object.access_members();
    protected_object.access_members();
    private_object.access_members();

    cout << "Access specifier of Base members in Derived classes\n\n";
    cout << "Base member       Public       Protected     Private\n";
    cout << "Private member    Not visible   Not visible   Not visible\n";
    cout << "Protected member  Protected     Protected     Private\n";
    cout << "Public member     Public        Protected     Private\n";

    return 0;
}
