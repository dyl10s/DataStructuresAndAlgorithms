#include <iostream>
#include <iomanip>

#include "GVSingleLinkedList.h"

using namespace std;

int main() {

    GVSingleLinkedList numbers;

    numbers.addFirst(20);
    numbers.addFirst(72);
    numbers.addFirst(52);
    numbers.addFirst(34);

    cout << boolalpha << numbers.contains(72) << endl;
    cout << boolalpha << numbers.contains(71) << endl;

    return 0;
}