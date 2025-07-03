<p align="center">
    <img src="ISO_C++_Logo.webp" alt="C++" width="150" height="150">
</p>

# 42 C++ Common Core Modules Repository

This repository contains the exercises and projects from the **42 C++ Common Core curriculum**, covering Modules 00 through 09. Each module progressively builds your skills in C++ programming with strict coding constraints, designed to teach you solid software craftsmanship from scratch.

---

## Module Overview

### Module 00 — **Basic C++ Syntax and Class Foundations**
- Learn to compile C++ code with flags `-Wall -Wextra -Werror -std=c++98`
- Understand classes, member functions, constructors, destructors
- Master initialization lists, static and const members
- Write classes following the Orthodox Canonical Form (default constructor, copy constructor, assignment operator, destructor)
- Use streams for I/O; no STL containers allowed
- Implement basic encapsulation and class design

### Module 01 — **Inheritance and Polymorphism Basics**
- Introduction to class inheritance, protected/private members
- Implement virtual functions and polymorphism basics
- Use abstract classes and pure virtual functions
- Continue strict avoidance of STL containers
- Follow best practices for resource management

### Module 02 — **Advanced Class Design and Canonical Form**
- Deep dive into copy constructors and assignment operator overloading
- Ensure proper memory management and avoid leaks
- Understand the Rule of Three in practice
- Work with const-correctness and references
- Practice writing clean, maintainable class code

### Module 03 — **Function Templates and Overloading**
- Create function templates to achieve code generality
- Practice function overloading and default parameters
- Work within C++98 standard constraints
- Begin more sophisticated code abstraction

### Module 04 — **Operator Overloading**
- Overload operators (arithmetic, comparison, insertion/extraction)
- Understand when to use member vs non-member operator overloads
- Continue to enforce orthodox canonical form in classes

### Module 05 — **Exception Handling**
- Learn to use try-catch blocks
- Throw and catch exceptions correctly
- Create custom exception classes
- Understand exception safety guarantees

### Module 06 — **Dynamic Memory and Pointers**
- Manage dynamic memory with `new` and `delete`
- Avoid leaks by writing proper destructors
- Handle pointers and references safely
- Explore smart pointers only if allowed (usually later modules)

### Module 07 — **File I/O and Streams**
- Use fstream to read/write files
- Handle file errors gracefully
- Parse and process file data efficiently

### Module 08 — **STL Containers Introduction**
- Allowed to use STL containers like `vector`, `list`, `map`
- Use STL algorithms where appropriate
- Write idiomatic C++ code with containers and iterators

### Module 09 — **Advanced STL and Algorithms**
- Use advanced STL features and algorithms
- Practice writing efficient, generic code
- Master iterator categories and adaptors

---

## Coding Constraints & Style

- No external libraries besides the C++ standard library (within allowed modules)
- Strict compilation with `-Wall -Wextra -Werror -std=c++98`
- No `printf`, `malloc`, `free`, or C++11 and above features (until specified)
- No `using namespace std;` anywhere — fully qualify standard names
- No friend classes or functions unless explicitly allowed
- Memory leaks = automatic 0 grade
- Every exercise requires clean, readable code maintainable by peers

---

## Repository Structure

```plaintext
42-cpp-common-core/
├── module00/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ...
├── module01/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ...
├── module../
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ...
├── module09/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ...
└── README.md
```

## Building and Running
To compile and run the exercises, navigate to each module directory and use the following command:

```bash
make
./executable_name
```
Make sure to replace `executable_name` with the actual name of the compiled program for each exercise.

This compilation command will ensure that your code adheres to the strict C++98 standards and coding constraints set by the 42 curriculum.
With flags -Wall -Wextra -Werror -std=c++98

## Coding Standards & Restrictions
- Use c++98 standards only
- No STL containers until specified
- No `printf`, `malloc`, `free`
- No `using namespace std;`
- Follow the Orthodox Canonical Form for classes
- No friend classes or functions unless specified
- Memory leaks will result in a 0 grade
- Every exercise must be clean, readable, and maintainable

## License
This repository is not licensed for external use. It is intended solely for educational purposes within the 42 C++ Common Core curriculum. All code must adhere to the strict coding standards and constraints outlined in the curriculum.