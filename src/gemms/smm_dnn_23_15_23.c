#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec( target (mic))
void smm_dnn_23_15_23(double* a,double* b,double* c){
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
__m512d xa14;
__m512d xa15;
__m512d xa16;
__m512d xa17;
__m512d xa18;
__m512d xa19;
__m512d xa20;
__m512d xa21;
__m512d xa22;
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
__m512d xb14;
__m512d xb15;
__m512d xb16;
__m512d xb17;
__m512d xb18;
__m512d xb19;
__m512d xb20;
__m512d xb21;
__m512d xb22;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[15+0],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[30+0],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[45+0],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[60+0],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[75+0],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[90+0],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[105+0],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[120+0],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[135+0],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[150+0],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[165+0],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[180+0],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[195+0],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[210+0],255);
 xb15 = _MM512_MASK_LOADU_PD(&b[225+0],255);
 xb16 = _MM512_MASK_LOADU_PD(&b[240+0],255);
 xb17 = _MM512_MASK_LOADU_PD(&b[255+0],255);
 xb18 = _MM512_MASK_LOADU_PD(&b[270+0],255);
 xb19 = _MM512_MASK_LOADU_PD(&b[285+0],255);
 xb20 = _MM512_MASK_LOADU_PD(&b[300+0],255);
 xb21 = _MM512_MASK_LOADU_PD(&b[315+0],255);
 xb22 = _MM512_MASK_LOADU_PD(&b[330+0],255);
for(i=0;i<23;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*15+0],255);
    xa0=_mm512_set1_pd(a[i*23+0]);
    xa1=_mm512_set1_pd(a[i*23+1]);
    xa2=_mm512_set1_pd(a[i*23+2]);
    xa3=_mm512_set1_pd(a[i*23+3]);
    xa4=_mm512_set1_pd(a[i*23+4]);
    xa5=_mm512_set1_pd(a[i*23+5]);
    xa6=_mm512_set1_pd(a[i*23+6]);
    xa7=_mm512_set1_pd(a[i*23+7]);
    xa8=_mm512_set1_pd(a[i*23+8]);
    xa9=_mm512_set1_pd(a[i*23+9]);
    xa10=_mm512_set1_pd(a[i*23+10]);
    xa11=_mm512_set1_pd(a[i*23+11]);
    xa12=_mm512_set1_pd(a[i*23+12]);
    xa13=_mm512_set1_pd(a[i*23+13]);
    xa14=_mm512_set1_pd(a[i*23+14]);
    xa15=_mm512_set1_pd(a[i*23+15]);
    xa16=_mm512_set1_pd(a[i*23+16]);
    xa17=_mm512_set1_pd(a[i*23+17]);
    xa18=_mm512_set1_pd(a[i*23+18]);
    xa19=_mm512_set1_pd(a[i*23+19]);
    xa20=_mm512_set1_pd(a[i*23+20]);
    xa21=_mm512_set1_pd(a[i*23+21]);
    xa22=_mm512_set1_pd(a[i*23+22]);
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
    xc0=_mm512_mask3_fmadd_pd(xa14,xb14,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa15,xb15,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa16,xb16,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa17,xb17,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa18,xb18,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa19,xb19,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa20,xb20,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa21,xb21,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa22,xb22,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*15+0],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+8],127);
 xb1 = _MM512_MASK_LOADU_PD(&b[15+8],127);
 xb2 = _MM512_MASK_LOADU_PD(&b[30+8],127);
 xb3 = _MM512_MASK_LOADU_PD(&b[45+8],127);
 xb4 = _MM512_MASK_LOADU_PD(&b[60+8],127);
 xb5 = _MM512_MASK_LOADU_PD(&b[75+8],127);
 xb6 = _MM512_MASK_LOADU_PD(&b[90+8],127);
 xb7 = _MM512_MASK_LOADU_PD(&b[105+8],127);
 xb8 = _MM512_MASK_LOADU_PD(&b[120+8],127);
 xb9 = _MM512_MASK_LOADU_PD(&b[135+8],127);
 xb10 = _MM512_MASK_LOADU_PD(&b[150+8],127);
 xb11 = _MM512_MASK_LOADU_PD(&b[165+8],127);
 xb12 = _MM512_MASK_LOADU_PD(&b[180+8],127);
 xb13 = _MM512_MASK_LOADU_PD(&b[195+8],127);
 xb14 = _MM512_MASK_LOADU_PD(&b[210+8],127);
 xb15 = _MM512_MASK_LOADU_PD(&b[225+8],127);
 xb16 = _MM512_MASK_LOADU_PD(&b[240+8],127);
 xb17 = _MM512_MASK_LOADU_PD(&b[255+8],127);
 xb18 = _MM512_MASK_LOADU_PD(&b[270+8],127);
 xb19 = _MM512_MASK_LOADU_PD(&b[285+8],127);
 xb20 = _MM512_MASK_LOADU_PD(&b[300+8],127);
 xb21 = _MM512_MASK_LOADU_PD(&b[315+8],127);
 xb22 = _MM512_MASK_LOADU_PD(&b[330+8],127);
for(i=0;i<23;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*15+8],127);
    xa0=_mm512_set1_pd(a[i*23+0]);
    xa1=_mm512_set1_pd(a[i*23+1]);
    xa2=_mm512_set1_pd(a[i*23+2]);
    xa3=_mm512_set1_pd(a[i*23+3]);
    xa4=_mm512_set1_pd(a[i*23+4]);
    xa5=_mm512_set1_pd(a[i*23+5]);
    xa6=_mm512_set1_pd(a[i*23+6]);
    xa7=_mm512_set1_pd(a[i*23+7]);
    xa8=_mm512_set1_pd(a[i*23+8]);
    xa9=_mm512_set1_pd(a[i*23+9]);
    xa10=_mm512_set1_pd(a[i*23+10]);
    xa11=_mm512_set1_pd(a[i*23+11]);
    xa12=_mm512_set1_pd(a[i*23+12]);
    xa13=_mm512_set1_pd(a[i*23+13]);
    xa14=_mm512_set1_pd(a[i*23+14]);
    xa15=_mm512_set1_pd(a[i*23+15]);
    xa16=_mm512_set1_pd(a[i*23+16]);
    xa17=_mm512_set1_pd(a[i*23+17]);
    xa18=_mm512_set1_pd(a[i*23+18]);
    xa19=_mm512_set1_pd(a[i*23+19]);
    xa20=_mm512_set1_pd(a[i*23+20]);
    xa21=_mm512_set1_pd(a[i*23+21]);
    xa22=_mm512_set1_pd(a[i*23+22]);
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
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa14,xb14,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa15,xb15,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa16,xb16,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa17,xb17,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa18,xb18,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa19,xb19,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa20,xb20,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa21,xb21,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa22,xb22,xc0,127);
    _MM512_MASK_STOREU_PD(&c[i*15+8],xc0,127);
}
#else
printf("cppgemm_2_23_23_15\n");
for(int m=0;m<23;m++){
   for(int n=0;n<15;n++){
      for(int k=0;k<23;k++){
         c[m*15+n]+=a[m*23+k]*b[k*15+n];
      }
   }
}
#endif
}
 
