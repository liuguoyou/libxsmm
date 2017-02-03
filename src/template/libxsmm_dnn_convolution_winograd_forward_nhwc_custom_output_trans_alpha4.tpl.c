/******************************************************************************
** Copyright (c) 2016-2017, Intel Corporation                                **
** All rights reserved.                                                      **
**                                                                           **
** Redistribution and use in source and binary forms, with or without        **
** modification, are permitted provided that the following conditions        **
** are met:                                                                  **
** 1. Redistributions of source code must retain the above copyright         **
**    notice, this list of conditions and the following disclaimer.          **
** 2. Redistributions in binary form must reproduce the above copyright      **
**    notice, this list of conditions and the following disclaimer in the    **
**    documentation and/or other materials provided with the distribution.   **
** 3. Neither the name of the copyright holder nor the names of its          **
**    contributors may be used to endorse or promote products derived        **
**    from this software without specific prior written permission.          **
**                                                                           **
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       **
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT         **
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR     **
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT      **
** HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    **
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED  **
** TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR    **
** PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    **
** LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING      **
** NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS        **
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.              **
******************************************************************************/
/* Kunal Banerjee (Intel Corp.)
******************************************************************************/

  const int total_tiles = handle->cwino_fwd.itiles*handle->cwino_fwd.jtiles;
  LIBXSMM_VLA_DECL(5, const float, input, toutp, ALPHA, (handle->blocksofm/VRATIO)*handle->cwino_fwd.bimg, total_tiles, FDVLEN);
  LIBXSMM_VLA_DECL(4, float, output, outp, handle->ofwp, handle->blocksofm, TDVLEN);
  LIBXSMM_VLA_DECL(4, float, Ow, Owp, ALPHA, ALPHA, FDVLEN);
  float O[ALPHA-2][ALPHA-2][FDVLEN];
  unsigned int ti, tj;
  int i, j, k, r;
  int xdim, ydim;
  float t00[FDVLEN];
  float t01[FDVLEN];
  float t10[FDVLEN];
  float t11[FDVLEN];
  float t20[FDVLEN];
  float t21[FDVLEN];
  float t30[FDVLEN];
  float t31[FDVLEN];

  for (j = 0; j < ALPHA; j++) {
    for (i = 0; i < ALPHA; i++) {
      for (tj = 0; tj < handle->cwino_fwd.jtiles; tj++) {
        for (ti = 0; ti < handle->cwino_fwd.itiles; ti++) {
          LIBXSMM_PRAGMA_SIMD
          for (k = 0; k < FDVLEN; k++) {
            LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, j, i, k, ALPHA, ALPHA, FDVLEN) =
              LIBXSMM_VLA_ACCESS(5, input, j, i, 0, tj*handle->cwino_fwd.itiles + ti, k, ALPHA, (handle->blocksofm/VRATIO)*handle->cwino_fwd.bimg, total_tiles, FDVLEN);
          }
        }
      }
    }
  }
  for (tj = 0; tj < handle->cwino_fwd.jtiles; tj++) {
    for (ti = 0; ti < handle->cwino_fwd.itiles; ti++) {
      /*trans_O_2x2_3x3(ALPHA-2, FDVLEN, Ow[tj*handle->cwino_fwd.itiles + ti], O);*/

      /* inline code start */
      LIBXSMM_PRAGMA_SIMD
      for (i = 0; i < FDVLEN; i++) {
        t00[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 0, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 1, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 2, i, ALPHA, ALPHA, FDVLEN);
        t01[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 1, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 2, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 0, 3, i, ALPHA, ALPHA, FDVLEN);
        t10[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 0, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 1, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 2, i, ALPHA, ALPHA, FDVLEN);
        t11[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 1, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 2, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 1, 3, i, ALPHA, ALPHA, FDVLEN);
        t20[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 0, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 1, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 2, i, ALPHA, ALPHA, FDVLEN);
        t21[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 1, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 2, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 2, 3, i, ALPHA, ALPHA, FDVLEN);
        t30[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 0, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 1, i, ALPHA, ALPHA, FDVLEN) + LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 2, i, ALPHA, ALPHA, FDVLEN);
        t31[i] = LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 1, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 2, i, ALPHA, ALPHA, FDVLEN) - LIBXSMM_VLA_ACCESS(4, Ow, tj*handle->cwino_fwd.itiles + ti, 3, 3, i, ALPHA, ALPHA, FDVLEN);

        O[0][0][i] = t00[i] + t10[i] + t20[i];
        O[0][1][i] = t01[i] + t11[i] + t21[i];
        O[1][0][i] = t10[i] - t20[i] - t30[i];
        O[1][1][i] = t11[i] - t21[i] - t31[i];
      }
      /* inline code end */

      for (j = 0; j < ALPHA-2; j++) {
        ydim = tj*(ALPHA - 2) + j;
        if (ydim < handle->ofh) {
          for (i = 0; i < ALPHA-2; i++) {
            xdim = ti*(ALPHA - 2) + i;
            if (xdim < handle->ofw) {
              for (r = 0; r < VRATIO; r++) {
                LIBXSMM_PRAGMA_SIMD
                for (k = 0; k < TDVLEN; k++) {
                  LIBXSMM_VLA_ACCESS(4, output, ydim, xdim, r, k, handle->ofwp, handle->blocksofm, TDVLEN) +=
                    O[j][i][r*TDVLEN + k]; /* + bias[r][k]; */
                }
              }
            }
          }
        }
      }
    }
  }