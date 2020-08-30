/**
 * @file SupportedFormats.h
 * @author your name (you@domain.com)
 * @brief this file contains all dataset supported formats in PANN.
 * @version 0.1
 * @date 2020-08-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */
namespace PANN
{
    namespace IO
    {
        
    /**
     * @brief contains a list of most common used and compatible dataset file extensions(Supported).
    * 
    */
     enum file_extension
    {
        /** @brief software package: SPSS*/
        sav,
        /** @brief software package: Stata*/
        dta,
        /** @brief software package: R*/
        Rdata,
        /** @brief software package: Excel*/
        xlsx,
        /** @brief software package: Delimited*/
        csv,
        /** @brief software package: Delimited*/
        tab
    }extensions;

    } // namespace name
} // namespace name
