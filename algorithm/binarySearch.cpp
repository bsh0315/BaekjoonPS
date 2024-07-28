#include <iostream>
#include <vector>
#include<algorithm>
#include<cstdlib>
#include<ctime>

using namespace std;

void binarySearch(vector<int> arr, int key){

}

void swap(int &i, int &j, int temp){
    temp = i;
    i = j;
    j= temp;
}

void quickSort(vector<int>& arr, int left, int right){
    int pivot , temp = 0,i , j;
    if(left < right){
        i = left; j = right +1;
        int pivot = arr[left];
        do{
            do ++i; while(arr[i] < pivot);
            do --j; while(arr[j] > pivot);

            if(i<j) swap(arr[i], arr[j], temp);
        
        } while(i<j);

        swap(arr[left], arr[j], temp);

        quickSort(arr, left, j-1);
        quickSort(arr,j+1, right);
    }

}

int main(){
    srand(time(NULL));
   
    int size = 0, key = 0;
    
    cout << "배열의 크기 입력 : " ;
    cin >> size;
    vector<int> arr(size);

    for(int& element : arr){
        element = rand()%100;
        cout << element << " ";
    }
    cout << endl;

    

    quickSort(arr, 0, size-1);

    for(int element : arr){
        cout << element << " ";
    }
    cout << endl;
    
    cout << "찾고자하는 key값을 입력하세요 : ";
    cin >> key;

    binarySearch(arr, key);




}