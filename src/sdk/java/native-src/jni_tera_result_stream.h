/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_baidu_tera_client_ScanResultStreamImpl */

#ifndef _Included_com_baidu_tera_client_ScanResultStreamImpl
#define _Included_com_baidu_tera_client_ScanResultStreamImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeDone
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeDone
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeNext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeNext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeGetRow
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeGetRow
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeGetFamily
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeGetFamily
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeGetColumn
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeGetColumn
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeGetTimeStamp
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeGetTimeStamp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeGetValue
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeGetValue
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_ScanResultStreamImpl
 * Method:    nativeDeleteResultStream
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_baidu_tera_client_ScanResultStreamImpl_nativeDeleteResultStream
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
