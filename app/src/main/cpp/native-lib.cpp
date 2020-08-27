#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_jnidemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_jnidemo_MainActivity_dealContent(JNIEnv *env, jobject thiz) {
    // TODO: implement dealContent()
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_jnidemo_MainActivity_a(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("1234567890");
}
