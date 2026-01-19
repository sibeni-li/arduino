# Electricity Fundamentals - 01
**Date:** 19/01/2026          **Subject:** What is Electricity? - Fundamentals

**Objective:** Understand electric charge, current, voltage, resistance, and their relationship

---

## THEORY / CONCEPT

**What is an atom?**

![atom structure](/images/atom_struct.png)


- Nucleus contains: **protons** (+) and **neutrons** (neutral)
- **Electrons** (−) orbit around the nucleus
- Opposite charges attract | Same charges repel

**Electric Current (I)**
- Flow of electrons through a conductor
- Measured in **Amperes (A)**
- 1A = 1 coulomb of charge per second
- **Analogy:** Water flowing through a pipe
- Direction: electrons flow from **negative (−) to positive (+)**

**Voltage (V)**
- The "electrical pressure" that pushes electrons
- Measured in **Volts (V)**
- Created by a battery or power source
- **Analogy:** Water pressure in pipes

**Resistance (R)**
- Opposition to current flow
- Measured in **Ohms (Ω)**
- Higher resistance → less current flows
- **Analogy:** Narrow pipe restricts water flow

**┌─────────────────────────┐**  
**│  V = I × R  (Ohm's Law) │**  
**└─────────────────────────┘**

**Example:** 9V battery with 1kΩ resistor  
I = V/R = 9/1000 = 0.009A = 9mA

---

## PRACTICE / EXPERIENCE

### Code

```arduino
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```

### Photos

<img src="/images/blink_high.jpg" width="400">


<img src="/images/blink_low.jpg" width="400">

### Notes

If I reduce the delay, the arduino will blink faster and at a moment, the blink is too fast and I can't see it with my eyes. I can just see the light on with a reduce intensity.

---

**Key Takeaway:** Electricity is electron flow driven by voltage and limited by resistance—all connected by Ohm's Law.

**References:** Afrotechmods - "What is an amp?", Paul McWhorter Arduino Tutorial #1
