# COP4533: Highest Value Longest Common Sequence

## Authors
* **Name:** Rohan Bisht | **UFID:** 49003104
* **Name:** Hanlin Zhang | **UFID:** 11685812

---
## File Locations
* Task A is available in `src/matching.h` and `src/matching.cpp`. 
* Task B is available in `src/Verifier.h` and `src/Verifier.cpp`.
* Task C is available in `src/RuntimeCheck.h` and `src/RuntimeCheck.cpp`.
* One input/output set for the $n=512$ test case is available at `resources/512.in` and `resources/512.out`. 
---

## Compilation & Build Instructions
This project is designed to be built using CLion and CMake.

### Dependencies
* C++ Compiler (supporting C++11 or higher)
* CMake
* CLion IDE (recommended)

### Steps to Build
1.  Download and extract the project `.zip` file.
2.  Open the folder `UF_COP4533_ProgrammingAssignment3` with **CLion**.
3.  When prompted, select **"Configure CMake Project"**.
4.  Select **"Create CMakeList.txt"**.
5.  Ensure the entire `src` folder is checked in the project view to include all source files.
6.  Build the project using the CLion build button.

---

## How to Run

### 1. Default Mode
By default, the program executes `main()`.
* What it does: Reads `example.in`, computes the highest value of longest common subsequence, then backtracks to return the subsequence itself.
* Output: 
    * Input files generated: `example.in`
    * Output files generated: `example.out`.
* To Run: Simply run the `main` executable in CLion.

### 2. Custom Input Mode
To test the Matcher against specific custom inputs:
1.  Place your input data in a file named `example.in` inside the `src` folder.
2.  Open `main.cpp`.
3.  Run the program.

---

## Assumptions
* Input Format: The program expects input formatted according to the standard Gale-Shapley requirement (Number of pairs $n$, followed by $n$ preference lists for set A, then $n$ preference lists for set B). An example for the $n=2$ test case is below. 
```
2
1 2 
1 2 
1 2 
2 1 
```
* File Locations: Custom inputs must be placed in `src/example.in`.

---

### Question 1: Empirical Comparsion


### Question 2: Recurrence Equation


### Question 3: Big-Oh
