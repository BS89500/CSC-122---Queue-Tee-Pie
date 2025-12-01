//
// Created by ybsxm on 11/30/2025.
//

#ifndef QUEUE_TEE_PIE_QUEUE_H
#define QUEUE_TEE_PIE_QUEUE_H
//#include "cutie.hpp"
const int MAX_VALUE = 300;

class QueueTees {
    Cutie* arr[MAX_VALUE];
    int front;
    int rear;
    int count;

public:
    QueueTees() : front(0), rear(-1), count(0) {
        for (int i = 0; i < MAX_VALUE; i++) {
            arr[i] = nullptr;
        }
    }

    void enqueue(Cutie& cutie) {
        if (count >= MAX_VALUE) {
            throw std::runtime_error("Queue is full");
            return;
        }

        rear = (rear + 1);
        arr[rear] = &cutie;
        count++;
    }

    Cutie& dequeue() {
        if (count == 0) {
            throw std::runtime_error("Queue is empty");
        }

        Cutie* cutie = arr[front];
        arr[front] = nullptr;
        front = (front + 1);
        count--;

        return *cutie;
    }

    Cutie& peek() const {
        if (count == 0) {
            throw std::runtime_error("Queue is empty! Cannot peek.");
        }
        return *arr[front];
    }

    int size() const {
        return count;
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count >= MAX_VALUE;
    }
};


#endif //QUEUE_TEE_PIE_QUEUE_H