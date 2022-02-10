# Description
Designing or estimating the parameters of various DC-DC converters (buck converter, boost converter and buck-boost converter) based on their input voltage and output voltage which allows the users to analyse all the design considerations of the three converters in a single program.

## Highlevel Requirements
* Classifying  the converter based on the input and output voltage that is, whether it is a buck, boost or buck-boost converter.
* Calculating the duty ratio.
* Calculating the design parameters such as resistor, inductor and capacitor values.

## Lowlevel Requirements
* Mapping the formulas based on the type of converter.
* Calculating inductor current which is  further used to calculate resistor, inductor and capacitor values.
* Determining maximum and minimum inductor current.
* Verifying the current ripple using maximum and minimum inductor current.

# SWOT Analysis
## Strengths
* Making the design process easy for a designer.
* Bringing together the design process of all the converters in one compacted  program, insted of having a seperate design file for each  converter.
* Can be generalized to different converter by changing the basic formulas. 

## Weakness
* Has to take in many inputs.
* Should be carefull about the formulas.

## Opportunities
* This simple program can replace a huge design file(excel Sheet).
* Has a huge opportunities in power electronics domain.

## Threats
* A slight change in formulas may lead to a huge problem.



## 4W and 1H

* It is aplicable in power electronics industries while desigining DC-DC Converters.
* It is also usefull while desigining  charges for EV Application and other small level application also.

* This project is done inorder to replace the design file. (i.e an Excel sheet)

* This is usefull while desigining a DC-DC converter to calculate parameters.
* This is also used  while simulation and verificatin of the simulation result.

* This is done by taking into considration of the all the formulas of the Converters