#include <stdint.h>
#include <stdio.h>

union Packet {
  uint32_t packetValue;
  struct {
    uint32_t addr_mode : 1;
    uint32_t short_addr : 2;
    uint32_t long_addr : 8;
    uint32_t sensor : 3;
    uint32_t bat : 3;
    uint32_t payload : 12;
    uint32_t status : 1;
    uint32_t crc : 2;
  } packetFields;
};

int main(void) {
  printf("Enter the 32bit Packet Value:");

  union Packet packet;
  // Make a 32 bit variable
  uint32_t entry;
  // Read a 32 bit hex code from stdin
  if (!scanf("%x", &packet.packetValue)) {
    printf("\nInvalid input, Exiting\n");
    return 1;
  }

  printf("crc: %#x \n", packet.packetFields.crc);
  printf("status: %#x \n", packet.packetFields.status);
  printf("payload: %#x \n", packet.packetFields.payload);
  printf("bat: %#x \n", packet.packetFields.bat);
  printf("sensor: %#x \n", packet.packetFields.sensor);
  printf("long_addr: %#x \n", packet.packetFields.long_addr);
  printf("short_addr: %#x \n", packet.packetFields.short_addr);
  printf("addr_mode: %#x \n", packet.packetFields.addr_mode);

  return 0;
}
