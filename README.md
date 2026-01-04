# Examination System Simulation

A C++ object-oriented project designed to simulate an academic examination system. This project demonstrates core C++ features including inheritance, polymorphism, memory management, and the Standard Template Library (STL).

## Features

- **Role Management**: Hierarchy of users including Candidates, Junior & Senior Examiners, and Final Reviewers.
- **Advanced OOP Concepts**:
  - **Polymorphism**: Virtual functions for dynamic behavior.
  - **Abstract Classes**: `Examiner` as a base for specific examiner types.
  - **Multiple Inheritance**: `FinalReviewer` inherits from both `SeniorExaminer` and `Report`.
- **Memory Management**: Modern C++ memory safety using `std::unique_ptr` and `std::shared_ptr` (if applicable) concepts.
- **STL Integration**: Utilizes `std::vector` for storage and `std::sort` for organizing data.
- **Operator Overloading**: Custom comparison logic for sorting.
- **Type Casting**: Demonstrates `static_cast` for safe downcasting.

## Class Structure

- **User**: Abstract base class with common attributes (ID, name).
- **Candidate**: Represents a student taking an exam.
- **Examiner**: Abstract base class for reviewers.
  - **JuniorExaminer**: Basic review capabilities.
  - **SeniorExaminer**: Advanced review capabilities.
  - **FinalReviewer**: Combines senior review privileges with reporting capabilities (Multiple Inheritance).
- **Report**: Utility class for logging actions.

## Usage

The `main.cpp` file runs a demonstration scenario:

1. Creates a registry of users.
2. Demonstrates self-referencing and interaction between objects.
3. Processes raw user data using explicit casting.
4. Sorts the user registry based on IDs using overloaded operators.
