#include <iostream>
#include <cassert>

class ptrMemberVarType
{
public:
    void print() const;
    //Function to output the data stored in the array p.
    void insertAt(int index, int num);
    //Function to insert num into the array p at the
    //position specified by index.
    //If index is out of bounds, the program is terminated.
    //If index is within bounds, but greater than the index
    //of the last item in the list, num is added at the end
    //of the list.
    ptrMemberVarType(int size = 10);
    //Constructor
    //Creates an array of the size specified by the
    //parameter size; the default array size is 10.
    ~ptrMemberVarType();
    //Destructor
    //deallocates the memory space occupied by the array p.
    ptrMemberVarType(const ptrMemberVarType& otherObject);
    //Copy constructor
private:
    int maxSize; //variable to store the maximum size of p
    int length; //variable to store the number elements in p
    int *p; //pointer to an int array
};

void ptrMemberVarType::print() const
{
    for (int i = 0; i < length; i++)
        cout << p[i] << " ";
}

void ptrMemberVarType::insertAt(int index, int num)
{
    //if index is out of bounds, terminate the program
    assert(index >= 0 && index < maxSize);
    
    if (index < length)
        p[index] = num;
    else
    {
        p[length] = num;
        length++;
    }
}

ptrMemberVarType::ptrMemberVarType(int size)
    {
    if (size <= 0)
    {
        cout << "The array size must be positive." << endl;
        cout << "Creating an array of the size 10." << endl;
        maxSize = 10;
        }
    else
        maxSize = size;
    length = 0;
    p = new int[maxSize];
}

ptrMemberVarType::~ptrMemberVarType()
{
    delete [] p;
}

//copy constructor
ptrMemberVarType::ptrMemberVarType(const ptrMemberVarType& otherObject)
{
    maxSize = otherObject.maxSize;
    length = otherObject.length;
    p = new int[maxSize];
    for (int i = 0; i < length; i++)
        p[i] = otherObject.p[i];
}
