#include <stdio.h>

int main (void){
    int i=0,iNn1,iNn2,iNnx1,iNnx2,iQn,iQn1,iQn2,iRn = 1,iGCF,iLCM;
    scanf("%d%d",&iNnx1,&iNnx2);

    iNn1 = iNnx1;
    iNn2 = iNnx2;
    while(iRn != 0){
        if (iNn1 > iNn2){
            iQn = iNn1 / iNn2;
            iRn = iNn1 % iNn2;
            if (iRn != 0) iNn1 = iRn;
        }else{
            iQn = iNn2 / iNn1;
            iRn = iNn2 % iNn1;
            if(iRn != 0) iNn2 = iRn;
        }
    }

    if (iNn1< iNn2)
        iGCF = iNn1;
    else
        iGCF = iNn2;

    iQn1 = iNnx1 / iGCF;
    iQn2 = iNnx2 / iGCF;

    iLCM = iQn1 * iQn2 * iGCF;
    printf("%d\n",iGCF);
    printf("%d\n",iLCM);
}