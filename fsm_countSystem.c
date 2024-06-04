#include "fsm_countSystem.h"
#include <stdint.h>
#define LONG_PRESS_THRESHOLD 3000

uint32_t get_button_press_duration(uint8_t button_number) {
    uint32_t start_time = HAL_GetTick();
    while (is_button_pressed(button_number)) {
        HAL_Delay(10);
    }
    uint32_t end_time = HAL_GetTick();
    return end_time - start_time;
}

void wrapAroundCounter() {
    if (n > 9) n = 0;
    if (n < 0) n = 9;
}

int n = 0;
int button_long_press_state = 0;

void fsm_countSystem() {
    if (is_button_pressed(0) == 1) {
        n = 0;
    }

    if (is_button_pressed(1) == 1) {
        if (get_button_press_duration(1) >= LONG_PRESS_THRESHOLD) {
            button_long_press_state = 1;
            while (is_button_pressed(1) == 1) {
                HAL_Delay(10);
                wrapAroundCounter(n++);
            }
        } else {
            wrapAroundCounter(n++);
            button_long_press_state = 0;
        }
    }

    if (is_button_pressed(2) == 1) {
        if (get_button_press_duration(2) >= LONG_PRESS_THRESHOLD) {
            button_long_press_state = 1;
            while (is_button_pressed(2) == 1) {
                HAL_Delay(10);
                wrapAroundCounter(n--);
            }
        } else {
            wrapAroundCounter(n--);
            button_long_press_state = 0;
        }
    }

    if (timer0_flag == 1) {
        HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
        setTimer0(100);
    }

    if (timer1_flag == 1) {
        display7SEG(n);
    }
}
