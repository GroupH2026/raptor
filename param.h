/******************************************************************************
 *
 * This code is written by Zhenfei Zhang @ OnboardSecurity
 *
 ******************************************************************************/
/*
 * param.h
 *
 *  Created on: May 15, 2018
 *      Author: zhenfei
 */

#ifndef PARAM_H_
#define PARAM_H_


/*
 * DIM and PARAM_Q are fixed by the vendored Falcon-512 implementation in
 * falcon/ (see falcon/api.h: CRYPTO_PUBLICKEYBYTES/SECRETKEYBYTES/BYTES
 * are hardcoded for N=512, q=12289). Do not override these from the
 * Makefile without also reworking falcon/ - doing so will silently
 * corrupt keys and signatures rather than fail loudly.
 */
#define DIM     512     /* ntru ring: x^512+1 */
#define PARAM_Q 12289

#define SEEDLEN 64

/* The params below are safe to override, e.g. `make NOU=10` */

#ifndef SIGMA
#define SIGMA   123     /* also the smooth parameter */
#endif

#ifndef NOU
#define NOU     50      /* Number of users (ring size) */
#endif

#ifndef PARAM_NONCE
#define PARAM_NONCE     40
#endif

#endif /* PARAM_H_ */
