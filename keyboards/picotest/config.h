#pragma once

// Tells the driver you are using the TPS43 module footprint
#define AZOTEQ_IQS5XX_TPS43

// Optional: Enable gestures natively handled by the Azoteq chip
#define AZOTEQ_IQS5XX_TAP_ENABLE true
#define AZOTEQ_IQS5XX_SCROLL_ENABLE true

// Tell ChibiOS / RP2040 SDK to use the I2C1 peripheral block
#define I2C_DRIVER I2CD1

// Assign the exact pin channels for the I2C1 bus
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15