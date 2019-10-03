#include<stdio.h>
int main()
{int n,a[1000],i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]>a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{int c=0;
    if(a[i]==a[i+1])
    {
        continue;
    }
else
{
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
            ++c;
        }
    }printf("%d occurs %d\n",a[i],c);
}
}
return 0;
}

