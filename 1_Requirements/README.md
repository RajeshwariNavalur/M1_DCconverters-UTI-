#  Description
Designing or estimating the parameters of various DC-DC converters (buck converter, boost converter and buck-boost converter) based on their input voltage and output voltage which allows the users to analyse all the design considerations of the three converters in a single program.


## High level requirements
| ld | Description | Category |Status|
| --- | --- | --- | --- |
| HLR1 | Classifying  the converter based on the input and output voltage that is, whether it is a buck, boost or buck-boost converter.| Technical | Implemented |
| HLR2| Calculating the duty ratio. | Technical | Implemented |
| HLR3 | Calculating the design parameters such as resistor, inductor and capacitor values. | Technical | Implemented |


 ## Low level requirements
| ld | Description | Category |Status|
| --- | --- | --- | --- |
| LLR1 | Mapping the formulas based on the type of converter. | Technical | Implemented |
| LLR2 | Calculating inductor current which is  further used to calculate resistor, inductor and capacitor values. | Technical | Implemented |
| LLR3 | Determining maximum and minimum inductor current.age | Technical | Implemented |
| LLR4 |  Verifying the current ripple using maximum and minimum inductor current.| Technical | Implemented |
 


## SWOT Analysis
![SWOT](https://user-images.githubusercontent.com/98839182/155742384-b92ec9a8-6239-4a71-9bbb-1bd556ca8b66.PNG)


## 4W's and 1H analysis

![4w_1h](https://user-images.githubusercontent.com/98839182/155742412-07ed30c1-ee35-4099-86e0-b60f6d9adbd9.PNG)




