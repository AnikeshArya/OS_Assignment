#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <pthread.h>  


int x=0;
char array_char[840];
int arrid[840];
int y[840];

void prin(char cc,int id,int et){
	array_char[x]=cc;
	arrid[x]=id;
	y[x]=et;
	x++;	
}



 main()
 {
	int tq[840],tbt[840],tat[840];
	int sq[840],sbt[840],sat[840];
	int n,i,tempa=0,tempb=0,s=0,t=0,bt=0,a,b,g,j,zc=0,tmq=0,time=0,w,pi=0,gp,time1,ww,ii,www,timesp=0;
	char ts;//teacher or student for ip
	system("CLS");
		printf("___Query Management System___\n\n");
printf("Enter Number of processes : ");
scanf("%d",&n);
printf("Enter the details -\n");
for(i=0;i<n;i++){
	printf("Enter t if you are a teacher or Enter s if you are a student :");
	scanf(" %c", &ts);
	printf("Enter Burst Time :");
	scanf("%d",&tempb);	
	printf("\n");
	bt=bt+tempb;  //bt-burst time for 14hrs 
	printf("Enter array_charival Time :");
	scanf("%d",&tempa);	
	if(ts=='t'||ts=='T'&&bt<=840)
	{
		tbt[t]=tempb;
		tat[t]=tempa;
		
		tq[t]=t+1;
		t=t+1;
		
		}
		else if(ts=='s'||ts=='S'&&bt<=840) 
	{
		sbt[s]=tempb;
		sat[s]=tempa;
		
		sq[s]=s+1;
		s=s+1;
		
	}
	}
	//system("CLS");
	
	
	
	printf("\n");	
	
	printf("The List of processes to de Executed are : \n");
	
	printf("\n\n\n\n\t\t\t\t|  Teacher or student   | array_charival Time      |  Burst Time |\n");
	   
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	for(www=0;www<s;www++){
		printf("\t\t\t\t|\t  Student\t|      %d       |      %d      |\n",sat[www],sbt[www]);
		
	}
		for(www=0;www<t;www++){
		printf("\t\t\t\t|\t  Teacher\t|      %d       |      %d      |\n",tat[www],tbt[www]);
		
	}
	printf("\t\t\t\t------------------------------------------------------\n\n\n");
	
	
	
	
	
	
	
		printf("Enter Time Quantum :");
	scanf("%d",&tmq);	//time quantum
	
	        for (i = 0; i < s; ++i) // sorting student ques
        {
 
            for (j = i + 1; j < s; ++j)
            {
 
                if (sat[i] > sat[j]) 
                {
 
                    a =  sat[i];   //a and b are temp variables 
                    sat[i] = sat[j];
                    sat[j] = a;
                    b =  sbt[i];
                    sbt[i] = sbt[j];
                    sbt[j] = b;
                    a =  sq[i];
                    sq[i] = sq[j];
                    sq[j] = a;
 
                }
 
            }
 
        }
        for (i = 0; i < t; ++i) // sorting teachers ques
        {
 
            for (j = i + 1; j < t; ++j)
            {
 
                if (tat[i] > tat[j]) 
                {
 
                    a =  tat[i];
                    tat[i] = tat[j];
                    tat[j] = a;  //a and b are temp variables 
                    b =  tbt[i];
                    tbt[i] = tbt[j];
                    tbt[j] = b;
                    b =  tq[i];
                    tq[i] = tq[j];
                    tq[j] = b;
 
                }
 
            }
 
        }
	//	system("CLS");
	i=0;
	j=0;
	g=t+s;
//	printf("%d----",g);
if(t==0){
    time=sat[0];
}
else if(s==0){
	time=tat[0];
     }
     else if(sat[0]<=tat[0]){
   	time=sat[0];
   }	
   else{
   
   time=tat[0];
             }
             time1=time;
             
            
while(zc!=g){ //loop runs t+s times 
//printf("---%d----",zc);
	zc=0;
	

		
	while(i!=t||j!=s){	
	  if(i>=t){
		 }
		 else{
		 	if(tat[i]<=time){
		 	             	if(tbt[i]==0){}
		 	             	else if(tbt[i]<=tmq){
		 	             				 		time=time+tbt[i];
		 	             				 		timesp=timesp+tbt[i];
		 	                                 	tbt[i]=0;
		 	                                 	prin('t',tq[i],time);
		 	                                 //	printf("%d",tq[i]);
		 	                                 	
		                                         }
		                    if(tbt[i]>tmq){
			 	                                tbt[i]=tbt[i]-tmq;
			 	                                time=time+tmq;
			 	                                timesp=timesp+tmq;
			 	                                prin('t',tq[i],time);
			 	                             //   printf("%d",tq[i]);
			                                }
		
	}
	else{
			pi=1;
	}
		i=i+1;
	
		}

		if(j>=s){
		 }
		 else{
		 	if(sat[j]<=time){
		 	             	if(sbt[j]==0){}
		 	             	else if(sbt[j]<=tmq){
		 	             				 		time=time+sbt[j];
		 	             				 		timesp=timesp+sbt[j];
		 	                                 	sbt[j]=0;
		 	                                 	prin('s',sq[j],time);
		 	                                 //	printf("%d",sq[j]);
		                                         }
		                    if(sbt[j]>tmq){
			 	                                sbt[j]=sbt[j]-tmq;
			 	                                time=time+tmq;
			 	                                timesp=timesp+tmq;
			 	                                prin('s',sq[j],time);
			 	                               // printf("%d",sq[j]);
												//-----------------------------------------------------------------
			                                }
		
	}
		else{
			pi=1;
	}
	j=j+1;

	}
	if(pi==1){
			time=time+1;
		printf('-',0,time);
		pi=0;
	}

	}
	 	i=0;
	j=0;
		
for(w=0;w<t;w++){
	if(tbt[w]==0){
		zc=zc+1;
	}
}
for(w=0;w<s;w++){
	if(sbt[w]==0){
		zc=zc+1;
	}
		
	}
		
				
		
		}
		
		printf("\n");
		printf(" ");
		ww=y[0]-time1;
				for(ii=0;ii<ww;ii++){
				printf("--");
			}
for (w=1;w<x;w++){
	if(array_char[w]==0){
		printf("--");
	}
	else{
			printf("-");
			ww=y[w]-y[w-1];
			for(ii=0;ii<ww;ii++){
				printf("--");
			}
			
		}

		
	}
	printf("\n");
	printf("|");
			ww=y[0]-time1;
	
				for(ii=1;ii<ww;ii++){
				printf(" ");
			}
			printf("%c",array_char[0]);
			printf("%d",array_char[0]);
				for(ii=1;ii<ww;ii++){
				printf(" ");
			}
		//	printf("|");
for (w=1;w<x;w++){
	if(array_char[w]==0){
		printf("||");
	}
	else{
			printf("|");
			ww=y[w]-y[w-1];
			for(ii=1;ii<ww;ii++){
				printf(" ");
			}
			printf("%c",array_char[w]);
			printf("%d",array_char[w]);
				for(ii=1;ii<ww;ii++){
				printf(" ");
			}
			
			
		}
	
}
printf("|");
printf("\n");
printf("%d",time1);
ww=y[0]-time1;
				for(ii=0;ii<ww;ii++){
				printf("--");
			}
printf("%d",y[0]);
for (w=1;w<x;w++){
	if(array_char[w]==0){
		printf("--");
		printf("%d",y[w]);
	}
	else{
			
			ww=y[w]-y[w-1];
			for(ii=0;ii<ww;ii++){
				printf("--");
			}
			printf("%d",y[w]);
			
		}
		

		
	}	
		printf("\n\n\n Sudesh Spent on the System is : %d min ",timesp);
	
		printf("\n");
		}
