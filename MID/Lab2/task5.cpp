

#include <iostream>
using namespace std;

double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / size;
    return avg;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    double average = findAverage(arr,n);
    cout << "Average value = " << average << endl;

    return 0;
}
