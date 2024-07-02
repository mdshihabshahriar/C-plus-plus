#include <iostream>
using namespace std;

void quicksort(char* str, int low, int high) {
    if (low < high) {
        int pivotIndex = low;
        char pivotValue = str[high];

        for (int i = low; i < high; ++i) {
            if (str[i] < pivotValue) {
                swap(str[i], str[pivotIndex]);
                ++pivotIndex;
            }
        }

        swap(str[pivotIndex], str[high]);

        quicksort(str, low, pivotIndex - 1);
        quicksort(str, pivotIndex + 1, high);
    }
}

int main() {
    int N;
    cin >> N;

    char* S = new char[N];
    cin >> S;


    quicksort(S, 0, N - 1);

    cout << S << endl;

   
    delete[] S;

    return 0;
}
