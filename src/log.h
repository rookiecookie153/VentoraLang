#ifndef LOG_H
#define LOG_H

extern int VT_verbosity;

void VT_log(int level, const char *fmt, ...);

#endif