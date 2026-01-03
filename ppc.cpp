#include <iostream>
using namespace std;
int main() 
{
    int n, pos = -1;
    cout << "Enter the number of terms: ";
    cin >> n;
    int arr[n];
    cout << "Enter all the terms\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n - 1; i > 0; i--) 
    {
        if (arr[i] > arr[i - 1]) {
            pos = i - 1;
            break;
        }
        pos = i - 2;
    }
    if (pos >= 0) 
    {
        for (int i = n - 1; i > 0; i--) {
            if (arr[i] > arr[pos]) {
                int temp = arr[i];
                arr[i] = arr[pos];
                arr[pos] = temp;
                break;
            }
        }
    }
    for (int i = pos + 1, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}