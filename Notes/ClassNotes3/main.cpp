#include <iostream>
#include <vector>


int main() {

    std::vector<std::string> stringList {"Number1", "Number2", "Number3"};

    for(auto p : stringList){
        std::cout << p << std::endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}