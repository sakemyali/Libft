# libft

A small C library implementing commonly used functions from the C standard library and a few utility helpers. This project is a typical "libft" used for the 42 cursus: a learning exercise that reimplements functions like memory/string utilities, character checks, conversions, simple I/O helpers and a small linked-list API (bonus).

## Key features

- Reimplementations of common C functions: memory operations, string operations, character checks, numeric conversions.
- Small, well-scoped API suitable for inclusion in student projects and learning C internals.
- Bonus linked-list utilities (create, push, iterate, map, clear).
- Simple build via a provided `Makefile` that produces a static archive `libft.a`.

## Quickstart — build and use

Requirements:

- A POSIX-compatible system and a C compiler (clang or gcc).

Clone the repository and build the static library:

```sh
git clone https://github.com/sakemyali/Libft
cd Libft
make
```

Compile and link with the static archive (one of these will work):

```sh
# compile and link directly with the archive
cc -I. main.c libft.a -o main

# or use -L and -l (library name must be `libft.a` -> `-lft`), put -lft after objects
cc -I. main.c -L. -lft -o main
```

Run:

```sh
./main
# len('hello') = 5
```

Notes:

- Many functions mirror their standard counterparts in behavior and signature (see `libft.h`).
- If you want the bonus linked-list functions compiled into `libft.a`, run:

```sh
make clean
make bonus
```

## Acknowledgements

This project follows the Libft project in the 42 cursus and educational material for learning C.
