# Modbus
Using libmodbus library to ready modbus device over serial port or TCP/IP

## read-modbus

Initialize a Modbus context using the modbus_new_rtu function and connect to a Modbus device using the modbus_connect function. 

Then read 10 registers from the Modbus device using the modbus_read_registers function and store the result in the buffer array. 

Finally, disconnect from the Modbus device using the modbus_close function and free the Modbus context using the modbus_free function.

## write-modbus 

Initializes a Modbus connection, sets the slave ID, creates a register array, writes 1 register starting at address 0, and closes the connection.
