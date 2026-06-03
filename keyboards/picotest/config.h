#pragma once

// Hardcode which side handles the layout orientation mapping
#define MASTER_LEFT

// Trackpad Hardware Configuration (Now safely on the Master side)
#define AZOTEQ_IQS5XX_TPS43
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19

// Handle QMK wrapper timeout management (10 milliseconds)
#define I2C_TIMEOUT_MS 10

// Route pointing device logic locally to the Right half
#define POINTING_DEVICE_RIGHT
#define SPLIT_POINTING_ENABLE

// Keep the Interrupt disabled for baseline testing
#define AZOTEQ_IQS5XX_INT_PIN NO_PIN

// Optional: Enable gestures natively handled by the Azoteq chip
//#define AZOTEQ_IQS5XX_TAP_ENABLE true
//#define AZOTEQ_IQS5XX_SCROLL_ENABLE true