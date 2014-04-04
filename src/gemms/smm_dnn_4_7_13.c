#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec( target (mic))
void smm_dnn_4_7_13(double* a,double* b,double* c){
#ifdef __MIC__
int i;
__m512d xa0;
__m512d xa1;
__m512d xa2;
__m512d xa3;
__m512d xa4;
__m512d xa5;
__m512d xa6;
__m512d xa7;
__m512d xa8;
__m512d xa9;
__m512d xa10;
__m512d xa11;
__m512d xa12;
__m512d xb0;
__m512d xb1;
__m512d xb2;
__m512d xb3;
__m512d xb4;
__m512d xb5;
__m512d xb6;
__m512d xb7;
__m512d xb8;
__m512d xb9;
__m512d xb10;
__m512d xb11;
__m512d xb12;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],127);
 xb1 = _MM512_MASK_LOADU_PD(&b[7+0],127);
 xb2 = _MM512_MASK_LOADU_PD(&b[14+0],127);
 xb3 = _MM512_MASK_LOADU_PD(&b[21+0],127);
 xb4 = _MM512_MASK_LOADU_PD(&b[28+0],127);
 xb5 = _MM512_MASK_LOADU_PD(&b[35+0],127);
 xb6 = _MM512_MASK_LOADU_PD(&b[42+0],127);
 xb7 = _MM512_MASK_LOADU_PD(&b[49+0],127);
 xb8 = _MM512_MASK_LOADU_PD(&b[56+0],127);
 xb9 = _MM512_MASK_LOADU_PD(&b[63+0],127);
 xb10 = _MM512_MASK_LOADU_PD(&b[70+0],127);
 xb11 = _MM512_MASK_LOADU_PD(&b[77+0],127);
 xb12 = _MM512_MASK_LOADU_PD(&b[84+0],127);
for(i=0;i<4;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*7+0],127);
    xa0=_mm512_set1_pd(a[i*13+0]);
    xa1=_mm512_set1_pd(a[i*13+1]);
    xa2=_mm512_set1_pd(a[i*13+2]);
    xa3=_mm512_set1_pd(a[i*13+3]);
    xa4=_mm512_set1_pd(a[i*13+4]);
    xa5=_mm512_set1_pd(a[i*13+5]);
    xa6=_mm512_set1_pd(a[i*13+6]);
    xa7=_mm512_set1_pd(a[i*13+7]);
    xa8=_mm512_set1_pd(a[i*13+8]);
    xa9=_mm512_set1_pd(a[i*13+9]);
    xa10=_mm512_set1_pd(a[i*13+10]);
    xa11=_mm512_set1_pd(a[i*13+11]);
    xa12=_mm512_set1_pd(a[i*13+12]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,127);
    _MM512_MASK_STOREU_PD(&c[i*7+0],xc0,127);
}
#else
printf("cppgemm_2_4_13_7\n");
for(int m=0;m<4;m++){
   for(int n=0;n<7;n++){
      for(int k=0;k<13;k++){
         c[m*7+n]+=a[m*13+k]*b[k*7+n];
      }
   }
}
#endif
}
 
