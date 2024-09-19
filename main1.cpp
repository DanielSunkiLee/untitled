///문제1
#include <iostream>

class SetValue {
    public:
    int x;
    int y;
};

int main() {
    SetValue obj;
    obj.x = 33;
    obj.y = 44;
    std::cout << "X=" << obj.x << ",Y=" << obj.y << std::endl;
}