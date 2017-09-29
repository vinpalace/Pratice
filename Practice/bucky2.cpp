#include<string>
#include<iostream>

using namespace std;

class VineethClass
{

private:
    string name;

public:

    VineethClass(string z)
    {

        setName(z);

    }



    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        string y;
        y = name;
        return y;
    }


};


int main()
{
    string here;

    VineethClass vineethObject("Vineeth Sai");
    cout << vineethObject.getName();
    return 0;

}
