# TemperatureSensor
## Device assembly
### Build indicator(3_C1r)
📖 Connect wires like mom-dad. Symbol `~` on the board means analog access
| Indicator(3_C1r) | Arduino UNO |
| :---: | :---: |
| - | GND |
| B | ~11 |
| G | ~10 |
| R | ~9 |

### Build temperature sensor(DHT11)
| Sensor(DHT11) | Arduino UNO |
| :---: | :---: |
| closer to - | GND |
| leg in the middle | 5V |
| closer to S | 2 |

### Build display (I2C)
| Display(I2C) | Arduino UNO |
| :---: | :---: |
| GND | GND |
| VCC | 5V |
| SDA | A4 |
| SCL | A5 |
