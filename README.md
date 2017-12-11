# LedStripController
Basically, this is code to control an led strip to mirror the colors of the screen for an ambient background.
So far, it works by:

1. Taking screen data
2. Converting it into a PPM format
3. Piping it into a C++ file
4. Performing matrix calculations on it to get the average pixel color
5. Sending that data over serial to an arduino
6. Programming the strip with the arduino

### Hardware:

+ Linux Desktop
+ Arduino (Uno)
+ HL1606 LED Strip
