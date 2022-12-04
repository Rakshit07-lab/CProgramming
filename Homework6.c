/*
Description: Program to find whether 4 given number are in AP, GP or none
*/
#include<stdio.h>
#include<math.h>
main()
{
    int a1,a2,a3,a4,s1,s2,s3,s4;
    while(1)
    {
        scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
        if(a1==-1 || a2==-1 || a3==-1 || a4==-1) break;
        else
        {
            if(((a1>a2) + (a1>a3) + (a1>a4)) ==3) s4=a1;
            else if(((a2>a1) + (a2>a3) + (a2>a4)) == 3 ) s4=a2;
            else if(((a3>a1) + (a3>a2) + (a3>a4)) == 3 ) s4=a3;
            else s4=a4;

            if(((a1>a2) + (a1>a3) + (a1>a4)) ==2) s3=a1;
            else if(((a2>a1) + (a2>a3) + (a2>a4)) == 2 ) s3=a2;
            else if(((a3>a1) + (a3>a2) + (a3>a4)) == 2 ) s3=a3;
            else s3=a4;


            if(((a1>a2) + (a1>a3) + (a1>a4)) ==1) s2=a1;
            else if(((a2>a1) + (a2>a3) + (a2>a4)) == 1 ) s2=a2;
            else if(((a3>a1) + (a3>a2) + (a3>a4)) == 1 ) s2=a3;
            else s2=a4;

            if(((a1>a2) + (a1>a3) + (a1>a4)) ==0) s1=a1;
            else if(((a2>a1) + (a2>a3) + (a2>a4)) == 0 ) s1=a2;
            else if(((a3>a1) + (a3>a2) + (a3>a4)) == 0 ) s1=a3;
            else s1=a4;

            float r1=(float)(s2)/s1;
            float r2=(float)(s3)/s2;
            float r3=(float)(s4)/s3;

            if(((s2-s1)==(s3-s2)) && ((s3-s2)==(s4-s3))) printf("AP\n");
            else if(r1==r2 && r2==r3) printf("GP\n");
            else printf("None");
        }
    }
}
