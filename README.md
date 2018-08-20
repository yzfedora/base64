# base64
The implementation of base64 encode and decode in C language.

# Why reinvent the wheel?
There are many implementation of base64 encode and decode for C language. perhaps I am not a good programmer, but I think coding style is very important. and I couldn't found a good implementation. so this is why I reinvent the wheel.

# How to use?
Just copy the base64.[ch] source code to your project. and include the base64.h. Here is the major API for base64 encode and decode.
```C
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
```
