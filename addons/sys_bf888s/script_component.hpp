#define COMPONENT sys_bf888s
#define COMPONENT_BEAUTIFIED BF 888S
#include "\idi\acre\addons\main\script_mod.hpp"

//#define DEBUG_MODE_FULL
//#define DISABLE_COMPILE_CACHE
//#define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_SYS_BF888S
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_ENABLED_SYS_BF888S
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SYS_BF888S
#endif

#include "\idi\acre\addons\main\script_macros.hpp"

#define NAME_BF888S Baofeng 888S

#define GET_VAR(var1) acre_player getVariable QGVAR(var1)
#define SET_VAR(var1,var2) acre_player setVariable [QGVAR(var1), var2]

#define MAIN_DISPLAY (findDisplay 31337)

#include "\idi\acre\addons\sys_components\script_acre_component_defines.hpp"
