/* !---- DO NOT EDIT: This file autogenerated by com/jogamp/gluegen/JavaEmitter.java on Fri Jul 19 14:33:26 CEST 2013 ----! */

#include <jni.h>
#include <stdlib.h>

#include <assert.h>


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: int sqlg_db_close(long db)
 *     C function: int sqlg_db_close(ptrdiff_t db);
 */
JNIEXPORT jint JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1db_1close__J(JNIEnv *env, jclass _unused, jlong db) {
  int _res;
  _res = sqlg_db_close((ptrdiff_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: long sqlg_db_open(java.lang.String filename, int flags)
 *     C function: ptrdiff_t sqlg_db_open(const char *  filename, int flags);
 */
JNIEXPORT jlong JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1db_1open__Ljava_lang_String_2I(JNIEnv *env, jclass _unused, jstring filename, jint flags) {
  const char* _strchars_filename = NULL;
  ptrdiff_t _res;
  if ( NULL != filename ) {
    _strchars_filename = (*env)->GetStringUTFChars(env, filename, (jboolean*)NULL);
  if ( NULL == _strchars_filename ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"filename\" in native dispatcher for \"sqlg_db_open\"");
      return 0;
    }
  }
  _res = sqlg_db_open((char *) _strchars_filename, (int) flags);
  if ( NULL != filename ) {
    (*env)->ReleaseStringUTFChars(env, filename, _strchars_filename);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: long sqlg_db_prepare_st(long db, java.lang.String sql)
 *     C function: ptrdiff_t sqlg_db_prepare_st(ptrdiff_t db, const char *  sql);
 */
JNIEXPORT jlong JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1db_1prepare_1st__JLjava_lang_String_2(JNIEnv *env, jclass _unused, jlong db, jstring sql) {
  const char* _strchars_sql = NULL;
  ptrdiff_t _res;
  if ( NULL != sql ) {
    _strchars_sql = (*env)->GetStringUTFChars(env, sql, (jboolean*)NULL);
  if ( NULL == _strchars_sql ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"sql\" in native dispatcher for \"sqlg_db_prepare_st\"");
      return 0;
    }
  }
  _res = sqlg_db_prepare_st((ptrdiff_t) db, (char *) _strchars_sql);
  if ( NULL != sql ) {
    (*env)->ReleaseStringUTFChars(env, sql, _strchars_sql);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: java.lang.String sqlg_st_column_text(long stmt, int col)
 *     C function: const char *  sqlg_st_column_text(ptrdiff_t stmt, int col);
 */
JNIEXPORT jstring JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1st_1column_1text__JI(JNIEnv *env, jclass _unused, jlong stmt, jint col) {
  const char *  _res;
  _res = sqlg_st_column_text((ptrdiff_t) stmt, (int) col);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: int sqlg_st_finish(long stmt)
 *     C function: int sqlg_st_finish(ptrdiff_t stmt);
 */
JNIEXPORT jint JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1st_1finish__J(JNIEnv *env, jclass _unused, jlong stmt) {
  int _res;
  _res = sqlg_st_finish((ptrdiff_t) stmt);
  return _res;
}


/*   Java->C glue code:
 *   Java package: org.sqlg.SQLiteGlue
 *    Java method: int sqlg_st_step(long stmt)
 *     C function: int sqlg_st_step(ptrdiff_t stmt);
 */
JNIEXPORT jint JNICALL 
Java_org_sqlg_SQLiteGlue_sqlg_1st_1step__J(JNIEnv *env, jclass _unused, jlong stmt) {
  int _res;
  _res = sqlg_st_step((ptrdiff_t) stmt);
  return _res;
}


