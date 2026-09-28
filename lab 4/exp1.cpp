#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart)
{
    cout << "\n---------- SHOPPING CART ----------\n";

    cout << left << setw(15) << "Item"
         << setw(10) << "Quantity"
         << setw(10) << "Price"
         << setw(12) << "Amount" << endl;

    for (auto item : cart)
    {
        cout << left << setw(15) << item.name
             << setw(10) << item.quantity
             << setw(10) << item.price
             << setw(12) << item.quantity * item.price << endl;
    }
}

double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
    {
        total += item.quantity * item.price;
    }

    return total;
}

void applyDiscount(vector<Item>& cart)
{
    for (auto& item : cart)
    {
        if (item.price > 1000)
        {
            item.price = item.price * 0.90;
        }
    }
}

Item findMostExpensiveItem(const vector<Item>& cart)
{
    auto expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
}

int main()
{
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Item item;

        cout << "\nEnter item " << i + 1 << " name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        cart.push_back(item);
    }

    displayCart(cart);

    double total = calculateTotal(cart);

    cout << "\nTotal amount payable: Rs. "
         << fixed << setprecision(2) << total << endl;

    Item expensive = findMostExpensiveItem(cart);

    cout << "Most expensive item: " << expensive.name
         << " (Rs. " << expensive.price << ")" << endl;

    applyDiscount(cart);

    cout << "\n---------- AFTER DISCOUNT ----------\n";

    displayCart(cart);

    double updatedTotal = calculateTotal(cart);

    cout << "\nUpdated cart total: Rs. "
         << fixed << setprecision(2) << updatedTotal << endl;

    return 0;
}