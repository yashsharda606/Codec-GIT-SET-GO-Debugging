#include <iostream>
using namespace std;

void recursive(int count) {
    if(count==0)return;
    cout << "Calling function\n";
    recursive(count-1);  
}

int main() {
    recursive(5);
    return 0;
}
