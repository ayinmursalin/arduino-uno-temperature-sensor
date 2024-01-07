This project is created as my journey on Learning IoT.

## Description
Things
- Arduino Uno
- LCD with i2c
- DHT-11 Module

DHT-11 is a module to read Temperature and Humidity,
This module has 3 pin:
- VCC
- GND
- Out (Digital)

![image](https://github.com/ayinmursalin/arduino-uno-temperature-sensor/assets/9250558/d673fd3f-b7ec-47f2-abfb-1c604e39c1cf)

## How it Works
DHT-11 Module is a basic Digital Temperature and Humidity Sensor.

DHT-11 has a Three main Components:
- Resistive-type Humidity Sensor
- NTC (negative temperature coefficient) thermistor
- 8-bit microcontroller

DHT-11 communicate to a Arduino using a simple digital language, when we ask for the data it sends a series of 0s and 1s to represent the humidity and temperature values.
The data that DHT-11 send is a 40-bit stream with modulation method called "Single-Bit Digital Signal".
- First 16 bits represent Humidity
- Next 16 bits represent temperature
- Last 8 bits are checksum to verify data integrity


## Life Hacks
Measuring Temperature and Humidity with single Digital output is a bit hard and time consuming especially for beginner.

Thanks for the IoT Community, we can easily get Temperature and Humidity using DHT-11 with the help of library such as [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library).


## Result
[![Temperature Sensor](https://img.youtube.com/vi/xrRs2KDrbAQ/0.jpg)](https://www.youtube.com/watch?v=xrRs2KDrbAQ "Temperature Sensor")


## Libraries
- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C)
- [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library)
