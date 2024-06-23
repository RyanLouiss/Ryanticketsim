#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> ticketQueue;
  int customerCount = 1;

  while (true) {
    cout << "Ticket Counter Lobby:" << endl;
    cout << "1. Add a new customer" << endl;
    cout << "2. Serve the next customer" << endl;
    cout << "3. Show the current queue" << endl;
    cout << "4. Exit" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
      ticketQueue.push(customerCount++);
      cout << "Customer " << customerCount - 1 << " added to the queue." << endl;
    } else if (choice == 2) {
      if (ticketQueue.empty()) {
        cout << "Queue is empty." << endl;
      } else {
        int ticketNumber = ticketQueue.front();
        ticketQueue.pop();
        cout << "Serving customer with ticket number " << ticketNumber << endl;
      }
    } else if (choice == 3) {
      if (ticketQueue.empty()) {
        cout << "Queue is empty." << endl;
      } else {
        cout << "Current queue: ";
        while (!ticketQueue.empty()) {
          cout << ticketQueue.front() << " ";
          ticketQueue.pop();
        }
        cout << endl;
      }
    } else if (choice == 4) {
      break;
    } else {
      cout << "Invalid!, Choice The Right Option." << endl;
    }
  }

  return 0;
}