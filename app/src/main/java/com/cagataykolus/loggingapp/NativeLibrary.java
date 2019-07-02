package com.cagataykolus.loggingapp;

public class NativeLibrary {
    public static native String helloWorld();
    public static native void logError(String message);
    public static native void logWarn(String message);
    public static native void logDebug(String message);
    public static native void logInfo(String message);
}
