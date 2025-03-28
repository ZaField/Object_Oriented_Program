# C++ Programs: OOP vs Functional Programming

This repository contains implementations of basic C++ programs using **two different paradigms**:
- **OOP (Object-Oriented Programming)** – Uses classes and encapsulation.
- **FP (Functional Programming)** – Uses standalone functions instead of classes.

## 📂 Folder Structure

```
Cpp-Programs
│── OOP (Object-Oriented Version)
│   ├── calculator.cpp
│   ├── counter.cpp
│   ├── point.cpp
│   ├── rectangle.cpp
│   ├── student.cpp
│
│── FP (Functional Programming Version)
│   ├── calculator.cpp
│   ├── counter.cpp
│   ├── point.cpp
│   ├── rectangle.cpp
│   ├── student.cpp
│
│── README.md
```

## 📜 Program Descriptions

| Program       | OOP Version | Functional Version | Description |
|--------------|------------|-------------------|-------------|
| **Calculator** | `OOP/calculator.cpp` | `FP/calculator.cpp` | Performs basic arithmetic operations (Add, Subtract, Multiply, Divide) |
| **Counter** | `OOP/counter.cpp` | `FP/counter.cpp` | Increments a counter and displays the value |
| **Point** | `OOP/point.cpp` | `FP/point.cpp` | Calculates the distance of a point from the origin |
| **Rectangle** | `OOP/rectangle.cpp` | `FP/rectangle.cpp` | Computes the area of a rectangle |
| **Student** | `OOP/student.cpp` | `FP/student.cpp` | Displays student details |

## 🛠 How to Run

Make sure you have a **C++ compiler (g++)** installed. You can compile and run any program using:

```
g++ -o program_name path/to/file.cpp
./program_name
```

For example, to run the functional version of `calculator.cpp`:

```
g++ -o calculator FP/calculator.cpp
./calculator
```

## 🔥 Key Differences Between OOP and Functional Programming

### ✅ Object-Oriented Programming (OOP)
- Uses **classes and objects** to model real-world entities.
- **Encapsulation** ensures data hiding and better structure.
- Allows **inheritance** and **polymorphism** for code reuse.
- **Example**:
    ```cpp
    class Calculator {
    public:
        double add(double a, double b) { return a + b; }
    };
    ```

### ✅ Functional Programming (FP)
- Uses **pure functions** instead of objects.
- No **state** or **side effects** in functions.
- Easier to test and debug due to stateless nature.
- **Example**:
    ```cpp
    double add(double a, double b) { return a + b; }
    ```

## 📌 Why Compare OOP vs FP?
This project helps to **understand different programming paradigms** and explore their advantages in various scenarios.

---
