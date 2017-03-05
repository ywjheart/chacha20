
#include <stdint.h>

#define crypto_stream_chacha20_KEYBYTES 32U
#define crypto_stream_chacha20_NONCEBYTES 8U
#define crypto_stream_chacha20_IETF_NONCEBYTES 12U

/* ChaCha20 with a 64-bit nonce and a 64-bit counter, as originally designed */
int
crypto_stream_chacha20(unsigned char *c, unsigned long long clen,
                           const unsigned char *n, const unsigned char *k);

int
crypto_stream_chacha20_xor_ic(unsigned char *c, const unsigned char *m,
                                  unsigned long long mlen,
                                  const unsigned char *n, uint64_t ic,
                                  const unsigned char *k);

/* ChaCha20 with a 96-bit nonce and a 32-bit counter (IETF) */
int
crypto_stream_chacha20_ietf(unsigned char *c, unsigned long long clen,
                                const unsigned char *n, const unsigned char *k);

int
crypto_stream_chacha20_ietf_xor_ic(unsigned char *c, const unsigned char *m,
                                       unsigned long long mlen,
                                       const unsigned char *n, uint32_t ic,
                                       const unsigned char *k);
