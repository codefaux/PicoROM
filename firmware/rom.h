#if !defined( ROM_H )
#define ROM_H 1

#include "hardware/pio.h"

void rom_init_programs();

void rom_service_start();
void rom_service_stop();

uint8_t *rom_get_buffer();



#endif // ROM_H