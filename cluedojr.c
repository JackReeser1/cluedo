#include <stdio.h>
#include<math.h>
#define N 30;

int user_1['N']={1,5,10,16,21};
int user_2['N']={2,7,12,17,22};
int user_3['N']={3,8,13,18,23};
int user_4['N']={4,9,14,19,24};
int guess['N']={0,5,10,15,25};
int num=0; 
int i=0;


int main()
{
		printf("Please Enter Player Number:: \n");
		scanf("%d", &num);

		if (guess[1]==user_1[1]){
	
			if (guess[2]== user_1[2]){
				printf("The matching card is %d\n", user_1[2]);
				
                                if (num='1'){
                                        size_t a = sizeof(user_1);
                                        user_1[a-1]= user_1[4];

                                        for (i=0; i<a; i++)
                                                printf("%d\n",user_1[i]);

                                        


                                        }
                                if (num='2'){
                                        size_t b = sizeof(user_2);
                                        user_2[b-1]= user_1[4];

                                        for (i=0; i<b; i++)
                                                printf("%d\n",user_2[i]);

                                        


                                        }
                                if (num='3'){
                                        size_t c = sizeof(user_3);
                                        user_3[c-1]= user_1[4];
                                        
					for (i=0; i<c; i++)
                                                printf("%d\n",user_3[i]);
                                        }
                                if (num='4'){
                                        size_t d = sizeof(user_4);
                                        user_4[d-1]= user_1[4];
                                        
					for (i=0; i<d; i++)
                                                printf("%d\n",user_4[i]);
						}
                                        
			}
	
			if (guess[3]== user_1[3]){
				printf("The matching card is %d\n", user_1[3]);

                                if (num='1'){
                                        size_t e = sizeof(user_1);
                                        user_1[e-1]= user_1[4];

                                        for (i=0; i<e; i++)
                                                printf("%d\n",user_1[i]);
                                        }
                                if (num='2'){
                                        size_t f = sizeof(user_2);
                                        user_2[f-1]= user_1[4];

                                        for (i=0; i<f; i++)
                                                printf("%d\n",user_2[i]);                                        
                                        }
                                if (num='3'){
                                        size_t g = sizeof(user_3);
                                        user_3[g-1]= user_1[4];
                                        
					for (i=0; i<g; i++)
                                                printf("%d\n",user_3[i]);

                                        }
                                if (num='4'){
                                        size_t h = sizeof(user_4);
                                        user_4[h-1]= user_1[4];
                                        
					for (i=0; i<h; i++)
                                                printf("%d\n",user_4[i]);

					}	
				}
	
			if (guess[4]== user_1[4]){
				printf("The matching card is %d\n", user_1[4]);
                                
				if (num='1'){
                                        size_t j = sizeof(user_1);
                                        user_1[j-1]= user_1[4];
                                        
					for (i=0; i<j; i++)
                                		printf("%d\n",user_1[i]);
					}
				if (num='2'){
                                        size_t k = sizeof(user_2);
                                        user_2[k-1]= user_1[4];
                                
			                for (i=0; i<k; i++)
		                                printf("%d\n",user_2[i]);
					}
				if (num='3'){
                                        size_t l = sizeof(user_3);
                                        user_3[l-1]= user_1[4];
                                     	for (i=0; i<l; i++)
                                		printf("%d\n",user_3[i]);
					}
				if (num='4'){
                                        size_t m = sizeof(user_4);
                                        user_4[m-1]= user_1[4];
       			                for (i=0; i<m; i++)
                        	        	printf("%d\n",user_4[i]);
				}
			}

			
	
		if (guess[1]==user_2[1]){	
			
			if (guess[2]==user_2[2]){
				printf("The matching card is %d\n", user_2[2]);
		
			}
	
			if (guess[3]==user_2[3]){
				printf("The matching card is %d\n", user_2[3]);
		
			}
	
			if (guess[4]==user_2[4]){
				printf("The matching card is %d\n", user_2[4]);
		
			}
		}	
	
		if (guess[1]==user_3[1]){	
		
			if (guess[2]==user_3[2]){
				printf("The matching card is %d\n", user_3[2]);
		
			}
	
			if (guess[3]==user_3[3]){
				printf("The matching card is %d\n", user_3[3]);
		
			}
	
			if (guess[4]==user_3[4]){
				printf("The matching card is %d\n", user_3[4]);
		
			}
		}	
	
		else{
			printf("No player in this room can tell you anything about your guess.\n");
		}
					
	}
	return (0);

}

