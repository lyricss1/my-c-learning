#include <stdio.h>
#include <winsock2.h> 
int main() {
    WSADATA wsa; 
    SOCKET server, client;
    struct sockaddr_in addr;
    char buffer[1024];
    WSAStartup(MAKEWORD(2,2), &wsa);
    server = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    addr.sin_addr.s_addr = INADDR_ANY;
    bind(server, (SOCKADDR*)&addr, sizeof(addr));
    listen(server, 5);
    printf("port 8080\n");
    while (1) {
        client = accept(server, NULL, NULL);
        recv(client, buffer, sizeof(buffer), 0);
        const char *response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Connection: close\r\n"
            "\r\n"
            "<h1>Hello from C!</h1>";
        send(client, response, strlen(response), 0);
        closesocket(client);
    }
    closesocket(server);
    WSACleanup();
    return 0;
}

//cd "e:\Projects\C_Projects\" ; if ($?) { gcc test.c -o test -lws2_32} ; if ($?) { .\test }