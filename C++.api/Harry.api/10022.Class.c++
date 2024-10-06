#include <iostream>
#include <cstdlib> // For exit()
using namespace std;

class binary
{
    string s;

public:
    void read();
    void check_binary();
};

void binary ::read()
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}

void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary" << endl;
            exit(0);
        }
    }
}

int main()
{
    binary obj;

    obj.read();
    obj.check_binary();
    return 0;
}