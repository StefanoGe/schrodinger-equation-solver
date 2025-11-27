[![LinkedIn][linkedin-shield]][linkedin-url]

# 1D Schrödinger's equation --- a numerical approach

*** To be added: table of contents

## About The Project

This project oughts to provide a modular C implementation for solving the **time-independent (TISE)** and **time-dependent (TDSE)** 1D Schrödinger equation.

The goals of this project are mainly pedagogical. It will help visualise one-dimensional quantum mechanical systems, stregthening the undergraduate user's intuition. Building the project will also deepen my understanding of quantum mechanics and numerical differential equations, and will help me build crucial skills in independent research, project organization, and scientific software engineering. Altogether, these abilities will help me a lot in a research future.

Emphasis will be placed on:

- clean and well-structured C23 code
- simple Python visualization tools
- extensibility (new potentials, new grids, new solvers)  
- clarity of implementation over micro-optimization

*** To be added: features

## Installation

### Requirements
- C compiler with **C23** support
- CMake ≥ 3.20  
- Python 3

### Build (CMake)
```bash
git clone https://github.com/StefanoGe/schrodinger-equation-solver.git
cd 1d-schrodinger
cmake -H. -Bbuild
cmake --build build
```

Executables will appear in 'build/bin'

<!-- ROADMAP -->
## Roadmap

- [ ] Time-independant Schrödinger equation
    - [x] Discretisation of the Hamiltonian
    - [ ] Inverse iteration eigenvalue solver
- [ ] Time-dependent Schrödinger equation
    - [ ] Crank-Nicolson algorithm
- [ ] Tests and examples
	- [ ] Infinite square well
	- [ ] Harmonic oscillator
- [ ] Visualisation (Python)
	- [ ] Visualisation of eigenstates
	- [ ] Animation of time evolution
- [ ] Documentation
	- [ ] Latex report

*** See the [roadmap](https://github.com/github_username/repo_name/roadmap) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/stefano-ge-2a0443397
