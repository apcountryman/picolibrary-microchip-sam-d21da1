# Library Version
To access the null-terminated library version string that is stored in ROM, link with the
`picolibrary-microchip-sam-d21da1-version` static library, include
[`picolibrary/microchip/sam/d21da1/version.h`](https://github.com/apcountryman/picolibrary-microchip-sam-d21da1/blob/main/include/picolibrary/microchip/sam/d21da1/version.h)
and use `::picolibrary::Microchip::SAM::D21DA1::version()`:
```cmake
target_link_libraries(
    foo
    picolibrary-microchip-sam-d21da1
    picolibrary-microchip-sam-d21da1-version
)
```
```c++
#include "picolibrary/stream.h"
#include "picolibrary/microchip/sam/d21da1/version.h"

void foo( ::picolibrary::Reliable_Output_Stream & stream ) noexcept
{
    stream.put( ::picolibrary::Microchip::SAM::D21DA1::version() );
}
```
The null-terminated library version string is populated with the output of the following
Git command:
```shell
git describe --match=none --always --dirty --broken
```
