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

---

### **<u>Requirements:</u>**

For this test, you'll need:

- Connection to the internet
- Access to a brownser
- TeamViewer

### Implementation environment

- Some problems will be implemented in the [OneCompiler](https://onecompiler.com/) site.

### **<u>Time limit</u>**

- You'll have 15 minutes only to read this document. You can't solve anything within this time. You can read code as well.
- The problems should be solved in a time limit of 1 hour.


### **<u>Languages</u>**

The problems are implemented with:

- C++

### **<u>Problems resume</u>**

- **Problem 1**: problem to fix the code. Need to compile and execute de code fixing the errors until the output is right.
- **Problem 2**: fix webserver issues.

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

c. (Optional) After fix the errors, you can improve the code quality to make it easier to read, more organized, or even more optimized.

---

## Problem 2 - Bash

### Instructions

1. Open your TeamViewer app.
2. Connect to the client computer

### <u>Problem</u>

There is a webservice running on a server, but the client has complained that he cannot access the webserver from his browser. Your job is to understand what are the issues and fix it.

#### Details

Client:
- username: client
- password: client

Server:
- ip: 192.168.122.124/24
- username: server
- password: server
- service instalation path: /opt/webservice
- the service is running with systemd

#### Acceptance criteria

- The client should be able to access the webserver through the browser on the address http://192.168.122.124:8080
