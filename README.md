# Arcade Controller Arduino Button Controller
## Program care controleaza un arcade controller cu 4 butoane prin Arduino

Programul controleaza un arcade controller cu 4 butoane conectat la calculator, cele patru butoane fiind echivalente cu tastele WASD. Butoanele pot fi apasate sau pot fi tinute apasate(hold).

Este folosit header file-ul Bounce2.h pentru ca in cazul in care tinem un buton apasat, rezultatul sa nu fie interpretat ca o apasare foarte rapida a tastei echivalente, ci ca un hold al tastei.