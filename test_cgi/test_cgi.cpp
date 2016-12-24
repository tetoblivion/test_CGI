
#include<stdio.h>
#include<stdlib.h>

int main(int argc,wchar_t* argv[])
{


	printf("Content-type:text/plain\n\n"); //http header : MIME type

	printf("Hello CGI World\n\n");         //content

	printf("%s\n\n", getenv("QUERY_STRING"));


	int len;
	char* lenstr = getenv("CONTENT_LENGTH");

	if (lenstr != NULL && (len = atoi(lenstr)) != 0) {

		char *post_data = new char[len];

		fgets(post_data, len + 1, stdin);

		printf("%d\n%s\n", len, post_data);
	}

	return 0;
}

