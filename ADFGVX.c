#include <stdio.h>

#define TAM 6

void cifra(char* texto){

	char polibio[6][6] = {
		'N','0','H','D','Z','3',
		'3','C','T','5','I','Y',
		'7','E','6','2','Q','9',
		'8','K','U','A','O','F',
		'R','M','0','S','V','W',
		'P','L','J','X','B','G'
	};
	char textoCifrado[6][6];
	char pos[6][6];
	char ADFGVX[6]={'A','D','F','G','V','X'};
	for (int i = 0; i < TAM;i++){
		pos[0][i]=ADFGVX[i];
	}
	for (int i = 0; i < TAM;i++){
		pos[i][0]=ADFGVX[i];
	}
	for (int k = 0; k < 36; k++){
		for (int i = 0; i < TAM; i++){
			for (int j = 0; j < TAM; j++){
				if (polibio[i][j] == texto[k]){
					//printf("%c%c ",pos[i][0],pos[0][j]);
					textoCifrado[i][0] = pos[i][0];
					textoCifrado[0][j] = pos[0][j];
				}
				
			}
			
		}
		
	}	
	for (int i = 0; i < TAM; i++){
		/* code */
		for (int j = 0; j < TAM; j++){
			/* code */
			printf("%c",textoCifrado[i][j]);
		}
	}
	printf("\n");

	
}

int main(){
	cifra("A ENCICLOPEDIA LIVRE");
	return 0;
}
