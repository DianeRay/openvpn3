#ifndef OPENVPN_GENCRYPTO_GENCRYPTO_H
#define OPENVPN_GENCRYPTO_GENCRYPTO_H

#if defined(USE_APPLE_SSL) && !defined(USE_OPENSSL)
#define OPENVPN_APPLE_CRYPTO
#endif

#endif // OPENVPN_GENCRYPTO_GENCRYPTO_H
