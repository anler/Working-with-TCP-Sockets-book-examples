#include <sys/socket.h>
#include <netinet/in.h>         /* where internet addresses are defined */

int main(int argc, char *argv[])
{
  int socket_fd, protocol = 0, port = 4481;

  /* First, create a new TCP socket */
  socket_fd = socket(AF_INET, SOCK_STREAM, protocol);

  /* Create a struct to hold the address for listening */
  struct in_addr ip = {INADDR_ANY};  /* listen on all interfaces */
  struct sockaddr_in addr = {AF_INET, htons(port), ip};

  /* Bind to it */
  bind(socket_fd, (struct sockaddr *) &addr, sizeof(addr));

  return 0;
}
