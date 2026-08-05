# Mario — CS50

Solutions for the **Mario** problem set from Harvard's CS50.

This repository contains both versions of the exercise:

- **Mario (Less Comfortable)** — Prints a right-aligned half-pyramid.
- **Mario (More Comfortable)** — Prints two mirrored half-pyramids separated by a gap.

## Project Structure

```text
.
├── README.md
├── .gitignore
├── mario_less/
│   ├── bin/
│   └── mario.c
└── mario_more/
    ├── bin/
    └── mario.c
```

## Concepts Practiced

- User input validation (`do...while`)
- Function declarations and definitions
- Nested `for` loops
- Console input and output
- Algorithmic thinking through pattern generation

---

## Mario (Less Comfortable)

Prints a right-aligned half-pyramid.

### Example

```text
Height: 5

    #
   ##
  ###
 ####
#####
```

### Compile

```bash
cd mario_less
gcc mario.c -o bin/mario
```

### Run

```bash
./bin/mario
```

---

## Mario (More Comfortable)

Prints two mirrored half-pyramids separated by two spaces.

### Example

```text
Height: 5

    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####
```

### Compile

```bash
cd mario_more
gcc mario.c -o bin/mario
```

### Run

```bash
./bin/mario
```