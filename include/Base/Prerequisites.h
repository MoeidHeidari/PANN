
#ifndef PANN_PREREQUISITES_H_
#define PANN_PREREQUISITES_H_
 namespace PANN
 {
     //
     // ─── POSSIBLE PLATFORMS ─────────────────────────────────────────────────────────
     //    
     #define PANN_WINDOWS_PLATFORM   1
     #define PANN_MAC_PLATFORM       2
     #define PANN_LINUX_PLATFORM     3
     //
     // ─── POSSIBLE COMPILERS ─────────────────────────────────────────────────────────
     //
     #define PANN_MSVC_COMPILER          1
     #define PANN_CLANG_COMPILER         2
     #define PANN_GNUC_COMPILER          3
     #define PANN_APPLECLANG_COMPILER    4
     //
     // ─── ENDIAN POSSIBILITIES ───────────────────────────────────────────────────────
     //
     #define PANN_LITTLE_ENDIAN  1
     #define PANN_BIG_ENDIAN     2
     //
     // ─── ARCHITECTURE POSSIBILITIES ─────────────────────────────────────────────────
     //
     #define PANN_32BIT_ARCHITECTURE     1
     #define PANN_64BIT_ARCHITECTURE     2

//====================================================================================================================================
     //
     // ─── PLATFORM ───────────────────────────────────────────────────────────────────
     //
     #if    defined (__WIN32__) || defined (__WIN32)
     #      define PANN_PLATFORM PANN_WINDOWS_PLATFORM
     #elif  defined (__APPLE_CC__)
     #      define PANN_PLATFORM PANN_MAC_PLATFORM
     #else
     #      define PANN_PLATFORM PANN_LINUX_PLATFORM
     #endif
     //
     // ─── COMPILER ───────────────────────────────────────────────────────────────────
     //
     #if    defined(__clang__)
     
     #if    defined __aplle_build_version__
     #      define PANN_COMPILER PANN_APPLECLANG_COMPILER
     #else
     #      define PANN_COMPILER PANN_CLANG_COMPILER
     #endif
     #      define PANN_COMPILER_VERSION (((__clang_major__)*100) + (__clang_minor__*10) + __clang_patchlevel__)
     #elif  defined(_MSC_VER)
     #      define RF_COMPILER PANN_MSVC_COMPILER
     #      define PANN_COMP_VER _MSC_VER
     #else
     #   error "No known compiler"
     #endif
     //
     // ─── ARCHITECTURE ───────────────────────────────────────────────────────────────
     //
     #if    defined(__x86_64__) || defined(_M_X64) || defined(__powerpc64__) || defined(__alpha__) ||\
            defined(__ia64__) || defined(__s390__) || defined(__s390x__) || defined(_LP64) || defined(__LP64__)
     #      define PANN_ARCH_TYPE PANN_ARCH_64
     #else
     #      define PANN_ARCH_TYPE PANN_ARCH_32
     #endif
     #if    PANN_COMPILER == PANN_MSVC_COMPILER
     #      define PANN_INLINE          inline
     #      define PANN_FORCE_INLINE    __forceinline o
     #elif  PANN_COMPILER == PANN_GNUC_COMPILER
     #      define PANN_INLINE          inline
     #      define PANN_FORCE_INLINE   inline  __attribute__((always_inline))
     #elif  PANN_COMPILER == PANN_CLANG_COMPILER || PANN_COMPILER == PANN_APPLECLANG_COMPILER
     #      define PANN_INLINE          inline
     #      define PANN_FORCE_INLINE    inline  __attribute__((always_inline))
     #else
     #      define PANN_INLINE         inline
     #      define PANN_FORCE_INLINE   inline 
     #endif
     //
     // ─── MACROS TO ENABLE SOME USEFUL FEATURES IN C++11 WHICH THEY ARE NOT AVAILABLE IN ALL COMPILERS 
     //
      #endif
     #if    PANN_COMPILER == PANN_MSVC_COMPILER
     #      if !define(__cpp_constexpr) || (__cpp_1 < 201304)
     #      define PANN_NO_CPP11_CONSTEXPR_AVAILABLE
     #      define PANN_NO_CPP14_CONSTEXPR_AVAILABLE
     #      endif
     #      if !define(_MSVC_LANG) || (_MSVC_LANG < 201703L)
     #      define PANN_NO_CPP17_CONSTEXPR_AVAILABLE
     #      endif
     #endif
     #if PANN_COMPILER == PANN_COMPILER_GNUC ||  PANN_COMPILER == PANN_COMPILER_CLANG || PANN_COMPILER == PANN_COMPILER_APPLECLANG
     #   if !defined(__cpp_constexpr) || (__cpp_constexpr < 201304)
     #       define PANN_NO_CPP14_CONSTEXPR_AVAILABLE
     #   endif
     #   if !defined(cpp_noexcept)
     #       define PANN_NO_CPP11_CONSTEXPR_AVAILABLE
     #   endif
     #   if !defined(__cpp_noexcept_function_type) || (__cpp_noexcept_function_type < 201510)
     #       define PANN_NO_CPP17_CONSTEXPR_AVAILABLE
     #   endif
     #endif
     #if defined(PANN_NO_CXX11_CONSTEXPR)
     #   define PANN_CONSTEXPR
     #   define PANN_CONSTEXPR_OR_CONST const
     #else
     #   define PANN_CONSTEXPR constexpr
     #   define PANN_CONSTEXPR_OR_CONST constexpr
     #endif


     #if defined(PANN_NO_CXX14_CONSTEXPR)
     #   define PANN_CXX14_CONSTEXPR
     #else
     #   define PANN_CXX14_CONSTEXPR constexpr
     #endif

     #ifdef PANN_NO_CXX11_NOEXCEPT
     #   define PANN_NOEXCEPT
     #   define PANN_NOEXCEPT_OR_NOTHROW throw()
     #else
     #   define PANN_NOEXCEPT noexcept
     #   define PANN_NOEXCEPT_OR_NOTHROW noexcept
     #endif
     #define PANN_STATIC_CONSTEXPR static PANN_CONSTEXPR_OR_CONST
    
}