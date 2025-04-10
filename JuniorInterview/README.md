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

### Implementation environment

- All problems will be implemented in the [OneCompiler](https://onecompiler.com/) site.

### **<u>Time limit</u>**

- You'll have 15 minutes only to read this document. You can't solve anything within this time. You can read code as well.
- The problems should be solved in a time limit of 1 hour.


### **<u>Languages</u>**

You can choose one of the following languages to solve the problems:

- Python
- C++

### **<u>Problems resume</u>**

You can solve the problems in which order you prefer.

- **Problem 1**: problem to fix the code. Need to compile and execute de code fixing the errors until the output is right.
- **Problem 2**: create some SQL queries to get desired output
- **Problem 3**: implement a simple code. This will check your knowledge about basic programming problems.

---

## Problem 1 - Fix the code

### <u>Instructions</u>

1. Copy the Problem 1 code:
    - [C++](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/C%2B%2B/Problem1/sorter.cpp).
    - [Python](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/Python/Problem1/sorter.py).
2. Create a OneCompiler of selected language:
    - [OneCompiler C++](https://onecompiler.com/cpp)
    - [OneCompiler Python](https://onecompiler.com/python)
3. Paste the Problem 1 code on OneCompiler

#### Bubble Sort simulation example

![](https://miro.medium.com/v2/resize:fit:600/format:webp/1*bmfRxyIQZEK0Iu5T6YV1sw.gif)

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

1. Create a new [One Compiler bash](https://onecompiler.com/bash).
2. Paste the [Problem 2](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/Bash/Problem2/linux.sh) code

### <u>Problem</u>

Inside the folder "$TEST_DIR", there are multiple files.
Your task is to find **all files** that contain the word 'test' (case-sensitive),
and replace every occurrence of 'test' with 'local'.

You can use tools like grep, sed, find, etc.

Make sure the contents of the matching files are changed in-place.


## Problem 3 - Restaurant

### <u>Instructions</u>
1. Copy the Order files from Problem 3 folder:
    - [C++](https://github.com/Imamura6/codeInterview/tree/master/JuniorInterview/C%2B%2B/Problem3).
    - [Python](https://github.com/Imamura6/codeInterview/blob/master/JuniorInterview/Python/Problem3/orders.py).
2. This files are the input files that should be used in the program.

### <u>Problem</u>

A local restaurant wants to modernize how they work now that the son of the owner will
manage it. He is your friend so he asks you to make a system that will resume the
orders information and display to the customers as required.
He will take each client order in a list that follows the specific rules:

- The first line will have the number **N** of dishes noted by the waiter;
- The second line will have the number **P** of people in the table;
- The next **N** lines will have the name of the dish and the price of it;

```vim
5
2
Dish1 15
Dish3 7
Dish1 15
Dish8 20
Dish2 6
```

The output should be a list with the dishes sorted by total value of the dishes.
Each line of this list will gather the equal dishes, display the amount of dishes
order and the total.
After all items, make a separator (e.g. ====================), and add the following
information: value of the tab, value for each person. The example above will
have the following result:

```vim
Dish1 | 2x | 30
Dish8 | 1x | 20
Dish3 | 1x | 7
Dish2 | 1x | 6
=====================
Total: $63
Total per person: $31.5
```

### Procedures suggestion:
1. Create a class OrderItem with the following attributes: dishName, price, amount
2. Create a constructor of OrderItem to receive dishName and price
3. Read the file to get number of dishes and number of people
4. Read each dish and do: split name from price and create a OrderItem with it.
5. Create a function that prints all the OrderItem values.
6. The function from step 5. can calculate and display the total.
7. Sort the dishes by price.

<details>
    <summary>Example of how to read files in C++</summary>

```vim
#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::ifstream myfile;
    myfile.open("order1.txt");
    std::string myline;
    if ( myfile.is_open() ) {
        while ( myfile ) {
            std::getline (myfile, myline);
            std::cout << myline << '\n';
        }
    }
    else {
        std::cout << "Couldn't open file\n";
    }
    return 0;
}
```
</details>
