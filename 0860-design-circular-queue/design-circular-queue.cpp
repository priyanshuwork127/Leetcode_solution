
class MyCircularQueue {
public:
    vector<int> arr;
    int front, rear, size, capacity;

    MyCircularQueue(int k) {
        capacity = k;
        arr.resize(k);
        front = -1;
        rear = -1;
        size = 0;
    }

    bool enQueue(int value) {
        if(size == capacity) {
            return false;
        }
        else {
            if(size == 0) {
                front = 0;
            }
            rear = (rear + 1) % capacity;
            arr[rear] = value;
            size++;
            return true;
        }
    }

    bool deQueue() {
        if(size == 0) {
            return false;
        }

        if(size == 1) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % capacity;
        }

        size--;
        return true;
    }

    int Front() {
        if(size == 0) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if(size == 0) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};
