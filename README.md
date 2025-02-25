# 23071A3264-OS-team-11
IPC (Inter-Process Communication) sockets enable processes to communicate and share data, either locally or over a network. There are two main types:

Unix Domain Sockets (Local IPC): Used for communication between processes on the same machine, offering faster communication than network sockets. Common in local server-client setups, like database connections (e.g., MySQL) or web servers communicating with application servers (e.g., Nginx with PHP-FPM).

Network Sockets (Remote IPC): Used for communication across different machines over a network, typically using TCP/UDP. Used in client-server models, web apps, and microservices architectures.

Applications:

Database Communication: Clients and servers communicate via sockets (locally or over a network).\n
Web Servers and Clients: Web servers (e.g., Apache) and app servers (e.g., Node.js) communicate via sockets.\n
Distributed Systems: Microservices and distributed systems rely on IPC sockets for data exchange.\n
Message Queues: Tools like RabbitMQ and Redis use sockets for inter-process communication.\n
Real-time Applications: Online games, streaming, and chat apps use network sockets for real-time communication.\n
