# CD74HC4067 CMOS Analog Digital Multiplexer Library (16 Channels)

This library was developed for the Bixo 2022 project at the NRE-SEMEAR - USP São Carlos. The CD74HC4067 Multiplexer (MUX) is a highly useful tool that will likely be employed by various users and other members in future projects. With this in mind, I decided to create a library to facilitate its use and make it available for general access. I hope you find it helpful!

**Author:** João Pedro Baltieca Garcia  
**Location:** São Carlos, October 21, 2022

## Pin Definitions
The MUX pins are defined as follows:
- C0, C1, C2, ..., C14, C15

> **Note:** Although it might seem less organized, you can also refer to the pins by their numbers: 0, 1, 2, ..., 14, 15.

## Functions

### 1. `digitalWriteMux(int pin, int state)`

- **Description:** Sets a MUX pin to HIGH or LOW.
- **Functionality:** Before selecting a pin, it sets it to LOW and then applies the desired state.
- **Parameters:**
  - `pin`: The MUX pin to be set.
  - `state`: The desired state (HIGH or LOW).

### 2. `choosePinMux(int pin)`

- **Description:** Selects a specific MUX pin.
- **Parameters:**
  - `pin`: The MUX pin to be selected.
