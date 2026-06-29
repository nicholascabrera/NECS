//
// Created by ncabr on 6/29/26.
//
#include <assert.h>
#include "entity_manager.h"

void entity_manager_init(entity_manager_t *em) {
    // Initialize the queue with all possible entity IDs
    for (entity_t entity = 0; entity < MAX_ENTITIES; entity++) {
        enqueue_entity(&em->m_available_entities, entity);
    }
}

entity_t create_entity(entity_manager_t *em) {
    assert(em->m_living_entity_count < MAX_ENTITIES && "Too many entities in existence.");

    // Take an ID from the front of the queue
    entity_t id;
    dequeue_entity(&em->m_available_entities, &id);
    ++em->m_living_entity_count;

    return id;
}

void destroy_entity(entity_manager_t *em, const entity_t entity) {
    assert(entity < MAX_ENTITIES && "Entity out of bounds.");

    // Invalidate the destroyed entity's signature
    em->m_signatures[entity] = (signature_t){0};

    // Put the destroyed ID at the back of the queue
    enqueue_entity(&em->m_available_entities, entity);
    --em->m_living_entity_count;
}

void set_signature(entity_manager_t *em, const entity_t entity, const signature_t signature) {
    assert(entity < MAX_ENTITIES && "Entity out of bounds.");

    // Put this entity's signature into the array
    em->m_signatures[entity] = signature;
}

signature_t get_signature(const entity_manager_t *em, const entity_t entity) {
    assert(entity < MAX_ENTITIES && "Entity out of bounds.");

    // Get this entity's signature from the array
    return em->m_signatures[entity];
}