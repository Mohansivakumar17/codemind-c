#include<stdio.h>
#include<math.h>
int main()
{
    int l;scanf("%d",&l);
    int t;scanf("%d",&t);
    while(t--)
    {
        int w,h;scanf("%d%d",&w,&h);
        
         if(w<l||h<l){printf("UPLOAD ANOTHER
");}
         else if(l*l==w*h||w==h){printf("ACCEPTED
");}
        else printf("CROP IT
");
        
    }
}