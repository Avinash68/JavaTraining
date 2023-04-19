// Cpp Assignment
#include <iostream>

class A
{
public:
    A(){
        std::cout << "I am the constructor of A\n";
    }
    ~A(){
        std::cout << "I am the destructor of A\n";
    }
};

class B : public A
{

public:
    B()
    {
        std::cout << "I am the constructor of B\n";
    }

    ~B()
    {
        std::cout << "I am the destructor of B\n";
    }
};

class C : public A
{

public:
    C(){
        std::cout << "I am the constructor of C\n";
    }

    ~C(){
        std::cout << "I am the destructor of C\n";
    }
};

class D : public B
{

public:
    D(){
        std::cout << "I am the constructor of D\n";
    }

    ~D(){
        std::cout << "I am the destructor of D\n";
    }
};

class E : public B
{

public:
    E()
    {

        std::cout << "I am the constructor of E\n";
    }

    ~E()
    {

        std::cout << "I am the destructor of E\n";
    }
};

class F : public C
{

public:
    F()
    {

        std::cout << "I am the constructor of F\n";
    }

    ~F()
    {

        std::cout << "I am the destructor of F\n";
    }
};

class G : public C
{

public:
    G()
    {

        std::cout << "I am the constructor of G\n";
    }

    ~G()
    {

        std::cout << "I am the destructor of G\n";
    }
};

class H : public D, public E
{

public:
    H()
    {

        std::cout << "I am the constructor of H\n";
    }

    ~H()
    {

        std::cout << "I am the destructor of H\n";
    }
};

class I : public F, public G
{

public:
    I()
    {

        std::cout << "I am the constructor of I\n";
    }

    ~I()
    {

        std::cout << "I am the destructor of I\n";
    }
};

class J : public H, public I
{

public:
    J()
    {

        std::cout << "I am the constructor of J\n";
    }

    ~J()
    {

        std::cout << "I am the destructor of J\n";
    }
};

int main()
{

    J j;

    return 0;
}
