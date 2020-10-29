// Author: johnathan song
// GitHub:
// October 29, 2020
// csis 123a


#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template<class T>
void display(T vals[], int size) {

  for (int i = 0; i < size; i++) {
    cout << vals[i] << " ";
  }
  cout << "\n";
}
int main(int argc, char** argv) {

  int numbers[10] = {100, 98, 95, 101, 68, 35, 103, 95, 77, 120};
  double scores[10] = {10.3, 7.5, 8.1, 4.2, 9.9, 10, 6.75, 4.3, 2.1, 5.8};
  string names[] = {"Bob", "Tina", "Wes", "Geoff", "Dwight"};

  display(numbers, 10);
  display(scores, 10);
  display(names, 5);

  return 0;
}
