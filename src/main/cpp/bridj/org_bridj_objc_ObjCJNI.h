/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_bridj_objc_ObjCJNI */

#ifndef _Included_org_bridj_objc_ObjCJNI
#define _Included_org_bridj_objc_ObjCJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_bridj_objc_ObjCJNI
 * Method:    createObjCProxyPeer
 * Signature: (Lorg/bridj/objc/ObjCProxy;)Lorg/bridj/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_bridj_objc_ObjCJNI_createObjCProxyPeer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_objc_ObjCJNI
 * Method:    createObjCBlockWithFunctionPointer
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_objc_ObjCJNI_createObjCBlockWithFunctionPointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_objc_ObjCJNI
 * Method:    getObjCBlockFunctionPointer
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_objc_ObjCJNI_getObjCBlockFunctionPointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_objc_ObjCJNI
 * Method:    releaseObjCBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_objc_ObjCJNI_releaseObjCBlock
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
