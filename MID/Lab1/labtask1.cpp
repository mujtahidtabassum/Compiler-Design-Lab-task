
#include <iostream>
using namespace std;

void isNumber(string str)
{
	bool check = true;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9'){
            check = true;
        }
		else
		{
		    check = false;
			break;
		}
    }

    if(check == true){
		cout << "numeric constant" << endl;
	}else
	{
		cout <<"not numeric" << endl;
	}
}


int main()
{
    isNumber("100");
    isNumber("991");
    isNumber("ABCD");
    isNumber("A1B2");
}

