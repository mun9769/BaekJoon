#include <cstdio>
#include <cstdlib>
int arr[2000001];

static int *buff;

void __merge(int *arr,int left, int right)
{
    if(left < right)
    {
        int i,j=0,p=0;
        int k = left;
        int center = (left+right) / 2;
        __merge(arr,left, center);
        __merge(arr,center+1, right);

        for(i=left; i<=center; i++)
            buff[p++] = arr[i];
        while(j<p && i<=right)
            arr[k++] = buff[j] <= arr[i] ? buff[j++] : arr[i++];
        while(j<p)
            arr[k++] = buff[j++];
    }
}

int mergesort(int *arr,int n)
{
    if((buff = (int*)malloc(sizeof(int)*n)) == NULL)
        return -1;
    __merge(arr,0,n-1);
    free(buff);
    return 0;
}

int main()
{
    freopen("input.txt","rt",stdin);
    int n, c;
    scanf("%d %d", &n,&c);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    mergesort(arr,n);

    int pl = 0, pr = arr[n-1], center, res;

    while(pl < pr)
    {
        center = (pl + pr) / 2;
        int pos = 0, cnt = 1;
        for(int i=0; i<n; i++)
            if(arr[i] - arr[pos] >= center){
                pos = i;
                cnt++;
            }

        if(cnt < c){
            pr = center-1;
        }
        else{
            pl = center+1;
            res = pl;
        }
    }
    printf("%d\n", res);
        

	return 0;
}






