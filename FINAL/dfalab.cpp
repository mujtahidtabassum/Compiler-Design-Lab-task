#include <iostream>
using namespace std;

void computeDFA()
{
    cout << "Write the String: ";
    string str;
    cin >> str;

    char state = 'A';

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a')
        {
            if(state == 'A') state = 'B';
            else if(state == 'B') state = 'D';
            else if(state == 'C') state = 'B';
            else if(state == 'D') state = 'D';
            else if(state == 'E') state = 'F';
            else if(state == 'F') state = 'G';
            else if(state == 'G') state = 'D';
            else if(state == 'H') state = 'D';
        }
        else if(str[i] == 'b')
        {
            if(state == 'A') state = 'C';
            else if(state == 'B') state = 'E';
            else if(state == 'C') state = 'C';
            else if(state == 'D') state = 'E';
            else if(state == 'F') state = 'H';
            else if(state == 'G') state = 'G';
            else if(state == 'H') state = 'E';
            else if(state == 'E')
            {
                cout << str << " is not valid";
                return;
            }
        }
        else{
            cout << str << " is not valid";
            return;
        }
    }

    if(state == 'B' || state == 'D' || state == 'G' || state == 'H')
    {
        cout << str << " is valid";
    }else{
        cout << str << " is not valid";
    }
}

int main()
{
    computeDFA();
}

// bbba
// a
// baabab
// baababa
// baabaaabab
