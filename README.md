# TFT-Screen
This is my project for half life week 4. I'm designing a TFT screen that can display simple numbers and be controlled with a rotary encoder. It uses a raspberry pi pico as the micro controller.

# What is it?

This is a simple TFT screen that uses a CANADUINO® ST7789 TFT IPS 1.3-inch display. The interface is controlled using a rotary encoder and it uses raspberry pi pico as the brain. The pcb is designed using KiCad.

# How is it unique

My TFT screen is unique as it's much simpler than what's shown in the tutorial. It doesn't use nearly as many parts and the firmware is also much simpler. My screen also has less pins and I use a raspberry pi pico instead of a XIAO so I had to adapt that in the firmware and schematic accordingly.

# Images

## KiCad Schematic

<img width="639" height="590" alt="Screenshot 2026-10-31 at 5 33 43 PM" src="https://github.com/user-attachments/assets/c59258be-4c1c-49bd-b36a-a4aade126eed" />

## KiCad pcb

### Normal view

<img width="550" height="695" alt="Screenshot 2026-10-31 at 5 34 24 PM" src="https://github.com/user-attachments/assets/7a733008-5931-4ed2-a37b-34e63db2a053" />

### 3D view

<img width="386" height="437" alt="Screenshot 2026-10-31 at 5 35 36 PM" src="https://github.com/user-attachments/assets/e1e64c99-f3ec-45fe-ad70-2ac61e0326ce" />

# BOM

|Item                    |Qty|Supplier  |Cost/item|Total Cost|link                                                                                       |
|------------------------|---|----------|---------|----------|-------------------------------------------------------------------------------------------|
|CANADUINO® ST7789       |1  |Amazon    |$4.29    |$4.29     |https://www.amazon.ca/gp/product/B088CQ4GPT/ref=ox_sc_act_title_1?smid=A29AOP4GIE7DX6&psc=1|
|PCB                     |1  |JLCPCB    |$4.00    |$4.00     |https://jlcpcb.com                                                                         |
|Raspberry Pi Pico       |1  |AliExpress|$2.58    |$2.58     |https://www.aliexpress.com/item/1005005617180169.html                                      |
|Rotary Encoder          |1  |AliExpress|$1.01    |$1.01     |https://www.aliexpress.com/item/1005007644083514.html                                      |
|Low profile switch      |1  |Amazon    |$6.05    |$6.05     |https://www.amazon.ca/gp/product/B0C6FH6XQ7/ref=ox_sc_act_title_1?smid=A1XJHOP1YXWD49&psc=1|
|Estimated total shipping|1  |          |         |$8.77     |                                                                                           |
