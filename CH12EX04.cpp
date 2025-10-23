#include <iostream> //Line 1
#include <iomanip> //Line 2
using namespace std; //Line 3

class classExample
{
public:
    void setX(int a);
    //Function to set the value of x
    //Postcondition: x = a;
    void print() const;
    //Function to output the value of x
private:
    int x;
};


void classExample::setX(int a)
{
    x = a;
}

void classExample::print() const
{
    cout << "x = " << x << endl;
}


int main()
{
    classExample *cExpPtr; //Line 1
    classExample cExpObject; //Line 2

    cExpPtr = &cExpObject; //Line 3

    cExpPtr->setX(5); //Line 4
    cExpPtr->print(); //Line 5

    return 0;
}
