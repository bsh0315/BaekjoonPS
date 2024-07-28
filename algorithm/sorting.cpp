// 퀵 정렬이 다른 정렬 알고리즘보다 보통의 경우에 훨씬 빠름.


#include <iostream>
#include <vector>
#include <algorithm>  
#include <ctime>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> dataSizes = {100, 1000, 10000, 100000};
    for (int dataSize : dataSizes) {
        vector<int> data(dataSize);
        generate(data.begin(), data.end(), rand);

        // Bubble Sort
        vector<int> bubbleData = data;
        clock_t start = clock();
        bubbleSort(bubbleData);
        clock_t end = clock();
        cout << "Bubble Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        // Insertion Sort
        vector<int> insertionData = data;
        start = clock();
        insertionSort(insertionData);
        end = clock();
        cout << "Insertion Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        // Selection Sort
        vector<int> selectionData = data;
        start = clock();
        selectionSort(selectionData);
        end = clock();
        cout << "Selection Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        // Quick Sort
        vector<int> quickData = data;
        start = clock();
        quickSort(quickData, 0, dataSize - 1);
        end = clock();
        cout << "Quick Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        // Merge Sort
        vector<int> mergeData = data;
        start = clock();
        mergeSort(mergeData, 0, dataSize - 1);
        end = clock();
        cout << "Merge Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        // Heap Sort
        vector<int> heapData = data;
        start = clock();
        heapSort(heapData);
        end = clock();
        cout << "Heap Sort on " << dataSize << " elements took " << double(end - start) / CLOCKS_PER_SEC << " seconds." << endl;

        cout << "--------------------------------------" << endl;
    }
    return 0;
}
