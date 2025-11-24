# List all source files
set(SOURCES
    main.c
    vector.c
    potentials.c
    tridiagonal.c
    hamiltonian.c
)

# Create the executable
add_executable(schrodinger ${SOURCES})
