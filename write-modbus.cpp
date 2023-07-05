#include <modbus/modbus.h>

int main() {
    modbus_t *mb;
    
    // Serial port
    mb = modbus_new_rtu("/dev/ttyUSB0", 9600);
    
    // Or TCP/IP 
    mb = modbus_new_tcp("192.168.1.100", 502);
    
    // Write 1 register  
    modbus_set_slave(mb, 1); 
    uint16_t tab_reg[1];    
    tab_reg[0] = 100;      
    modbus_write_registers(mb, 0, 1, tab_reg);
        
    // Close connection
    modbus_close(mb); 
    modbus_free(mb);
}
