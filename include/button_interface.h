#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

#include <stdbool.h>

/**
 * @brief 
 * 
 */
typedef struct 
{
    bool (*Init)(void *object);
    bool (*Read)(void *object);
    
} Button_Interface;


#endif /* BUTTON_INTERFACE_H_ */
