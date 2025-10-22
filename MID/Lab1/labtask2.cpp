
#include <iostream>
using namespace std;

void printOperator(string str)
{
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '=')
        {
            cout << "operator" << count++ << ": " << str[i] << endl;
        }
    }
}

int main()
{
    printOperator("2+3=5");
}
