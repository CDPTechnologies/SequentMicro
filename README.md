# SequentMicro
Sequent Microsystems Raspberry Pi HAT support library for CDP Studio

# How to use
The IOPlus device can be added to the standard I2CIOServer available in I2CIO resource group.

To be able to add resources from SequentMicro library open and build the SequentMicro library in CDP Studio
for the desired targets (targets can be selected under Deploy Configuration tab).

Create a system for your project. Add I2CIOServer from I2CIO resource group to your Application.
Double-click into the I2CIOServer add IOPlus from SequentMicro
resource group. Double-click into the added IOPlus device. Now it is possible to add different IO groups
depending on what is desired: IOPlusADC, IOPlusDAC, IOPlusGPIODir, IOPlusGPIOIn, IOPlusGPIOOut, IOPlusOdPWM,
IOPlusOpto, IOPlusRelay.

# IDE
https://cdpstudio.com/

# Supported HATs
IOPlus https://sequentmicrosystems.com/collections/all-io-cards/products/raspberry-pi-home-automation-card

