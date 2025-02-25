import socket
import os

socket_file = '/tmp/chat_socket'

client_socket = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
client_socket.connect(socket_file)

while True:
    message = input("You: ")
    client_socket.send(message.encode())
    
    response = client_socket.recv(1024).decode()
    print(f"Server: {response}")

client_socket.close()

