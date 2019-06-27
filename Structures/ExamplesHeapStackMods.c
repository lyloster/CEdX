void modifyPtr(char* name);

void modifyName(char* name);

void main() {
	char* name = malloc(sizeof(char) * 10);
	scanf("%s", name);

	printf("%s\n", name);
	modifyPtr(name);
	modifyName(name);
	printf("%s\n", name);
}

// Doesn't do anything, we have a copy of the char*
void modifyPtr(char* name) {
	name = NULL;
}

//access the heap directly and changing the values
void modifyName(char* name) {
	name[2] = 'p';
	//interupts the string ( '\0')
	//NULL (pointer) == 0 (ints) == '\0' (string delimiter)
	name[3] = NULL;
}