#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec( target (mic))
void smm_dnn_3_19_14(double* a,double* b,double* c){
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
__m512d xa13;
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
__m512d xb13;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[19+0],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[38+0],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[57+0],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[76+0],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[95+0],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[114+0],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[133+0],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[152+0],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[171+0],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[190+0],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[209+0],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[228+0],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[247+0],255);
for(i=0;i<3;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*19+0],255);
    xa0=_mm512_set1_pd(a[i*14+0]);
    xa1=_mm512_set1_pd(a[i*14+1]);
    xa2=_mm512_set1_pd(a[i*14+2]);
    xa3=_mm512_set1_pd(a[i*14+3]);
    xa4=_mm512_set1_pd(a[i*14+4]);
    xa5=_mm512_set1_pd(a[i*14+5]);
    xa6=_mm512_set1_pd(a[i*14+6]);
    xa7=_mm512_set1_pd(a[i*14+7]);
    xa8=_mm512_set1_pd(a[i*14+8]);
    xa9=_mm512_set1_pd(a[i*14+9]);
    xa10=_mm512_set1_pd(a[i*14+10]);
    xa11=_mm512_set1_pd(a[i*14+11]);
    xa12=_mm512_set1_pd(a[i*14+12]);
    xa13=_mm512_set1_pd(a[i*14+13]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*19+0],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+8],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[19+8],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[38+8],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[57+8],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[76+8],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[95+8],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[114+8],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[133+8],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[152+8],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[171+8],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[190+8],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[209+8],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[228+8],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[247+8],255);
for(i=0;i<3;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*19+8],255);
    xa0=_mm512_set1_pd(a[i*14+0]);
    xa1=_mm512_set1_pd(a[i*14+1]);
    xa2=_mm512_set1_pd(a[i*14+2]);
    xa3=_mm512_set1_pd(a[i*14+3]);
    xa4=_mm512_set1_pd(a[i*14+4]);
    xa5=_mm512_set1_pd(a[i*14+5]);
    xa6=_mm512_set1_pd(a[i*14+6]);
    xa7=_mm512_set1_pd(a[i*14+7]);
    xa8=_mm512_set1_pd(a[i*14+8]);
    xa9=_mm512_set1_pd(a[i*14+9]);
    xa10=_mm512_set1_pd(a[i*14+10]);
    xa11=_mm512_set1_pd(a[i*14+11]);
    xa12=_mm512_set1_pd(a[i*14+12]);
    xa13=_mm512_set1_pd(a[i*14+13]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*19+8],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+16],7);
 xb1 = _MM512_MASK_LOADU_PD(&b[19+16],7);
 xb2 = _MM512_MASK_LOADU_PD(&b[38+16],7);
 xb3 = _MM512_MASK_LOADU_PD(&b[57+16],7);
 xb4 = _MM512_MASK_LOADU_PD(&b[76+16],7);
 xb5 = _MM512_MASK_LOADU_PD(&b[95+16],7);
 xb6 = _MM512_MASK_LOADU_PD(&b[114+16],7);
 xb7 = _MM512_MASK_LOADU_PD(&b[133+16],7);
 xb8 = _MM512_MASK_LOADU_PD(&b[152+16],7);
 xb9 = _MM512_MASK_LOADU_PD(&b[171+16],7);
 xb10 = _MM512_MASK_LOADU_PD(&b[190+16],7);
 xb11 = _MM512_MASK_LOADU_PD(&b[209+16],7);
 xb12 = _MM512_MASK_LOADU_PD(&b[228+16],7);
 xb13 = _MM512_MASK_LOADU_PD(&b[247+16],7);
for(i=0;i<3;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*19+16],7);
    xa0=_mm512_set1_pd(a[i*14+0]);
    xa1=_mm512_set1_pd(a[i*14+1]);
    xa2=_mm512_set1_pd(a[i*14+2]);
    xa3=_mm512_set1_pd(a[i*14+3]);
    xa4=_mm512_set1_pd(a[i*14+4]);
    xa5=_mm512_set1_pd(a[i*14+5]);
    xa6=_mm512_set1_pd(a[i*14+6]);
    xa7=_mm512_set1_pd(a[i*14+7]);
    xa8=_mm512_set1_pd(a[i*14+8]);
    xa9=_mm512_set1_pd(a[i*14+9]);
    xa10=_mm512_set1_pd(a[i*14+10]);
    xa11=_mm512_set1_pd(a[i*14+11]);
    xa12=_mm512_set1_pd(a[i*14+12]);
    xa13=_mm512_set1_pd(a[i*14+13]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,7);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,7);
    _MM512_MASK_STOREU_PD(&c[i*19+16],xc0,7);
}
#else
printf("cppgemm_2_3_14_19\n");
for(int m=0;m<3;m++){
   for(int n=0;n<19;n++){
      for(int k=0;k<14;k++){
         c[m*19+n]+=a[m*14+k]*b[k*19+n];
      }
   }
}
#endif
}
 
