#include <iostream>
#include <cmath>
using namespace std;

void display_menu() {
    cout << "Select operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Square Root\n";
    cout << "6. Square\n";
    cout << "7. Exit\n";
}

int main() {
    double num1, num2;
    int choice;

    while (true) {
        display_menu();
        cout << "Enter choice (1-7): ";
        cin >> choice;

        if (choice == 7)
            break;

        if (choice == 5 || choice == 6) {
            cout << "Enter number: ";
            cin >> num1;
        } else {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero.\n";
                break;
            case 5:
                cout << "Result: " << sqrt(num1) << endl;
                break;
            case 6:
                cout << "Result: " << num1 * num1 << endl;
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    }

    return 0;
}
