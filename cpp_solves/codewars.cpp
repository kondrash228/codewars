#include <iostream>
#include <stack>

uint64_t descendingOrder(uint64_t a) {   
    int size_counter = 0;

    while (a > 0) {
        a /= 10;
        size_counter++;
    }

    int *arr = new int[size_counter];
    
    // for (int i = 0; i < size_counter; i++) {
    //     arr[i] = a % 10;
    //     a /= 10;
    // }
    int i = 0;
    do
    {
        arr[i++] = a % 10;
        a /=10;
    } while (a);
    
    for (int i = 0; i < size_counter; i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << size_counter;

    delete[] arr;
    return 1;
}

int main() {

    int temp;
    std::cin >> temp;
    const int N = temp;    
    std::stack<int> digits;

    do 
    {    
    digits.push(temp % 10);
    temp /= 10;
    } while(temp);

    while (!digits.empty())
    {
    temp = digits.top();
    digits.pop();
    std::cout << temp << " ";
    }   
    
}

