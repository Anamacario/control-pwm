#include <stdio.h>
#include "pico/stdlib.h"
#include <inc/pwm_config.h> 

#define LED_PIN 12  // Definição do pino do LED

int main() {
    stdio_init_all();  
    pwm_setup();       

    // Configuração do LED
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    // Move o servomotor de 180 graus em 5s, 90 graus em 5s, 0 grau em 5s
    set_servo_angle();

    // movimentação suave do servomotor entre 0 e 180 graus
    duty_cycle = 500;  // Começa em 0 graus (500μs)
    while (true) { 
        // Move de 0 a 180 graus
        gpio_put(LED_PIN, 1); // Acende o LED
        while (duty_cycle <= 2400) {
            duty_cycle += 5;  
            pwm_set_chan_level(slice_num, PWM_CHAN_A, duty_cycle);
            sleep_ms(10); 
        }
        printf("Servomotor movido de 0 para 180 graus\n");

        // Move de 180 a 0 graus
        gpio_put(LED_PIN, 0); // Apaga o LED
        while (duty_cycle >= 500) {
            duty_cycle -= 5;  
            pwm_set_chan_level(slice_num, PWM_CHAN_A, duty_cycle);
            sleep_ms(10); 
        }
        printf("Servo movido de 180 para 0 graus\n");
    }
    return 0;
}
