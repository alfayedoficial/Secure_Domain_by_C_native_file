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

extern "C"
jstring
Java_com_fourdev_testc_MainActivity_baseUrlFromJNI(
	 JNIEnv* env,
	 jclass thiz) {
    std::string baseURL = "https://domainname/functiontype/";
    return env->NewStringUTF(baseURL.c_str());
}