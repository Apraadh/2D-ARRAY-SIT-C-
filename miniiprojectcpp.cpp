#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

// Function to display the contents of a stack
template <typename T>
void displayStack(stack<T> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    queue<string> itemQueue;
    stack<string> foodStack, stationeryStack, sportsStack;

    char choice;
    do {
        cout << "Enter the arriving item (F for Food, S for Stationery, X for Sports, Q to quit): ";
        cin >> choice;

        if (choice == 'F' || choice == 'S' || choice == 'X') {
            string item;
            cout << "Enter the name of the item: ";
            cin >> item;

            itemQueue.push(item);

            switch (choice) {
                case 'F':
                    foodStack.push(item);
                    break;
                case 'S':
                    stationeryStack.push(item);
                    break;
                case 'X':
                    sportsStack.push(item);
                    break;
            }
        } else if (choice != 'Q') {
            cout << "Invalid input. Please enter F, S, X, or Q." << endl;
        }

    } while (choice != 'Q');

    cout << "Food Items (" << foodStack.size() << "): ";
    displayStack(foodStack);

    cout << "Stationery Items (" << stationeryStack.size() << "): ";
    displayStack(stationeryStack);

    cout << "Sports Items (" << sportsStack.size() << "): ";
    displayStack(sportsStack);

    return 0;
}

