#include <stdint.h>
#include <stdio.h>

struct Packet {
  uint32_t addr_mode : 1;
  uint32_t short_addr : 2;
  uint32_t long_addr : 8;
  uint32_t sensor : 3;
  uint32_t bat : 3;
  uint32_t payload : 12;
  uint32_t status : 1;
  uint32_t crc : 2;
};

int main(void) {
  printf("Enter the 32bit Packet Value:");

  // Make a 32 bit variable
  uint32_t entry;
  // Read a 32 bit hex code from stdin
  if (!scanf("%x", &entry)) {
    printf("\nInvalid input, Exiting\n");
    return 1;
  }

  struct Packet packet;
  // Decode bits using bit masks as follows
  // 2 lsb goes to crc
  packet.crc = (uint8_t)(entry & 0x3);
  // 3rd lsb goes to status
  packet.status = (uint8_t)((entry >> 2) & 0x1);
  // 4th to 16th lsb goes to payload
  packet.payload = (uint16_t)((entry >> 3) & 0xFFF);
  // 17th to 19th lsb goes to bat
  packet.bat = (uint8_t)((entry >> 15) & 0x7);
  // 20th to 22nd lsb  goes to sensor
  packet.sensor = (uint8_t)((entry >> 18) & 0x7);
  // 23rd to 30th lsb goes to long addr
  packet.long_addr = (uint8_t)((entry >> 21) & 0xFF);
  // 31st to 32nd lsb to short addr
  packet.short_addr = (uint8_t)((entry >> 29) & 0x3);
  // 33rd lsb to address mode
  packet.addr_mode = (uint8_t)((entry >> 31) & 0x1);

  printf("crc: %#x \n", packet.crc);
  printf("status: %#x \n", packet.status);
  printf("payload: %#x \n", packet.payload);
  printf("bat: %#x \n", packet.bat);
  printf("sensor: %#x \n", packet.sensor);
  printf("long_addr: %#x \n", packet.long_addr);
  printf("short_addr: %#x \n", packet.short_addr);
  printf("addr_mode: %#x \n", packet.addr_mode);

  return 0;
}
