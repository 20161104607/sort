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
    int n,k,i,j,temp;
    int a[15];
    FILE *fp1,*fp2;
        fp1=fopen("//Users//a20161104607//Desktop//sort//numberout.txt ","w");
        fp2=fopen("//Users//a20161104607//Desktop//sort//number.txt ","r");
        if(fp2==NULL)
        {
            printf("打开文件错误");
        }
        else
        {
          while(fscanf(fp2,"%d",&n)!=EOF)
        {
        for(i=0;i<n;i++)
       {
       fscanf(fp2,"%d",&a[i]);
       }
           for(j=0;j<n-1;j++)
            {
                for(k=0;k<n-1-j;k++)
                {
                   if(a[k]>a[k+1])
                   {
                       temp=a[k];
                       a[k]=a[k+1];
                       a[k+1]=temp;
                   }
                      
                }
           }

        for(k=0;k<n;k++)
        {
            printf("%d ",a[k]);
            fprintf(fp1,"%d ",a[k]);
        }
            
            fprintf(fp1,"\n");
            printf("\n");
    
      }
        fclose(fp1);
        fclose(fp2);
     }
    return 0;
    
    }


