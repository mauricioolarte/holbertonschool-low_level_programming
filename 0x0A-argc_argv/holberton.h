#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#ifdef __argc__
#  define UNUSED(x) UNUSED_ ## x __argc__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif

#ifdef __argv[]__
#  define UNUSED(x) UNUSED_ ## x __argv[]__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif










#endif /* _HOLBERTON_H_ */
