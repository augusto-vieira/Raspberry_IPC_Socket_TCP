#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include <stdbool.h>
#include <stdint.h>

/**
 * @brief 
 * 
 */
typedef struct 
{
    bool (*Init)(void *object);
    bool (*Set)(void *object, uint8_t state);
} LED_Interface;


#endif /* LED_INTERFACE_H_ */
