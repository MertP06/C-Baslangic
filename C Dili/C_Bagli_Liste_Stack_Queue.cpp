#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initializeStack(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack dolu! Eleman eklenemiyor.\n");
        return;
    }

    stack->top++;
    stack->data[stack->top] = value;
}

int pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack bos! Eleman cekilemiyor.\n");
        return -1; 
    }

    int value = stack->data[stack->top];
    stack->top--;

    return value;
}

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

void enqueue(Queue *queue, int value) {
    if ((queue->rear + 1) % MAX_SIZE == queue->front) {
        printf("Queue dolu! Eleman eklenemiyor.\n");
        return;
    }

    if (queue->front == -1) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->data[queue->rear] = value;
}

int dequeue(Queue *queue) {
    if (queue->front == -1) {
        printf("Queue bos! Eleman cekilemiyor.\n");
        return -1;
    }

    int value = queue->data[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return value;
}

int main() {
    Stack stack;
    Queue queue;

    initializeStack(&stack);
    initializeQueue(&queue);

    int secenek, value;

    do {
        printf("Secenekleriniz:\n");
        printf("1. Stack'e eleman ekle\n");
        printf("2. Stack'ten eleman cek\n");
        printf("3. Queue'ya eleman ekle\n");
        printf("4. Queue'dan eleman cek\n");
        printf("0. Cikis\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secenek);

        switch (secenek) {
            case 0:
                printf("Programdan cikiliyor...\n");
                break;
            case 1:
                printf("\nStack'e eklemek istediginiz degeri girin: ");
                scanf("%d", &value);
                push(&stack, value);
                printf("Deger stack'e eklendi.\n");
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("\nCikarilan deger: %d\n", value);
                }
                break;
            case 3:
                printf("\nQueue'ya eklemek istediginiz degeri girin: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                printf("Deðer queue'ya eklendi.\n");
                break;
            case 4:
                value = dequeue(&queue);
                if (value != -1) {
                    printf("\nCikarilan deger: %d\n", value);
                }
                break;
            default:
                printf("\nGecersiz secim! Tekrar deneyin.\n");
        }

        printf("\n");
    } while (secenek != 0);

    return 0;
}
