# LoggingApp
Logging values with C++ in Android NDK


### How to use

```java
String str = "Just an example";

NativeLibrary.logError(str);
NativeLibrary.logWarn(str);
NativeLibrary.logDebug(str);
NativeLibrary.logInfo(str);
```
### Output:
```
E/TAG: Just an example
W/TAG: Just an example
D/TAG: Just an example
I/TAG: Just an example
```


### C++ Part
##### Define the TAG
```c++
#define  LOG_TAG "TAG"
```

##### Print the values
```c++
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
```
