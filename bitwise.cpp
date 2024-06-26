#include <iostream>

using namespace std;

int main() {
    unsigned int number, N;

     
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the bit position to set (0-indexed): ";
    cin >> N;

   
    if (N < 0 || N >= sizeof(unsigned int) * 8) {
        cout << "Invalid bit position. It must be between 0 and " << (sizeof(unsigned int) * 8 - 1) << "." << endl;
    } else {
        
        unsigned int mask = 1 << N; 
        number = number | mask;

        
        cout << "The new number with the " << N << "th bit set is: " << number << endl;
    }

    return 0;
}

