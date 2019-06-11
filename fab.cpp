#include<iostream>
#include<stdio.h>
#include<pthread.h>
#include <unistd.h>

	 int size,first=0,second=1,third,n;
	 int a[1000];
void * cal(void * arg)
{
  for(int i=0;i<n;i++)
  {
	  	a[i]=first;
	  	third=first+second;
	  	first=second;
	  	second=third;
  }
}
int main(){  printf(" \n enter number of elements :");
	  scanf("%d",&n);
      pthread_t fd;
      pthread_create(&fd,NULL,cal,NULL);
      pthread_join(fd,NULL);
   // wait(NULL);
        for(int i=0;i<n;i++)
  {   //cout<<"in parent thread"<<endl;
	  //	cout<<a[i]<<" ";
	  printf("\n %d",a[i]);
	  	
  }
	
}
