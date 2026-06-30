# SCT_CS_1
Program to encrypt and decrypt text using the Ceaser Chiper Algorithm. In C++.

## 🔒 Features
- **Dual Mode:** Seamlessly switch between Encryption and Decryption.
- **Dynamic Shift Key:** Supports custom shift values (automatically handles wraps using modulo 26 math).
- **Input Sanitization:** Maintains letter casing (uppercase/lowercase) while leaving spaces and special characters intact.

## 🛠️ How It Works (The Math)
The program handles character shifting using standard modular arithmetic:
- **Encryption Formula:** $E_n(x) = (x + n) \pmod{26}$
- **Decryption Formula:** $D_n(x) = (x - n) \pmod{26}$
