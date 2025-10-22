#include <iostream>
using namespace std;

bool checkComment(string str)
{
    bool check = false;
    int len = str.size();
    cout << str[len];
    if (str[0] == '/' && str[1] == '/')
    {
        check = true;
    }
    else if ((str[0] == '/' && str[1] == '*' && str[len - 2] == '*' && str[len - 1] == '/'))
    {
        check = true;
    }

    if(check){
        cout << "comment" << endl;
    }else{
        cout << "not comment" << endl;
    }
}

int main()
{
    checkComment("//This is comment single line");
    checkComment("/*This is comment multi line*/");
    checkComment("/*This is not comment");
    checkComment("This is not comment*/");
}
