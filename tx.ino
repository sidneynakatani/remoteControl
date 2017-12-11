#include <VirtualWire.h>

const int transmit_pin = 4;


void setup()
{
  // Initialise the IO and ISR
  vw_set_tx_pin(transmit_pin);
  vw_setup(2000);   // Bits per sec
}

byte count = 1;

void loop()
{
  char msg[7] = {'h','e','l','l','o',' ','#'};
  vw_send((uint8_t *)msg, 7);
  vw_wait_tx(); 
  
  delay(1000);
  
}
