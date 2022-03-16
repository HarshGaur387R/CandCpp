#include <iostream>
using namespace std;

///CLASS A///////////////////
class student
{

protected:
    int rollNo;
    string name;

public:
    void give_Data(string, int);
    void print_Data();
};

void student ::give_Data(string N, int R)
{
    name = N;
    rollNo = R;
}
void student ::print_Data()
{
    cout << "The name of student is :" << name << endl;
    cout << "The RollNo of " << name << " is :" << rollNo << endl;
}

///CLASS B////////////////////
class subjects : public student
{

protected:
    float maths;
    float science;

public:
    void give_marks(float, float);
    void print_marks();
};

void subjects ::give_marks(float M, float S)
{
    maths = M;
    science = S;
}

void subjects ::print_marks()
{
    cout << "Marks in maths is :" << maths << endl;
    cout << "Marks in science is :" << science << endl;
}

///CLASS C/////////////////////
class result : public subjects
{

protected:
    float percentage;

public:
    void showResult();
};

void result ::showResult()
{
    print_Data();
    print_marks();
    percentage = (maths + science) / 2;
    cout << "The total percentage is :" << percentage << "%" << endl;
}

int main()
{
  
    result s1;
    s1.give_Data("Harsh Gaur",4590);
    s1.give_marks(66.6,50.5);
    s1.showResult();

    return 0;
}

/*

NOTES :
       If we are inheriting B from A and C from B: [ A-->B-->C-->]
    1. A is the base class for B and B is the base class for C.
    2. A-->B-->C is called Inheritance Path.

*/