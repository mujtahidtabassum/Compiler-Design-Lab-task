
#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min < arr[i])
            min = arr[i];
    }

    return min;
}
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max > arr[i])
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[] = {10, 6, -1, 8, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);
    int max = findMax(arr, size);

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}

