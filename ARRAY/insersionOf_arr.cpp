#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (1 to " << n+1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    // Shift elements to the right
    for(int i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;  // Insert new value
    n++; // Increase size

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
