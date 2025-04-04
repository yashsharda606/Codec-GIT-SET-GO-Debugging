#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int v) { x = v; }
    void show() { cout << x; }
};

int main() {
    Test obj(10);
    obj.show();
}
