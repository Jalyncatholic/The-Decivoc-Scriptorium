# Decivoc Bridge Protocol (v1.0)

> "Where the voice of the Scribe meets the grit of the Metal."

## 1. Overview
This document defines the communication standards between the **Decivoc Frontend (The Scriptorium)** and the **C++ Backend (The Blacksmith)**. This protocol ensures that phonetic logic is accurately translated into ARM64 instructions.

---

## 2. File Specifications
* **Extension**: `.sdvc` (Scribe Decivoc)
* **Encoding**: UTF-8 Plain Text
* **Structure**: Sequential lines prefixed by decimal Node identifiers.

---

## 3. The Natural Cadence Filter
To maintain the "Natural Cadence," the Blacksmith must explicitly ignore the following **Bridge Words**. These words exist only for phonetic stability and have no machine-logic weight:
* *is, the, to, with, of, and, from*

---

## 4. The Underlap Rule
Decivoc uses **Underlap** as a phonetic bridge for multi-word variables. 
* **Rule**: The Blacksmith must concatenate words flanking the "Underlap" keyword into a single memory address.
* **Example**: `Ribbon Underlap Color` is parsed as `Ribbon_Color`.

---

## 5. Node Hierarchy & Depth
The Blacksmith uses the decimal prefix to manage the stack.
* **Incremental**: `1.0` -> `1.1` (Standard sequence).
* **Deepening**: When a line ends with the keyword **Enter**, the following Node must increase in depth (e.g., `1.1` -> `1.1.1`).
* **Ascending**: The keyword **Exit** returns the Blacksmith to the previous decimal depth.

---

## 6. Hexadecimal Standards
All color and luminance values must be expressed in `#RRGGBBAA` format. The Blacksmith treats any token starting with `#` as a literal 32-bit value.
