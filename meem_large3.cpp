
#include<bits/stdc++.h>
int main ()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    printf("enter the numbers p,q and r :");
    if(p>q && p>r) {
        printf("%d is the largest number",p);

    }

        else if(q>p&&q>r) { printf("%d is the largest number",q);
}
    else { printf("%d is the largest number",r); }
    return 0;
}
