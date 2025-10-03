//
// default_files.h

#ifndef _DEFAULT_FILES_H_
#define _DEFAULT_FILES_H_

#include <Arduino.h>

boolean default_file_exists(const char *path);
const char *default_files_find(const char *path, size_t *length);

#endif

//
// END OF default_files.h
