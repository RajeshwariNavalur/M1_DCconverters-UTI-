# Description
Designing or estimating the parameters of various DC-DC converters (buck converter, boost converter and buck-boost converter) based on their input voltage and output voltage which allows the users to analyse all the design considerations of the three converters in a single program

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
## Strength
* Making the design process easy for a designer.
* Bringing together the design process of all the converters in one compacted  program, insted of having a seperate design file for each  converter.
* Can be generalized to different converter by changing the basic formulas. 

## Weakness
* Has to take in many inputs.

## Opportunities
* This simple program can replace a huge design file.
* Has a huge opportunities in power electronics domain.

## Threats
* A slight change in formula may lead to a huge problem.

