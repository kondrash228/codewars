#include <vector>
#include <iostream>

double calcAverage(const std::vector<int> &values) {

    int sum = 0;
    
    if (values.size() == 0) {
        return 0;
    }

    for (size_t i = 0; i < values.size(); i++)
    {
        sum += values[i];
    }

    return sum / values.size();
    
}

int main() {
    std::vector<int> val;

    val.push_back(123);
    val.push_back(123123123);

    calcAverage(val);

}