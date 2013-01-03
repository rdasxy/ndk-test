package com.example.com.galleonlabs.nativetest;

public class NativeLib {
	public static long addTwo(long a, long b) {
		return a + b;
	}
	
	public native static long addTwoNative(long a, long b);
	
	static {
		  System.loadLibrary("com_example_com_galleonlabs_nativetest_NativeLib");
		 }
}
