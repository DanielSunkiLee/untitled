//문제2
#include <iostream>

class SetValue {
private:
    int x;
    int y;
//캡슐화
public:
    void setXY(int a ,int b) {
        x = a;
        y = b;
    }
    void show() {
        std::cout << x << " " << y<<std::endl;

    }
};

int main() {
    SetValue obj;

    obj.setXY(33,44);
    obj.show();
    //system("pause");
    return 0;
}