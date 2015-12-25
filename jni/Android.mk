LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NDKHelloWorld
LOCAL_SRC_FILES := NDKHelloWorld.cpp

include $(BUILD_SHARED_LIBRARY)
