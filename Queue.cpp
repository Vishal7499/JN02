#include <iostream>
#include <queue>
#include <limits>

class FixedSizeQueue {
private:
    std::queue<int> myQueue;
    const size_t maxSize;

public:
    FixedSizeQueue(size_t size) : maxSize(size) {}

    bool isFull() const {
        return myQueue.size() >= maxSize;
    }

    bool isEmpty() const {
        return myQueue.empty();
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot add more elements." << std::endl;
            return;
        }
        myQueue.push(value);
        std::cout << "Added " << value << " to the queue." << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. No elements to remove." << std::endl;
            return;
        }
        int frontElement = myQueue.front();
        myQueue.pop();
        std::cout << "Removed " << frontElement << " from the queue." << std::endl;
    }
};

int main() {
    size_t maxSize = 5;
    FixedSizeQueue myQueue(maxSize);

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);
    myQueue.enqueue(50);
    myQueue.enqueue(60);  // Trying to add when the queue is full

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();  // Trying to remove when the queue is empty

    return 0;
}
