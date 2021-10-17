# Weight Measurement System Using LoadCell 

**Load Cell?**
A load cell measures the weight using strain gauges. The difference between the length of the load cell at one side of the cell will help in determining the weight that is applied to it. This will change the output impedance.  
The output impedance is integrated into a Wheatstone bridge where the difference of the output impedance determines and controls the output voltage of the circuit.
![load-cell-bar-0-5kg-1188-52-B](https://user-images.githubusercontent.com/73076876/137648311-9291df59-2c44-43ae-b315-213db07d61a1.jpg)

The load sensor is placed between two 3d printed design plates to measure the load and has spacers between to avoid any extra load or producing any wrong values. 
![printed](https://user-images.githubusercontent.com/73076876/137648343-9a552681-b0b1-4111-b0b3-de103d81d2c8.jpg)
![Load-cell_20kg-v3](https://user-images.githubusercontent.com/73076876/137648347-4c6919d0-0578-4e14-9e9f-f79bd0c7465f.png)


**Block Diagram**
![image](https://user-images.githubusercontent.com/73076876/137648375-917eb388-096d-4ec2-8731-41f1f0d639b2.png)

**Project instructions**
Step 1: Apply weight to the load cell
Step 2: Length of bar will change and that will effect the strain gauge
Step 3: The change in the strain gauge will vary the resistance
Step 4: As the resistance of the four strain gauges vary the output of the Wheatstone bridge will vary accordingly
Step 5: The output from the Wheatstone bridge will be amplified using a differential amplifier
Step 6: The output of the operational amplifier is inputted into an analogue to digital converter (Arduino Nano) which converts the voltage into digital units (DU)
Step 7: The digital units are then rescaled to be converted into mass (kg)

**Wheatstone Bridge**
![image](https://user-images.githubusercontent.com/73076876/137648509-397a6368-b471-4d39-8e20-c60abc677a48.png)

**Circuit diagram of OP-AMP**
![image](https://user-images.githubusercontent.com/73076876/137648521-88b1e346-ea8f-46be-9434-76f7011b2f22.png)

**Circuit Calculations & Breakdown**
The circuit shown above is a differential operational amplifier to amplify the signal with a gain of 555.5. Where the gain of the op-amp depends on the feedback resistors (Rf/R1) = (1000000/1800) = 555.5.
The input voltages are voltages from the load cell in a Wheatstone bridge configuration (green wire +V) & (White wire -V). The load cell has a minimum output impedance of 900 ohms and a maximum output impedance of 1100 ohms.
This example shows how to implement and apply the load cell using all four strain gauges (R1-R4) where R1 and R3 = R+(change in R) and where R2 and R4 = R-(change in R).
Therefore,
Vobridge=Vs[(change in R)/R]
Voamp=VobridgexGain

Example:
        Vobridge=5(100/1000)=0.5V
        Voamp=(2.744-2.256)x10=4.8V

The Vobridge is theoretical however, the Voamp is calculated that's why there is a 0.2V error

**Rescale**
![Capture](https://user-images.githubusercontent.com/73076876/137648622-cf45065b-b7a4-4e8e-8055-5356e44b7fef.JPG)

The A/D values were taken on the Excel sheet for varying load applied to the load cell to find the values for the equation line. Where Y is values read from the load cell. 
X = Y - 22.5 / 0.3495

**Construction**
![image](https://user-images.githubusercontent.com/73076876/137648666-72271fa1-3e5b-451f-a2f7-d0472b3afe3a.png)

Check this website for furthur details:
https://dt021a-3.wixsite.com/website/about
