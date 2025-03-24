#pragma once

// Konfiguracja matrycy
#define MATRIX_ROWS 5
#define MATRIX_COLS 4
#define DYNAMIC_MACRO_SIZE 128  
#define DYNAMIC_KEYMAP_MACRO_COUNT 64
//oled--------------------------------------

#define I2C_DRIVER I2CD0 
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define OLED_DISPLAY_ADDRESS 0x3C 