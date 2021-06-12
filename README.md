IMPORTANT:

This project is about creating a video game controller (like PS5 or Xbox) through Arduino Uno using Python and C++. Typically, Mice and controllers are made from Arduino Micro or Lenardo because they contain an Atmega32_u4 processor, whereas boards such as Arduino Uno and Nano contain Atmega328P processors. The reason why this matters is because the Atmega 32_u4 processor based boards support a joystick library which allows you to program a board to act like a mouse. The joystick library can't run on Atmega328P processors, and therefore require external modification in the form of the Python code which is used to translate outputs from the Arduino to movements of the cursor.

Solutions to common issues:

Make sure that your using Python 3,
Unzip the folder once installed,
Make sure that you install the packages such as PySerial and Pandas etc, in the terminal of your IDE. If your IDE doesn't have a terminal, then try and go to enviornment settings and install the packages. The command for installing such packages are:

pip install pyserial
pip install pandas
(I use Pycharm from Jetbrains)

Works only for Arduino Uno and Windows 10.
(Make sure you execute the Arduino code first and then the python code)


