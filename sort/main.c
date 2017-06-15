//
//  main.c
//  sort
//
//  Created by 20161104607 on 2017/6/12.
//  Copyright © 2017年 20161104607. All rights reserved.
//

#include <stdio.h>

int main()
    {
    int i,j,temp;
    int a[10];
    FILE *fp1,*fp2;
        fp1=fopen("//Users//a20161104607//Desktop//sort//numberout.txt ","w");
        fp2=fopen("//Users//a20161104607//Desktop//sort//number.txt ","r");
        if(fp2==NULL)
        {
            printf("打开文件错误");
        }
   //printf("input 10 numbers:\n");
    for(i=0;i<10;i++)
        {
        fscanf(fp2,"%d",&a[i]);
    }
    for(j=0;j<=9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
        for(i=0;i<10;i++)
        {
            printf("%d\t",a[i]);
            fprintf(fp1,"%d ",a[i]);
            printf(" ");
        }
    printf("\n");
    fprintf(fp1,"\n");
    return 0;
    
    }

