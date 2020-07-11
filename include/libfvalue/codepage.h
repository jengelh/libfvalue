/*
 * Codepage definitions for libfvalue
 *
 * Copyright (C) 2010-2020, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFVALUE_CODEPAGE_H )
#define _LIBFVALUE_CODEPAGE_H

#include <libfvalue/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBFVALUE_CODEPAGES
{
	LIBFVALUE_CODEPAGE_ASCII			= 20127,

	LIBFVALUE_CODEPAGE_ISO_8859_1			= 28591,
	LIBFVALUE_CODEPAGE_ISO_8859_2			= 28592,
	LIBFVALUE_CODEPAGE_ISO_8859_3			= 28593,
	LIBFVALUE_CODEPAGE_ISO_8859_4			= 28594,
	LIBFVALUE_CODEPAGE_ISO_8859_5			= 28595,
	LIBFVALUE_CODEPAGE_ISO_8859_6			= 28596,
	LIBFVALUE_CODEPAGE_ISO_8859_7			= 28597,
	LIBFVALUE_CODEPAGE_ISO_8859_8			= 28598,
	LIBFVALUE_CODEPAGE_ISO_8859_9			= 28599,
	LIBFVALUE_CODEPAGE_ISO_8859_10			= 28600,
	LIBFVALUE_CODEPAGE_ISO_8859_11			= 28601,
	LIBFVALUE_CODEPAGE_ISO_8859_13			= 28603,
	LIBFVALUE_CODEPAGE_ISO_8859_14			= 28604,
	LIBFVALUE_CODEPAGE_ISO_8859_15			= 28605,
	LIBFVALUE_CODEPAGE_ISO_8859_16			= 28606,

	LIBFVALUE_CODEPAGE_KOI8_R			= 20866,
	LIBFVALUE_CODEPAGE_KOI8_U			= 21866,

	LIBFVALUE_CODEPAGE_UTF16_LITTLE_ENDIAN		= 1200,
	LIBFVALUE_CODEPAGE_UTF16_BIG_ENDIAN		= 1201,
	LIBFVALUE_CODEPAGE_UTF32_LITTLE_ENDIAN		= 12000,
	LIBFVALUE_CODEPAGE_UTF32_BIG_ENDIAN		= 12001,
	LIBFVALUE_CODEPAGE_UTF7				= 65000,
	LIBFVALUE_CODEPAGE_UTF8				= 65001,
	LIBFVALUE_CODEPAGE_SCSU				= 65002,

	LIBFVALUE_CODEPAGE_WINDOWS_874			= 874,
	LIBFVALUE_CODEPAGE_WINDOWS_932			= 932,
	LIBFVALUE_CODEPAGE_WINDOWS_936			= 936,
	LIBFVALUE_CODEPAGE_WINDOWS_949			= 949,
	LIBFVALUE_CODEPAGE_WINDOWS_950			= 950,
	LIBFVALUE_CODEPAGE_WINDOWS_1250			= 1250,
	LIBFVALUE_CODEPAGE_WINDOWS_1251			= 1251,
	LIBFVALUE_CODEPAGE_WINDOWS_1252			= 1252,
	LIBFVALUE_CODEPAGE_WINDOWS_1253			= 1253,
	LIBFVALUE_CODEPAGE_WINDOWS_1254			= 1254,
	LIBFVALUE_CODEPAGE_WINDOWS_1255			= 1255,
	LIBFVALUE_CODEPAGE_WINDOWS_1256			= 1256,
	LIBFVALUE_CODEPAGE_WINDOWS_1257			= 1257,
	LIBFVALUE_CODEPAGE_WINDOWS_1258			= 1258,

	/* A special codepage to indicate codepage 1200 that uses ASCII strings as well.
	 * This has primarily been seen in the ESE database format.
	 */
	LIBFVALUE_CODEPAGE_1200_MIXED			= (int) 0x800004b0,
};

#define LIBFVALUE_CODEPAGE_US_ASCII			LIBFVALUE_CODEPAGE_ASCII

#define LIBFVALUE_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBFVALUE_CODEPAGE_ISO_8859_1
#define LIBFVALUE_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBFVALUE_CODEPAGE_ISO_8859_2
#define LIBFVALUE_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBFVALUE_CODEPAGE_ISO_8859_3
#define LIBFVALUE_CODEPAGE_ISO_NORTH_EUROPEAN		LIBFVALUE_CODEPAGE_ISO_8859_4
#define LIBFVALUE_CODEPAGE_ISO_CYRILLIC			LIBFVALUE_CODEPAGE_ISO_8859_5
#define LIBFVALUE_CODEPAGE_ISO_ARABIC			LIBFVALUE_CODEPAGE_ISO_8859_6
#define LIBFVALUE_CODEPAGE_ISO_GREEK			LIBFVALUE_CODEPAGE_ISO_8859_7
#define LIBFVALUE_CODEPAGE_ISO_HEBREW			LIBFVALUE_CODEPAGE_ISO_8859_8
#define LIBFVALUE_CODEPAGE_ISO_TURKISH			LIBFVALUE_CODEPAGE_ISO_8859_9
#define LIBFVALUE_CODEPAGE_ISO_NORDIC			LIBFVALUE_CODEPAGE_ISO_8859_10
#define LIBFVALUE_CODEPAGE_ISO_THAI			LIBFVALUE_CODEPAGE_ISO_8859_11
#define LIBFVALUE_CODEPAGE_ISO_BALTIC			LIBFVALUE_CODEPAGE_ISO_8859_13
#define LIBFVALUE_CODEPAGE_ISO_CELTIC			LIBFVALUE_CODEPAGE_ISO_8859_14

#define LIBFVALUE_CODEPAGE_ISO_LATIN_1			LIBFVALUE_CODEPAGE_ISO_8859_1
#define LIBFVALUE_CODEPAGE_ISO_LATIN_2			LIBFVALUE_CODEPAGE_ISO_8859_2
#define LIBFVALUE_CODEPAGE_ISO_LATIN_3			LIBFVALUE_CODEPAGE_ISO_8859_3
#define LIBFVALUE_CODEPAGE_ISO_LATIN_4			LIBFVALUE_CODEPAGE_ISO_8859_4
#define LIBFVALUE_CODEPAGE_ISO_LATIN_5			LIBFVALUE_CODEPAGE_ISO_8859_9
#define LIBFVALUE_CODEPAGE_ISO_LATIN_6			LIBFVALUE_CODEPAGE_ISO_8859_10
#define LIBFVALUE_CODEPAGE_ISO_LATIN_7			LIBFVALUE_CODEPAGE_ISO_8859_13
#define LIBFVALUE_CODEPAGE_ISO_LATIN_8			LIBFVALUE_CODEPAGE_ISO_8859_14
#define LIBFVALUE_CODEPAGE_ISO_LATIN_9			LIBFVALUE_CODEPAGE_ISO_8859_15
#define LIBFVALUE_CODEPAGE_ISO_LATIN_10			LIBFVALUE_CODEPAGE_ISO_8859_16

#define LIBFVALUE_CODEPAGE_KOI8_RUSSIAN			LIBFVALUE_CODEPAGE_KOI8_R
#define LIBFVALUE_CODEPAGE_KOI8_UKRAINIAN		LIBFVALUE_CODEPAGE_KOI8_U

#define LIBFVALUE_CODEPAGE_WINDOWS_THAI			LIBFVALUE_CODEPAGE_WINDOWS_874
#define LIBFVALUE_CODEPAGE_WINDOWS_JAPANESE		LIBFVALUE_CODEPAGE_WINDOWS_932
#define LIBFVALUE_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBFVALUE_CODEPAGE_WINDOWS_936
#define LIBFVALUE_CODEPAGE_WINDOWS_KOREAN		LIBFVALUE_CODEPAGE_WINDOWS_949
#define LIBFVALUE_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBFVALUE_CODEPAGE_WINDOWS_950
#define LIBFVALUE_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBFVALUE_CODEPAGE_WINDOWS_1250
#define LIBFVALUE_CODEPAGE_WINDOWS_CYRILLIC		LIBFVALUE_CODEPAGE_WINDOWS_1251
#define LIBFVALUE_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBFVALUE_CODEPAGE_WINDOWS_1252
#define LIBFVALUE_CODEPAGE_WINDOWS_GREEK		LIBFVALUE_CODEPAGE_WINDOWS_1253
#define LIBFVALUE_CODEPAGE_WINDOWS_TURKISH		LIBFVALUE_CODEPAGE_WINDOWS_1254
#define LIBFVALUE_CODEPAGE_WINDOWS_HEBREW		LIBFVALUE_CODEPAGE_WINDOWS_1255
#define LIBFVALUE_CODEPAGE_WINDOWS_ARABIC		LIBFVALUE_CODEPAGE_WINDOWS_1256
#define LIBFVALUE_CODEPAGE_WINDOWS_BALTIC		LIBFVALUE_CODEPAGE_WINDOWS_1257
#define LIBFVALUE_CODEPAGE_WINDOWS_VIETNAMESE		LIBFVALUE_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFVALUE_CODEPAGE_H ) */

