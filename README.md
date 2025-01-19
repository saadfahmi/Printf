# Custom C Library Project

This repository contains a custom C library designed for handling various string manipulations and other utility functions. The project is organized into multiple files to promote modularity and maintainability.

## Table of Contents

- [About the Project](#about-the-project)
- [Files Description](#files-description)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## About the Project

This project implements custom utility functions in C, including:
- A custom `printf` function.
- String manipulation utilities.
- Modular design for easy integration into other projects.

## Files Description

```plaintext
.vscode/           - Configuration files for Visual Studio Code.
_printf.c          - Custom implementation of the printf function.
custom.c           - Functions for string handling and custom utilities.
function1.c        - Additional string manipulation functions.
function2.c        - Functions related to print formatting.
handlers.c         - Handlers for various data types and formats.
main.h             - Header file containing declarations for the library.
main.c             - Example program to demonstrate the use of the custom library.
```
## ⚙️ How to Compile and Run
1. Clone the repository:
  ```bash
   git clone https://github.com/saadfahmi/Printf.git
   cd Printf
   gcc main.c
   ./a.out
