
# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

DFU_SUFFIX_ARGS = -v FFFF -p FFFF

# SRC += rgbsps.c use_ws2812_bitbang.c

WS2812_DRIVER_REQUIRED = yes

