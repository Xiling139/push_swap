_This project has been created as part of the 42 curriculum by zhewu._
# Push_swap - 42 Project

## Description
Push_swap is a 42 school project of writing a program with sorting algorithm using two stacks and a limited set of instructions, and introduces the concept of complexity. The goal is to write an optimized sorting program to sort numbers within the operation limits.

### Objectives
- Understand and implement various sorting algorithms.
- Analyze algorithm complexity and optimize for the lowest number of operations.
- Learn to manage two stacks simultaneously.

###    Allowed Operations
The program sorts integers using a predefined set of operations:

- sa (swap a): Swap the first two elements at the top of stack a.
- sb (swap b): Swap the first two elements at the top of stack b.
- ss: Perform sa and sb simultaneously.
- pa (push a): Take the first element at the top of b and put it at the top of a.
- pb (push b): Take the first element at the top of a and put it at the top of b.
- ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last.
- rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last.
- rr: Perform ra and rb simultaneously.
- rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first.
- rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first.
- rrr: Perform rra and rrb simultaneously.

## Instructions

### Installation:
1. Clone the repository and navigate into the project directory:
```bash
git clone https://github.com/Xiling139/push_swap push_swap
cd push_swap
```

2. Compile the program by running make:
```bash
make
```
This will generate the excutable file "push_swap".

### Usage
The push_swap program takes a list of integers as arguments and outputs the sequence of operations (from the list above) required to sort them in ascending order.

```bash
./push_swap 4 2 5 1 3
./push_swap 2 1 3 6 5 8
./push_swap 100 99 98 97 ...
```
###    Error Handling
The program is designed to handle invalid input properly. In all the following cases, the program will display "Error" followed by a newline on the standard error.
```bash
./push_swap a b c
Error
./push_swap 1 2 1
Error
./push_swap 80000000000
Error
```


## Resources
https://satyadeepmaheshwari.medium.com/sorting-large-datasets-with-limited-memory-the-chunked-merge-sort-approach-318275275c81: - This resource provided valuable insight into handling data with limited memory (two stacks).

### AI Usage
Ai was used in the following ways for this project:

- **Documentation assistance:** AI helped with structuring and formatting this README.md file
- **Conceptual Understanding:** AI was used to research and better understand different sorting algorithms and their complexities.

**Note:** All configurations were manually implemented and tested. AI was used as a learning aid to understand concepts, not to generate solutions.
