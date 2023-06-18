#include <modbus.h>

int main()
{
    modbus_t *ctx;
    uint16_t buffer[64];

    // Initialize a Modbus context
    ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);

    // Connect to the Modbus device
    modbus_connect(ctx);

    // Read data from the Modbus device
    modbus_read_registers(ctx, 0, 10, buffer);

    // Disconnect from the Modbus device
    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}
