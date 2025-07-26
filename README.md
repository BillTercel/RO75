更新说明
==============
1.03 1.

如果需要支持全键无冲需要修改protocol.mk中的
ifeq ($(strip $(NKRO_ENABLE)), yes)
    ifeq ($(strip $(BLUETOOTH_ENABLE)), yes)
        # $(info NKRO is not currently supported with Bluetooth, and has been disabled.)后面这两行为后加,原程序不支持这个
		OPT_DEFS += -DNKRO_ENABLE
        SHARED_EP_ENABLE = yes
    else
        OPT_DEFS += -DNKRO_ENABLE
        SHARED_EP_ENABLE = yes
    endif
endif
和 host.c 的
 host_nkro_send(report_nkro_t *report)
 void host_system_send(uint16_t usage)
 两个函数加入蓝牙发送程序。

VALID_BLUETOOTH_DRIVER_TYPES := bluefruit_le custom rn42 nrf52832 fr8003
ifeq ($(strip $(BLUETOOTH_ENABLE)), yes)
    ifeq ($(filter $(strip $(BLUETOOTH_DRIVER)),$(VALID_BLUETOOTH_DRIVER_TYPES)),)
        $(call CATASTROPHIC_ERROR,Invalid BLUETOOTH_DRIVER,BLUETOOTH_DRIVER="$(BLUETOOTH_DRIVER)" is not a valid Bluetooth driver type)
    endif
    OPT_DEFS += -DBLUETOOTH_ENABLE
    OPT_DEFS += -DBLUETOOTH_$(strip $(shell echo $(BLUETOOTH_DRIVER) | tr '[:lower:]' '[:upper:]'))
    # NO_USB_STARTUP_CHECK := yes     //屏蔽这行代码确保可唤醒睡眠的电脑。
    COMMON_VPATH += $(DRIVER_PATH)/bluetooth
    SRC += outputselect.c
