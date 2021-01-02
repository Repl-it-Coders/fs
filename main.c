#include <stdio.h>

int main(void) {
  char *buffer;
  unsigned int value = 255;   

  buffer[0] = (value >> 24) & 0xFF;
  buffer[1] = (value >> 16) & 0xFF;
  buffer[2] = (value >> 8) & 0xFF;
  buffer[3] = value & 0xFF;

  union {
      unsigned int integer;
      unsigned char byte[4];
  } temp32bitint;

  temp32bitint.integer = value;
  buffer[8] = temp32bitint.byte[3];
  buffer[9] = temp32bitint.byte[2];
  buffer[10] = temp32bitint.byte[1];
  buffer[11] = temp32bitint.byte[0];
}