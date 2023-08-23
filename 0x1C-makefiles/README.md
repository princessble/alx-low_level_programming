alx-low_level_programming
Welcome to the alx-low_level_programming repository! This repository contains a series of tasks related to low-level programming concepts and Makefiles. Each task is designed to help you understand and practice different aspects of programming in C and working with Makefiles. Let's dive into each task and see what they are all about!

Task 0: Your First Makefile 🛠️
In this task, you'll create your very first Makefile. The Makefile is used to build the executable named "school" using the provided source code files. The Makefile includes the following rules and features:

all: This rule builds the executable "school."
The source code files are "main.c" and "school.c."
To compile and build the executable, simply run make -f 0-Makefile in the terminal.
After building, you can run the executable using ./school.
Task 1: Compiler and Source Files 📜
In this task, you'll work on improving the Makefile by adding variables for the compiler and source code files. The Makefile includes the following features:

The executable name is "school."
The compiler is specified using the CC variable.
The source code files are specified using the SRC variable.
To compile and build the executable, use the command make -f 1-Makefile.
Task 2: Useful Makefile 🛠️
In this task, you'll create a more advanced Makefile that includes variables for object files and the executable name. The Makefile includes the following features:

The executable name is "school."
The compiler is specified using the CC variable.
The source code files are specified using the SRC variable.
The object files are specified using the OBJ variable.
To compile and build the executable, use the command make -f 2-Makefile.
Task 3: Cleaning Up 🧹
This task focuses on enhancing the Makefile by adding rules for cleaning up temporary and generated files. The Makefile includes the following rules:

all: This rule builds the executable "school."
clean: This rule deletes Emacs and Vim temporary files and the executable.
oclean: This rule deletes the object files.
fclean: This rule deletes temporary files, the executable, and object files.
re: This rule forces recompilation of all source files.
Various variables are used for customization, such as CC, SRC, OBJ, NAME, and RM.
To use these rules, run commands like make clean -f 3-Makefile.
Task 4: Complete Makefile 📜
This task builds upon the previous ones and introduces more customization through compiler flags. The Makefile includes the following features:

The executable name is "school."
The compiler is specified using the CC variable.
The source code files are specified using the SRC variable.
The object files are specified using the OBJ variable.
Compiler flags are specified using the CFLAGS variable.
To compile and build the executable with flags, use the command make all -f 4-Makefile.
Task 5: Island Perimeter Challenge 🏝️
In this task, you'll tackle a technical interview preparation challenge involving a grid representing an island. Your goal is to calculate the perimeter of the island described in the grid. The Python function island_perimeter(grid) takes a 2D grid as input and returns the perimeter of the island.

Please note the following requirements:

The grid is a list of lists of integers, where 0 represents water and 1 represents land.
Cells are connected horizontally/vertically but not diagonally.
The grid is rectangular with width and height not exceeding 100.
The grid is completely surrounded by water, and there is only one island.
The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
To run the solution and test the function, use the provided Python script 5-main.py:
