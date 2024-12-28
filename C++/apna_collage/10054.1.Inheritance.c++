// single inheritance
#include <iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout << "Func A " << endl;
    }
};

class B : public A{

};

int main(){
    B b;
    b.Afunc();
}


// Multliple inheritance
#include <iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout << "func A" << endl;
    }
};

class B{
    public:
    void Bfunc(){
        cout << "func B" << endl;
    }
};

class C : public A, public B{

};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}


// Multi level inheritance
#include <iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout << "func A" << endl;
    }
};

class B : public A{
    public:
    void Bfunc(){
        cout << "func B" << endl;
    }
};

class C : public B{

};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
}