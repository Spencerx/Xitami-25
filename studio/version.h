/*==========================================================
 *                                                          
 *  version.h - version information for Studio               
 *                                                          
 *  Should be the last file included in parent source program.
 *  This file is generated by Boom at configuration time.   
 *  Copyright (c) 1991-2003 iMatix Corporation
 *==========================================================*/

#undef  VERSION         /*  Scrap any previous definitions  */
#undef  PRODUCT         
#undef  COPYRIGHT       
#undef  BUILDDATE       
#undef  BUILDMODEL      
#define VERSION         "2.2"
#define PRODUCT         "Studio/2.2"
#define COPYRIGHT       "Copyright (c) 1991-2003 iMatix Corporation"
#define BUILDDATE       "2004/07/22 17:51:37"
#define BUILDMODEL      "Debug release for internal use only"
/*  Embed the version information in the resulting binary   */
char *stu_version_start = "VeRsIoNsTaRt:stu";
char *stu_version = VERSION;
char *stu_product = PRODUCT;
char *stu_copyright = COPYRIGHT;
char *stu_builddate = BUILDDATE;
char *stu_buildmodel = BUILDMODEL;
char *stu_version_end = "VeRsIoNeNd:stu";