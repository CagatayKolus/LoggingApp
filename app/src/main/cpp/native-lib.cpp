#include <jni.h>
#include <string>
#include <iostream>
#include "utility.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_cagataykolus_loggingapp_NativeLibrary_helloWorld(JNIEnv *env, jobject instance) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_com_cagataykolus_loggingapp_NativeLibrary_logError(JNIEnv *env, jobject, jstring message_) {
    const char *message = env->GetStringUTFChars(message_, 0);

    utility::logError(message);

    env->ReleaseStringUTFChars(message_, message);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_cagataykolus_loggingapp_NativeLibrary_logWarn(JNIEnv *env, jobject, jstring message_) {
    const char *message = env->GetStringUTFChars(message_, 0);

    utility::logWarn(message);

    env->ReleaseStringUTFChars(message_, message);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_cagataykolus_loggingapp_NativeLibrary_logDebug(JNIEnv *env, jobject, jstring message_) {
    const char *message = env->GetStringUTFChars(message_, 0);

    utility::logDebug(message);

    env->ReleaseStringUTFChars(message_, message);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_cagataykolus_loggingapp_NativeLibrary_logInfo(JNIEnv *env, jobject, jstring message_) {
    const char *message = env->GetStringUTFChars(message_, 0);

    utility::logInfo(message);

    env->ReleaseStringUTFChars(message_, message);
}