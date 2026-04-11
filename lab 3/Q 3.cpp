#include <iostream>
#include <stack>
#include <string>
using namespace std;

class ParkingLot
{
private:
    stack<string> myCarStack;
    int capacity = 8;

public:
    void parkCar(string carNumber)
    {
        if (myCarStack.size() == capacity)
        {
            cout << "Parking is FULL!" << endl;
            return;
        }

        myCarStack.push(carNumber);
        cout << "Car " << carNumber << " parked successfully." << endl;
    }

    void removeCar(string carNumber)
    {
        if (myCarStack.empty())
        {
            cout << "Parking is EMPTY!" << endl;
            return;
        }

        stack<string> tempStack;
        bool found = false;

        while (!myCarStack.empty())
        {
            if (myCarStack.top() == carNumber)
            {
                myCarStack.pop();
                cout << "Car " << carNumber << " removed." << endl;
                found = true;
                break;
            }
            else
            {
                tempStack.push(myCarStack.top());
                myCarStack.pop();
            }
        }

        while (!tempStack.empty())
        {
            myCarStack.push(tempStack.top());
            tempStack.pop();
        }

        if (!found)
        {
            cout << "Car not found!" << endl;
        }
    }

    void displayCars()
    {
        if (myCarStack.empty())
        {
            cout << "No cars parked." << endl;
            return;
        }

        stack<string> temp = myCarStack;

        cout << "Cars in parking (Top to Bottom):" << endl;

        while (!temp.empty())
        {
            cout << temp.top() << endl;
            temp.pop();
        }
    }

    void totalCars()
    {
        cout << "Total parked cars: " << myCarStack.size() << endl;
    }

    void searchCar(string carNumber)
    {
        stack<string> temp = myCarStack;
        bool found = false;

        while (!temp.empty())
        {
            if (temp.top() == carNumber)
            {
                found = true;
                break;
            }
            temp.pop();
        }

        if (found)
            cout << "Car " << carNumber << " is present in parking." << endl;
        else
            cout << "Car not found!" << endl;
    }
};

int main()
{
    ParkingLot p;
    int choice;
    string carNumber;

    do
    {
        cout << endl;
        cout << "1. Park Car" << endl;
        cout << "2. Remove Car" << endl;
        cout << "3. Display Cars" << endl;
        cout << "4. Total Cars" << endl;
        cout << "5. Search Car" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter car number: ";
            cin >> carNumber;
            p.parkCar(carNumber);
            break;

        case 2:
            cout << "Enter car number to remove: ";
            cin >> carNumber;
            p.removeCar(carNumber);
            break;

        case 3:
            p.displayCars();
            break;

        case 4:
            p.totalCars();
            break;

        case 5:
            cout << "Enter car number to search: ";
            cin >> carNumber;
            p.searchCar(carNumber);
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}