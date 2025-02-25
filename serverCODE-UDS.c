import socket
import os

socket_file = '/tmp/chat_socket'

if os.path.exists(socket_file):
    os.remove(socket_file)

server_socket = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
server_socket.bind(socket_file)
server_socket.listen(1)
print("Waiting for a connection...")
client_socket, addr = server_socket.accept()
print("Connection established.")

while True:
    data = client_socket.recv(1024).decode()
    if not data:
        break
    print(f"Client: {data}")
    response = input("You: ")
    client_socket.send(response.encode())

client_socket.close()
server_socket.close()
os.remove(socket_file)

