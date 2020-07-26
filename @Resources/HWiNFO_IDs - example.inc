[Variables]
; CPU cores and threads
CPU_Cores = 4
CPU_Threads = 8

; IDs and Instances
HW_Sys_ID = 0xf0000301
HW_Sys_Inst = 0x0

HW_CPU_ID = 0x0f0000300
HW_CPU_Inst = 0x0

HW_CPU_DTS_ID = 0x0f0000400
HW_CPU_DTS_Inst = 0x0

HW_CPU_Enh_ID = 0x0f0002a00
HW_CPU_Enh_Inst = 0x0

HW_Memory_Timing_ID = 0xf0000301
HW_Memory_Timing_Inst = 0x1

HW_MB_ID = 0xf7067910
HW_MB_Inst = 0x0

HW_SMART_ID = 0xf0000100
HW_Drive_ID = 0xf0000101
HW_SSD1_Inst = 0x0
HW_HDD1_Inst = 0x1
HW_SSD2_Inst = 0x2

HW_GPU_ID = 0xe0002000
HW_GPU_Inst = 0x0

HW_Net_ID = 0xf000ea00
HW_Net_Inst = 0x0



; Entries - System
HW_Sys_VM_Used = 0x8000000 ; Other
HW_Sys_VM_Avail = 0x8000001 ; Other
HW_Sys_VM_Load = 0x8000002 ; Other

HW_Sys_PM_Used = 0x8000003 ; Other
HW_Sys_PM_Avail = 0x8000004 ; Other
HW_Sys_PM_Load = 0x8000005 ; Other


; Entries - CPU
HW_CPU_VID_C0 = 0x2000000 ; Voltage
HW_CPU_VID_C1 = 0x2000001 ; Voltage
HW_CPU_VID_C2 = 0x2000002 ; Voltage
HW_CPU_VID_C3 = 0x2000003 ; Voltage
; HW_CPU_VID_C4 = 0x2000004 ; Voltage
; HW_CPU_VID_C5 = 0x2000005 ; Voltage
; HW_CPU_VID_C6 = 0x2000006 ; Voltage
; HW_CPU_VID_C7 = 0x2000007 ; Voltage

HW_CPU_Clk_C0 = 0x6000000 ; Clock
HW_CPU_Clk_C1 = 0x6000001 ; Clock
HW_CPU_Clk_C2 = 0x6000002 ; Clock
HW_CPU_Clk_C3 = 0x6000003 ; Clock
; HW_CPU_Clk_C4 = 0x6000004 ; Clock
; HW_CPU_Clk_C5 = 0x6000005 ; Clock
; HW_CPU_Clk_C6 = 0x6000006 ; Clock
; HW_CPU_Clk_C7 = 0x6000007 ; Clock

HW_CPU_Usg_C0T0 = 0x7000000 ; Usage
HW_CPU_Usg_C0T1 = 0x7000001 ; Usage
HW_CPU_Usg_C1T0 = 0x7000002 ; Usage
HW_CPU_Usg_C1T1 = 0x7000003 ; Usage
HW_CPU_Usg_C2T0 = 0x7000004 ; Usage
HW_CPU_Usg_C2T1 = 0x7000005 ; Usage
HW_CPU_Usg_C3T0 = 0x7000006 ; Usage
HW_CPU_Usg_C3T1 = 0x7000007 ; Usage
; HW_CPU_Usg_C4T0 = 0x7000008 ; Usage
; HW_CPU_Usg_C4T1 = 0x7000009 ; Usage
; HW_CPU_Usg_C5T0 = 0x700000a ; Usage
; HW_CPU_Usg_C5T1 = 0x700000b ; Usage
; HW_CPU_Usg_C6T0 = 0x700000c ; Usage
; HW_CPU_Usg_C6T1 = 0x700000d ; Usage
; HW_CPU_Usg_C7T0 = 0x700000e ; Usage
; HW_CPU_Usg_C7T1 = 0x700000f ; Usage

HW_CPU_Usg = 0x7000009 ; Usage
HW_CPU_Usg_MaxThrd = 0x7000008 ; Usage

HW_CPU_Ratio_C0 = 0x8000000 ; Other
HW_CPU_Ratio_C1 = 0x8000001 ; Other
HW_CPU_Ratio_C2 = 0x8000002 ; Other
HW_CPU_Ratio_C3 = 0x8000003 ; Other
; HW_CPU_Ratio_C4 = 0x8000004; Other
; HW_CPU_Ratio_C5 = 0x8000005 ; Other
; HW_CPU_Ratio_C6 = 0x8000006 ; Other
; HW_CPU_Ratio_C7 = 0x8000007 ; Other


; Entries - CPU (DTS)
HW_CPU_DTS_Temp_C0 = 0x1000000 ; Temperature
HW_CPU_DTS_Temp_C1 = 0x1000001 ; Temperature
HW_CPU_DTS_Temp_C2 = 0x1000002 ; Temperature
HW_CPU_DTS_Temp_C3 = 0x1000003 ; Temperature
; HW_CPU_DTS_Temp_C4 = 0x1000004 ; Temperature
; HW_CPU_DTS_Temp_C5 = 0x1000005 ; Temperature
; HW_CPU_DTS_Temp_C6 = 0x1000006 ; Temperature
; HW_CPU_DTS_Temp_C7 = 0x1000007 ; Temperature
HW_CPU_DTS_Temp = 0x10000fe ; Temperature
HW_CPU_DTS_Temp_Max = 0x10000ff ; Temperature

HW_CPU_DTS_Thrt_Temp_C0 = 0x8000000 ; Other
HW_CPU_DTS_Thrt_Temp_C1 = 0x8000001 ; Other
HW_CPU_DTS_Thrt_Temp_C2 = 0x8000002 ; Other
HW_CPU_DTS_Thrt_Temp_C3 = 0x8000003 ; Other
; HW_CPU_DTS_Thrt_Temp_C4 = 0x8000004 ; Other
; HW_CPU_DTS_Thrt_Temp_C5 = 0x8000005 ; Other
; HW_CPU_DTS_Thrt_Temp_C6 = 0x8000006 ; Other
; HW_CPU_DTS_Thrt_Temp_C7 = 0x8000007 ; Other
HW_CPU_DTS_Thrt_Temp = 0x800000c ; Other

HW_CPU_DTS_Crit_Temp_C0 = 0x8000004 ; Other
HW_CPU_DTS_Crit_Temp_C1 = 0x8000005 ; Other
HW_CPU_DTS_Crit_Temp_C2 = 0x8000006 ; Other
HW_CPU_DTS_Crit_Temp_C3 = 0x8000007 ; Other
; HW_CPU_DTS_Crit_Temp_C4 = 0x800000c ; Other
; HW_CPU_DTS_Crit_Temp_C5 = 0x800000d ; Other
; HW_CPU_DTS_Crit_Temp_C6 = 0x800000e ; Other
; HW_CPU_DTS_Crit_Temp_C7 = 0x800000f ; Other
HW_CPU_DTS_Crit_Temp = 0x800000d ; Other

HW_CPU_DTS_PowLmt_Excd_C0 = 0x8000008 ; Other
HW_CPU_DTS_PowLmt_Excd_C1 = 0x8000009 ; Other
HW_CPU_DTS_PowLmt_Excd_C2 = 0x800000a ; Other
HW_CPU_DTS_PowLmt_Excd_C3 = 0x800000b ; Other
; HW_CPU_DTS_PowLmt_Excd_C4 = 0x8000014 ; Other
; HW_CPU_DTS_PowLmt_Excd_C5 = 0x8000015 ; Other
; HW_CPU_DTS_PowLmt_Excd_C6 = 0x8000016 ; Other
; HW_CPU_DTS_PowLmt_Excd_C7 = 0x8000017 ; Other
HW_CPU_DTS_PowLmt_Excd = 0x800000e ; Other


; Entries - CPU (Enhanced)
HW_CPU_Enh_Temp = 0x1000004 ; Temperature
HW_CPU_Enh_Temp_IA = 0x1000005 ; Temperature
HW_CPU_Enh_VoltOff_IA = 0x2000001 ; Voltage
HW_CPU_Enh_VoltOff_GT = 0x2000002 ; Voltage
HW_CPU_Enh_VoltOff_CLR = 0x2000003 ; Voltage
HW_CPU_Enh_Pow_Pkg = 0x5000000 ; Power
HW_CPU_Enh_Pow_DRAM = 0x5000003 ; Power


; Memory Timings
HW_Memory_Timing_Clk = 0x6000000
HW_Memory_Timing_ClkRatio = 0x8000000
HW_Memory_Timing_Tcas = 0x8000001
HW_Memory_Timing_Trcd = 0x8000002
HW_Memory_Timing_Trp = 0x8000003
HW_Memory_Timing_Tras = 0x8000004
HW_Memory_Timing_Trfc = 0x8000006
HW_Memory_Timing_CR = 0x8000007



; Entries - MoBo
HW_MB_CPU_Fan = 0x3000001 ; Fan


; Entries - SMART
HW_SMART_Temperature = 0x1000000 ; Temperature
HW_SMART_Airflow_Temp = 0x1000001 ; Temperature
HW_SMART_Remaining_Life = 0x7000000 ; Usage
HW_SMART_Failure = 0x8000000 ; Other
HW_SMART_Warning = 0x8000001 ; Other
HW_SMART_Total_Host_Writes = 0x8000002 ; Other
HW_SMART_Total_Host_Reads = 0x8000004 ; Other


; Entries - Drive
HW_Drive_Activity_Read = 0x7000000 ; Usage
HW_Drive_Activity_Write = 0x7000001 ; Usage
HW_Drive_Activity_Total = 0x7000002 ; Usage
HW_Drive_Rate_Read = 0x8000000 ; Other
HW_Drive_Rate_Write = 0x8000001 ; Other
HW_Drive_Total_Read = 0x8000002 ; Other
HW_Drive_Total_Write = 0x8000003 ; Other


; Entries - GPU
HW_GPU_Temp = 0x1000000 ; Temperature
HW_GPU_Volt_Core = 0x2000000 ; Voltage
HW_GPU_Fan = 0x3000000 ; Fan

HW_GPU_Clk = 0x6000000 ; Clock
HW_GPU_Clk_Mem = 0x6000004 ; Clock
HW_GPU_Clk_Vid = 0x6000005 ; Clock

HW_GPU_Usg00_Label = "Core Load"
HW_GPU_Usg00 = 0x7000000 ; Usage
HW_GPU_Usg01_Label = "Mem.Ctrl Load"
HW_GPU_Usg01 = 0x7000001 ; Usage
HW_GPU_Usg02_Label = "Vid.Eng Load"
HW_GPU_Usg02 = 0x7000002 ; Usage
HW_GPU_Usg03_Label = "Bus Load"
HW_GPU_Usg03 = 0x7000003 ; Usage
HW_GPU_Usg04_Label = "Memory Usage"
HW_GPU_Usg04 = 0x7000008 ; Usage
HW_GPU_Usg05_Label = "D3D Usage"
HW_GPU_Usg05 = 0x7000009 ; Usage
HW_GPU_Usg06_Label = "Vid.Dec0 Usage"
HW_GPU_Usg06 = 0x700000a ; Usage
HW_GPU_Usg07_Label = "Vid.Enc0 Usage"
HW_GPU_Usg07 = 0x7000014 ; Usage
HW_GPU_Usg08_Label = "Vid.Enc1 Usage"
HW_GPU_Usg08 = 0x7000015 ; Usage
HW_GPU_Usg09_Label = "Compute_0 Usage"
HW_GPU_Usg09 = 0x700001e ; Usage
HW_GPU_Usg0A_Label = "Compute_1 Usage"
HW_GPU_Usg0A = 0x700001f ; Usage
HW_GPU_Usg0B_Label = "VR Usage"
HW_GPU_Usg0B = 0x7000028 ; Usage

HW_GPU_PL00 = 0x800000a ; Other ; Performance Limit(PL)
HW_GPU_PL00_Label = "Pow."
HW_GPU_PL01 = 0x800000b ; Other
HW_GPU_PL01_Label = "Ther#CRLF#mal"
HW_GPU_PL02 = 0x800000c ; Other ; Reliability Voltage
HW_GPU_PL02_Label = "Volt#CRLF#Rel."
HW_GPU_PL03 = 0x800000d ; Other ; Max.Operating Voltage
HW_GPU_PL03_Label = "Volt#CRLF#Max."
HW_GPU_PL04 = 0x800000e ; Other ; Utilization
HW_GPU_PL04_Label = "Util"

HW_GPU_Fan = 0x0800000 ; Usage

HW_GPU_Pow_Percent_Norm = 0x80000fa ; Other ; Total GPU Power (normalized) [% of TDP]
HW_GPU_Pow_Percent = 0x80000fb ; Other
HW_GPU_Pow = 0x5000000 ; Power

HW_GPU_MemLoad = 0x80000fc ; Other
HW_GPU_MemLoad_D3D = 0x80000fd ; Other
HW_GPU_MemLoad_D3D_Dynm = 0x80000fe ; Other


; Entries - Net
HW_Net_DL = 0x8000000 ; Other
HW_Net_UP = 0x8000001 ; Other
HW_Net_Rate_DL = 0x8000002 ; Other
HW_Net_Rate_UP = 0x8000003 ; Other