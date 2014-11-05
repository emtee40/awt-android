/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class julianwi_awtpeer_CairoGraphics2D */

#ifndef _Included_julianwi_awtpeer_CairoGraphics2D
#define _Included_julianwi_awtpeer_CairoGraphics2D
#ifdef __cplusplus
extern "C" {
#endif
#undef julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_NEAREST
#define julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_NEAREST 0L
#undef julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_BILINEAR
#define julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_BILINEAR 1L
#undef julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_BICUBIC
#define julianwi_awtpeer_CairoGraphics2D_INTERPOLATION_BICUBIC 5L
#undef julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_SPEED
#define julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_SPEED 2L
#undef julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_QUALITY
#define julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_QUALITY 3L
#undef julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_DEFAULT
#define julianwi_awtpeer_CairoGraphics2D_ALPHA_INTERPOLATION_DEFAULT 4L
/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    init
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_julianwi_awtpeer_CairoGraphics2D_init
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    disposeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_disposeNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    drawPixels
 * Signature: (J[IIII[DDI)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_drawPixels
  (JNIEnv *, jobject, jlong, jintArray, jint, jint, jint, jdoubleArray, jdouble, jint);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    setGradient
 * Signature: (JDDDDIIIIIIIIZ)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_setGradient
  (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble, jint, jint, jint, jint, jint, jint, jint, jint, jboolean);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    setPaintPixels
 * Signature: (J[IIIIZII)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_setPaintPixels
  (JNIEnv *, jobject, jlong, jintArray, jint, jint, jint, jboolean, jint, jint);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetMatrix
 * Signature: (J[D)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetMatrix
  (JNIEnv *, jobject, jlong, jdoubleArray);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoScale
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoScale
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetOperator
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetOperator
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetRGBAColor
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetRGBAColor
  (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetFillRule
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetFillRule
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetLine
 * Signature: (JDIID)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetLine
  (JNIEnv *, jobject, jlong, jdouble, jint, jint, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetDash
 * Signature: (J[DID)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetDash
  (JNIEnv *, jobject, jlong, jdoubleArray, jint, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetFont
 * Signature: (JLjulianwi/awtpeer/FreetypeFontPeer;)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetFont
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoRectangle
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoRectangle
  (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoArc
 * Signature: (JDDDDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoArc
  (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSave
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSave
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoRestore
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoRestore
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoNewPath
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoNewPath
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoClosePath
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoClosePath
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoMoveTo
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoMoveTo
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoLineTo
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoLineTo
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoCurveTo
 * Signature: (JDDDDDD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoCurveTo
  (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoStroke
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoStroke
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoFill
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoFill
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoClip
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoClip
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoResetClip
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoResetClip
  (JNIEnv *, jobject, jlong);

/*
 * Class:     julianwi_awtpeer_CairoGraphics2D
 * Method:    cairoSetAntialias
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_julianwi_awtpeer_CairoGraphics2D_cairoSetAntialias
  (JNIEnv *, jobject, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
