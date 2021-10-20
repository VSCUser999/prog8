#include <stdio.h>

int main (void){
    int iNn1,iNn2,iNnx1,iNnx2,iQn,iRn,iGCF,iLCM;

    scanf("%d%d",&iNnx1,&iNnx2);

    iNn1 = iNnx1;
    iNn2 = iNnx2;
    iRn = 1;
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

    if (iNn1 < iNn2)
        iGCF = iNn1;
    else
        iGCF = iNn2;

    iLCM = (iNnx1 * iNnx2) / iGCF;

    printf("%d\n",iGCF);
    printf("%d\n",iLCM);
}