#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()   {
int i =0 ;
int j =0 ;	
char ip[15] ;
int len ;
int p1=0 ;
int p2=0 ;
int p3=0 ;
int p4=0 ;
int sb123=255;
int sb4= 0;
int ret1=0;
int ret2=0;
int ret3=0;
int ret4=0;
int lp[3]={0,0,0}; 
char  cp1[4] ;
char  cp2[4] ; 
char  cp3[4] ;
char  cp4[4] ;


printf("give the ip please\n");

scanf("%s",ip);

printf("you gave the ip %s\n",ip);

 len = strlen(ip);

 if (len>15) 
 {  
  printf("wrong size of ip\n " ); 
  printf("give the ip please\n");
  scanf("%s",ip);
  len = strlen(ip); 
  }
   
   printf("ethe size of the ip is %i\n", len);

for (i=0; i<len; i++ ) 
      { 
	   printf("for the given ip %s\n",&ip[i]); 
          if  (ip[i]=='.')                   
       	   {  
			  if(lp[0]==0 ) { lp[0] = i ; }   			     
			  else if (lp[1]==0 ) { lp[1] = i ;  } 
			  else if  (lp[2]==0 ) { lp[2] = i ; } 
			        	                             	              	       	            	       	       	       
      	   }	  	   
      	 
      	   	
      }
      
   
if (lp[0]==0 ||lp[1]==0||lp[2]==0) {   printf("no dots or wrong ip format\n " );  }
else {   

memset(cp1, '\0', sizeof(cp1));
strncpy(cp1, ip, 3);
p1 = atoi(cp1) ; 
printf("the first part is %i\n",p1);


memset(cp2, '\0', sizeof(cp2));
strncpy(cp2, &ip[lp[0]+1], 3);
p2 = atoi(cp2) ; 
printf("the second part is %i\n",p2);


memset(cp3, '\0', sizeof(cp3));
strncpy(cp3, &ip[lp[1]+1], 3);
p3 = atoi(cp3) ; 
printf("the third part is %i\n",p3);


memset(cp4, '\0', sizeof(cp4));
strncpy(cp4, &ip[lp[2]+1], 3);
p4 = atoi(cp4) ; 
printf("the fourth part is %i\n",p4);




ret1 = (p1 & sb123);
ret2 = (p2 & sb123);
ret3 = (p3 & sb123);
ret4 = (p4 & sb4);
printf("Our net_id is:%i.%i.%i.%i\n",ret1,ret2,ret3,ret4);

}  

sleep(100);

}
