/**
 * @file Types.h
 * @author Moeid Heidari (Moeidheidari@moeidheidari.com)
 * @brief this file contains custom defined PANN primitive types
 * @version 0.1
 * @date 2020-08-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */
/////////////////////////////////////////////////////////////////////////////////////
namespace PANN
{
    /**
         * @brief custom primitive Integer types with PANN prefix
         * 
         */
    namespace TYPES
    {
        /** @brief PANN unsigned character type (8 bit)*/
        using PANN_UInt8 = unsigned char;
        /** @brief PANN unsigned short int type (16 bit)*/
        using PANN_UInt16 = unsigned short;
        /** @brief PANN Unsigned int type (32 bit)*/
        using PANN_UInt32 = unsigned int;
        /** @brief PANN unsigned long long (64 bit)*/
        using PANN_UInt64 = unsigned long long;
    // ────────────────────────────────────────────────────────────────────────────────
        /** @brief PANN signed char (8 bit)*/
        using PANN_Int8 = signed char;
        /** @brief PANN signed short int (16 bit)*/
        using PANN_Int16 = short;
        /** @brief PANN signed int (32 bit)*/
        using PANN_Int32 = int;
        /** @brief PANN signed long long (64 bit)*/
        using PANN_Int64 = long long;
    } 
////////////////////////////////////////////////////////////////////////////////////////



}