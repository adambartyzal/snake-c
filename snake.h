#ifndef SNAKE_H
#define SNAKE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "types.h"

// Place snake on the field. Goes through snake from tail to head.
void placeSnake (snake_t *, field_t *);

// Moving in direction
void moveSnake (snake_t *, field_t *); // field here only for sizes

// Returns false if something fails
bool enlargeSnake (snake_t *);

// Turn snake if possible
void changeDirection (snake_t *, direction_t *);

// Put dot of food to field
void placeFood (food_t *, field_t *);

// New rand coordinates for food
void moveFood (food_t *, field_t *);

// checking if head of snake is in the same pos as food;
bool eating(snake_t *, food_t *);

// checking if head of snake is in the same pos as the body of the snake;
bool crash(snake_t *);

#endif