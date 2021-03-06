#include "string.h"

int strlen(const char * str){
	int length = 0;
	while(str[length++] != '\0' );
	return length - 1;
}

boolean strcmp(char * str1, char * str2){
	int i;
	boolean equals = true;			
	
	for (i = 0; (str1[i] != 0 || str2[i] != 0) && equals == true; i++){	
		if(str1[i] != str2[i]){
			equals = false;
		}	
	}
	
	if(equals == false){
		return false;
	}

	if(str1[i] == str2[i] && equals){
		return true;
	}
	
	return false;
}

boolean strncmp(char * str1, char * str2, int num){
	int i = 0;
	while(i != num){
		if(*(str1 + i) != *(str2 + i))
			return false;
		i++;
	}
	return true;
}

char * strcpy(char * dest, char * source){
	int sourceLength = strlen(source);
	int i;

	for(i = 0; i <=  sourceLength; i++){
		*(dest + i) = *(source + i);
	}

	*(dest + i) = '\0';
	return dest;
}

char * strncpy(char * dest, char * source,int lenght){
	int sourceLength = strlen(source);
	int i;

	for(i = 0; i <=  sourceLength && i <= lenght; i++){
		*(dest + i) = *(source + i);
	}

	*(dest + i) = '\0';
	return dest;
}

char * strcat(char * dest, const char * source){
	int i;
	int j;
	int destLength = strlen(dest);
	int sourceLength = strlen(source);

	for(i = 0; i <  destLength; i++){
		if(dest[i] == '\0')
			break;
	}

	for(j = 0; j <  sourceLength; j++){
		dest[i] = source[j];
		i++;
	}

	dest[i] = '\0';

	return dest;
}


char * strsch(char * source, const char * strSearched){
	int i;
	int j = 0;
	char * position = NULL;
	int searchedLength = strlen(strSearched);
	int sourceLength = strlen(source);
	
	for(i = 0; i <  sourceLength; i++){
		if(j == searchedLength)
			break;
		if(source[i] == strSearched[j]){
			j++;
			if(position == NULL)
				position = source + i;
		}else{
			j = 0;
			position = NULL;
		}
	}

	return position;
}






