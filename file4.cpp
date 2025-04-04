#include <iostream>
using namespace std;

void recursive() {
    cout << "Calling function\n";
    recursive();  
}

int main() {
    recursive();
    return 0;
}
