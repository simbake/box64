#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

// FcValue is a typedef with int+union, with biggest part is a double => so 3 "u32" on the stack

GO(FcAtomicCreate, pFp)
GO(FcAtomicDeleteNew, vFp)
GO(FcAtomicDestroy, vFp)
GO(FcAtomicLock, iFp)
GO(FcAtomicNewFile, pFp)
GO(FcAtomicOrigFile, pFp)
GO(FcAtomicReplaceOrig, iFp)
GO(FcAtomicUnlock, vFp)
GO(FcBlanksAdd, iFpu)
GO(FcBlanksCreate, pFv)
GO(FcBlanksDestroy, vFp)
GO(FcBlanksIsMember, iFpu)
GO(FcCacheCopySet, pFp) //GO(FcCacheCopySet, biibp__Fp)
GO(FcCacheDir, pFp)
GO(FcCacheNumFont, iFp)
GO(FcCacheNumSubdir, iFp)
GO(FcCacheSubdir, pFpi)
GO(FcCharSetAddChar, iFpu)
GO(FcCharSetCopy, pFp)
GO(FcCharSetCount, uFp)
GO(FcCharSetCoverage, uFpup)
GO(FcCharSetCreate, pFv)
GO(FcCharSetDestroy, vFp)
GO(FcCharSetEqual, iFpp)
GO(FcCharSetFirstPage, uFppp)   // second p is a fixed sized array
GO(FcCharSetHasChar, iFpu)
GO(FcCharSetIntersect, pFpp)
GO(FcCharSetIntersectCount, uFpp)
GO(FcCharSetIsSubset, iFpp)
GO(FcCharSetMerge, iFppp)
GO(FcCharSetNew, pFv)
GO(FcCharSetNextPage, uFppp)
GO(FcCharSetSubtract, pFpp)
GO(FcCharSetSubtractCount, uFpp)
GO(FcCharSetUnion, pFpp)
GO(FcConfigAppFontAddDir, iFpp)
GO(FcConfigAppFontAddFile, iFpp)
GO(FcConfigAppFontClear, vFp)
GO(FcConfigBuildFonts, iFp)
GO(FcConfigCreate, pFv)
GO(FcConfigDestroy, vFp)
GO(FcConfigEnableHome, iFi)
GO(FcConfigFilename, pFp)
GO(FcConfigGetBlanks, pFp)
GO(FcConfigGetCache, pFp)
GO(FcConfigGetCacheDirs, pFp)
GO(FcConfigGetConfigDirs, pFp)
GO(FcConfigGetConfigFiles, pFp)
GO(FcConfigGetCurrent, pFv) // need wrapping for FcConfig?
GO(FcConfigGetFontDirs, pFp)
//GO(FcConfigGetFonts, biibp__Fpu)
GO(FcConfigGetRescanInterval, iFp)
//GO(FcConfigGetRescanInverval, 
GO(FcConfigGetSysRoot, pFp)
GO(FcConfigHome, pFv)
GO(FcConfigParseAndLoad, iFppi)
GO(FcConfigReference, pFp)
GO(FcConfigSetCurrent, iFp)
GO(FcConfigSetRescanInterval, iFpi)
//GO(FcConfigSetRescanInverval, 
GO(FcConfigSubstitute, iFppu)   // might need wrapping, 1st arg is FcConfig
GO(FcConfigSubstituteWithPat, iFpppu)
GO(FcConfigUptoDate, iFp)
GO(FcDefaultSubstitute, vFp)
GO(FcDirCacheLoad, pFppbp_)
//GO(FcDirCacheLoadFile, pFpp)
GO(FcDirCacheRead, pFpip)
GO(FcDirCacheUnlink, iFpp)
GO(FcDirCacheUnload, vFp)
GO(FcDirCacheValid, iFp)
//GO(FcDirSave, iFbiibp__pp)
//GO(FcDirScan, iFbiibp__ppppi)
GO(FcFileIsDir, iFp)
//GO(FcFileScan, iFbiibp__ppppi)
GO(FcFini, vFv)
GO(FcFontList, pFppp)   // need wrapping of returned FcFontSet? GO(FcFontList, biibp__Fppbiibp__)
GO(FcFontMatch, pFppp)
GO(FcFontRenderPrepare, pFppp)
//GO(FcFontSetAdd, iFbiibp__p)
//GO(FcFontSetCreate, biibp__Fv)
GO(FcFontSetDestroy, vFp) //GO(FcFontSetDestroy, vFbiibp__)
//GO(FcFontSetList, biibp__Fpbbiibp___ipbiibp__)
//GO(FcFontSetMatch, pFpbbiibp___ipp)
//GO(FcFontSetPrint, vFbiibp__)
//GO(FcFontSetSort, biibp__Fpbbiibp___ipibp_p)
//GO(FcFontSetSortDestroy, vFbiibp__)
//GO(FcFontSort, biibp__Fppibp_p)
GOM(FcFreeTypeCharIndex, uFEpu)
//GO(FcFreeTypeCharSet, 
//GO(FcFreeTypeCharSetAndSpacing, 
GO(FcFreeTypeQuery, pFpupp)
//GO(FcFreeTypeQueryFace, pFppip)
GO(FcGetLangs, pFv)
GO(FcGetVersion, iFv)
GO(FcInit, iFv)
GO(FcInitBringUptoDate, iFv)
GO(FcInitLoadConfig, pFv)
GO(FcInitLoadConfigAndFonts, pFv)
GO(FcInitReinitialize, iFv)
GO(FcLangGetCharSet, pFp)
GO(FcLangSetAdd, iFpp)
GO(FcLangSetCompare, uFpp)
GO(FcLangSetContains, iFpp)
GO(FcLangSetCopy, pFp)
GO(FcLangSetCreate, pFv)
GO(FcLangSetDestroy, vFp)
GO(FcLangSetEqual, iFpp)
GO(FcLangSetGetLangs, pFp)
GO(FcLangSetHash, uFp)
GO(FcLangSetHasLang, uFpp)
GO(FcMatrixCopy, pFp)
GO(FcMatrixEqual, iFpp)
GO(FcMatrixMultiply, vFppp)
GO(FcMatrixRotate, vFpdd)
GO(FcMatrixScale, vFpdd)
GO(FcMatrixShear, vFpdd)
GO(FcNameConstant, iFpp)
//GO(FcNameGetConstant, bppi_Fp)
//GO(FcNameGetObjectType, bpi_Fp)
GO(FcNameParse, pFp)
GO(FcNameRegisterConstants, iFbppi_i)
GO(FcNameRegisterObjectTypes, iFbpi_i)
GO(FcNameUnparse, pFp)
GO(FcNameUnregisterConstants, iFbppi_i)
GO(FcNameUnregisterObjectTypes, iFbpi_i)
GO(FcObjectSetAdd, iFpp) //GO(FcObjectSetAdd, iFbiibp__p)
//GOM(FcObjectSetBuild, biibp__FEpV)
GO(FcObjectSetCreate, pFv) //GO(FcObjectSetCreate, biibp__Fv)
GO(FcObjectSetDestroy, vFp) //GO(FcObjectSetDestroy, vFbiibp__)
//GOM(FcObjectSetVaBuild, biibp__FEpp)
GOM(FcPatternAdd, iFppiUi)  //%noE  //need M for the iU that is a an FcValue
GO(FcPatternAddBool, iFppi)
GO(FcPatternAddCharSet, iFppp)
GO(FcPatternAddDouble, iFppd)
//GO(FcPatternAddFTFace, iFppp)
GO(FcPatternAddInteger, iFppi)
GO(FcPatternAddLangSet, iFppp)
GO(FcPatternAddMatrix, iFppp)
GO(FcPatternAddString, iFppp)
//GO(FcPatternAddWeak, iFppiLi)
//GOM(FcPatternBuild, pFEpV)
GO(FcPatternCreate, pFv)
GO(FcPatternDel, iFpp)
GO(FcPatternDestroy, vFp)
GO(FcPatternDuplicate, pFp)
GO(FcPatternEqual, iFpp)
//GO(FcPatternEqualSubset, iFppbiibp__)
//GO(FcPatternFilter, pFpbiibp__)
GO(FcPatternFormat, pFpp)
GO(FcPatternGet, uFppip)
GO(FcPatternGetBool, uFppip)
GO(FcPatternGetCharSet, uFppibp_)
GO(FcPatternGetDouble, uFppip)
//GO(FcPatternGetFTFace, iFppip)
GO(FcPatternGetInteger, uFppip)
GO(FcPatternGetLangSet, uFppibp_)
GO(FcPatternGetMatrix, uFppibp_)
GO(FcPatternGetString, uFppibp_)
GO(FcPatternHash, uFp)
GO(FcPatternPrint, vFp)
GO(FcPatternReference, vFp)
GO(FcPatternRemove, iFppi)
//GOM(FcPatternVaBuild, pFEpp)
GO(FcStrBasename, pFp)
GO(FcStrCmp, iFpp)
GO(FcStrCmpIgnoreCase, iFpp)
GO(FcStrCopy, pFp)
GO(FcStrCopyFilename, pFp)
GO(FcStrDirname, pFp)
GO(FcStrDowncase, pFp)
GO(FcStrFree, vFp)
GO(FcStrListCreate, pFp)
GO(FcStrListDone, vFp)
GO(FcStrListFirst, vFp)
GO(FcStrListNext, pFp)
GO(FcStrPlus, pFpp)
GO(FcStrSetAdd, iFpp)
GO(FcStrSetAddFilename, iFpp)
GO(FcStrSetCreate, pFv)
GO(FcStrSetDel, iFpp)
GO(FcStrSetDestroy, vFp)
GO(FcStrSetEqual, iFpp)
GO(FcStrSetMember, iFpp)
GO(FcStrStr, pFpp)
GO(FcStrStrIgnoreCase, pFpp)
GO(FcUcs4ToUtf8, iFup)
GO(FcUtf16Len, iFpuipp)
GO(FcUtf16ToUcs4, iFpupi)
GO(FcUtf8Len, iFpipp)
GO(FcUtf8ToUcs4, iFppi)
//GO(FcValueDestroy, 
//GO(FcValueEqual, 
//GO(FcValuePrint, 
//GO(FcValueSave, 
GO(FcWeightFromOpenTypeDouble, dFd)
GO(FcWeightToOpenTypeDouble, dFd)
//GO(_fini, 
//GO(_init, 
