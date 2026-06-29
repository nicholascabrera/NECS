//
// Created by ncabr on 6/29/26.
//

#ifndef UNTITLED_ENTITY_MANAGER_H
#define UNTITLED_ENTITY_MANAGER_H

#include "utils.h"
#include "queue.h"

typedef struct {
    uint32_t m_living_entity_count;
    entity_queue_t m_available_entities;
    signature_t m_signatures[MAX_ENTITIES];
} entity_manager_t;

void entity_manager_init(entity_manager_t *em);
entity_t create_entity(entity_manager_t *em);
void destroy_entity(entity_manager_t *em, entity_t entity);
void set_signature(entity_manager_t *em, entity_t entity, signature_t signature);
signature_t get_signature(const entity_manager_t *em, entity_t entity);

#endif //UNTITLED_ENTITY_MANAGER_H
