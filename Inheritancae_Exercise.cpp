#include <iostream>
#include <cmath>
using namespace std;

class simpalCalculator
{

protected:
    float num1, num2, result;
    char op;

public:
    void giveData()
    {

        cout << "Enter the first number :";
        cin >> num1;

        cout << "Enter any of these operation Ex(+,-,*,/) :";
        cin >> op;

        cout << "Enter the second number :";
        cin >> num2;

        if (op == '+')
        {
            result = num1 + num2;
        }

        else if (op == '-')
        {
            result = num1 - num2;
        }

        else if (op == '*')
        {
            result = num1 * num2;
        }

        else if (op == '/')
        {
            result = num1 / num2;
        }
    }

    void displayData()
    {
        cout << "The result is :" << result << endl;
    }
};

class scientificCalculator
{

protected:
    double snum1, snum2, sresult;
    string sop;

public:
    void SgiveData()
    {

        cout << "Enter the first number :";
        cin >> snum1;

        cout << "Enter any of these Scientific operation Ex(pow,sqrt,exp,tan) :";
        cin >> sop;

        if ((sop == "sqrt") || (sop == "exp") || (sop == "tan"))
        {
            goto sqt;
        }

        cout << "Enter the second number :";
        cin >> snum2;
    sqt:
        if (sop == "pow")
        {
            sresult = pow(snum1, snum2);
        }

        else if (sop == "sqrt")
        {
            sresult = sqrt(snum1);
        }

        else if (sop == "exp")
        {
            sresult = exp(snum1);
        }

        else if (sop == "tan")
        {
            sresult = tan(snum1);
        }
    }

    void sdisplayData()
    {
        cout << "The result is :" << sresult << endl;
    }
};

class hybridCalculator : public simpalCalculator, public scientificCalculator
{
public:
    hybridCalculator(void)
    {
        int temp;
        cout << "Enter Which type of calculator you want to use :\nEnter 1 for simple calculator\nEnter 2 for scintific calculator\n=";
        cin >> temp;
        if (temp == 1)
        {
            giveData();
            displayData();
        }
        else if (temp == 2)
        {
            SgiveData();
            sdisplayData();
        }
    }
    //Q1.Ans : We are using Multiple Inheritence.
    //Q2.Ans : We are using public mode for both classes.
}; //Q3.Ans : This hybridCalculator class inheritetid from simpleCalculator and scientificCalculator.

int main()
{

    hybridCalculator s1;

    return 0;
}
