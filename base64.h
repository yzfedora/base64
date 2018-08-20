#ifndef _BASE64_H
#define _BASE64_H
#include <stdio.h>
#include <stdint.h>

/*
 * Base64 encode API.
 *
 * @param src	The binrary data need to encode.
 * @param n	The length of binary data.
 * @param buf	The buffer for store the encode result.
 * @param bufsz	The size of buffer.
 *
 * @return Return 0 on success or -1 if insufficient buffer size.
 */
int base64_encode(const void *src, size_t n, char *buf, size_t bufsz);

/*
 * Base64 decode API.
 *
 * @param src	The encoded base64 data.
 * @param n	The length of base64 data.
 * @param buf	The buffer for store the decode result.
 * @param bufsz	The size of buffer.
 *
 * @return Return 0 on success or -1 if insufficient buffer size.
 */
int base64_decode(const char *src, size_t n, void *buf, size_t bufsz);

static inline size_t base64_encode_length_max(size_t n)
{
	return (n + 2) / 3 * 4;
}

static inline size_t base64_decode_length_max(size_t n)
{
	return n / 4 * 3;
}

#endif
