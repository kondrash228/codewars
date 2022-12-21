#include <iostream>
#include <vector>
#include <algorithm>

int countSmileys(std::vector<std::string> arr)
{      

    for (int i = 0; i < arr.size(); i++) {  
       for (int j = 0; j < arr[i].length(); j++) {
            
            std::cout << char(arr[i][]) << "\t";
       }    
    }
  return -1;
}

int main() {
    // {":D", ":~)", ";~)", ":)"}

    std::vector<std::string> a;
    a.push_back(":D");
    a.push_back(":~)");
    a.push_back(";~)");
    a.push_back(":)");

    countSmileys(a);
    std::string a1 = "a";
    std::string b = "b"; 


    return 0;
}