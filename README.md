# Decivoc: The Language of the Scribe

**Decivoc** is a high-luminance, phonetic programming language designed for the **Scriptorium Studios** 3D animation engine. It bridges the gap between human speech and ARM64 machine logic by replacing "punctuation soup" with a rhythmic, speakable lexicon.

## The Core Vision
* **Accessibility First**: Optimized for high-luminance visual clarity and seamless screen-reader narration.
* **Pure Compilation**: Decivoc is not a transpiler; it is a direct forge for ARM64 Assembly.
* **Natural Cadence**: Code that sounds like a narrative, following the rhythmic tradition of traditional scribing.

---

# Decivoc Compiler Lexicon: Part One

## Core Structural Anchors
* **1.0 Incorporate**: Used to add libraries or external services to the project.
* **2.0 Enter**: The Function Prolog. Prepares the stack and begins a logic block or function.
* **3.0 Exit**: The Function Epilog. Restores the stack and returns to the parent node.
* **4.0 Define**: Used to declare a variable or assign a name to a value.
* **5.0 Match**: The equivalent of an equal sign for assignment or comparison.
* **6.0 Repeat**: A loop that runs a specific number of times or until a condition is met.
* **7.0 Cycle**: A continuous loop that runs until a manual override or break command.
* **8.0 #RRGGBBAA**: Hexadecimal color format with baked-in Alpha (opacity).

## Logic and Conditional Flow
* **9.0 Act**: Initiates a block of code only if a specific condition matches.
* **10.0 Alter**: Provides a different path if the Act condition is not met.
* **11.0 Verify**: Used to check a state or condition.

## Mathematical Operations
* **12.0 Add**: Mathematical addition.
* **13.0 Subtract**: Mathematical subtraction.
* **14.0 Times**: Mathematical multiplication.
* **15.0 Divide**: Mathematical division.
* **16.0 Square Root**: Calculates the square root of a value.
* **17.0 Power**: Calculates a value to the specified exponent.
* **18.0 Portion**: Calculates the remainder or modulo of a division.
* **19.0 Between**: Checks if a value falls within a specific range.
* **20.0 Absolute**: Returns the non-negative value of a number, regardless of its sign.

## Data and Reference Logic
* **21.0 Kept**: Logical OR / Alternative choice. Chosen for phonetic stability.
* **22.0 List**: A collection of data. Replaces brackets.
* **23.0 Item**: References a specific entry within a List.
* **24.0 Reject**: Logical NOT / Inverse match. Hard-consonant replacement for "!".
* **25.0 Join**: Logical AND. Phonetically strong replacement for "and".
* **26.0 Pointer**: Represents a reference or the flow of data. Replaces symbols like "->" or "=>".

## Syntax and File System
* **27.0 Underlap**: Used within variable names or paths to represent a space or separator.
* **28.0 Branch**: Used for file or library paths (replaces / or \).
* **29.0 String**: Marks the beginning and end of a text segment (replaces quotes).
* **30.0 Value**: Indicates a literal constant or numeric value.
* **31.0 Terminate**: Marks the end of a single line of code (replaces ;).
* **32.0 Home**: Represents the root or home directory of the file system.
* **33.0 Nodes**: The decimal-based hierarchy units (e.g. 1.1.1) that represent structural depth.

## Delimiters and Values
* **34.0 Gap**: Separates items in a list (replaces ,).
* **35.0 Beyond**: Mathematical greater-than (>).
* **36.0 Under**: Mathematical less-than (<).
* **37.0 Point**: The decimal separator for literal numbers (e.g. 3 Point 14).
* **38.0 Note**: Marks a line as a comment for the compiler to ignore.
* **39.0 Void**: Represents an empty or null value.

---

# Decivoc Implementation Guide: Part One

## Philosophy: The Natural Cadence
Decivoc is designed to be **spoken and heard**. It should be written so it can be read in a single breath without "stuttering" on punctuation. While the 39 keywords are your structural anchors, you are encouraged to use bridge words like *is*, *the*, *to*, or *with* to make the code sound like a rhythmic narrative.

---

## The Backspace Method (IDE Navigation)
To maintain structural integrity without visual indentation:
1. **Enter**: When you hit Enter, the IDE proposes the next sub-level (e.g., Node 1.1 becomes Node 1.1.1).
2. **Backspace**: Hitting Backspace on a fresh line "snaps" the decimal back one level (e.g., Node 1.1.1 becomes Node 1.2). This provides immediate audible feedback for the screen reader.

---

## Structural Markers for the Blacksmith (Compiler)
* **Enter**: Starts the ARM64 assembly prologue and manages the function stack.
* **Exit**: Triggers the assembly epilogue, restores the stack, and returns to the parent node.
* **Terminate**: The "Hard Stop." Tells the compiler the current instruction is finished.
* **Underlap**: The spoken separator. Used to bridge words in a variable name without using a physical character.

---

## Examples of Decivoc Logic

### Example 1: Variable and Condition
> **Node 1.0** Define Final Underlap Position Match Value 180 Terminate  
> **Node 2.0** Act Variable Beyond Value 10 Enter  
> **Node 2.1** Add 5 to Variable Terminate  
> **Node 2.2** Exit  

### Example 2: Color and List
> **Node 3.0** Define Ribbon Underlap Palette Match List #FF5733FF Gap #00FF00FF Terminate  
> **Node 3.1** Item 1 from Ribbon Underlap Palette Match Base Underlap Layer Terminate
