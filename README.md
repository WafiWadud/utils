# utils

Some utility scripts I thought would be useful. May be updated someday.

A small collection of standalone scripts and helper tools for common tasks — quick utilities for automation, text processing, system helpers, and developer convenience. Each script is short, focused, and (where applicable) documented with usage examples.

## Table of Contents

- [What you'll find here](#what-youll-find-here)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Testing](#testing)
- [License](#license)
- [Contact](#contact)

## What you'll find here

- Small, single-purpose scripts (Bash, Python, etc.) for automating repetitive tasks.
- Helpers for text processing, file operations, and quick local tooling.
- Example snippets that can be dropped into other projects or run standalone.

Notes:
- Scripts are intended to be simple and easy to read — treat them as utilities or learning examples rather than production libraries.
- Where a script has known dependencies, those are documented in the script header or the usage section below.

## Installation

Clone the repository:

```bash
git clone https://github.com/WafiWadud/utils.git
cd utils
```

Most scripts are runnable directly. Depending on the script language, you may need to install dependencies or make the script executable.

Example: make a shell script executable

```bash
chmod +x scripts/example.sh
./scripts/example.sh
```

Example: run a Python utility

```bash
python3 scripts/example.py
# or if the script uses a virtual environment
python3 -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt  # if present
python3 scripts/example.py
```

## Usage

Each script should include a short header describing what it does and how to run it. Look at the top of each file for usage examples and required arguments.

Common conventions used across scripts:
- `--help` or `-h` for a short usage message (if the script implements argument parsing).
- Exit codes follow POSIX conventions (0 for success).

If you are not sure what a script does, open it in a text editor — these utilities are intentionally small and readable.

## Contributing

Contributions welcome. If you'd like to add a script or improve an existing one:

1. Fork the repository.
2. Add your script under a logical subdirectory (e.g., `scripts/`, `tools/`, `bin/`).
3. Include a brief header in the script with: purpose, usage, dependencies, and license (if different from the repo).
4. Open a pull request with a clear description of the change.

Please ensure scripts are documented and, where applicable, include example input/output.

## Testing

There is no centralized test harness in this repository. If a script has tests or example inputs, they will be included alongside the script or documented in its header.

If you add automated tests, please include instructions for running them in the pull request description.

## License

No license file is included by default. If you'd like to apply a license to the repository, consider adding a `LICENSE` file (for example, the MIT License) and reference it here.

## Contact

If you have questions or suggestions, open an issue or a pull request on GitHub: https://github.com/WafiWadud/utils

---

Thank you for checking out this repository. Contributions, fixes, and suggestions are appreciated — this is a small, evolving collection of useful utilities.