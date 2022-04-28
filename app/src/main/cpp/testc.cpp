// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("testc");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("testc")
//      }
//    }


#include <jni.h>
#include <string>
#include <iostream>

extern "C" jstring
Java_com_fourdev_testc_AppConstantsBuilder_developmentUrl(JNIEnv *env, jclass /* this */) {
    std::string baseURL = "https://xxxxxxxxxxxxxxxxxxDevelopmentURL/";
    return env->NewStringUTF(baseURL.c_str());
}

extern "C" jstring
Java_com_fourdev_testc_AppConstantsBuilder_productionUrl(JNIEnv *env, jclass clazz) {
    std::string baseURL = "https://xxxxxxxxxxxxxxxxxxProduction/";
    return env->NewStringUTF(baseURL.c_str());
}
