$NetBSD$

--- lib/sanitizer_common/sanitizer_platform_interceptors.h.orig	2018-11-16 20:22:47.000000000 +0000
+++ lib/sanitizer_common/sanitizer_platform_interceptors.h
@@ -519,4 +519,26 @@
 #define SANITIZER_INTERCEPT_GETMNTINFO SI_NETBSD
 #define SANITIZER_INTERCEPT_MI_VECTOR_HASH SI_NETBSD
 
+#define SANITIZER_INTERCEPT_SYSCTL SI_NETBSD
+#define SANITIZER_INTERCEPT_FTS SI_NETBSD
+#define SANITIZER_INTERCEPT_REGEX SI_NETBSD
+#define SANITIZER_INTERCEPT_STRTONUM SI_NETBSD
+#define SANITIZER_INTERCEPT_VIS SI_NETBSD
+#define SANITIZER_INTERCEPT_SHA1 SI_NETBSD
+#define SANITIZER_INTERCEPT_MD2 SI_NETBSD
+#define SANITIZER_INTERCEPT_MD4 SI_NETBSD
+#define SANITIZER_INTERCEPT_MD5 SI_NETBSD
+#define SANITIZER_INTERCEPT_GETVFSSTAT SI_NETBSD
+#define SANITIZER_INTERCEPT_NL_LANGINFO SI_POSIX
+#define SANITIZER_INTERCEPT_FPARSELN SI_POSIX
+#define SANITIZER_INTERCEPT_MODCTL SI_NETBSD
+#define SANITIZER_INTERCEPT_STATVFS1 SI_NETBSD
+#define SANITIZER_INTERCEPT_NETBSD_MOUNT SI_NETBSD
+#define SANITIZER_INTERCEPT_FSEEK SI_POSIX
+#define SANITIZER_INTERCEPT_CDBR SI_NETBSD
+#define SANITIZER_INTERCEPT_RMD160 SI_NETBSD
+#define SANITIZER_INTERCEPT_SHA2 SI_NETBSD
+#define SANITIZER_INTERCEPT_GETCHAR SI_POSIX
+#define SANITIZER_INTERCEPT_SETVBUF SI_POSIX
+
 #endif  // #ifndef SANITIZER_PLATFORM_INTERCEPTORS_H
