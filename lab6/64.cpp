#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int val;
    cout << "Find frequency of: ";
    cin >> val;

    int cnt = count(arr.begin(), arr.end(), val);
    auto min_it = min_element(arr.begin(), arr.end());
    auto max_it = max_element(arr.begin(), arr.end());

    cout << "Count of " << val << ": " << cnt << endl;
    if (!arr.empty()) {
        cout << "Min: " << *min_it << endl;
        cout << "Max: " << *max_it << endl;
    }

    return 0;
}
