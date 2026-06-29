//
// Created by ncabr on 6/29/26.
//

#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

#include "utils.h"

typedef struct {
    entity_t entities[MAX_ENTITIES];
    uint32_t head;
    uint32_t tail;
} entity_queue_t;

int is_queue_empty(const entity_queue_t *q);
int is_queue_full(const entity_queue_t *q);
void enqueue_entity(entity_queue_t *q, entity_t e);
int dequeue_entity(entity_queue_t *q, entity_t *e);

#endif //UNTITLED_QUEUE_H
