// 백준 11279 최대 힙 문제
// 밑의 코드는 시간초과로 오답처리됨.
/***************
 * 최대 힙 : 부모노드가 자식노드보다 작지않은 완전이진 트리.
 * 최대 힙에서의 삽입 
 * => 새로운 원소를 가장 끝에 삽입한 후에 부모 노드와 비교하면서
 *    최대 힙이 될 때까지 위로 올라감.
 * 최대 힙에서의 삭제
 * => 루트 노드를 삭제한 후, 가장 끝에 있는 원소를 루트로 옮김.
 *    그 루트의 왼쪽 자식과 오른쪽 자식 중에서 가장 
 *    큰 노드와 지금의 루트와 교환함.
 *  
 * 최대 힙의 활용 : 우선순위 큐, 힙 정렬 등
 **********/
#include <iostream>
#include <vector>
using namespace std;

// 새로운 원소를 삽입하고 위로 올려 힙 속성 복원
void push(vector<int>& arr, int input) {
    arr.push_back(input);
    int child = (int)arr.size() - 1;
    while (child > 0) {
        int parent = (child - 1) / 2;
        if (arr[parent] < arr[child]) {
            swap(arr[parent], arr[child]);
            child = parent;
        } else {
            break;
        }
    }
}

// 루트(최댓값)를 제거하고 리턴, 힙 속성 복원
int pop(vector<int>& arr) {
    if (arr.empty()) {
        cout << 0 << '\n';
        return 0;
    }
    int ret_val = arr[0];
    // 마지막 원소를 루트로 이동
    arr[0] = arr.back();
    arr.pop_back();

    int parent = 0;
    int size = (int)arr.size();
    while (true) {
        int left  = 2 * parent + 1;
        int right = 2 * parent + 2;
        int largest = parent;
        
        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest == parent) {
            break;
        }
        swap(arr[parent], arr[largest]);
        parent = largest;
    }

    cout << ret_val << '\n';
    return ret_val;
}

int main() {
    int tn;
    cin >> tn;
    vector<int> arr;
    
    for (int i = 0; i < tn; ++i) {
        int input;
        cin >> input;
        if (input == 0) {
            pop(arr);
        } else {
            push(arr, input);
        }
    }
    return 0;
}
