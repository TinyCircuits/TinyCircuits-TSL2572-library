# TSL2572 library

Used for TinyCircuits Light Sensor modules: **[Ambient Light Sensor Wireling](https://tinycircuits.com/products/ambient-light-sensor-wireling?_pos=7&_sid=a9b4d2d5f&_ss=r)**, the **[Ambient Light Sensor TinyShield](https://tinycircuits.com/products/ambient-light-tinyshield?_pos=5&_sid=a9b4d2d5f&_ss=r)**, and the **[Combo Sensor TinyShield](https://tinycircuits.com/products/combo-sensor-tinyshield?_pos=8&_sid=a9b4d2d5f&_ss=r)**. 

*Support this library by buying products from **[TinyCircuits](https://tinycircuits.com/)***


## TSL2572 Class

* **void registerWrite(byte regAddr, byte regData)** Used to interface with the sensor by writing to its registers directly
* **void init(uint8_t gain)** Initializes the light sensor to be ready for output
* **float readAmbientLight(void)** Read the lux value from the light sensor so we can print it out
