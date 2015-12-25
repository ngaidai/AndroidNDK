#include <jni.h>
#include <string.h>
#include <android/log.h>

extern "C" {
     JNIEXPORT jstring JNICALL Java_com_permadi_testJNI_TestJNIActivity_stringFromJNICPP(JNIEnv * env, jobject obj);
 };

 JNIEXPORT jstring JNICALL Java_com_permadi_testJNI_TestJNIActivity_stringFromJNICPP(JNIEnv * env, jobject obj)
 {
     return env->NewStringUTF("Hello From CPP");
 }
