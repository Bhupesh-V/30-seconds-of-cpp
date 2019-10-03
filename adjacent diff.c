#include<stdio.h>
int main()
{int a[10000];
int i,n,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{printf("%d",a[i]);
}printf("\n");
for(i=0;i<n-1;i++)
{if(a[i]>a[i+1])
{d=a[i]-a[i+1];
}
else
{d=a[i+1]-a[i];
}printf("%d ",d);
}
return 0;
}
