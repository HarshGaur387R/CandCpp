#include <iostream>
using namespace std;

class father
{

public:
    string fEyeColor = "Brown";
    string fHeight = "6.9 inch";
    string fWeight = "80kg";
    string fSkill = "Music Production";
    string fHairColor = "Black";
    string fSkinColor = "Brown";
    string fAddiction = "Alcoholic";
};

class mother
{

public:
    string mEyeColor = "Blue";
    string mHeight = "6.5 inch";
    string mWeight = "75kg";
    string mSkill = "Problem Solving";
    string mHairColor = "Brown";
    string mSkinColor = "Brown";
    string mAddiction = "Coding";
};

class child : protected father, public mother
{

public:
    child()
    {
        cout << "FATHERS BIO DATA" << endl;
        cout << "Father's EyeColor is :" << fEyeColor << endl;
        cout << "Father's Height is :" << fHeight << endl;
        cout << "Father's Weight is :" << fWeight << endl;
        cout << "Father's Skill is :" << fSkill << endl;
        cout << "Father's HairColor is :" << fHairColor << endl;
        cout << "Father's SkinColor is :" << fSkinColor << endl;
        cout << "Father's Addiction is :" << fAddiction << endl;

        cout << "MATHERS BIO DATA" << endl;
        cout << "Mather's EyeColor is :" << mEyeColor << endl;
        cout << "Mather's Height is :" << mHeight << endl;
        cout << "Mather's Weight is :" << mWeight << endl;
        cout << "Mather's Skill is :" << mSkill << endl;
        cout << "Mather's HairColor is :" << mHairColor << endl;
        cout << "Mather's SkinColor is :" << mSkinColor << endl;
        cout << "Mather's Addiction is :" << mAddiction << endl;

        cout << "CHILD BIO DATA" << endl;
        cout << "Child's EyeColor is :" << fEyeColor << endl;
        cout << "Child's Height is :" << fHeight << endl;
        cout << "Child's Weight is :" << fWeight << endl;
        cout << "Child's Skill is :" << mSkill << endl;
        cout << "Child's HairColor is :" << mHairColor << endl;
        cout << "Child's SkinColor is :" << mSkinColor << endl;
        cout << "Child's Addiction is :" << mAddiction << endl;
    }
};

int main()
{

    child sid;

    return 0;
}