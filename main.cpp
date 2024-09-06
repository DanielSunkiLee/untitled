#include <iostream>

class LetDebug
{
    public:
    void printNum()
    {
        int s1 = 32767;
        int s2 = 1;
        int s3 = s1 + s2;
        int s4 = s3+s1;
        std::cout << s4 << std::endl;
    }
};
int main() {
    LetDebug* ld = new LetDebug;
    ld->printNum();
    return 0;
}
