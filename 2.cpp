#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int>& numbers) {
    int max = numbers[0]; 
    for (int num : numbers) {
        if (num > max) {
            max = num; 
        }
    }
    return max;
}

int main() {
    int n;
    cout << "������� ���������� ��������� � �������: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i]; 
    }

    int maxElement = findMax(numbers);
    cout << "������������ �������: " << maxElement << endl;

    return 0;
}
