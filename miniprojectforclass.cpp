#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAX_ITEMS = 100; // Maximum number of items

class MyStack {
public:
    MyStack() : top(-1) {}

    void push(string item) {
        if (top < MAX_ITEMS - 1) {
            items[++top] = item;
        }
    }

    string pop() {
        if (top >= 0) {
            return items[top--];
        }
        return "";
    }

    bool isEmpty() {
        return top == -1;
    }

private:
    string items[MAX_ITEMS];
    int top;
};

bool isInArray(const string& item, const string* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (item == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    MyStack foodStack;
    MyStack stationeryStack;
    MyStack sportsStack;

    char continueInput;
    char item[100]; // Buffer for input

    do {
        cout << "Enter an item: ";
        fgets(item, sizeof(item), stdin); // Read a string from stdin

        // Remove the trailing newline character if present
        size_t length = strlen(item);
        if (length > 0 && item[length - 1] == '\n') {
            item[length - 1] = '\0';
        }

        // Convert item to lowercase for category checking
        for (int i = 0; i < length; i++) {
            item[i] = tolower(item[i]);
        }

        cout << "Select a category for the item (food, stationary, sports): ";
        string category;
        cin >> category;
        
        if (category == "food") {
            foodStack.push(item);
            cout << "Item added to the Food category!" << endl;
        } else if (category == "stationary") {
            stationeryStack.push(item);
            cout << "Item added to the Stationery category!" << endl;
        } else if (category == "sports") {
            sportsStack.push(item);
            cout << "Item added to the Sports category!" << endl;
        } else {
            cout << "Category not recognized: " << category << endl;
        }

        cout << "Do you want to enter another item? (y/n): ";
        cin >> continueInput;
        cin.ignore(); // Ignore the newline character left in the input buffer
    } while (continueInput == 'y' || continueInput == 'Y');

    // Display the contents of individual stacks
    cout << "\nFood Stack:" << endl;
    while (!foodStack.isEmpty()) {
        cout << foodStack.pop() << endl;
    }

    cout << "\nStationery Stack:" << endl;
    while (!stationeryStack.isEmpty()) {
        cout << stationeryStack.pop() << endl;
    }

    cout << "\nSports Stack:" << endl;
    while (!sportsStack.isEmpty()) {
        cout << sportsStack.pop() << endl;
    }

    return 0;
}

