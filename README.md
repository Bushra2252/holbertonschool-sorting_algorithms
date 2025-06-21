# Sorting algorithms & Big O
![sorting](https://upload.wikimedia.org/wikipedia/commons/8/8e/Merge_sort_animation.gif)
## Table of content

- [Project Idea](#project-idea)
- [Team Members and Roles](#team-members-and-roles)
- [Installation & Compilation](#installation--compilation)
- [Team Collaboration and Code Review](#team-collaboration-and-code-review)
- [Coding Style](#coding-style)

## Project idea
This project implements four sorting algorithms in C: Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort.

It aims to visualize how each algorithm works by printing the array or list after every swap, and to analyze their time complexities.

## Team Members and Roles
#### Bushra:

* Implemented the Bubble Sort algorithm in 0-bubble_sort.c, which sorts an array of integers in ascending order and prints the array after each swap.

* Implemented the Insertion Sort algorithm on a doubly linked list in 1-insertion_sort_list.c, with output showing the list after each swap of nodes.

#### Haifa:

* Implemented the Selection Sort algorithm in 2-selection_sort.c, which repeatedly selects the minimum element and swaps it to sort the array.

* Implemented the Quick Sort algorithm in 3-quick_sort.c, using the Lomuto partition scheme.

## Installation & Compilation
Clone the repo and compile any task with:

```bash
git clone https://github.com/Bushra2252/holbertonschool-sorting_algorithms.git
cd holbertonschool-sorting_algorithms

# Example for Task 0 (Bubble Sort)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
print_array.c 0-bubble_sort.c 0-main.c -o 0-bubble

./0-bubble
```

Replace `0-bubble_sort.c` and `0-main.c` with the files for the task you're testing.

## Team Collaboration and code Review
All code contributions were done through Pull Requests.

Bushra, as the repository owner, was responsible for managing the repository, reviewing changes, and merging approved pull requests.

All conflicts or integration issues were resolved in coordination between team members to ensure clean and functional code

## Coding style
All code in this project follows the **Betty coding style**

## Author

- **Bushra Alotaibi**
GitHub: [@Bushra2252](https://github.com/Bushra2252)

- **Haifa bin Hasher**
GitHub: [@Haifahasher](https://github.com/Haifahasher)
