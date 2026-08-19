// Create a class called Invoice that a hardware store might use to represent an invoice for 
// an item sold at the store. An Invoice should include four pieces of information as 
// instance.
// Data Members:
// • partNumber (type String) 
// • partDescription (type String) 
// • quantity of the item being purchased (type int) 
// • price_per_item (type double) 
// Your class should have a constructor that initializes the four instance variables. Provide aset and a get method for each instance variable. In addition, provide a method named 
// getInvoiceAmount() that calculates the invoice amount (i.e., multiplies the quantity by the 
// price per item), then returns the amount as a double value. If the quantity is not positive, it 
// should be set to 0. If the price per item is not positive, it should be set to 0.0. Write a test 
// application named invoiceTest that demonstrates the class Invoice’s capabilities.
#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice(string number, string description, int qty, double price);
    void setPartNumber(string number);
    string getPartNumber() const;
    void setPartDescription(string description);
    string getPartDescription() const;
    void setQuantity(int qty);
    int getQuantity() const;
    void setPricePerItem(double price);
    double getPricePerItem() const;
    double getInvoiceAmount() const;
};

Invoice::Invoice(string number, string description, int qty, double price)
    : partNumber(number), partDescription(description) {
    setQuantity(qty);
    setPricePerItem(price);
}

void Invoice::setPartNumber(string number) {
    partNumber = number;
}

string Invoice::getPartNumber() const {
    return partNumber;
}

void Invoice::setPartDescription(string description) {
    partDescription = description;
}

string Invoice::getPartDescription() const {
    return partDescription;
}

void Invoice::setQuantity(int qty) {
    quantity = qty > 0 ? qty : 0;
}

int Invoice::getQuantity() const {
    return quantity;
}

void Invoice::setPricePerItem(double price) {
    price_per_item = price > 0.0 ? price : 0.0;
}

double Invoice::getPricePerItem() const {
    return price_per_item;
}

double Invoice::getInvoiceAmount() const {
    return quantity * price_per_item;
}

int main() {
    Invoice invoice("A123", "Hammer", 3, 19.99);

    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

    invoice.setQuantity(-2);
    invoice.setPricePerItem(-5.0);
    cout << "After invalid values, quantity: " << invoice.getQuantity() << endl;
    cout << "After invalid values, price per item: "
         << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}