// 10845 선형 큐

/*
초기 front , rear는 0으로 설정
rear는 기본적으로 마지막 요소의 바로 다음 요소를 가리킴

*/
#include<iostream>
#include<string>
using namespace std;

const int maxSize = 10000;

class queue {
private:
    int frontIndex = 0;
    int rearIndex = 0;
    int queue[maxSize];
public:
    void push(int key);
    void pop();
    void size();
    void front();
    void back();
    void empty();
};

void queue::push(int key) {
    if (rearIndex == maxSize) {
        cout << -1 << endl;
        return;
    }
    this->queue[rearIndex++] = key;
}

void queue::pop() {
    if (frontIndex == rearIndex) {
        cout << -1 << endl;
        return;
    }
    cout << queue[frontIndex++] << endl;
}

void queue::size() {
    cout << rearIndex - frontIndex << endl;
}

void queue::front() {
    if (frontIndex == rearIndex) {
        cout << -1 << endl;
        return;
    }
    cout << queue[frontIndex] << endl;
}

void queue::back() {
    if (frontIndex == rearIndex) {
        cout << -1 << endl;
        return;
    }
    cout << queue[rearIndex - 1] << endl;
}

void queue::empty() {
    if (rearIndex == frontIndex) {
        cout << 1 << endl;
        return;
    }
    cout << 0 << endl;
}

int main() {
    queue Q;
    int num = 0;
    cin >> num;
    cin.ignore();  
    for (int count = 0; count < num; ++count) {
        string option;
        cin >> option;

        if (option == "push") {
            int key = 0;
            cin >> key;
            Q.push(key);
        } else if (option == "pop") {
            Q.pop();
        } else if (option == "front") {
            Q.front();
        } else if (option == "back") {
            Q.back();
        } else if (option == "size") {
            Q.size();
        } else if (option == "empty") {
            Q.empty();
        }
    }
    return 0;
}
