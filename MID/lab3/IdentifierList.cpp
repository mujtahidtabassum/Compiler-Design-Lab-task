#include <iostream>
#include <fstream>
using namespace std;

void IndentifierList(string str)
{
    bool isIdentifer = true;


        if(!(str[0] >= 'A' && str[0] <= 'Z' ||
           str[0] >= 'a' && str[0] <= 'z' ||
           str[0] == '_')
        )
        {
            isIdentifer = false;
        }

    for (int i = 1; i < str.length(); i++) {
        if(!(str[i] >= 'A' && str[i] <= 'Z' ||
           str[i] >= 'a' && str[i] <= 'z' ||
           str[i] >= '0' && str[i] <= '9' ||
           str[i] == '_')
        ){
            isIdentifer = false;
        }
    }

    if (isIdentifer)
        cout << str << ": Identifier." << endl;
    else
        cout << str << ": Not identifier." << endl;
}


int main()
{
    ifstream file1("sample.txt");
    string strLine;
    while(getline(file1, strLine)){
        IndentifierList(strLine);
    }

    return 0;
}
