# THIS FILE IS AUTOMATICALLY GENERATED
<<<<<<< HEAD
# Project: C:\Users\a85495\Desktop\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\All_sensor_testv2.cyprj
# Date: Thu, 13 Jul 2017 15:38:22 GMT
=======
# Project: C:\Users\A85590\Documents\MyCodes\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\All_sensor_testv2.cyprj
# Date: Tue, 11 Jul 2017 22:26:56 GMT
>>>>>>> 6765c86c158e72ebd2438584a7341d17ff362fc0
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyBUS_CLK(fixed-function)} -period 41.666666666666664 -waveform {0 20.8333333333333} [get_pins {ClockBlock/clk_bus_glb_ff}]
create_generated_clock -name {xbeeSerial_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 27 53} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {debugSerial_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 27 53} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {gpsSerial_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 313 627} [list [get_pins {ClockBlock/dclk_glb_2}]]


<<<<<<< HEAD
# Component constraints for C:\Users\a85495\Desktop\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\a85495\Desktop\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\All_sensor_testv2.cyprj
# Date: Thu, 13 Jul 2017 15:38:14 GMT
=======
# Component constraints for C:\Users\A85590\Documents\MyCodes\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\A85590\Documents\MyCodes\PSoC-Quadcopter\Sensors\Sensor Test\All_sensor_testv2.cydsn\All_sensor_testv2.cyprj
# Date: Tue, 11 Jul 2017 22:26:48 GMT
>>>>>>> 6765c86c158e72ebd2438584a7341d17ff362fc0