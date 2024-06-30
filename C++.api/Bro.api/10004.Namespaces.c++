#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace helloWorld{
    void print(){
        std::cout << "Hello World" << '\n';
    }
}

int main(){
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    helloWorld::print();    
    return 0;
}

/*
Namespace provides a solution for preventing name conflicts
in large projects. Each entity needs a unique name.
A namespace allows for identically named entities
as long as the namespaces are different.
*/