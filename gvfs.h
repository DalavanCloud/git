#ifndef GVFS_H
#define GVFS_H


/*
 * This file is for the specific settings and methods
 * used for GVFS functionality
 */


/*
 * The list of bits in the core_gvfs setting
 */
#define GVFS_SKIP_SHA_ON_INDEX                      (1 << 0)
#define GVFS_SPARSE_HASHMAP                         (1 << 1)
#define GVFS_MISSING_OK                             (1 << 2)
#define GVFS_NO_DELETE_OUTSIDE_SPARSECHECKOUT       (1 << 3)
#define GVFS_FETCH_SKIP_REACHABILITY_AND_UPLOADPACK (1 << 4)
/*#define GVFS_LOWER_DEFAULT_SLOP                     (1 << 5)*/
#define GVFS_BLOCK_FILTERS_AND_EOL_CONVERSIONS      (1 << 6)
#define GVFS_SKIP_MERGE_IN_CHECKOUT                 (1 << 7)
#define GVFS_DEFAULT_MERGE_OPTIONS                  (1 << 8)

void gvfs_load_config_value(const char *value);
int gvfs_config_is_set(int mask);

#endif /* GVFS_H */