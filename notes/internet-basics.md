# Internet Basics

## Internet
- Built so computers can communicate using a standard set of protocols
- Foundation protocol: TCP/IP
- Information is transferred via packets (small chunks of data)
- Speed measured in bits per second (e.g., 100 Mbps = 100 Megabits per second)

## IP Address
- Unique address for each device on the internet
- Like a phone number for computers
- Example: 142.250.183.78

## DNS (Domain Name System)
- The "phonebook" of the internet
- Converts domain names → IP addresses
- Example: google.com → 142.250.183.78
- So we don't have to memorize numbers

## HTTP (HyperText Transfer Protocol)
- Standard protocol for web pages
- Works on a request/response model:
  - Client (browser) sends request
  - Server (website) sends response
- HTTPS = HTTP + encryption (S = Secure, uses TLS)

## Client–Server Model
- Client = your laptop/phone/browser (asks for data)
- Server = powerful computer hosting websites/APIs (provides data)

## Authentication vs Authorization
- Authentication = "Who are you?" (login, password, JWT tokens)
- Authorization = "What can you do?" (roles, permissions)
- Both rely on cryptography to stay secure

## Key Takeaways
- Internet = connected computers using shared protocols
- DNS resolves names to IPs
- HTTP/HTTPS is how web data travels
- Auth ensures only the right people access the right things