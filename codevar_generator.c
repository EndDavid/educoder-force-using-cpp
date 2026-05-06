// Use for generate cppcode[] variable.
// If "copy & paste" were prohibited in educoder editor, you should not use codevar_generator. Please write code manually. (Imaging you are this generator XD)

#include <stdio.h>
#include <string.h>

char line[1024] = "";
int main() {
    freopen("cppcode.cpp", "r", stdin);
    freopen("codevar.c", "w", stdout);

    puts("const char cppcode[] =");
	puts("    \"#include <cstdio>\\n\"");
	puts("    \"#include <cstdlib>\\n\"");

	while (gets(line)) {
		printf("    \"%s\\n\"\n", line);

		if(strstr(line, "int main()")) {
			printf("    \"    freopen(\\\"fr.in\\\", \\\"r\\\", stdin);\\n\"\n");
		}
	}

	puts(";");
	return 0;
}