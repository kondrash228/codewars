#include <iostream>

template<typename T>
class SmartPointer {
public:
    SmartPointer(T *ptr) {
        this->prt = ptr;
    }

    ~SmartPointer() {
        delete prt;
    }
    
private:
    T *prt;
};

int main() {
    return 0;
}
