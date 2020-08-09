#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define LETTERS 0
#define DOTS 1      //you can fill the table with dots to find the words easily. Please see line 471.
void table(char random[10][20],int o){
	int i,j,a,b,c,d=0,e,f,h,k,s,counter=0,counter2=0,counter3=0,flag=0,flag2=0,y,z,t,c1,c2,c3,c4,c5,c6,c7,c8;
	char table[20][20],g = 'a',hold[30],hold2[2][30],control[] ="exit",x;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			table[i][j] = '.';
		}
	}
	while(counter!=10){//The words were placed in the table by examining different directions.
		e = rand()%8+1;
		flag = 0;
		counter2=0;
		if(e == 1){
			a = strlen(random[d]);
			b = rand()%20;
			c = rand()%(20-a);
			for(i=0;i<a;i++){
				if(table[b][i+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[b][i+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}
		
		}
	    if(e == 2){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = (a-1)+rand()%(19-(a-1));
			for(i=0;i<a;i++){
				if(table[b][(-i)+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[b][(-i)+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}

	    }
	    if(e == 3){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = rand()%(20-a);
			for(i=0;i<a;i++){
				if(table[i+c][b] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[i+c][b] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}

	    }
	    if(e == 4){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = (a-1)+rand()%(19-(a-1));
			for(i=0;i<a;i++){
				if(table[(-i)+c][b] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[(-i)+c][b] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}

	    }
	    if(e == 5){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = rand()%(20-a);
			for(i=0;i<a;i++){
				if(table[i+b][i+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[i+b][i+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}

	    }
	    if(e == 6){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = (a-1)+rand()%(19-(a-1));
			for(i=0;i<a;i++){
				if(table[(-i)+b][(-i)+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[(-i)+b][(-i)+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}

	    }
	    if(e == 7){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = (a-1)+rand()%(19-(a-1));
			for(i=0;i<a;i++){
				if(table[i+b][(-i)+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[i+b][(-i)+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}
	    }
	    if(e == 8){
	    	a = strlen(random[d]);
			b = rand()%20;
			c = rand()%(20-a);
			f = (a-1)+rand()%(19-(a-1));
			for(i=0;i<a;i++){
				if(table[(-i)+f][i+c] == '.'){
					counter2++;
				}
			}
			if(counter2 == a){
				for(i=0;i<a;i++){
					table[(-i)+f][i+c] = random[d][i];
					flag=1;	
				}
			}
			if(flag == 1){
				counter++;
				d++;
			}
	    }
	
	}
	if(o == 0){ //random letters were printed.
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
				if(table[i][j] == '.'){
					s=rand()%26 + 97;
					table[i][j] = s;

				}
			}
		}
	}
	printf("\n      ");
	for(i=0;i<20;i++){ //column numbers were printed.
		if(i>9){
			printf("%d  ",i);
		}
		else{
			printf("%d   ",i);
		}
	}
	for(i=0;i<20;i++){
		printf("\n");
		printf("%c --> ",g);//line letters were printed. 
		g++;
		for(j=0;j<20;j++){
			printf("%c   ",table[i][j]);
		}
		printf("\n");
	}
	while(counter3!=10){
		flag2=0;
		c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
		printf("Please enter the coordinate(eg:a9) and enter the word(enter 'exit' to quit):\n");
		scanf("%s",hold);
		if(strcmp(hold,control) == 0){
			printf("exitting\n");
			break;
		}
		else{
			scanf("%s",hold2[1]);
			h = strlen(hold);
			if(h == 2){
				x = hold[0];
				y = hold[1] - '0';
			}
			else{
				x = hold[0];
				y = (10*(hold[1]-'0'))+hold[2]-'0';
			}
			for(i=0;i<10;i++){
				if(strcmp(hold2[1],random[i]) == 0){
					flag2=1;
				}
			}
			if(flag2 == 0){
				printf("This word is not on our list\n");
			}
			else{
				z = strlen(hold2[1]);
				t = x - 97;
				for(i=0;i<z;i++){
					if(hold2[1][i] == table[t][i+y]){
						c1++;
					}
					if(hold2[1][i] == table[t][(-i)+y]){
						c2++;
					}
					if(hold2[1][i] == table[i+t][y]){
						c3++;
					}
					if(hold2[1][i] == table[(-i)+t][y]){
						c4++;
					}
					if(hold2[1][i] == table[i+t][i+y]){
						c5++;
					}
					if(hold2[1][i] == table[(-i)+t][(-i)+y]){
						c6++;
					}
					if(hold2[1][i] == table[i+t][(-i)+y]){
						c7++;
					}
					if(hold2[1][i] == table[(-i)+t][i+y]){
						c8++;
					}
				}
				if(c1 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;//the words, which in list, were converted to uppercase.
					}
					for(i=0;i<z;i++){
						table[t][i+y] = hold2[1][i] -32;//the words, which in table, were converted to uppercase.
					}
					counter3++;
				}
				if(c2 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[t][(-i)+y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c3 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[i+t][y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c4 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[(-i)+t][y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c5 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[i+t][i+y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c6 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[(-i)+t][(-i)+y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c7 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[i+t][(-i)+y] = hold2[1][i] -32;
					}
					counter3++;
				}
				if(c8 == z){
					for(i=0;i<10;i++){
						if(strcmp(hold2[1],random[i]) == 0){
							k=i;
						}
					}
					for(i=0;i<z;i++){
						random[k][i] = hold2[1][i] -32;
					}
					for(i=0;i<z;i++){
						table[(-i)+t][i+y] = hold2[1][i] -32;
					}
					counter3++;
				}

			}
		}
			printf("\n");
			for(i=0;i<10;i++){
				printf("%s\n",random[i]);
			}
			g = 'a';
			printf("\n      ");
		for(i=0;i<20;i++){
			if(i>9){
				printf("%d  ",i);
			}
			else{
				printf("%d   ",i);
			}
		}
		for(i=0;i<20;i++){
			printf("\n");
			printf("%c --> ",g);
			g++;
			for(j=0;j<20;j++){
				printf("%c   ",table[i][j]);
			}
			printf("\n");
		}
		if(counter3 == 10){
			printf("YOU ARE DONE!\n");
		}
	}

}
void random_words(char random[10],char* file_path,int a){// a random word was got on our list.
	char c,str[20];
	int counter =0;
	int b,i;
	FILE *fp;
	fp = fopen(file_path,"r");
	while(!(feof(fp))){
		c = fgetc(fp);
		if(c == '\n'){
			counter++;
		}
		if(counter == a){
			fgets(str,20,fp);
			break;
		}
		
	}
	if(counter == 99){
			b = strlen(str);
			str[b+1] = '\0';
			strcpy(random,str);
		}
		else{
			b = strlen(str);
			str[b-2] = '\0';
			strcpy(random,str);
		}
}
int main(){
	int i,a,array[10],j,flag=0;
	srand(time(NULL));
	char random[10][20];
	while(i!=10){// 10 different random numbers were collected in an array.
		flag=0;
		a=rand()%100;
		for(j=0;j<10;j++){
			if(a == array[j]){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			continue;
		}
		else{
			array[i] = a;  
		}
		i++;
	}
	for(i=0;i<10;i++){
		random_words(random[i],"words.txt",array[i]);
		puts(random[i]);
	}
	table(random,LETTERS); //table(random,DOTS) to fill with dots,table(random,LETTERS) to fill with random letters!

	return 0;
}