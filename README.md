# Software Engineering GitHub Assignment (Upgraded)

<!-- BrandCloud:readme-standard -->
[![Maintained](https://img.shields.io/badge/Maintained-yes-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Showcase](https://img.shields.io/badge/Portfolio-Showcase-blue.svg)](#)

_Part of the `sakib-maho` project showcase series with consistent documentation and quality standards._

This repository has been transformed into a small modular C project that evaluates task progress
and prints a status message based on completed vs total tasks.

## Features

- CLI input for `completed` and `total` task counts
- Reusable status message function in separate source file
- Simple test executable for behavior validation
- `Makefile` build/test workflow

## Quick Start

```bash
make build
./progress_cli 2 5
```

## Tests

```bash
make test
```

## License

MIT License. See `LICENSE`.

## Project Structure

```text
software-engineering-github-assignment/
├── include/messages.h
├── src/
│   ├── main.c
│   └── messages.c
├── tests/test_messages.c
└── Makefile
```
