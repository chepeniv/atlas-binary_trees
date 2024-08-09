# C: Binary Trees

## Resources
- [wikipedia: binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [wikipedia: binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [tutorialspoint: tree data structure](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [tutorialspoint: tree traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
- [youtube(mycodeschool): binary tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Objectives
- what are binary trees and binary search trees
- understand the performance cost (time complexity) of these data structures
- what are depth, height, and size of a binary tree
- what are the different traversal methods
- what are complete, full, perfect, and balanced binary trees

## Guidelines
- global variables are not allowed
- no more than five functions per file
- use of the standard library is permitted :smile:
- `main.c` will not be compiled by the checker
- include all function prototypes in `binary_trees.h`
- header files should be include-guarded
compilation : `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -ggdb3 *.c`

### Data Structures
in `binary_trees.h` :
#### basic binary tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### binary search tree
```c
typedef struct binary_tree_s bst_t;
```

#### AVL tree
```c
typedef struct binary_tree_s avl_t;
```

#### max binary heap
```c
typedef struct binary_tree_s heap_t;
```
