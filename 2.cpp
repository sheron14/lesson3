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
    cout << "������� ���������� ��������� � �������: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "������� �������� �������:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i]; 
    }

    int minimum = findMinimum(numbers);
    cout << "����������� �������� � �������: " << minimum <<endl;

    return 0;
}
