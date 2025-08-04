#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
    int decimalNumber = 75;  

    bitset<32> binaryRepresentation(decimalNumber);

    string binaryString = binaryRepresentation.to_string();

    cout << "Decimal: " << decimalNumber << endl;
    cout << "Binary : " << binaryString << endl;

    return 0;
}