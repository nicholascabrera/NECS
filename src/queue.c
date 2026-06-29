//
// Created by ncabr on 6/29/26.
//

#include "queue.h"

// Function to check if the queue is empty
int is_queue_empty(const entity_queue_t *q) {
    return q->head == q->tail;
}

// Function to check if the queue is full
int is_queue_full(const entity_queue_t *q) {
    return ((q->tail + 1) % MAX_ENTITIES) == q->head;
}

// Function to add an element to the queue (Enqueue operation)
void enqueue_entity(entity_queue_t *q, const entity_t e) {
    if (is_queue_full(q)) {
        return;
    }
    q->entities[q->tail] = e;
    q->tail = (q->tail + 1) % MAX_ENTITIES;
}

// Function to remove an element from the queue (Dequeue operation)
int dequeue_entity(entity_queue_t *q, entity_t *e) {
    if (is_queue_empty(q)) {
        return 0;
    }

    *e = q->entities[q->head];
    q->head = (q->head + 1) % MAX_ENTITIES;
    return 1;
}