#include <iostream.h>

int main()
{
int *a[3];
int j[4] = { 6,7,3,4 };
int k[4]={ 60,70,30,40 };
int s[4]={ 2,1,9,55 };
a[0] = j;
a[1] = k;
a[2] = s;
cout << *(*(a+2)+3)<< endl;	
}
