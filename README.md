# Visual Studio Instrument DLL Sample

A single instrument control software is developed on Visual Studio platform using C#, C++ and VB.NET

---

## 1. Overview of Project
   This operation manual supports the control software (Santec Instrument DLL sample) of various devices.

## 2. Software system composition
   Recommended configurations 
   | Component               | Details                                                                      |
   |-------------------------|------------------------------------------------------------------------------|
   | Operating System        | Windows 10                                                                   |
   | Development Environment | Microsoft Visual Studio 2015                                                 |
   | Visual Basic            | Microsoft Visual Basic 2015                                                  |
   | C#                      | Microsoft Visual C# 2015                                                     |
   | C++                     | Microsoft Visual C++ 2015                                                    |
   | GPIB Drivers            | - National Instruments NI488.2 Version 17.6  <br> - National Instruments NI VISA Version 17.6 <br> - Keysight VISA Version 18.1 |
   | DAQ Drivers             | National Instruments DAQ Version 17.6                                        |


## 3. System environment  
   To use this software, you must install the driver in the table below.  
   | Component         | Version/Details                               |
   |------------------|------------------------------------------------|
   | Framework         | .NET Framework 4.5.2                          |
   | GPIB drivers      | National Instruments NI488.2 version 17.6     |
   | DAQ drivers       | National Instruments DAQ Version 17.6         |
   | USB driver        | CDM Version 2.12.28                           |

   Among them, GPIB and DAQ drivers only use GPIB, Visa connection needs to be installed, and USB driver is   
   installed when USB connection is used.  

## 4. Device connection diagram  
   ### **Diagram of the TSL Connection**
   <img src="https://github.com/santec-corporation/VS_Instrument_DLL_Sample/assets/135589579/7e553e1b-a362-4686-af8b-76001fcb8df5" alt="TSL Connection Diagram" width="500"/>

   ### **Diagram of the PCU Connection**
   <img src="https://github.com/santec-corporation/VS_Instrument_DLL_Sample/assets/135589579/0d96e678-1d79-47bd-8992-55e2c4960a53" alt="PCU Connection Diagram 1" width="500"/>
   <br/>
   <img src="https://github.com/santec-corporation/VS_Instrument_DLL_Sample/assets/135589579/e2c6f10b-d113-46c8-bc05-070249c99bb0" alt="PCU Connection Diagram 2" width="500"/>

   ### **Diagram of the MPM Connection**
   <img src="https://github.com/santec-corporation/VS_Instrument_DLL_Sample/assets/135589579/ec614f3a-1d40-40bc-ac7f-c431afe2c5b7" alt="MPM Connection Diagram" width="500"/>

   ### **Diagram of the OSU Connection**
   <img src="https://github.com/santec-corporation/VS_Instrument_DLL_Sample/assets/135589579/15e46601-c77e-43be-8f51-b3e805ad2282" alt="OSU Connection Diagram" width="500"/>

 
## 5. Operational Steps

Download and refer to the Manual:

- **English:** [VS_Instrument_DLL_Sample Manual_EN.pdf](https://github.com/santec-corporation/VS_Instrument_DLL_Sample/files/12223730/VS_Instrument_DLL_Sample.Manual_EN.pdf)
- **Chinese:** [Instrument_DLL_Sample_Manual-C-v1.3.0.pdf](https://github.com/santec-corporation/VS_Instrument_DLL_Sample/files/11933711/Instrument_DLL_Sample_Manual-C-v1.3.0.pdf)

---