# Code Interview

Welcome to Thales code interview. The following problems were designed so we can
understand a little bit more about your coding skills.

For this challenge, you'll share your screen with us while you go through the problems.
It's really important to get the Problems right, but more than this we'll check other
skills like:
- Problem solving skill
- Thinking process to get to the solution
- Strategy to get solution when you don't have the tools memorized.

**OBS:** You can search syntax and solutions in the internet.
<span style="color: red;">Do not use AI assistants.</span>

---

### **<u>Requirements:</u>**

For this test, you'll need:

- Connection to the internet
- Access to a brownser

### Implementation environment

- Some problems will be implemented in the [OneCompiler](https://onecompiler.com/) site.

### **<u>Time limit</u>**

- You'll have 15 minutes only to read this document. You can't solve anything within this time. You can read code as well.
- The problems should be solved in a time limit of 1 hour.


### **<u>Languages</u>**

- C++
- Bash

### **<u>Problems resume</u>**

- **Problem 1**: problem to fix the code. Need to compile and execute de code fixing the errors until the output is right.
- **Problem 2**: OOP Design.
- **Problem 3**: write a shell command to get desired result.

---

## Problem 1 - Fix the code

### <u>Instructions</u>

1. Copy the Problem 1 code:
    - [C++](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/C%2B%2B/Problem1/sorter.cpp).
2. Create a OneCompiler of selected language:
    - [OneCompiler C++](https://onecompiler.com/cpp)
3. Paste the Problem 1 code on OneCompiler

#### Bubble Sort simulation example

![](https://miro.medium.com/v2/resize:fit:720/format:webp/1*7seGXJi3te9beNfpAvFXEQ.gif)

#### Selection Sort simulation example

![](https://miro.medium.com/v2/resize:fit:720/format:webp/1*5WXRN62ddiM_Gcf4GDdCZg.gif)

### <u>Problem</u>

This folder contains a code with some sorting algorithms for integer arrays.

- The code will not run because there are errors.
- There are some logical errors that will make the algorithms run wrongly.

a. Fix all the errors. So the program compile.

b. Fix all logical errors so the array is sorted from the smaller number to the greater number.

---

## Problem 2 - OOP Design

### Instructions

1. Create a OneCompiler of selected language:
    - [OneCompiler C++](https://onecompiler.com/cpp)
2. Implement the classes

### <u>Problem</u>

Design a simple class hierarchy for geometric shapes (Shape, Circle, Rectangle).
- Each shape should be able to compute its area via a virtual method.
- It should be possible to change and get the shape color via virtual method (needs to be thread safe)
- Write the interface and at least one derived class.
- Demonstrate usage in a main function.

---

## Problem 3 - Bash

### Instructions

1. Create a new [One Compiler bash](https://onecompiler.com/bash).
2. Paste the [Problem 2](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/Bash/Problem2/linux.sh) code

### <u>Problem</u>

Inside the folder "$TEST_DIR", there are multiple files.
Your task is to find **all files** that contain the word 'test' (case-sensitive),
and replace every occurrence of 'test' with 'local'.

You can use tools like grep, sed, find, etc.

Make sure the contents of the matching files are changed in-place.
