# Interactive Tests

## Table of Contents
1. [Configuration Requirements](#configuration-requirements)
1. [OpenOCD Configuration Options](#openocd-configuration-options)
1. [Test Targets](#test-targets)
1. [Tests](#tests)

## Configuration Requirements
picolibrary-microchip-sam-d21da1 interactive tests have the following project
configuration requirements:
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_ENABLE_INTERACTIVE_TESTING` must be `ON`
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_TESTING_INTERACTIVE_LINKER_SCRIPT` must be configured
  if `PICOLIBRARY_MICROCHIP_SAM_D21DA1_USE_PARENT_PROJECT_BUILD_FLAGS` is `OFF`

## OpenOCD Configuration Options
picolibrary-microchip-sam-d21da1 interactive tests support the following OpenOCD
configuration options:
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_SEARCH_PATH`: OpenOCD configuration files and
  scripts search paths
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_FILES`: OpenOCD configuration files and
  scripts to execute
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_DEBUG_LEVEL`: OpenOCD debug level
- `PICOLIBRARY_MICROCHIP_SAM_D21DA1_OPENOCD_COMMANDS`: OpenOCD commands to execute on
  server startup

## Test Targets
Each picolibrary-microchip-sam-d21da1 interactive test has the following targets:
- `<test executable name>`: executable creation target
- `<test executable name>-program-flash`: OpenOCD flash programming target

## Tests
