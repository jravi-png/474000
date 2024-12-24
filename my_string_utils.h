// my_string_utils.h
#ifndef MY_STRING_UTILS_H
#define MY_STRING_UTILS_H

#include <cstring>

// Inline version of strlen
inline size_t inline_strlen(const char* str) {
    const char* s = str;
    while (*s) ++s;
    return s - str;
}

// Inline version of strcpy
inline char* inline_strcpy(char* dest, const char* src) {
    char* original = dest;
    while ((*dest++ = *src++));
    return original;
}

#endif // MY_STRING_UTILS_H