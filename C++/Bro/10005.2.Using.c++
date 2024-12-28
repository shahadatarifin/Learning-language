#include <iostream>

using st = std::string;
using fl = float;

int main(){
    st name = "Arifin";
    fl age = 20;

    std::cout << name << '\n';
    std::cout << age << '\n';

}

/*
typedef = reserved keyword used to create an additional
(alias) for another data type.New identifier for an existing type
Helps with readability and reduces typos name.

Use when there is a clear benefit Replaced with
'using' (work better w/ templates)
*/