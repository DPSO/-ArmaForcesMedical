#define MAINPREFIX z
#define PREFIX dpsomed

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define REQUIRED_VERSION 1.94

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(DPSOMED - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(DPSOMED - COMPONENT)
#endif

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
#else
    #define LINKFUNC(x) FUNC(x)
#endif

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}
