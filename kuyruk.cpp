// Created by kali on 10/18/24.
#include <iostream>
#define MAXSIZE 50
using namespace std;

class Queue {
  int dizi[MAXSIZE];
  int arka;
  int on;

public:
  Queue() {
    arka = -1;
    on = -1;
  }

  void add() {
    int eleman;
    if (arka == MAXSIZE - 1) {
      cout << "Queue is full" << endl;
    } else {
      cout << "Element: ";
      cin >> eleman;
      if (on == -1) {
        on = 0;
      }
      arka++;
      dizi[arka] = eleman;
    }
  }

  void remove() {
    if (on == -1 || on > arka) {
      cout << "Element to be deleted yok." << endl;
      return;
    } else {
      cout << "Element to be removed: " << dizi[on] << endl;
      on++;
    }
  }

  void display() {
    if (on == -1) {
      cout << "Queue is empty" << endl;
    } else {
      for (int i = on; i <= arka; i++) {
        cout << dizi[i] << " " << endl;
      }
    }
  }
};

int main() {
  int choice;
  Queue q;
  while (1) {
    cout << "1. Add Element" << endl;
    cout << "2. Remove Element" << endl;
    cout << "3. Print Queue" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;
    switch (choice) {
    case 1: q.add();
      break;
    case 2: q.remove();
      break;
    case 3: q.display();
      break;
    case 4: exit(0);
      break;
    default: cout << "Invalid Input" << endl;
    }
  }
  return 0;
}
