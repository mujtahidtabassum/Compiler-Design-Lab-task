#include <iostream>
#include <string>
using namespace std;

/*Task 1*/
void isNumber()
{
    string str;
    cout << "Enter the value to check if it is numerical or alpha: ";
    cin >> str;
    bool check = true;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "numeric constant" << endl;
    }
    else
    {
        cout << "not numeric" << endl;
    }
}

/*Task 2*/
void printOperator()
{
    string str;
    cout << "Check whether the Given Input is Operators or Not: ";
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '=')
        {
            cout << "operator" << count++ << ": " << str[i] << endl;
        }
    }
}

/*Task 3*/
void checkComment()
{
    string str;
    cout << "Enter string to check whether the string is comment or not: ";
    cin >> str;
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

    if (check)
    {
        cout << "comment" << endl;
    }
    else
    {
        cout << "not comment" << endl;
    }
}

/*Task 4*/
void checkIndentifier()
{
    string s;
    cout << "Enter indentifier name: ";
    getline(cin >> ws, s);
    bool isValid = true;

    if (!((s[0] >= 'A' && s[0] <= 'Z') ||
          (s[0] >= 'a' && s[0] <= 'z') ||
          s[0] == '_'))
    {
        isValid = false;
    }
    else
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (!((s[i] >= 'A' && s[i] <= 'Z') ||
                  (s[i] >= 'a' && s[i] <= 'z') ||
                  (s[i] >= '0' && s[i] <= '9') ||
                  s[i] == '_'))
            {
                isValid = false;
                break;
            }
        }
    }

    if (isValid)
        cout << s << ": Indentifier." << endl;
    else
        cout << s << ": Not identifier." << endl;
}

/*Task 5*/
void findAverage()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Average: " << (sum / size) << endl;
}

/*Task 6*/
int findMinMax()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min < arr[i])
            min = arr[i];
        else if (max > arr[i])
            max = arr[i];
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

/*Task 7*/
void joinName()
{
    string firstname, lastname;
    cout << "Enter the firstname: ";
    cin >> firstname;
    cout << "Enter the lastname: ";
    cin >> lastname;

    cout << firstname << " " << lastname << endl;
}

int main()
{
    cout << "Task 1: Check input numerical or not." << endl;
    cout << "Task 2: Check input operator or not." << endl;
    cout << "Task 3: Check input comments or not." << endl;
    cout << "Task 4: Check input indentifer or not." << endl;
    cout << "Task 5: Print array's average." << endl;
    cout << "Task 6: Print min and max value of Array." << endl;
    cout << "Task 7: Concate first and last name." << endl;
    
    int n;
    cout<< "\nSelect task no.: ";
    cin >> n;
    cin.ignore();
    
    switch(n){
        case 1:
            isNumber();
            break;
        case 2:
            printOperator();
            break;
        case 3:
            checkComment();
            break;
        case 4:
            checkIndentifier();
            break;
        case 5:
            findAverage();
            break;
        case 6:
            findMinMax();
            break;
        case 7:
            joinName();
            break;
        default:
            cout << "Task no. is not correct.";
            break;
    }
}