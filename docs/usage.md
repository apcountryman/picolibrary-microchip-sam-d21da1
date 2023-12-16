# Usage

## Table of Contents
1. [Dependency](#dependency)
    1. [Configuration Options](#configuration-options)
1. [Development](#development)

## Dependency
To use picolibrary-microchip-sam-d21da1 as a dependency, simply add the subdirectory
containing the repository to a CMake build, and link with the
`picolibrary-microchip-sam-d21da1` static library.
```cmake
add_subdirectory( picolibrary-microchip-sam-d21da1 )
```
```cmake
target_link_libraries(
    foo
    picolibrary-microchip-sam-d21da1
)
```

The `picolibrary-microchip-sam-d21da1` static library does not include
`::picolibrary::Microchip::SAM::D21DA1::version()`.
To use `::picolibrary::Microchip::SAM::D21DA1::version()`, link with the
`picolibrary-microchip-sam-d21da1-version` static library.
```cmake
target_link_libraries(
    foo
    picolibrary-microchip-sam-d21da1
    picolibrary-microchip-sam-d21da1-version
)
```

### Configuration Options
picolibrary-microchip-sam-d21da1 supports the following project configuration options:
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING` (defaults to `OFF`):
  enable interactive testing
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_PICOLIBRARY_ARM_CORTEX_M0PLUS`
  (defaults to `ON`): use parent project's picolibrary-arm-cortex-m0plus

## Development
The repository's Git `pre-commit` hook script is the simplest way to configure, and build
picolibrary-microchip-sam-d21da1 during development.
See the `pre-commit` script's help text for usage details.
```shell
./git/hooks/pre-commit --help
```

Additional checks, such as static analysis, are performed by the repository's GitHub
Actions CI workflow.
