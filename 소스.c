#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

QueueType q;
init_que(QueueType* q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType *q){
	return(q->rear = (q->rear + 1) % MAX_QUEUE_SIZE);
}
int is_full(QueueType* q) {
	return(q->front == (q->rear + 1) % MAX_QUEUE_SIZE);
}
int enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		//抗寇贸府
	}
	else {
		q->rear++;
		q->data[q->rear] = item;
	}
}
element dequeue(QueueType* q) {
	if (is_empty) {
		// 抗寇贸府
	}
	else {
		q->front++;
		return(q->data[q->front]);
	}
}

int print_menu() {
	int sn;
	printf("=====Menu=====\n");
	printf("1. Input data and Enqueue\n");
	printf("2. Dequeue and Print data\n");
	printf("3. Print Queue\n");
	printf("4. Exit\n");
	printf("Select mumber: ");
	scanf(" %d", &sn);
	return sn;
}
int first(QueueType* q) {
	int input;
	
	printf("Input the data: ");
	scanf("%d", &input);
	printf("Enqueue: %d", input);
	enqueue(q, input);
	
}
int main(QueueType* q) {
	print_menu();
	first(q);
}