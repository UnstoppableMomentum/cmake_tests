#ifndef LOGS_H

#include <iostream>

#if defined(LOG_LEVEL_DEBUG)
    #define LOG_DBG(Format, ...) printf ("[%s:%u %s] " Format "\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, __VA_ARGS__)
#else
    #define LOG_DBG(...)
#endif

#endif // LOGS_H
