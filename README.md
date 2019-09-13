# Fillit_21
## 21 school project

### Simple space optimization project.

The purpose is to make the smallest possible "square" (which can contain holes)
with a given list of tetriminos, but the disposition must be as such that it
returns the first possible solution when placing them recursively from the top left.

### Features:
- Tetraminos store as functions, grouped by shape.
- No memory management, only static structures.
- No library functions, except open/close read/write

### Usage:

	make && make clean && ./fillit test
