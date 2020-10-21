#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
//8 error 3
class A {
public:
    float v;
    float set(float v) {
        A::v += 1.0;
        return v;
    }
    float set(void) {
        A::v = v + 1.0;
        return 0.0;
    }
    float get(float v) {
        v += A::v;
        return v;
    }
};

int main() {
    A a;
    cout << a.get(a.set(a.set(a.set())));


	system("pause");
return 0;
}