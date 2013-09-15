#include <sys/socket.h>

int main(int argc, char *argv[])
{
  int socket_fd, protocol = 0;

  socket_fd = socket(AF_INET6, SOCK_STREAM, protocol);
  close(socket_fd);

  return 0;
}
