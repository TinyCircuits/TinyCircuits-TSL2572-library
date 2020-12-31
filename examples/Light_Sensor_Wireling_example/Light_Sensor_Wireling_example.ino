/*************************************************************************
 * TSL2572 Ambient Light Sensor Wireling Tutorial:
 * This program will print the lux value read from the sensor to  the 
 * Serial Monitor
 * 
 * Hardware by: TinyCircuits
 * Code by: Ken Burns & Laveréna Wienclaw for TinyCircuits
 *
 * Initiated: 11/29/2017 
 * Updated: 12/31/2020
 ************************************************************************/

#include <Wire.h>         // For I2C communication with sensor
#include <Wireling.h>     // For interfacing with Wirelings
#include <TSL2572.h>      // For TSL2572 ambient light sensor

TSL2572 light_sensor;

// Global variable for gain value used to Read the sensor
int gain_val = 0;

// Make Serial Monitor compatible for all TinyCircuits processors
#if defined(ARDUINO_ARCH_AVR)
  #define SerialMonitorInterface Serial
#elif defined(ARDUINO_ARCH_SAMD)
  #define SerialMonitorInterface SerialUSB
#endif

void setup() {
  SerialMonitorInterface.begin(115200);
  Wire.begin();

  // Initialize Wireling
  Wireling.begin();
  Wireling.selectPort(0); // Port #'s correspond to backside of the Adapter TinyShield

//***************************************
// SETTINGS & ADJUSTMENTS 
//***************************************
//  light_sensor.init(GAIN_1X);
//  light_sensor.init(GAIN_8X);
  light_sensor.init(GAIN_16X);
//  light_sensor.init(GAIN_120X);
}

void loop() {
  SerialMonitorInterface.begin(9600);
  float AmbientLightLux = light_sensor.readAmbientLight();

  // Print lux value to Serial Monitor
  SerialMonitorInterface.print("Lux: ");
  SerialMonitorInterface.println(AmbientLightLux);
}
