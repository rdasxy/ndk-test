#include "com_example_com_galleonlabs_nativetest_NativeLib.h"

//The .h was generated by javah -jni -classpath bin/classes/ -d jni/ com.example.com.galleonlabs.nativetest.NativeLib

JNIEXPORT jlong JNICALL Java_com_example_com_galleonlabs_nativetest_NativeLib_addTwoNative
  (JNIEnv *env, jclass class, jlong a, jlong b)
{
	return a + b;
}