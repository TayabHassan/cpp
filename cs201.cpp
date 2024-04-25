#include <iostream>
using namespace std;

int main() {
    cout << "TAYYAB HASSAN" << endl;
    cout << "Student ID: BC230400693 welcome to main menu" << endl;

    char choice;
    do {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                int num;
                cout << "How many numbers do you want to add? ";
                cin >> num;
                int sum = 0;
                for (int i = 0; i < num; ++i) {
                    int value;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> value;
                    sum += value;
                }
                cout << "Result of addition: " << sum << endl;
                break;
            }
            case '2': {
                int num;
                cout << "How many numbers do you want to subtract? ";
                cin >> num;
                int subtract;
                cout << "Enter number 1: ";
                cin >> subtract;
                for (int i = 1; i < num; ++i) {
                    int value;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> value;
                    subtract -= value;
                }
                cout << "Result of subtraction: " << subtract<< endl;
                break;
            }
            case '3': {
                int num;
                cout << "How many numbers do you want to multiply? ";
                cin >> num;
                int product = 1;
                for (int i = 0; i < num; ++i) {
                    int value;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> value;
                    product *= value;
                }
                cout << "Result of multiplication: " << product << endl;
                break;
            }
            case '4': {
                int num;
                cout << "How many numbers do you want to divide? ";
                cin >> num;
                double result;
                cout << "Enter number 1: ";
                cin >> result;
                for (int i = 1; i < num; ++i) {
                    double value;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> value;
                    if (value != 0) {
                        result /= value;
                    } else {
                        cout << "Error: Cannot divide by zero!" << endl;
                        result = 0;
                        break;
                    }
                }
                cout << "Result of division: " << result << endl;
                break;
            }
            case '5':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'y');

    return 0;
}
