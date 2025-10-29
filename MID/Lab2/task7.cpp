
#include <iostream>
using namespace std;

string joinName(string firstname, string lastname)
{
    return firstname + " " + lastname;
}

int main()
{
    string concats = joinName("Mujtahid", "Tabassum");
    cout << concats << endl;

    return 0;
}

