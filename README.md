# COP4533: Highest Value Longest Common Sequence

## Authors
* **Name:** Rohan Bisht | **UFID:** 49003104
* **Name:** Hanlin Zhang | **UFID:** 11685812

---
## File Locations
* Source scripts are found in `src`.
* Responses to questions are found at `COP4533 Programming Assignment #3 Write-Up.pdf`.
* Sample test cases are found at `examples`.
---

## Compilation & Build Instructions
This project is designed to be built using CLion and CMake.

### Dependencies
* C++ Compiler (supporting C++17 or higher)
* CMake
* CLion IDE (recommended)

### Steps to Build
1.  Download and extract the project `.zip` file.
2.  Open the folder `UF_COP4533_ProgrammingAssignment3` with **CLion**.
3.  When prompted, select **"Configure CMake Project"**.
4. Build the project using the CLion build button.

---

## How to Run

### 1. Default Mode
By default, the program executes `main()`.
* What it does: Reads `example.in`, computes the highest value of longest common subsequence, then backtracks to return the subsequence itself.
* Output: 
  * Program outputs both in the standard out stream and to the designated out file. 
  * Output files generated: `example.out`.
* To Run: Simply run the `main` executable in CLion.

### 2. Custom Input Mode
To test the Matcher against specific custom inputs:
1.  Place your input data in a file named `example.in` inside the `src` folder.
2. Run the program.

---

## Assumptions
 * Input Format: The program expects input in the following format. 

K \
x1 v1 \
x2 v2 \
... \
xk vk \
A \
B
```