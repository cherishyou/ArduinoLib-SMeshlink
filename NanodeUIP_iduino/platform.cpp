#include <avr/pgmspace.h>
#include <contiki.h>
#include <uip-conf.h>

#if ARDUINO >= 100
  #include <Arduino.h> // Arduino 1.0
#else
  #include <WProgram.h> // Arduino 0022
#endif


void nullproc(void) {}

extern void nanode_log(char *msg);
extern void nanode_log_P(PGM_P msg);

void uip_log(char *msg) {
  nanode_log(msg);
}
void uip_log_P(PGM_P msg) {
  nanode_log_P(msg);
}
