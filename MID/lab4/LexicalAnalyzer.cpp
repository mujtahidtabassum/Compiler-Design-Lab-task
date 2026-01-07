#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>

using namespace std;

string keywordsArr[] = {"int", "while", "for", "double", "char", "float", "bool", "string", "return", "main","void","if","else","do","switch","case","break","continue",};
int keywordSize = sizeof(keywordsArr)/sizeof(keywordsArr[0]);

bool isKeyword(string str){
    for(auto i: keywordsArr)
    {
        if(i == str) return true;
    }
    return false;
}

void LexicalAnalyzer(string str)
{
     vector <pair<string, string>> tokens;
    for(int i = 0; i < str.size(); i++)
    {
        string token = "";
        char c = str[i];

        if(isspace(c)) continue;

        if(isalpha(c) || c == '_')
        {
            token = "";
            while(isalnum(str[i]) || str[i] == '_')
            {
                token += str[i];
                i++;
            }
            i--;

            if(isKeyword(token)) tokens.push_back({"Keyword", token});
            else tokens.push_back({"Indentifer", token});

        }

        else if(isdigit(c) || c == '.')
        {
            token = "";
            token += c;
            i++;
            while(isdigit(str[i]) || str[i] == '.')
            {
                token += str[i];
            }
            tokens.push_back({"Constant", token});
        }

        else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '=')
        {
            string op(1, c);
            tokens.push_back({"Operator", op});
        }

        else if(c == ';' || c == ',' || c == '(' || c == ')' || c == '{' || c == '}' || c =='<' || c == '>')
        {
            string op(1, c);
            tokens.push_back({"Punctuation", op});
        }
    }

    for(auto token: tokens)
    {
        cout << token.first << ": " << token.second << endl;
    }

}

int main()
{
    ifstream parseText("parse.txt");
    string tempLine;
    while(getline(parseText, tempLine)){
        LexicalAnalyzer(tempLine);
    }

}
