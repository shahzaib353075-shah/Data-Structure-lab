#include "stack.h"

int main() {
    myStack<int> stack(5);

    int choice, value;

    do {
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            stack.push(value);
            break;

        case 2:
            cout << "Popped: " << stack.pop() << endl;
            break;

        case 3:
            cout << "Top: " << stack.top() << endl;
            break;

        case 4:
            stack.display();
            break;

        case 5:
            cout << "Exit..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}