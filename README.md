# push_swap

> An optimized stack-sorting program in C that outputs the minimal (or near-minimal) sequence of allowed operations to sort integers.

![Language](https://img.shields.io/badge/language-C-blue)
![Algorithms](https://img.shields.io/badge/topic-algorithms%20%7C%20data%20structures-informational)
![Project](https://img.shields.io/badge/42%20School-push__swap-black)

## Overview

`push_swap` is a well-known 42 School project: given a list of integers, you must sort them using **two stacks** (`A` and `B`) and a limited set of stack operations, printing the operations to `stdout`.

This repo implements:

- parsing + validation (integers only, no duplicates, int range)
- stack representation and operations
- specialized strategies for small inputs (3/4/5)
- scalable strategies for larger sets (100/500), using indexing / chunking style approaches

**Repository:** `otelliq/push_swap`  
**Default branch:** `main`

## Tech stack

- C
- Makefile build
- Custom `libft` (vendored in `push_swap/libft`)

## Key features

- Implements all required moves:
  - swaps: `sa`, `sb`, `ss`
  - pushes: `pa`, `pb`
  - rotates: `ra`, `rb`, `rr`
  - reverse rotates: `rra`, `rrb`, `rrr`
- Robust input validation:
  - checks digits / sign
  - prevents overflow (`INT_MIN`..`INT_MAX`)
  - detects duplicates
- Multiple sorting strategies:
  - `sort_3`, `sort_4`, `sort_5`
  - `sort_100`, `sort_500` (and reverse variants)

(See function prototypes in `push_swap/push_swap.h`.)

## Screenshots

> No screenshots provided yet.

A good screenshot to add is a small run example showing the printed operations.

## Installation & setup

### Prerequisites

- `make`
- C compiler (`cc` / `clang` / `gcc`)

### Build

From the repository root:

```bash
make -C push_swap
```

This should produce the `push_swap` executable (depending on Makefile rules).

## Usage examples

### Sort a list of numbers

```bash
./push_swap 3 2 1
```

Output will be a sequence of operations, e.g.:

```text
sa
rra
```

### Provide numbers as a single quoted string

If your parser supports it (common in 42 projects):

```bash
./push_swap "3 2 1 6 5"
```

### Verify correctness (with a checker)

If you have a `checker` tool available (from 42 resources), you can pipe the operations:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

## Project structure

```text
.
└── push_swap/
    ├── Makefile
    ├── push_swap.c
    ├── push_swap.h
    ├── movements*.c
    ├── sorting*.c
    ├── utils*.c
    ├── errors.c
    └── libft/
```

## License

No license file is currently included in this repository.

If you want this to be usable beyond an academic context, consider adding a `LICENSE` file (MIT/Apache-2.0 are common choices) and updating this section accordingly.
