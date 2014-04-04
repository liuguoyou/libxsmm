#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec( target (mic))
void smm_dnn_9_6_10(double* a,double* b,double* c){
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
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],63);
 xb1 = _MM512_MASK_LOADU_PD(&b[6+0],63);
 xb2 = _MM512_MASK_LOADU_PD(&b[12+0],63);
 xb3 = _MM512_MASK_LOADU_PD(&b[18+0],63);
 xb4 = _MM512_MASK_LOADU_PD(&b[24+0],63);
 xb5 = _MM512_MASK_LOADU_PD(&b[30+0],63);
 xb6 = _MM512_MASK_LOADU_PD(&b[36+0],63);
 xb7 = _MM512_MASK_LOADU_PD(&b[42+0],63);
 xb8 = _MM512_MASK_LOADU_PD(&b[48+0],63);
 xb9 = _MM512_MASK_LOADU_PD(&b[54+0],63);
for(i=0;i<9;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*6+0],63);
    xa0=_mm512_set1_pd(a[i*10+0]);
    xa1=_mm512_set1_pd(a[i*10+1]);
    xa2=_mm512_set1_pd(a[i*10+2]);
    xa3=_mm512_set1_pd(a[i*10+3]);
    xa4=_mm512_set1_pd(a[i*10+4]);
    xa5=_mm512_set1_pd(a[i*10+5]);
    xa6=_mm512_set1_pd(a[i*10+6]);
    xa7=_mm512_set1_pd(a[i*10+7]);
    xa8=_mm512_set1_pd(a[i*10+8]);
    xa9=_mm512_set1_pd(a[i*10+9]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,63);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,63);
    _MM512_MASK_STOREU_PD(&c[i*6+0],xc0,63);
}
#else
printf("cppgemm_2_9_10_6\n");
for(int m=0;m<9;m++){
   for(int n=0;n<6;n++){
      for(int k=0;k<10;k++){
         c[m*6+n]+=a[m*10+k]*b[k*6+n];
      }
   }
}
#endif
}
 
