#ifndef GLTALGOS_H
#define GLTALGOS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void pawelhash(const char* input, char* output, uint32_t len);
void astralhash(const char* input, char* output, uint32_t len);
void jeonghash(const char* input, char* output, uint32_t len);
void padihash(const char* input, char* output, uint32_t len);
void globalhash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
