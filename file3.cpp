#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int value){x=value;}
    void display() { cout << x; }  
};

int main() {
    Test obj(10);
    obj.display();
    return 0;
}
