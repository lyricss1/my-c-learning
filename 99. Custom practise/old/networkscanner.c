#include <stdio.h>
#include <stdlib.h>

#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main() {
    char c[50];
    printf("NetScan\n");
    for (int i = 1; i <= 255; i++) {
        printf("Checking 192.168.99.%d ... ", i);
        fflush(stdout);

        sprintf(c, "ping -n 1 -w 100 192.168.99.%d > nul", i);
        if (system(c) == 0) {
            printf("[+] IP: 192.168.99.%d\n", i);
        }
    }
    printf("Scan compl\n");
    WSADATA wsaData;
    SOCKET sock;
    struct sockaddr_in target;
    char target_ip[30];
    int target_port;
    printf("Enter IP: ");
    scanf("%29s", target_ip);
    printf("Enter port to check: ");

    scanf("%d", &target_port);
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) { //ыааыоыфо чеянесу
        printf("Winsock failed\n");
        return 1;
    }
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET) {
        printf("socket error\n");
        WSACleanup();
        return 1;
    }
    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr(target_ip);
    target.sin_port = htons(target_port);



    printf("\nConnecting to %s:%d...\n", target_ip, target_port);
    if (connect(sock, (struct sockaddr*)&target, sizeof(target)) == 0) {
        printf("[!] PORT %d IS OPEN\n", target_port);
    } else {
        printf("[-] Port %d is closed or filtered\n", target_port);
    }
    closesocket(sock);
    WSACleanup();
    return 0;
}