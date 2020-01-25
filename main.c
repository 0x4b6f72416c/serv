#include "header.h"


// DEBAG()
int main()
{
	int listenfd,connfd,port,clientlen;
	struct sockaddr_int clientaddr;
	struct hostent *hp;
	char *hddrp;

	if(argc != 2){
		fprintf(stderr, "usage: %s <prot>\n", argv[0]); // change in h.h
		exit(0);
	}
	port = atoi(argv[1]);

	listenfd = open_listenfd(port);

	while(1){

		clientlen = sizeof(clientaddr);
}
