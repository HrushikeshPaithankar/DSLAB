#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct queue {
    struct node *front, *rear;
};

// Create an empty queue
struct queue* createQueue() {
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}

// Check if the queue is empty
int isEmpty(struct queue* q) {
    return (q->front == NULL);
}

// Add element to the rear of the queue
void enqueue(struct queue* q, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Remove and return front element of the queue
int dequeue(struct queue* q) {
    if (isEmpty(q)) {
        return -1; // Error for empty queue
    }
    struct node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return data;
}

// Reverse the queue using recursion (implicit stack)
void reverseQueue(struct queue* q) {
    if (isEmpty(q)) {
        return;
    }
    int data = dequeue(q);
    reverseQueue(q);
    enqueue(q, data);
}

// Print queue elements
void printQueue(struct queue* q) {
    struct node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue* q = createQueue();
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);

    printf("Original Queue: ");
    printQueue(q); // Output: 1 2 3 4

    reverseQueue(q);

    printf("Reversed Queue: ");
    printQueue(q); // Output: 4 3 2 1

    return 0;
}