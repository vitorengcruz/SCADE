#ifndef PROJECT1_SNAPSHOT_API
#define PROJECT1_SNAPSHOT_API

#include "project1.h"
#include "stdio.h"

/*********************************************
 * Main Snapshot Save/Load functions
 *********************************************/
extern int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_project1 *inC,
                      outC_project1 *outC);
extern int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_project1 *inC,
                      outC_project1 *outC);

/**********************************************
 * Operators context Save/Load sub-functions
 *********************************************/
extern int save_inC_project1(const char *cpath, const inC_project1 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_inC_project1(inC_project1 *pValue, FILE *snsFile);
extern int save_outC_project1(const char *cpath, const outC_project1 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_project1(outC_project1 *pValue, FILE *snsFile);
#endif /*PROJECT1_SNAPSHOT_API*/
