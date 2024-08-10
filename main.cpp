#include <iostream>

using namespace std;

const int rows = 5;
const int cols = 15;
void displaySeatingOrder(char seats[rows][cols]);
void bookSeat(char seats[rows][cols]);
void displayBookingInfo(char seats[rows][cols]);

int main()
{
    char seats[rows][cols];
    for (int r = 0; r < rows; ++r)
        {
        for (int c = 0; c < cols; ++c)
        {
            seats[r][c] = 'O';
        }
    }

    int choice;
    while (true)
        {
        cout << " Theater Seating Arrangement System "<<endl;
        cout << "1.Display Seating Arrangement"<<endl;
        cout << "2.Book a Seat"<<endl;
        cout << "3.Display Booking Information"<<endl;
        cout << "4.Exit the Program"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
 switch (choice)
        {
            case 1:
                displaySeatingOrder(seats);
                break;
            case 2:
                bookSeat(seats);
                break;
            case 3:
                displayBookingInfo(seats);
                break;
            case 4:
                cout << "Exiting program"<<endl;
            default:
                cout << "Invalid choice! Please select from 1 to 4"<<endl;
        }
    }
}
void displaySeatingOrder(char seats[rows][cols])
{
    cout << " Seating Arrangement "<<endl;
    cout << "   ";
    for (int c = 0; c < cols; ++c)
        {
        cout << " " << c + 1;
    }
    cout << endl;
    for (int r = 0; r < rows; ++r)
    {
        cout << r + 1 << "  ";
        for (int c = 0; c < cols; ++c)
        {
            cout << seats[r][c] << " ";
        }
cout << endl;
    }
}

void bookSeat(char seats[rows][cols])
{
    int r, c;
    cout << "Enter the row and column number of the seat you want to book: ";
    cin >> r >> c;

    --r;
    --c;

    if (r < 0 || r>= rows || c < 0 || c >= cols) {
        cout << "Invalid seat. Please enter valid row and column numbers"<<endl;
        return;
    }

    if (seats[r][c] == 'O')
        {
        seats[r][c] = 'X';
        cout << "Seat at row " << r + 1 << ", column " << c + 1 << " has been booked"<<endl;
    }
    else
        {
            cout << "Seat at row " << r + 1 << ", column " << c + 1 << " is already booked"<<endl;
    }
}
void displayBookingInfo(char seats[rows][cols])
{
    cout << "\n Booking Information "<<endl;
    cout << "Booked Seats:"<<endl;
    for (int r = 0; r < rows; ++r)
        {
        for (int c = 0; c < cols; ++c)
        {
            if (seats[r][c] == 'X')
            {
                cout << "Row " << r + 1 << ", Column " << c + 1 << endl;
            }}}}
