#include<stdio.h>
int main()
{
    int a;
    //long long int b;
    char c;
    float d;
    double e;

    scanf("%d",&a);
    //scanf("%lld",&b);
    scanf("%s",&c);
    scanf("%f",&d);
    scanf("%lf",&e);

    printf("%d\n",a);
   // printf("%lld\n",b);
    printf("%s\n",c);
    printf("%f\n",d);
    printf("%lf\n",e);

    return 0;
}
