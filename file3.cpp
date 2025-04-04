#include <iostream>
using namespace std;

class Test {
public:
    int x;
    void display() { cout << x; }  
};

int main() {
    Test obj;
    obj.display();
    return 0;
}
