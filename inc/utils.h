//
// Created by ncabr on 6/19/26.
//
#ifndef NECS_UTILS_H
#define NECS_UTILS_H

#include <stdint.h>

typedef uint32_t entity_t;
constexpr uint32_t MAX_ENTITIES = 256;

typedef uint8_t component_type_t;
constexpr uint32_t MAX_COMPONENTS = 32;

typedef struct {
    unsigned int s : MAX_COMPONENTS;
} signature_t;

#endif //NECS_UTILS_H
