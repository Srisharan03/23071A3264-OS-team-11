import socket

HOST = '127.0.0.1'
PORT = 65432

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen(1)
print("Waiting for a connection...")
client_socket, addr = server_socket.accept()
print(f"Connected to {addr}")

while True:
    data = client_socket.recv(1024).decode()
    if not data:
        break
    print(f"Client: {data}")
    response = input("You: ")
    client_socket.send(response.encode())

client_socket.close()
server_socket.close()

