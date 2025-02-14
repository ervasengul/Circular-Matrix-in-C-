# Circular-Matrix-in-C-
Overview
The program generates a 2D matrix where each row is a circularly shifted version of the previous row. The shifting is done in such a way that the elements wrap around, creating a circular pattern. The size of the matrix is provided by the user.

How It Works
Input: The user is prompted to enter the size of the matrix.

Matrix Generation:

A 2D array of the specified size is created.

Each element in the matrix is calculated using the formula:
(i + j + rotate) % size + 1, where:

i is the row index.

j is the column index.

rotate is the row index (used to create the circular shift).

Output: The generated matrix is printed to the console.

Code Structure
The code consists of the following components:

generate_circmatrix Function
Purpose: Generates and prints the circular matrix.

Parameters:

int size: The size of the matrix (number of rows and columns).

Logic:

A 2D array array2D of size size x size is created.

The matrix is filled using the formula (i + j + rotate) % size + 1.

The matrix is printed row by row.

main Function
Purpose: Drives the program.

Steps:

Prompts the user to enter the size of the matrix.

Calls the generate_circmatrix function to generate and print the matrix.

Usage
Compile the program using a C compiler (e.g., gcc):

bash
Copy
gcc -o circmatrix circmatrix.c
Run the program:

bash
Copy
./circmatrix
Enter the size of the matrix when prompted.
