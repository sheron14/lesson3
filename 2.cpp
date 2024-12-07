#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int findMinimum(const vector<int>& numbers) {
    int min = numeric_limits<int>max(); 
    for (int num : numbers) {
        if (num < min) {
            min = num; 
        }
    }
    return min;
}

int main() {
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i]; 
    }

    int minimum = findMinimum(numbers);
    cout << "Минимальное значение в массиве: " << minimum <<endl;

    return 0;
}
