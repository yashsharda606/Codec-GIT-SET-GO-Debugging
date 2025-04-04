#include <iostream>
using namespace std;

void repeatMessage(int count, const string& message) {
    if (count == 0) return;
    cout << message << endl;
    repeatMessage(count - 1, message);
}

int main() {
    repeatMessage(5, "Calling function");
    return 0;
}
