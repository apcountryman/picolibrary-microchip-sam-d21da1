# Usage

## Table of Contents
1. [Dependency](#dependency)
    1. [Configuration Options](#configuration-options)
1. [Development](#development)

## Dependency

### Configuration Options
picolibrary-microchip-sam-d21da1 supports the following project configuration options:
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING` (defaults to `OFF`):
  enable interactive testing
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS` (defaults to `ON`):
  use parent project's build flags
- The following project configuration options are available if
  `PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING` is `ON` and
  `PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS` is `OFF`:
    - `PICOLIBRARY_MICROCHIP_SAM_D21DA1_TESTING_INTERACTIVE_LINKER_SCRIPT`: interactive
      testing linker script

## Development
The repository's Git `pre-commit` hook script is the simplest way to configure, and build
picolibrary-microchip-sam-d21da1 during development.
See the `pre-commit` script's help text for usage details.
```shell
./git/hooks/pre-commit --help
```

Additional checks, such as static analysis, are performed by the repository's GitHub
Actions CI workflow.
