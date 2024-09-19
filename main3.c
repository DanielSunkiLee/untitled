#include <stdio.h>

void show(const char *text) {
    printf("String: %s", text);
}
void show(int number) {
    printf("Number: %d\n", number);
}
int main() {
    const char *text = "Hello, World";
    int number = 10 ;
    show(text);
    show(number);

    return 0;
}
// c 언어는 오버로딩 지원안함