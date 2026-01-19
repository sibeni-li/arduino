# Electricity Fundamentals - 02
**Date:** 19/01/2026          **Subject:** Voltage Deep Dive & Semiconductors

**Objective:** Understand voltage as electrical potential difference and how semiconductors enable LED operation

---

## THEORY / CONCEPT

**Voltage - The Details**
- **Definition:** Difference in electrical potential energy per unit of charge between two points
- Measured in **Volts (V)**
- 1 Volt = 1 Joule per Coulomb (1V = 1J/C)
- **Voltage is always relative** - measured between two points

**Energy and Charge**
- Energy measured in **Joules (J)**
- Charge measured in **Coulombs (C)**
- 1 Coulomb = charge on 6.24 × 10¹⁸ electrons

**Power Relationship**
- **Power (P) = Voltage (V) × Current (I)**
- Power measured in **Watts (W)**
- 1 Watt = 1 Joule/second
- Shows: J/s = (J/C) × (C/s)

**Voltage in Circuits**
- **Voltage source:** Battery/power supply creates voltage
- **Voltage drop:** Components (resistors, LEDs) have voltage across them
- **Ground:** 0V reference point for measurements

**Semiconductors**
- Materials between conductors and insulators
- **Energy bands:**
  - **Valence band:** Where electrons normally sit
  - **Conduction band:** Where electrons can move freely
  - **Band gap:** Energy difference between valence and conduction bands

**Doping - Creating N-type and P-type**
- **N-type semiconductor:**
  - Add donor atoms (impurities with extra electrons)
  - Creates excess free electrons
  - Electrons are majority charge carriers
  
- **P-type semiconductor:**
  - Add acceptor atoms (impurities that create "holes")
  - Holes = missing electrons
  - Holes act as positive charge carriers

**How LEDs Work**
- LED = Light Emitting Diode (P-N junction)
- When voltage applied:
  1. Electrons flow from N-type side
  2. Holes flow from P-type side
  3. They meet at the junction
  4. **Electron-hole recombination** occurs
  5. Energy released as **photon (light)** ✨
- LED color depends on band gap energy:
  - Larger gap → higher energy → blue/violet light
  - Smaller gap → lower energy → red/infrared light

![Electron-Hole Recombination](/images/how_led_work.png)

**How to Use a Multimeter**

**Voltage Mode (DC):**
1. **Probe placement:**
   - Black probe → COM port
   - Red probe → VΩ port
2. **Set the dial:** Turn to DC voltage (V—)
3. **Select range:** Choose range above expected voltage (e.g., 20V for 9V battery)
4. **Measure:** Touch black probe to negative/ground, red probe to positive
5. **Read display:** If you see "1" or "OL", switch to higher range

**Continuity Mode:**
1. **Probe placement:** Same as voltage mode
2. **Set the dial:** Turn to continuity symbol (usually 🔊 or diode symbol)
3. **Test:** Touch probes to both ends of wire/connection
4. **Result:** Beep = continuous connection; No beep = broken/open circuit

	**Safety:** Never measure voltage while in current (A) mode!
---

## PRACTICE / EXPERIENCE

### Multimeter Practice
-  Measure 9V battery voltage → **9.81V**
-  Measure Arduino 5V pin voltage → **5V**
-  Measure Arduino 3.3V pin voltage → **~3.3V**
-  Test wire continuity

### Blink an external LED

#### Code
```arduino
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```

#### Notes
	When I measure the Voltage across LED (with multimeter) I get 0, 2.9, 0, 2.9,... corresponding at the LED state (HIGH, LOW)
---

**Key Takeaway:** Voltage drives current through semiconductors; LEDs emit light when electrons and holes recombine at a P-N junction.

**References:** Afrotechmods - "What is Voltage?", Paul McWhorter Arduino Tutorial #2
