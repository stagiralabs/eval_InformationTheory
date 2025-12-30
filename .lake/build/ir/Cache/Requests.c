// Lean compiler output
// Module: Cache.Requests
// Imports: Init Cache.Hashing
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg(uint8_t, uint8_t, lean_object*);
extern lean_object* l_Cache_IO_CURLCFG;
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__4;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__11;
static lean_object* l_Cache_Requests_downloadFiles___lambda__9___closed__2;
static lean_object* l_Cache_Requests_mkFileURL___closed__2;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__26;
lean_object* l_EIO_toBaseIO___rarg(lean_object*, lean_object*);
lean_object* l_UInt64_asLTar(uint64_t);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__8;
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__5;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__2;
static lean_object* l_Cache_Requests_putFiles___closed__23;
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__2;
lean_object* l_Cache_IO_runCurlStreaming___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_isGitStatusClean___closed__5;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__19;
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__3;
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_formatError___rarg___closed__2;
static lean_object* l_Cache_Requests_getToken___closed__8;
static lean_object* l_Cache_Requests_downloadFile___closed__3;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__6;
lean_object* lean_io_remove_file(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getFilesInfo___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__11(uint8_t, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__12;
LEAN_EXPORT lean_object* l_Cache_Requests_putFiles___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1(lean_object*);
static lean_object* l_Cache_Requests_UPLOAD__URL___closed__2;
static lean_object* l_Cache_Requests_putFiles___closed__14;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__11;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles(lean_object*, uint8_t, uint8_t, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__2;
lean_object* lean_io_as_task(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getToken___closed__2;
static lean_object* l_Cache_Requests_putFiles___closed__11;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__22;
static lean_object* l_Cache_Requests_getGitCommitHash___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Cache_Requests_mkFileURL(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__9___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__14;
lean_object* lean_io_rename(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__25;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_desc___boxed(lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__17;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__21;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__7;
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__6;
lean_object* l_Cache_IO_ModuleHashMap_hashes(lean_object*);
static lean_object* l_Cache_Requests_commit___closed__10;
lean_object* lean_io_getenv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_prefix___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Cache_Requests_downloadFiles___spec__2(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__3;
static lean_object* l_Cache_Requests_commit___closed__4;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__9;
LEAN_EXPORT lean_object* l_Cache_Requests_commit___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_commit___closed__5;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__1(lean_object*, lean_object*);
static uint8_t l_Cache_Requests_getFilesInfo___lambda__1___closed__5;
static lean_object* l_Cache_Requests_getProofWidgets___closed__5;
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__5;
static lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2;
static lean_object* l_Cache_Requests_putFiles___closed__5;
static lean_object* l_Cache_Requests_commit___closed__2;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__10;
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_commit(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__7;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFile___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_URL;
static lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__5___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__12;
static lean_object* l_Cache_Requests_QueryType_desc___closed__2;
static lean_object* l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3;
static lean_object* l_Cache_Requests_getProofWidgets___closed__6;
lean_object* l_IO_FS_createDirAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___lambda__1(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_commit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__4;
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_mkGetConfigContent___closed__1;
lean_object* l_Cache_IO_runCurl(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_getToken(lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Cache_Requests_QueryType_prefix___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__3;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__24;
lean_object* lean_io_mono_ms_now(lean_object*);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__6;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__20;
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion(lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_commit___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getFilesInfo___lambda__1___closed__1;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getFiles___lambda__1___closed__1;
lean_object* l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__20;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__21;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__23;
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_mkPutConfigContent___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__16;
static lean_object* l_Cache_Requests_downloadFile___closed__1;
static lean_object* l_Cache_Requests_getToken___closed__3;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFile(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__28;
static lean_object* l_Cache_Requests_getGitCommitHash___closed__3;
static lean_object* l_Cache_Requests_downloadFiles___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_getGitCommitHash(lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__5;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__4;
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Cache_Requests_commit___spec__3(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__9;
static lean_object* l_Cache_Requests_getToken___closed__10;
lean_object* l_Cache_IO_unpackCache(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_mkFileURL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__3;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__15;
static lean_object* l_Cache_Requests_commit___closed__3;
static lean_object* l_Cache_Requests_commit___closed__11;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__2;
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_Cache_Requests_getFilesInfo___lambda__1___closed__2;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__9;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__5;
static lean_object* l_Cache_Requests_formatError___rarg___closed__1;
static lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
lean_object* l_Cache_IO_runCmd(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_removeDirAll(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__4;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__10;
LEAN_EXPORT lean_object* l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__1;
static lean_object* l_Cache_Requests_isGitStatusClean___closed__2;
LEAN_EXPORT lean_object* l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1___boxed(lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo(uint8_t, lean_object*);
static lean_object* l_Cache_Requests_isGitStatusClean___closed__3;
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
extern lean_object* l_Task_Priority_default;
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1___boxed(lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__2;
static lean_object* l_Cache_Requests_commit___closed__7;
lean_object* l_Cache_IO_getCurl(lean_object*);
LEAN_EXPORT uint8_t l_Cache_Requests_useFROCache;
lean_object* l_IO_ofExcept___at_IO_FS_Stream_readJson___spec__1(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__27;
LEAN_EXPORT lean_object* l_Cache_Requests_mkPutConfigContent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_prefix(uint8_t);
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getToken___closed__9;
static lean_object* l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_formatError___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getToken___closed__6;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__3;
static lean_object* l_Cache_Requests_UPLOAD__URL___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_mkPutConfigContent(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__27;
static lean_object* l_Cache_Requests_getToken___closed__7;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__10;
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__9;
static lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2;
lean_object* lean_task_get_own(lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___closed__3;
static lean_object* l_Cache_Requests_putFiles___closed__6;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
extern lean_object* l_Cache_IO_CACHEDIR;
static lean_object* l_Cache_Requests_putFiles___closed__16;
static lean_object* l_Cache_Requests_putFiles___closed__13;
lean_object* l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getToken___closed__4;
static lean_object* l_Cache_Requests_putFiles___closed__15;
static lean_object* l_Cache_Requests_mkFileURL___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___lambda__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_toCtorIdx(uint8_t);
static lean_object* l_Cache_Requests_getToken___closed__1;
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__7;
static uint8_t l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_downloadFiles___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getGitCommitHash___closed__4;
static lean_object* l_Cache_Requests_commit___closed__8;
LEAN_EXPORT lean_object* l_Cache_Requests_formatError(lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_putFiles(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_commit___closed__12;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__4;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_URL___closed__2;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_println___at_Lean_Environment_displayStats___spec__3(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_String_Parser_run___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_isGitStatusClean(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getToken___closed__5;
LEAN_EXPORT lean_object* l_Cache_Requests_UPLOAD__URL;
lean_object* l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___closed__4;
static lean_object* l_Cache_Requests_putFiles___closed__22;
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
static lean_object* l_Cache_Requests_putFiles___closed__12;
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_desc(uint8_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__18;
static lean_object* l_Cache_Requests_putFiles___closed__24;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__5;
static uint8_t l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__2;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__13;
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___boxed(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_getFilesInfo___closed__1;
static lean_object* l_Cache_Requests_putFiles___closed__18;
LEAN_EXPORT lean_object* l_Cache_Requests_mkGetConfigContent___boxed(lean_object*, lean_object*);
lean_object* lean_io_exit(uint8_t, lean_object*);
lean_object* l_Substring_prevn(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__7;
static lean_object* l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5;
static lean_object* l_Cache_Requests_getGitCommitHash___closed__2;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Message_0__Lean_fromJsonBaseMessage____x40_Lean_Message___hyg_3070____spec__1(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__1;
static lean_object* l_Cache_Requests_getProofWidgets___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_mkGetConfigContent(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_URL___closed__3;
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__13;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__7;
static lean_object* l_Cache_Requests_putFiles___closed__3;
static lean_object* l_Cache_Requests_getFilesInfo___closed__2;
static lean_object* l_Cache_Requests_isGitStatusClean___closed__1;
static lean_object* l_Cache_Requests_getProofWidgets___lambda__2___closed__8;
static lean_object* l_Cache_Requests_commit___closed__1;
static uint8_t l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__6;
lean_object* l_Lean_Json_Parser_any(lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__10;
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__6;
static lean_object* l_Cache_Requests_getGitCommitHash___closed__5;
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__2;
static lean_object* l_Cache_Requests_downloadFiles___lambda__4___closed__6;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___closed__1;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_289____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Cache_Requests_downloadFile___closed__4;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__25;
lean_object* l_String_intercalate(lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Cache_Requests_commit___closed__9;
static lean_object* l_Cache_Requests_putFiles___closed__17;
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__1;
static lean_object* l_Cache_Requests_putFiles___closed__19;
uint8_t l_Substring_beq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Cache_Requests_getProofWidgets___closed__7;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_commit___closed__6;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_QueryType_prefix___closed__2;
lean_object* lean_io_error_to_string(lean_object*);
static lean_object* l_Cache_Requests_downloadFile___closed__2;
static lean_object* l_Cache_Requests_QueryType_desc___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Cache_IO_isMathlibRoot(lean_object*);
static lean_object* l_Cache_Requests_getFilesInfo___lambda__1___closed__4;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1(lean_object*);
static lean_object* l_Cache_Requests_getProofWidgets___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_putFiles___closed__26;
lean_object* l_IO_eprint___at_IO_eprintln___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__8;
static lean_object* l_Cache_Requests_downloadFiles___lambda__7___closed__4;
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__11___closed__7;
static lean_object* l_Cache_Requests_putFiles___closed__8;
static lean_object* l_Cache_Requests_isGitStatusClean___closed__6;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Cache_IO_ModuleHashMap_filterExists(lean_object*, uint8_t, lean_object*);
static lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_checkForToolchainMismatch___closed__1;
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_toCtorIdx___boxed(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
static lean_object* l_Cache_Requests_downloadFiles___lambda__9___closed__3;
static lean_object* l_Cache_Requests_QueryType_desc___closed__3;
static lean_object* l_Cache_Requests_isGitStatusClean___closed__4;
static lean_object* l_Cache_Requests_putFiles___closed__28;
static lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__11___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Cache_Requests_URL___closed__1;
static uint8_t _init_l_Cache_Requests_useFROCache() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_URL___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://lakecache.blob.core.windows.net/mathlib4", 48, 48);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_URL___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://mathlib4.lean-cache.cloud", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_URL___closed__3() {
_start:
{
uint8_t x_1; 
x_1 = l_Cache_Requests_useFROCache;
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_Cache_Requests_URL___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_Cache_Requests_URL___closed__2;
return x_3;
}
}
}
static lean_object* _init_l_Cache_Requests_URL() {
_start:
{
lean_object* x_1; 
x_1 = l_Cache_Requests_URL___closed__3;
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MATHLIB_CACHE_SAS", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("environment variable ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getToken___closed__2;
x_2 = l_Cache_Requests_getToken___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" must be set to upload caches", 29, 29);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getToken___closed__3;
x_2 = l_Cache_Requests_getToken___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getToken___closed__5;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MATHLIB_CACHE_S3_TOKEN", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getToken___closed__2;
x_2 = l_Cache_Requests_getToken___closed__7;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getToken___closed__8;
x_2 = l_Cache_Requests_getToken___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getToken___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getToken___closed__9;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getToken(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Cache_Requests_useFROCache;
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Cache_Requests_getToken___closed__1;
x_4 = lean_io_getenv(x_3, x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = l_Cache_Requests_getToken___closed__6;
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_Cache_Requests_getToken___closed__6;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_4, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_ctor_get(x_5, 0);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = l_Cache_Requests_getToken___closed__7;
x_19 = lean_io_getenv(x_18, x_1);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = l_Cache_Requests_getToken___closed__10;
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = l_Cache_Requests_getToken___closed__10;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_19, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
lean_ctor_set(x_19, 0, x_29);
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 1);
lean_inc(x_30);
lean_dec(x_19);
x_31 = lean_ctor_get(x_20, 0);
lean_inc(x_31);
lean_dec(x_20);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
}
}
static lean_object* _init_l_Cache_Requests_mkFileURL___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_mkFileURL___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("/f/", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkFileURL(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Cache_Requests_mkFileURL___closed__1;
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Cache_Requests_mkFileURL___closed__2;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_2);
x_8 = lean_string_append(x_7, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkFileURL___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Cache_Requests_mkFileURL(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("url = ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n-o ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".part", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Cache_IO_CACHEDIR;
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
x_7 = lean_array_uget(x_1, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = l_UInt64_asLTar(x_9);
x_11 = l_Cache_Requests_URL;
x_12 = l_Cache_Requests_mkFileURL(x_11, x_10);
x_13 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
x_18 = lean_string_append(x_10, x_17);
x_19 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_20 = l_System_FilePath_join(x_19, x_18);
lean_dec(x_18);
x_21 = l_String_quote(x_20);
lean_dec(x_20);
x_22 = lean_string_append(x_16, x_21);
lean_dec(x_21);
x_23 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_24 = lean_string_append(x_22, x_23);
x_25 = lean_string_append(x_4, x_24);
lean_dec(x_24);
x_26 = 1;
x_27 = lean_usize_add(x_2, x_26);
x_2 = x_27;
x_4 = x_25;
goto _start;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_5);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Cache_Requests_mkGetConfigContent___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkGetConfigContent(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
x_21 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_3 = x_21;
goto block_16;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_18, x_18);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_18);
x_23 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_3 = x_23;
goto block_16;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 0;
x_25 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_26 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_27 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3(x_17, x_24, x_25, x_26);
x_3 = x_27;
goto block_16;
}
}
block_16:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = l_Cache_Requests_mkFileURL___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_4, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = l_Cache_Requests_mkFileURL___closed__1;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_2);
return x_11;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = l_Cache_Requests_mkFileURL___closed__1;
x_15 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1(x_3, x_12, x_13, x_14, x_2);
lean_dec(x_3);
return x_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_mkGetConfigContent___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkGetConfigContent___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Cache_Requests_mkGetConfigContent(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFile___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_downloadFile___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-o", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFile___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--silent", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFile___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--fail", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFile(uint64_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_3 = l_UInt64_asLTar(x_1);
x_4 = l_Cache_Requests_URL;
x_5 = l_Cache_Requests_mkFileURL(x_4, x_3);
x_6 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_7 = l_System_FilePath_join(x_6, x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
x_9 = lean_string_append(x_3, x_8);
x_10 = l_System_FilePath_join(x_6, x_9);
lean_dec(x_9);
x_11 = l_Cache_IO_getCurl(x_2);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_box(0);
lean_inc(x_10);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_15);
lean_ctor_set(x_11, 0, x_10);
x_16 = l_Cache_Requests_downloadFile___closed__2;
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_11);
x_18 = l_Cache_Requests_downloadFile___closed__3;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Cache_Requests_downloadFile___closed__4;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_array_mk(x_22);
x_24 = lean_box(0);
x_25 = l_Cache_Requests_downloadFile___closed__1;
x_26 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_27 = 0;
x_28 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_13);
lean_ctor_set(x_28, 2, x_23);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*5, x_27);
x_29 = l_IO_Process_output(x_28, x_14);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint32_t x_32; uint32_t x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get_uint32(x_30, sizeof(void*)*2);
lean_dec(x_30);
x_33 = 0;
x_34 = lean_uint32_dec_eq(x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_7);
x_35 = lean_io_remove_file(x_10, x_31);
lean_dec(x_10);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
x_38 = lean_box(x_27);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_box(x_27);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_35);
if (x_42 == 0)
{
return x_35;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_35, 0);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_35);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
x_46 = lean_io_rename(x_10, x_7, x_31);
lean_dec(x_7);
lean_dec(x_10);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = 1;
x_50 = lean_box(x_49);
lean_ctor_set(x_46, 0, x_50);
return x_46;
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_dec(x_46);
x_52 = 1;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
else
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
return x_46;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_46, 0);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_46);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_10);
lean_dec(x_7);
x_59 = !lean_is_exclusive(x_29);
if (x_59 == 0)
{
return x_29;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_29, 0);
x_61 = lean_ctor_get(x_29, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_29);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_63 = lean_ctor_get(x_11, 0);
x_64 = lean_ctor_get(x_11, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_11);
x_65 = lean_box(0);
lean_inc(x_10);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_10);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Cache_Requests_downloadFile___closed__2;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Cache_Requests_downloadFile___closed__3;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Cache_Requests_downloadFile___closed__4;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_5);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_mk(x_73);
x_75 = lean_box(0);
x_76 = l_Cache_Requests_downloadFile___closed__1;
x_77 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_78 = 0;
x_79 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_63);
lean_ctor_set(x_79, 2, x_74);
lean_ctor_set(x_79, 3, x_75);
lean_ctor_set(x_79, 4, x_77);
lean_ctor_set_uint8(x_79, sizeof(void*)*5, x_78);
x_80 = l_IO_Process_output(x_79, x_64);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; uint32_t x_83; uint32_t x_84; uint8_t x_85; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_ctor_get_uint32(x_81, sizeof(void*)*2);
lean_dec(x_81);
x_84 = 0;
x_85 = lean_uint32_dec_eq(x_83, x_84);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_7);
x_86 = lean_io_remove_file(x_10, x_82);
lean_dec(x_10);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_88 = x_86;
} else {
 lean_dec_ref(x_86);
 x_88 = lean_box(0);
}
x_89 = lean_box(x_78);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_86, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_86, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_93 = x_86;
} else {
 lean_dec_ref(x_86);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; 
x_95 = lean_io_rename(x_10, x_7, x_82);
lean_dec(x_7);
lean_dec(x_10);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
x_98 = 1;
x_99 = lean_box(x_98);
if (lean_is_scalar(x_97)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_97;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_96);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_95, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_103 = x_95;
} else {
 lean_dec_ref(x_95);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_10);
lean_dec(x_7);
x_105 = lean_ctor_get(x_80, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_80, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_107 = x_80;
} else {
 lean_dec_ref(x_80);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFile___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = l_Cache_Requests_downloadFile(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_downloadFiles___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFile___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_alloc_closure((void*)(l_EIO_toBaseIO___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_Task_Priority_default;
x_10 = lean_io_as_task(x_8, x_9, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 1);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_1);
x_1 = x_10;
x_2 = x_6;
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_1);
x_1 = x_16;
x_2 = x_6;
x_3 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Cache_Requests_downloadFiles___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_task_get_own(x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
lean_dec(x_1);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_4;
goto _start;
}
else
{
x_2 = x_4;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; 
x_7 = lean_array_uget(x_1, x_2);
x_8 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Cache_Requests_downloadFiles___spec__1(x_4, x_7, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 1;
x_12 = lean_usize_add(x_2, x_11);
x_2 = x_12;
x_4 = x_9;
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" download(s) failed", 19, 19);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
x_8 = l_Cache_Requests_mkFileURL___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Cache_Requests_downloadFiles___lambda__1___closed__1;
x_11 = lean_string_append(x_9, x_10);
x_12 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_11, x_2);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = 1;
x_15 = lean_io_exit(x_14, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_IO_eprint___at_IO_eprintln___spec__1(x_7, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_12, x_11);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\rDownloaded: ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" file(s) [attempted ", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("/", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" = ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("%]", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__4___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" failed", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
x_12 = lean_io_mono_ms_now(x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_nat_sub(x_13, x_6);
x_16 = lean_unsigned_to_nat(100u);
x_17 = lean_nat_dec_le(x_16, x_15);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_apply_6(x_1, x_11, x_5, x_6, x_7, x_18, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_inc(x_7);
x_20 = l___private_Init_Data_Repr_0__Nat_reprFast(x_7);
x_21 = l_Cache_Requests_downloadFiles___lambda__4___closed__1;
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = l_Cache_Requests_downloadFiles___lambda__4___closed__2;
x_24 = lean_string_append(x_22, x_23);
lean_inc(x_11);
x_25 = l___private_Init_Data_Repr_0__Nat_reprFast(x_11);
x_26 = lean_string_append(x_24, x_25);
lean_dec(x_25);
x_27 = l_Cache_Requests_downloadFiles___lambda__4___closed__3;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_string_append(x_28, x_2);
x_30 = l_Cache_Requests_downloadFiles___lambda__4___closed__4;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_nat_mul(x_16, x_11);
x_33 = lean_nat_div(x_32, x_3);
lean_dec(x_32);
x_34 = l___private_Init_Data_Repr_0__Nat_reprFast(x_33);
x_35 = lean_string_append(x_31, x_34);
lean_dec(x_34);
x_36 = l_Cache_Requests_downloadFiles___lambda__4___closed__5;
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_eq(x_5, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_inc(x_5);
x_40 = l___private_Init_Data_Repr_0__Nat_reprFast(x_5);
x_41 = l_Cache_Requests_downloadFiles___lambda__4___closed__6;
x_42 = lean_string_append(x_41, x_40);
lean_dec(x_40);
x_43 = l_Cache_Requests_downloadFiles___lambda__4___closed__7;
x_44 = lean_string_append(x_42, x_43);
x_45 = lean_string_append(x_37, x_44);
lean_dec(x_44);
x_46 = lean_box(0);
x_47 = l_Cache_Requests_downloadFiles___lambda__3(x_1, x_11, x_5, x_13, x_7, x_6, x_45, x_46, x_14);
lean_dec(x_6);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_box(0);
x_49 = l_Cache_Requests_downloadFiles___lambda__3(x_1, x_11, x_5, x_13, x_7, x_6, x_37, x_48, x_14);
lean_dec(x_6);
return x_49;
}
}
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("filename_effective", 18, 18);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Cache_Requests_downloadFiles___lambda__5___closed__1;
x_10 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Message_0__Lean_fromJsonBaseMessage____x40_Lean_Message___hyg_3070____spec__1(x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_10);
x_11 = lean_box(0);
x_12 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_11, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_System_FilePath_pathExists(x_13, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_18, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_dec(x_14);
x_21 = lean_io_remove_file(x_13, x_20);
lean_dec(x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_22, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_5, x_8);
x_10 = lean_box(0);
x_11 = lean_apply_6(x_1, x_2, x_3, x_4, x_9, x_10, x_7);
return x_11;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__2___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Json_Parser_any), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("http_code", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("errormsg", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__7___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Cache_Requests_downloadFiles___lambda__7___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_string_utf8_byte_size(x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_4, x_12, x_13);
x_15 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_4, x_14, x_12);
x_16 = lean_string_utf8_extract(x_4, x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = l_Cache_Requests_downloadFiles___lambda__7___closed__1;
x_18 = lean_string_utf8_byte_size(x_16);
x_19 = lean_nat_dec_eq(x_18, x_13);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = l_Cache_Requests_downloadFiles___lambda__7___closed__2;
x_21 = l_Std_Internal_Parsec_String_Parser_run___rarg(x_20, x_16);
x_22 = l_IO_ofExcept___at_IO_FS_Stream_readJson___spec__1(x_21, x_5);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_2);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__4___boxed), 9, 3);
lean_closure_set(x_25, 0, x_17);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_2);
x_26 = l_Cache_Requests_downloadFiles___lambda__7___closed__3;
lean_inc(x_23);
x_27 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_289____spec__1(x_23, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_10, x_28);
lean_dec(x_10);
x_30 = l_Cache_Requests_downloadFiles___lambda__7___closed__4;
lean_inc(x_23);
x_31 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Message_0__Lean_fromJsonBaseMessage____x40_Lean_Message___hyg_3070____spec__1(x_23, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_31);
x_32 = lean_box(0);
x_33 = l_Cache_Requests_downloadFiles___lambda__5(x_23, x_25, x_11, x_29, x_8, x_9, x_32, x_24);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_34, x_24);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Cache_Requests_downloadFiles___lambda__5(x_23, x_25, x_11, x_29, x_8, x_9, x_36, x_37);
lean_dec(x_36);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_35);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_27, 0);
lean_inc(x_43);
lean_dec(x_27);
x_44 = lean_unsigned_to_nat(200u);
x_45 = lean_nat_dec_eq(x_43, x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_unsigned_to_nat(404u);
x_47 = lean_nat_dec_eq(x_43, x_46);
lean_dec(x_43);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_2);
lean_dec(x_1);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_10, x_48);
lean_dec(x_10);
x_50 = l_Cache_Requests_downloadFiles___lambda__7___closed__4;
lean_inc(x_23);
x_51 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Message_0__Lean_fromJsonBaseMessage____x40_Lean_Message___hyg_3070____spec__1(x_23, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_51);
x_52 = lean_box(0);
x_53 = l_Cache_Requests_downloadFiles___lambda__5(x_23, x_25, x_11, x_49, x_8, x_9, x_52, x_24);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
lean_dec(x_51);
x_55 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_54, x_24);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_Cache_Requests_downloadFiles___lambda__5(x_23, x_25, x_11, x_49, x_8, x_9, x_56, x_57);
lean_dec(x_56);
return x_58;
}
else
{
uint8_t x_59; 
lean_dec(x_49);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
x_59 = !lean_is_exclusive(x_55);
if (x_59 == 0)
{
return x_55;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_55, 0);
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_55);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_25);
lean_dec(x_23);
x_63 = lean_box(0);
x_64 = l_Cache_Requests_downloadFiles___lambda__4(x_17, x_1, x_2, x_11, x_10, x_8, x_9, x_63, x_24);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
x_65 = l_Cache_Requests_downloadFiles___lambda__5___closed__1;
x_66 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Message_0__Lean_fromJsonBaseMessage____x40_Lean_Message___hyg_3070____spec__1(x_23, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_66);
x_67 = lean_box(0);
x_68 = l_Cache_Requests_downloadFiles___lambda__6(x_25, x_11, x_10, x_8, x_9, x_67, x_24);
lean_dec(x_9);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_66, 0);
lean_inc(x_69);
lean_dec(x_66);
x_70 = l_System_FilePath_pathExists(x_69, x_24);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_69);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = lean_box(0);
x_75 = l_Cache_Requests_downloadFiles___lambda__6(x_25, x_11, x_10, x_8, x_9, x_74, x_73);
lean_dec(x_9);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
lean_dec(x_70);
x_77 = lean_string_utf8_byte_size(x_69);
lean_inc(x_77);
lean_inc(x_69);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_69);
lean_ctor_set(x_78, 1, x_13);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_nat_sub(x_77, x_13);
x_80 = l_Cache_Requests_downloadFiles___lambda__7___closed__5;
lean_inc(x_79);
x_81 = l_Substring_prevn(x_78, x_80, x_79);
x_82 = lean_nat_add(x_13, x_81);
lean_dec(x_81);
lean_inc(x_69);
x_83 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_83, 0, x_69);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_83, 2, x_77);
x_84 = l_Cache_Requests_downloadFiles___lambda__7___closed__7;
x_85 = l_Substring_beq(x_83, x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_69);
x_86 = lean_box(0);
x_87 = l_Cache_Requests_downloadFiles___lambda__6(x_25, x_11, x_10, x_8, x_9, x_86, x_76);
lean_dec(x_9);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_unsigned_to_nat(5u);
x_89 = l_Substring_prevn(x_78, x_88, x_79);
lean_dec(x_78);
x_90 = lean_nat_add(x_13, x_89);
lean_dec(x_89);
x_91 = lean_string_utf8_extract(x_69, x_13, x_90);
lean_dec(x_90);
x_92 = lean_io_rename(x_69, x_91, x_76);
lean_dec(x_91);
lean_dec(x_69);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Cache_Requests_downloadFiles___lambda__6(x_25, x_11, x_10, x_8, x_9, x_93, x_94);
lean_dec(x_93);
lean_dec(x_9);
return x_95;
}
else
{
uint8_t x_96; 
lean_dec(x_25);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_96 = !lean_is_exclusive(x_92);
if (x_96 == 0)
{
return x_92;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_92, 0);
x_98 = lean_ctor_get(x_92, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_92);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_22);
if (x_100 == 0)
{
return x_22;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_22, 0);
x_102 = lean_ctor_get(x_22, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_22);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_104 = lean_box(0);
x_105 = lean_apply_6(x_17, x_11, x_10, x_8, x_9, x_104, x_5);
return x_105;
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Warning: some files were not found in the cache.", 48, 48);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__9___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("This usually means that your local checkout of mathlib4 has diverged from upstream.", 83, 83);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__9___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("If you push your commits to a branch of the mathlib4 repository, CI will build the oleans and they will be available later.", 123, 123);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Cache_IO_CURLCFG;
x_8 = lean_io_remove_file(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_nat_add(x_3, x_2);
x_11 = lean_nat_dec_lt(x_10, x_4);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_apply_2(x_1, x_2, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Cache_Requests_downloadFiles___lambda__9___closed__1;
x_14 = l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Cache_Requests_downloadFiles___lambda__9___closed__2;
x_17 = l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(x_16, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Cache_Requests_downloadFiles___lambda__9___closed__3;
x_20 = l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(x_19, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_2(x_1, x_2, x_21);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_14);
if (x_31 == 0)
{
return x_14;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 0);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_14);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_8);
if (x_35 == 0)
{
return x_8;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_8, 0);
x_37 = lean_ctor_get(x_8, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_8);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_1, x_6, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No files to download", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Attempting to download ", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" file(s)", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_IO_CURLCFG;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--config", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__6;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("%{json}\n", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__8;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--write-out", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__10;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("5", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__12;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--retry", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__14;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFile___closed__3;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__15;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFile___closed__4;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--parallel", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__18;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GET", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__20;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--request", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__22;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__21;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__23;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__25;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("%] (", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_downloadFiles___lambda__11___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("% success)", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__11(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = l_Cache_Requests_downloadFiles___lambda__11___closed__1;
x_8 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_7, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_10 = l_IO_FS_createDirAll(x_9, x_3);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_4);
x_12 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_13 = l_Cache_Requests_downloadFiles___lambda__11___closed__2;
x_14 = lean_string_append(x_13, x_12);
x_15 = l_Cache_Requests_downloadFiles___lambda__11___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_16, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Cache_Requests_downloadFiles___lambda__11___closed__4;
if (x_1 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_4);
x_20 = lean_box(0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_array_get_size(x_21);
x_23 = lean_nat_dec_lt(x_5, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_21);
x_24 = l_List_foldl___at_Cache_Requests_downloadFiles___spec__2(x_5, x_20);
x_25 = lean_apply_2(x_19, x_24, x_18);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_22, x_22);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
lean_dec(x_21);
x_27 = l_List_foldl___at_Cache_Requests_downloadFiles___spec__2(x_5, x_20);
x_28 = lean_apply_2(x_19, x_27, x_18);
return x_28;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_31 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3(x_21, x_29, x_30, x_20, x_18);
lean_dec(x_21);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_List_foldl___at_Cache_Requests_downloadFiles___spec__2(x_5, x_32);
x_35 = lean_apply_2(x_19, x_34, x_33);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_Cache_Requests_mkGetConfigContent(x_2, x_18);
lean_dec(x_2);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Cache_IO_CURLCFG;
x_40 = l_IO_FS_writeFile(x_39, x_37, x_38);
lean_dec(x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_io_mono_ms_now(x_41);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_42, 1);
x_45 = l_Cache_Requests_downloadFiles___lambda__11___closed__26;
lean_ctor_set(x_42, 1, x_45);
lean_inc(x_4);
lean_inc(x_12);
x_46 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__7___boxed), 5, 2);
lean_closure_set(x_46, 0, x_12);
lean_closure_set(x_46, 1, x_4);
x_47 = l_Cache_Requests_downloadFiles___lambda__11___closed__24;
x_48 = l_Cache_IO_runCurlStreaming___rarg(x_47, x_42, x_46, x_44);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_51, 1);
lean_inc(x_55);
lean_dec(x_51);
lean_inc(x_55);
lean_inc(x_53);
lean_inc(x_54);
x_56 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__9___boxed), 6, 4);
lean_closure_set(x_56, 0, x_19);
lean_closure_set(x_56, 1, x_54);
lean_closure_set(x_56, 2, x_53);
lean_closure_set(x_56, 3, x_55);
x_57 = lean_nat_dec_lt(x_5, x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_56);
lean_dec(x_12);
lean_dec(x_4);
x_58 = lean_box(0);
x_59 = l_Cache_Requests_downloadFiles___lambda__9(x_19, x_54, x_53, x_55, x_58, x_52);
lean_dec(x_55);
lean_dec(x_53);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
lean_inc(x_53);
x_60 = l___private_Init_Data_Repr_0__Nat_reprFast(x_53);
x_61 = l_Cache_Requests_downloadFiles___lambda__4___closed__1;
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = l_Cache_Requests_downloadFiles___lambda__4___closed__2;
x_64 = lean_string_append(x_62, x_63);
lean_inc(x_55);
x_65 = l___private_Init_Data_Repr_0__Nat_reprFast(x_55);
x_66 = lean_string_append(x_64, x_65);
lean_dec(x_65);
x_67 = l_Cache_Requests_downloadFiles___lambda__4___closed__3;
x_68 = lean_string_append(x_66, x_67);
x_69 = lean_string_append(x_68, x_12);
lean_dec(x_12);
x_70 = l_Cache_Requests_downloadFiles___lambda__4___closed__4;
x_71 = lean_string_append(x_69, x_70);
x_72 = lean_unsigned_to_nat(100u);
x_73 = lean_nat_mul(x_72, x_55);
x_74 = lean_nat_div(x_73, x_4);
lean_dec(x_4);
lean_dec(x_73);
x_75 = l___private_Init_Data_Repr_0__Nat_reprFast(x_74);
x_76 = lean_string_append(x_71, x_75);
lean_dec(x_75);
x_77 = l_Cache_Requests_downloadFiles___lambda__11___closed__27;
x_78 = lean_string_append(x_76, x_77);
x_79 = lean_nat_mul(x_72, x_53);
lean_dec(x_53);
x_80 = lean_nat_div(x_79, x_55);
lean_dec(x_55);
lean_dec(x_79);
x_81 = l___private_Init_Data_Repr_0__Nat_reprFast(x_80);
x_82 = lean_string_append(x_78, x_81);
lean_dec(x_81);
x_83 = l_Cache_Requests_downloadFiles___lambda__11___closed__28;
x_84 = lean_string_append(x_82, x_83);
x_85 = lean_nat_dec_eq(x_54, x_5);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_86 = l___private_Init_Data_Repr_0__Nat_reprFast(x_54);
x_87 = l_Cache_Requests_downloadFiles___lambda__4___closed__6;
x_88 = lean_string_append(x_87, x_86);
lean_dec(x_86);
x_89 = l_Cache_Requests_downloadFiles___lambda__4___closed__7;
x_90 = lean_string_append(x_88, x_89);
x_91 = lean_string_append(x_84, x_90);
lean_dec(x_90);
x_92 = lean_box(0);
x_93 = l_Cache_Requests_downloadFiles___lambda__10(x_56, x_91, x_92, x_52);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_54);
x_94 = lean_box(0);
x_95 = l_Cache_Requests_downloadFiles___lambda__10(x_56, x_84, x_94, x_52);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_12);
lean_dec(x_4);
x_96 = !lean_is_exclusive(x_48);
if (x_96 == 0)
{
return x_48;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_48, 0);
x_98 = lean_ctor_get(x_48, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_48);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_100 = lean_ctor_get(x_42, 0);
x_101 = lean_ctor_get(x_42, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_42);
x_102 = l_Cache_Requests_downloadFiles___lambda__11___closed__26;
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_102);
lean_inc(x_4);
lean_inc(x_12);
x_104 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__7___boxed), 5, 2);
lean_closure_set(x_104, 0, x_12);
lean_closure_set(x_104, 1, x_4);
x_105 = l_Cache_Requests_downloadFiles___lambda__11___closed__24;
x_106 = l_Cache_IO_runCurlStreaming___rarg(x_105, x_103, x_104, x_101);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
lean_dec(x_106);
x_111 = lean_ctor_get(x_108, 0);
lean_inc(x_111);
lean_dec(x_108);
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
lean_dec(x_109);
lean_inc(x_113);
lean_inc(x_111);
lean_inc(x_112);
x_114 = lean_alloc_closure((void*)(l_Cache_Requests_downloadFiles___lambda__9___boxed), 6, 4);
lean_closure_set(x_114, 0, x_19);
lean_closure_set(x_114, 1, x_112);
lean_closure_set(x_114, 2, x_111);
lean_closure_set(x_114, 3, x_113);
x_115 = lean_nat_dec_lt(x_5, x_113);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_114);
lean_dec(x_12);
lean_dec(x_4);
x_116 = lean_box(0);
x_117 = l_Cache_Requests_downloadFiles___lambda__9(x_19, x_112, x_111, x_113, x_116, x_110);
lean_dec(x_113);
lean_dec(x_111);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_inc(x_111);
x_118 = l___private_Init_Data_Repr_0__Nat_reprFast(x_111);
x_119 = l_Cache_Requests_downloadFiles___lambda__4___closed__1;
x_120 = lean_string_append(x_119, x_118);
lean_dec(x_118);
x_121 = l_Cache_Requests_downloadFiles___lambda__4___closed__2;
x_122 = lean_string_append(x_120, x_121);
lean_inc(x_113);
x_123 = l___private_Init_Data_Repr_0__Nat_reprFast(x_113);
x_124 = lean_string_append(x_122, x_123);
lean_dec(x_123);
x_125 = l_Cache_Requests_downloadFiles___lambda__4___closed__3;
x_126 = lean_string_append(x_124, x_125);
x_127 = lean_string_append(x_126, x_12);
lean_dec(x_12);
x_128 = l_Cache_Requests_downloadFiles___lambda__4___closed__4;
x_129 = lean_string_append(x_127, x_128);
x_130 = lean_unsigned_to_nat(100u);
x_131 = lean_nat_mul(x_130, x_113);
x_132 = lean_nat_div(x_131, x_4);
lean_dec(x_4);
lean_dec(x_131);
x_133 = l___private_Init_Data_Repr_0__Nat_reprFast(x_132);
x_134 = lean_string_append(x_129, x_133);
lean_dec(x_133);
x_135 = l_Cache_Requests_downloadFiles___lambda__11___closed__27;
x_136 = lean_string_append(x_134, x_135);
x_137 = lean_nat_mul(x_130, x_111);
lean_dec(x_111);
x_138 = lean_nat_div(x_137, x_113);
lean_dec(x_113);
lean_dec(x_137);
x_139 = l___private_Init_Data_Repr_0__Nat_reprFast(x_138);
x_140 = lean_string_append(x_136, x_139);
lean_dec(x_139);
x_141 = l_Cache_Requests_downloadFiles___lambda__11___closed__28;
x_142 = lean_string_append(x_140, x_141);
x_143 = lean_nat_dec_eq(x_112, x_5);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_144 = l___private_Init_Data_Repr_0__Nat_reprFast(x_112);
x_145 = l_Cache_Requests_downloadFiles___lambda__4___closed__6;
x_146 = lean_string_append(x_145, x_144);
lean_dec(x_144);
x_147 = l_Cache_Requests_downloadFiles___lambda__4___closed__7;
x_148 = lean_string_append(x_146, x_147);
x_149 = lean_string_append(x_142, x_148);
lean_dec(x_148);
x_150 = lean_box(0);
x_151 = l_Cache_Requests_downloadFiles___lambda__10(x_114, x_149, x_150, x_110);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_112);
x_152 = lean_box(0);
x_153 = l_Cache_Requests_downloadFiles___lambda__10(x_114, x_142, x_152, x_110);
return x_153;
}
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_12);
lean_dec(x_4);
x_154 = lean_ctor_get(x_106, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_106, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_156 = x_106;
} else {
 lean_dec_ref(x_106);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_12);
lean_dec(x_4);
x_158 = !lean_is_exclusive(x_40);
if (x_158 == 0)
{
return x_40;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_40, 0);
x_160 = lean_ctor_get(x_40, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_40);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_17);
if (x_162 == 0)
{
return x_17;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_17, 0);
x_164 = lean_ctor_get(x_17, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_17);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_4);
lean_dec(x_2);
x_166 = !lean_is_exclusive(x_10);
if (x_166 == 0)
{
return x_10;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_10, 0);
x_168 = lean_ctor_get(x_10, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_10);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
if (x_2 == 0)
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = 0;
x_6 = l_Cache_IO_ModuleHashMap_filterExists(x_1, x_5, x_4);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Cache_Requests_downloadFiles___lambda__11(x_3, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_Cache_Requests_downloadFiles___lambda__11(x_3, x_1, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_downloadFiles___spec__3(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Cache_Requests_downloadFiles___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Cache_Requests_downloadFiles___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Cache_Requests_downloadFiles___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Cache_Requests_downloadFiles___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Cache_Requests_downloadFiles___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Cache_Requests_downloadFiles___lambda__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Cache_Requests_downloadFiles___lambda__8(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Cache_Requests_downloadFiles___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Cache_Requests_downloadFiles___lambda__10(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___lambda__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Cache_Requests_downloadFiles___lambda__11(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_downloadFiles___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Cache_Requests_downloadFiles(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 1;
x_6 = lean_io_exit(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_3(x_1, x_7, x_3, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lean-toolchain", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cache_Requests_checkForToolchainMismatch___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Dependency Mathlib uses a different lean-toolchain", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  Project uses ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  Mathlib uses ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nThe cache will not work unless your project's toolchain matches Mathlib's toolchain", 84, 84);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("This can be achieved by copying the contents of the file `", 58, 58);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`\ninto the `lean-toolchain` file at the root directory of your project", 70, 70);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("You can use `cp ", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ./lean-toolchain`", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("On powershell you can use `cp ", 30, 30);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("On Windows CMD you can use `copy ", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_checkForToolchainMismatch___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" lean-toolchain`", 16, 16);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Cache_Requests_checkForToolchainMismatch___closed__1;
x_5 = l_System_FilePath_join(x_3, x_4);
x_6 = l_IO_FS_readFile(x_4, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_FS_readFile(x_5, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Cache_Requests_checkForToolchainMismatch___closed__2;
x_13 = lean_string_utf8_byte_size(x_10);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_10, x_13, x_14);
x_16 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_10, x_15, x_13);
x_17 = lean_string_utf8_extract(x_10, x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
x_18 = lean_string_utf8_byte_size(x_7);
x_19 = l_Substring_takeWhileAux___at_Substring_trimLeft___spec__1(x_7, x_18, x_14);
x_20 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_7, x_19, x_18);
x_21 = lean_string_utf8_extract(x_7, x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_7);
x_22 = lean_string_dec_eq(x_17, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Cache_Requests_checkForToolchainMismatch___closed__3;
x_24 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_23, x_11);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Cache_Requests_checkForToolchainMismatch___closed__4;
x_27 = lean_string_append(x_26, x_21);
lean_dec(x_21);
x_28 = l_Cache_Requests_mkFileURL___closed__1;
x_29 = lean_string_append(x_27, x_28);
x_30 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_29, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Cache_Requests_checkForToolchainMismatch___closed__5;
x_33 = lean_string_append(x_32, x_17);
lean_dec(x_17);
x_34 = lean_string_append(x_33, x_28);
x_35 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_34, x_31);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Cache_Requests_checkForToolchainMismatch___closed__6;
x_38 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_37, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Cache_Requests_checkForToolchainMismatch___closed__7;
x_41 = lean_string_append(x_40, x_5);
x_42 = l_Cache_Requests_checkForToolchainMismatch___closed__8;
x_43 = lean_string_append(x_41, x_42);
x_44 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_43, x_39);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_System_Platform_isWindows;
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = l_Cache_Requests_checkForToolchainMismatch___closed__9;
x_48 = lean_string_append(x_47, x_5);
lean_dec(x_5);
x_49 = l_Cache_Requests_checkForToolchainMismatch___closed__10;
x_50 = lean_string_append(x_48, x_49);
x_51 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_50, x_45);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Cache_Requests_checkForToolchainMismatch___lambda__2(x_12, x_52, x_1, x_53);
lean_dec(x_52);
return x_54;
}
else
{
uint8_t x_55; 
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_51);
if (x_55 == 0)
{
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_51, 0);
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_51);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = l_Cache_Requests_checkForToolchainMismatch___closed__11;
x_60 = lean_string_append(x_59, x_5);
x_61 = l_Cache_Requests_checkForToolchainMismatch___closed__10;
x_62 = lean_string_append(x_60, x_61);
x_63 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_62, x_45);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = l_Cache_Requests_checkForToolchainMismatch___closed__12;
x_66 = lean_string_append(x_65, x_5);
lean_dec(x_5);
x_67 = l_Cache_Requests_checkForToolchainMismatch___closed__13;
x_68 = lean_string_append(x_66, x_67);
x_69 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_68, x_64);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Cache_Requests_checkForToolchainMismatch___lambda__2(x_12, x_70, x_1, x_71);
lean_dec(x_70);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_69);
if (x_73 == 0)
{
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 0);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_69);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_5);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_63);
if (x_77 == 0)
{
return x_63;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_63, 0);
x_79 = lean_ctor_get(x_63, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_63);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_5);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_44);
if (x_81 == 0)
{
return x_44;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_44, 0);
x_83 = lean_ctor_get(x_44, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_44);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_5);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_38);
if (x_85 == 0)
{
return x_38;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_38, 0);
x_87 = lean_ctor_get(x_38, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_38);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_5);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_35);
if (x_89 == 0)
{
return x_35;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_35, 0);
x_91 = lean_ctor_get(x_35, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_35);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_30);
if (x_93 == 0)
{
return x_30;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_30, 0);
x_95 = lean_ctor_get(x_30, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_30);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_24);
if (x_97 == 0)
{
return x_24;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_24, 0);
x_99 = lean_ctor_get(x_24, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_24);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_5);
x_101 = lean_box(0);
x_102 = lean_apply_3(x_12, x_101, x_1, x_11);
return x_102;
}
}
else
{
uint8_t x_103; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_9);
if (x_103 == 0)
{
return x_9;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_9, 0);
x_105 = lean_ctor_get(x_9, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_9);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_5);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_6);
if (x_107 == 0)
{
return x_6;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_6, 0);
x_109 = lean_ctor_get(x_6, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_6);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_checkForToolchainMismatch___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_checkForToolchainMismatch___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Cache_Requests_checkForToolchainMismatch___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lib", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ir", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to prune ProofWidgets cloud release: ", 44, 44);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Cache_Requests_getProofWidgets___lambda__1___closed__1;
lean_inc(x_1);
x_5 = l_System_FilePath_join(x_1, x_4);
x_6 = l_IO_FS_removeDirAll(x_5, x_3);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Cache_Requests_getProofWidgets___lambda__1___closed__2;
x_9 = l_System_FilePath_join(x_1, x_8);
x_10 = l_IO_FS_removeDirAll(x_9, x_7);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_io_error_to_string(x_12);
x_14 = l_Cache_Requests_getProofWidgets___lambda__1___closed__3;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Cache_Requests_mkFileURL___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_10, 0, x_18);
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_io_error_to_string(x_19);
x_22 = l_Cache_Requests_getProofWidgets___lambda__1___closed__3;
x_23 = lean_string_append(x_22, x_21);
lean_dec(x_21);
x_24 = l_Cache_Requests_mkFileURL___closed__1;
x_25 = lean_string_append(x_23, x_24);
x_26 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_20);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_6);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_6, 0);
x_30 = lean_io_error_to_string(x_29);
x_31 = l_Cache_Requests_getProofWidgets___lambda__1___closed__3;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_Cache_Requests_mkFileURL___closed__1;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_6, 0, x_35);
return x_6;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_36 = lean_ctor_get(x_6, 0);
x_37 = lean_ctor_get(x_6, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_6);
x_38 = lean_io_error_to_string(x_36);
x_39 = l_Cache_Requests_getProofWidgets___lambda__1___closed__3;
x_40 = lean_string_append(x_39, x_38);
lean_dec(x_38);
x_41 = l_Cache_Requests_mkFileURL___closed__1;
x_42 = lean_string_append(x_40, x_41);
x_43 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_37);
return x_44;
}
}
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("proofwidgets:release", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_getProofWidgets___lambda__2___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("build", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getProofWidgets___lambda__2___closed__3;
x_2 = l_Cache_Requests_getProofWidgets___lambda__2___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-q", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getProofWidgets___lambda__2___closed__5;
x_2 = l_Cache_Requests_getProofWidgets___lambda__2___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getProofWidgets___lambda__2___closed__6;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lake", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_downloadFile___closed__1;
x_3 = l_Cache_Requests_getProofWidgets___lambda__2___closed__8;
x_4 = l_Cache_Requests_getProofWidgets___lambda__2___closed__7;
x_5 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to fetch ProofWidgets cloud release: lake failed with error code ", 72, 72);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Cache_Requests_getProofWidgets___lambda__2___closed__9;
x_5 = lean_io_process_spawn(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Cache_Requests_downloadFile___closed__1;
x_9 = lean_io_process_child_wait(x_8, x_6, x_7);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint32_t x_13; uint32_t x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = 0;
x_14 = lean_unbox_uint32(x_11);
x_15 = lean_uint32_dec_eq(x_14, x_13);
if (x_15 == 0)
{
uint32_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_16 = lean_unbox_uint32(x_11);
lean_dec(x_11);
x_17 = lean_uint32_to_nat(x_16);
x_18 = l___private_Init_Data_Repr_0__Nat_reprFast(x_17);
x_19 = l_Cache_Requests_getProofWidgets___lambda__2___closed__10;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_Cache_Requests_mkFileURL___closed__1;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_23);
return x_9;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_free_object(x_9);
lean_dec(x_11);
x_24 = lean_box(0);
x_25 = l_Cache_Requests_getProofWidgets___lambda__1(x_1, x_24, x_12);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint32_t x_28; uint32_t x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_9, 0);
x_27 = lean_ctor_get(x_9, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_9);
x_28 = 0;
x_29 = lean_unbox_uint32(x_26);
x_30 = lean_uint32_dec_eq(x_29, x_28);
if (x_30 == 0)
{
uint32_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_1);
x_31 = lean_unbox_uint32(x_26);
lean_dec(x_26);
x_32 = lean_uint32_to_nat(x_31);
x_33 = l___private_Init_Data_Repr_0__Nat_reprFast(x_32);
x_34 = l_Cache_Requests_getProofWidgets___lambda__2___closed__10;
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = l_Cache_Requests_mkFileURL___closed__1;
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_27);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_26);
x_40 = lean_box(0);
x_41 = l_Cache_Requests_getProofWidgets___lambda__1(x_1, x_40, x_27);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_9);
if (x_42 == 0)
{
return x_9;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_9, 0);
x_44 = lean_ctor_get(x_9, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_9);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_5);
if (x_46 == 0)
{
return x_5;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_5, 0);
x_48 = lean_ctor_get(x_5, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_5);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--no-build", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getProofWidgets___closed__1;
x_2 = l_Cache_Requests_getProofWidgets___lambda__2___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getProofWidgets___lambda__2___closed__3;
x_2 = l_Cache_Requests_getProofWidgets___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getProofWidgets___lambda__2___closed__5;
x_2 = l_Cache_Requests_getProofWidgets___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getProofWidgets___closed__4;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_downloadFile___closed__1;
x_3 = l_Cache_Requests_getProofWidgets___lambda__2___closed__8;
x_4 = l_Cache_Requests_getProofWidgets___closed__5;
x_5 = l_Cache_Requests_mkGetConfigContent___closed__1;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
static lean_object* _init_l_Cache_Requests_getProofWidgets___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to validate ProofWidgets cloud release: lake failed with error code ", 75, 75);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_System_FilePath_pathExists(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = l_Cache_Requests_getProofWidgets___lambda__2(x_1, x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Cache_Requests_getProofWidgets___closed__6;
x_11 = lean_io_process_spawn(x_10, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Cache_Requests_downloadFile___closed__1;
x_15 = lean_io_process_child_wait(x_14, x_12, x_13);
lean_dec(x_12);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint32_t x_19; uint32_t x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = 0;
x_20 = lean_unbox_uint32(x_17);
x_21 = lean_uint32_dec_eq(x_20, x_19);
if (x_21 == 0)
{
uint32_t x_22; uint32_t x_23; uint8_t x_24; 
x_22 = 3;
x_23 = lean_unbox_uint32(x_17);
x_24 = lean_uint32_dec_eq(x_23, x_22);
if (x_24 == 0)
{
uint32_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_25 = lean_unbox_uint32(x_17);
lean_dec(x_17);
x_26 = lean_uint32_to_nat(x_25);
x_27 = l___private_Init_Data_Repr_0__Nat_reprFast(x_26);
x_28 = l_Cache_Requests_getProofWidgets___closed__7;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_Cache_Requests_mkFileURL___closed__1;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_32);
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_free_object(x_15);
lean_dec(x_17);
x_33 = lean_box(0);
x_34 = l_Cache_Requests_getProofWidgets___lambda__2(x_1, x_33, x_18);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_17);
lean_dec(x_1);
x_35 = lean_box(0);
lean_ctor_set(x_15, 0, x_35);
return x_15;
}
}
else
{
lean_object* x_36; lean_object* x_37; uint32_t x_38; uint32_t x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = 0;
x_39 = lean_unbox_uint32(x_36);
x_40 = lean_uint32_dec_eq(x_39, x_38);
if (x_40 == 0)
{
uint32_t x_41; uint32_t x_42; uint8_t x_43; 
x_41 = 3;
x_42 = lean_unbox_uint32(x_36);
x_43 = lean_uint32_dec_eq(x_42, x_41);
if (x_43 == 0)
{
uint32_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_44 = lean_unbox_uint32(x_36);
lean_dec(x_36);
x_45 = lean_uint32_to_nat(x_44);
x_46 = l___private_Init_Data_Repr_0__Nat_reprFast(x_45);
x_47 = l_Cache_Requests_getProofWidgets___closed__7;
x_48 = lean_string_append(x_47, x_46);
lean_dec(x_46);
x_49 = l_Cache_Requests_mkFileURL___closed__1;
x_50 = lean_string_append(x_48, x_49);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_37);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_36);
x_53 = lean_box(0);
x_54 = l_Cache_Requests_getProofWidgets___lambda__2(x_1, x_53, x_37);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_36);
lean_dec(x_1);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_37);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_15);
if (x_57 == 0)
{
return x_15;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_15, 0);
x_59 = lean_ctor_get(x_15, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_15);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_11);
if (x_61 == 0)
{
return x_11;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_11, 0);
x_63 = lean_ctor_get(x_11, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_11);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_getProofWidgets___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getProofWidgets___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_getProofWidgets___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Cache_Requests_getFiles___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Downloaded all files successfully!", 34, 34);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
x_10 = l_Cache_Requests_getProofWidgets(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_1);
x_12 = l_Cache_Requests_downloadFiles(x_1, x_2, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
if (x_4 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Cache_Requests_getFiles___lambda__1___closed__1;
x_15 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_14, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = l_Cache_IO_unpackCache(x_1, x_5, x_7, x_16);
lean_dec(x_1);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_7);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Cache_IO_isMathlibRoot(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_6);
x_12 = l_Cache_Requests_checkForToolchainMismatch(x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Cache_Requests_getFiles___lambda__1(x_1, x_2, x_4, x_5, x_3, x_13, x_6, x_14);
lean_dec(x_13);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_dec(x_8);
x_21 = lean_box(0);
x_22 = l_Cache_Requests_getFiles___lambda__1(x_1, x_2, x_4, x_5, x_3, x_21, x_6, x_20);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = l_Cache_Requests_getFiles___lambda__1(x_1, x_9, x_10, x_11, x_12, x_6, x_7, x_8);
lean_dec(x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFiles___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Cache_Requests_getFiles(x_1, x_8, x_9, x_10, x_11, x_6, x_7);
return x_12;
}
}
static lean_object* _init_l_Cache_Requests_UPLOAD__URL___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://a09a7664adc082e00f294ac190827820.r2.cloudflarestorage.com/mathlib4", 74, 74);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_UPLOAD__URL___closed__2() {
_start:
{
uint8_t x_1; 
x_1 = l_Cache_Requests_useFROCache;
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_Cache_Requests_URL;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_Cache_Requests_UPLOAD__URL___closed__1;
return x_3;
}
}
}
static lean_object* _init_l_Cache_Requests_UPLOAD__URL() {
_start:
{
lean_object* x_1; 
x_1 = l_Cache_Requests_UPLOAD__URL___closed__2;
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-T ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nurl = ", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_List_reverse___rarg(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_11 = l_System_FilePath_join(x_10, x_8);
x_12 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_Cache_Requests_UPLOAD__URL;
x_17 = l_Cache_Requests_mkFileURL(x_16, x_8);
lean_dec(x_8);
x_18 = lean_string_append(x_15, x_17);
lean_dec(x_17);
x_19 = l_Cache_Requests_mkFileURL___closed__1;
x_20 = lean_string_append(x_18, x_19);
x_21 = lean_string_append(x_20, x_1);
x_22 = lean_string_append(x_21, x_19);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_22);
{
lean_object* _tmp_1 = x_9;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_24 = lean_ctor_get(x_2, 0);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_2);
x_26 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_27 = l_System_FilePath_join(x_26, x_24);
x_28 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2;
x_31 = lean_string_append(x_29, x_30);
x_32 = l_Cache_Requests_UPLOAD__URL;
x_33 = l_Cache_Requests_mkFileURL(x_32, x_24);
lean_dec(x_24);
x_34 = lean_string_append(x_31, x_33);
lean_dec(x_33);
x_35 = l_Cache_Requests_mkFileURL___closed__1;
x_36 = lean_string_append(x_34, x_35);
x_37 = lean_string_append(x_36, x_1);
x_38 = lean_string_append(x_37, x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
x_2 = x_25;
x_3 = x_39;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_reverse___rarg(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_10 = l_System_FilePath_join(x_9, x_7);
x_11 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Cache_Requests_UPLOAD__URL;
x_16 = l_Cache_Requests_mkFileURL(x_15, x_7);
lean_dec(x_7);
x_17 = lean_string_append(x_14, x_16);
lean_dec(x_16);
x_18 = l_Cache_Requests_mkFileURL___closed__1;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_string_append(x_19, x_18);
x_21 = lean_string_append(x_20, x_18);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_21);
{
lean_object* _tmp_0 = x_8;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_26 = l_System_FilePath_join(x_25, x_23);
x_27 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2;
x_30 = lean_string_append(x_28, x_29);
x_31 = l_Cache_Requests_UPLOAD__URL;
x_32 = l_Cache_Requests_mkFileURL(x_31, x_23);
lean_dec(x_23);
x_33 = lean_string_append(x_30, x_32);
lean_dec(x_32);
x_34 = l_Cache_Requests_mkFileURL___closed__1;
x_35 = lean_string_append(x_33, x_34);
x_36 = lean_string_append(x_35, x_34);
x_37 = lean_string_append(x_36, x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_2);
x_1 = x_24;
x_2 = x_38;
goto _start;
}
}
}
}
static lean_object* _init_l_Cache_Requests_mkPutConfigContent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\?", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkPutConfigContent(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_to_list(x_1);
x_5 = lean_box(0);
x_6 = l_Cache_Requests_useFROCache;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = l_Cache_Requests_mkPutConfigContent___closed__1;
x_8 = lean_string_append(x_7, x_2);
x_9 = l_Cache_Requests_mkFileURL___closed__1;
x_10 = lean_string_append(x_8, x_9);
x_11 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1(x_10, x_4, x_5, x_3);
lean_dec(x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_15 = l_String_intercalate(x_14, x_13);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_19 = l_String_intercalate(x_18, x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__2(x_4, x_5, x_3);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_25 = l_String_intercalate(x_24, x_23);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_29 = l_String_intercalate(x_28, x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_mkPutConfigContent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_mkPutConfigContent(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No files to upload", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Attempting to upload ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-K", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__3;
x_2 = l_Cache_Requests_downloadFiles___lambda__11___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__18;
x_2 = l_Cache_Requests_putFiles___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PUT", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__6;
x_2 = l_Cache_Requests_putFiles___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-X", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__8;
x_2 = l_Cache_Requests_putFiles___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__12;
x_2 = l_Cache_Requests_putFiles___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_downloadFiles___lambda__11___closed__14;
x_2 = l_Cache_Requests_putFiles___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_putFiles___closed__11;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("If-None-Match: *", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_putFiles___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-H", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__15;
x_2 = l_Cache_Requests_putFiles___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("x-ms-blob-type: BlockBlob", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__17;
x_2 = l_Cache_Requests_putFiles___closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__15;
x_2 = l_Cache_Requests_putFiles___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_putFiles___closed__19;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__20;
x_2 = l_Cache_Requests_putFiles___closed__12;
x_3 = l_Array_append___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_putFiles___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__15;
x_2 = l_Cache_Requests_putFiles___closed__22;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_putFiles___closed__23;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__24;
x_2 = l_Cache_Requests_putFiles___closed__12;
x_3 = l_Array_append___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--user", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("aws:amz:auto:s3", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_putFiles___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--aws-sigv4", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_putFiles(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_Cache_Requests_putFiles___closed__1;
x_9 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_8, x_4);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Cache_Requests_mkPutConfigContent(x_1, x_3, x_4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Cache_IO_CURLCFG;
x_15 = l_IO_FS_writeFile(x_14, x_12, x_13);
lean_dec(x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l___private_Init_Data_Repr_0__Nat_reprFast(x_5);
x_18 = l_Cache_Requests_putFiles___closed__2;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_Cache_Requests_downloadFiles___lambda__11___closed__3;
x_21 = lean_string_append(x_19, x_20);
x_22 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_21, x_16);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Cache_Requests_useFROCache;
if (x_24 == 0)
{
lean_free_object(x_10);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; 
x_25 = l_Cache_Requests_putFiles___closed__21;
x_26 = 1;
x_27 = 0;
x_28 = l_Cache_IO_runCurl(x_25, x_26, x_27, x_23);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_io_remove_file(x_14, x_29);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; uint8_t x_36; uint8_t x_37; lean_object* x_38; 
x_35 = l_Cache_Requests_putFiles___closed__25;
x_36 = 1;
x_37 = 0;
x_38 = l_Cache_IO_runCurl(x_35, x_36, x_37, x_23);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_io_remove_file(x_14, x_39);
return x_40;
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; 
x_45 = lean_box(0);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_45);
lean_ctor_set(x_10, 0, x_3);
x_46 = l_Cache_Requests_putFiles___closed__26;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_10);
x_48 = l_Cache_Requests_putFiles___closed__27;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Cache_Requests_putFiles___closed__28;
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_array_mk(x_51);
x_53 = l_Cache_Requests_putFiles___closed__12;
x_54 = l_Array_append___rarg(x_52, x_53);
x_55 = 1;
x_56 = 0;
x_57 = l_Cache_IO_runCurl(x_54, x_55, x_56, x_23);
lean_dec(x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_io_remove_file(x_14, x_58);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_57);
if (x_60 == 0)
{
return x_57;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_57, 0);
x_62 = lean_ctor_get(x_57, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_57);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
else
{
uint8_t x_64; 
lean_free_object(x_10);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_22);
if (x_64 == 0)
{
return x_22;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_22, 0);
x_66 = lean_ctor_get(x_22, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_22);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_free_object(x_10);
lean_dec(x_5);
lean_dec(x_3);
x_68 = !lean_is_exclusive(x_15);
if (x_68 == 0)
{
return x_15;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_15, 0);
x_70 = lean_ctor_get(x_15, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_15);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_10, 0);
x_73 = lean_ctor_get(x_10, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_10);
x_74 = l_Cache_IO_CURLCFG;
x_75 = l_IO_FS_writeFile(x_74, x_72, x_73);
lean_dec(x_72);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l___private_Init_Data_Repr_0__Nat_reprFast(x_5);
x_78 = l_Cache_Requests_putFiles___closed__2;
x_79 = lean_string_append(x_78, x_77);
lean_dec(x_77);
x_80 = l_Cache_Requests_downloadFiles___lambda__11___closed__3;
x_81 = lean_string_append(x_79, x_80);
x_82 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_81, x_76);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l_Cache_Requests_useFROCache;
if (x_84 == 0)
{
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_85; uint8_t x_86; uint8_t x_87; lean_object* x_88; 
x_85 = l_Cache_Requests_putFiles___closed__21;
x_86 = 1;
x_87 = 0;
x_88 = l_Cache_IO_runCurl(x_85, x_86, x_87, x_83);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_io_remove_file(x_74, x_89);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_88, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_93 = x_88;
} else {
 lean_dec_ref(x_88);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; uint8_t x_96; uint8_t x_97; lean_object* x_98; 
x_95 = l_Cache_Requests_putFiles___closed__25;
x_96 = 1;
x_97 = 0;
x_98 = l_Cache_IO_runCurl(x_95, x_96, x_97, x_83);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_io_remove_file(x_74, x_99);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_98, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_103 = x_98;
} else {
 lean_dec_ref(x_98);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; uint8_t x_117; lean_object* x_118; 
x_105 = lean_box(0);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_3);
lean_ctor_set(x_106, 1, x_105);
x_107 = l_Cache_Requests_putFiles___closed__26;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = l_Cache_Requests_putFiles___closed__27;
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_111 = l_Cache_Requests_putFiles___closed__28;
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_array_mk(x_112);
x_114 = l_Cache_Requests_putFiles___closed__12;
x_115 = l_Array_append___rarg(x_113, x_114);
x_116 = 1;
x_117 = 0;
x_118 = l_Cache_IO_runCurl(x_115, x_116, x_117, x_83);
lean_dec(x_115);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_120 = lean_io_remove_file(x_74, x_119);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_118, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_118, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_123 = x_118;
} else {
 lean_dec_ref(x_118);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_3);
x_125 = lean_ctor_get(x_82, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_82, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_127 = x_82;
} else {
 lean_dec_ref(x_82);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_5);
lean_dec(x_3);
x_129 = lean_ctor_get(x_75, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_75, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_131 = x_75;
} else {
 lean_dec_ref(x_75);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_putFiles___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Cache_Requests_putFiles(x_1, x_5, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--porcelain", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_isGitStatusClean___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("status", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_isGitStatusClean___closed__3;
x_2 = l_Cache_Requests_isGitStatusClean___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_isGitStatusClean___closed__4;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_isGitStatusClean___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("git", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_isGitStatusClean(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = l_Cache_Requests_isGitStatusClean___closed__6;
x_3 = l_Cache_Requests_isGitStatusClean___closed__5;
x_4 = 1;
x_5 = l_Cache_IO_runCmd(x_2, x_3, x_4, x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_string_utf8_byte_size(x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = lean_string_utf8_byte_size(x_12);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_5);
if (x_19 == 0)
{
return x_5;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
static lean_object* _init_l_Cache_Requests_getGitCommitHash___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HEAD", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getGitCommitHash___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Cache_Requests_getGitCommitHash___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getGitCommitHash___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rev-parse", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getGitCommitHash___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_getGitCommitHash___closed__3;
x_2 = l_Cache_Requests_getGitCommitHash___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getGitCommitHash___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getGitCommitHash___closed__4;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getGitCommitHash(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = l_Cache_Requests_isGitStatusClean___closed__6;
x_3 = l_Cache_Requests_getGitCommitHash___closed__5;
x_4 = 1;
x_5 = l_Cache_IO_runCmd(x_2, x_3, x_4, x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_string_utf8_byte_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_7, x_9, x_8);
x_11 = lean_string_utf8_extract(x_7, x_9, x_10);
lean_dec(x_10);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = lean_string_utf8_byte_size(x_12);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Substring_takeRightWhileAux___at_Substring_trimRight___spec__1(x_12, x_15, x_14);
x_17 = lean_string_utf8_extract(x_12, x_15, x_16);
lean_dec(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_5);
if (x_19 == 0)
{
return x_5;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2(x_1, x_5);
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_1 = x_7;
x_2 = x_3;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Cache_Requests_commit___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_8 = lean_uint64_to_nat(x_7);
x_9 = l___private_Init_Data_Repr_0__Nat_reprFast(x_8);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_9);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = lean_unbox_uint64(x_11);
lean_dec(x_11);
x_14 = lean_uint64_to_nat(x_13);
x_15 = l___private_Init_Data_Repr_0__Nat_reprFast(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_2);
x_1 = x_12;
x_2 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_commit___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_remove_file(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_mkFileURL___closed__1;
x_2 = l_Cache_Requests_URL;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("/c/", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_commit___closed__1;
x_2 = l_Cache_Requests_commit___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-T", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__6;
x_2 = l_Cache_Requests_putFiles___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__8;
x_2 = l_Cache_Requests_commit___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_commit___closed__6;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__6;
x_2 = l_Cache_Requests_putFiles___closed__23;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_putFiles___closed__8;
x_2 = l_Cache_Requests_commit___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_commit___closed__9;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_mkFileURL___closed__1;
x_2 = l_Cache_Requests_UPLOAD__URL;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_commit___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_commit___closed__11;
x_2 = l_Cache_Requests_commit___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_commit(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Cache_Requests_getGitCommitHash(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4;
x_9 = l_System_FilePath_join(x_8, x_6);
x_10 = l_IO_FS_createDirAll(x_8, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Cache_IO_ModuleHashMap_hashes(x_1);
x_13 = l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1(x_12);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = l_List_mapTR_loop___at_Cache_Requests_commit___spec__3(x_13, x_14);
x_16 = l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5;
x_17 = l_String_intercalate(x_16, x_15);
x_18 = lean_string_append(x_17, x_16);
x_19 = l_IO_FS_writeFile(x_9, x_18, x_11);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Cache_Requests_useFROCache;
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = l_Cache_Requests_commit___closed__3;
x_23 = lean_string_append(x_22, x_6);
lean_dec(x_6);
x_24 = l_Cache_Requests_mkPutConfigContent___closed__1;
x_25 = lean_string_append(x_23, x_24);
x_26 = lean_string_append(x_25, x_3);
lean_dec(x_3);
x_27 = l_Cache_Requests_mkFileURL___closed__1;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_14);
lean_inc(x_9);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_9);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Cache_Requests_commit___closed__4;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_mk(x_32);
if (x_2 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_34 = l_Cache_Requests_commit___closed__7;
x_35 = l_Array_append___rarg(x_34, x_33);
lean_dec(x_33);
x_36 = 1;
x_37 = l_Cache_IO_runCurl(x_35, x_36, x_36, x_20);
lean_dec(x_35);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_io_remove_file(x_9, x_38);
lean_dec(x_9);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_9);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_44 = l_Cache_Requests_commit___closed__10;
x_45 = l_Array_append___rarg(x_44, x_33);
lean_dec(x_33);
x_46 = 1;
x_47 = l_Cache_IO_runCurl(x_45, x_46, x_46, x_20);
lean_dec(x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_io_remove_file(x_9, x_48);
lean_dec(x_9);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_9);
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 0);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_47);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_54 = l_Cache_Requests_commit___closed__12;
x_55 = lean_string_append(x_54, x_6);
lean_dec(x_6);
x_56 = l_Cache_Requests_mkFileURL___closed__1;
x_57 = lean_string_append(x_55, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_14);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_3);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Cache_Requests_putFiles___closed__26;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = l_Cache_Requests_putFiles___closed__27;
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Cache_Requests_putFiles___closed__28;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
lean_inc(x_9);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_9);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Cache_Requests_commit___closed__4;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = lean_array_mk(x_68);
x_70 = 1;
x_71 = l_Cache_IO_runCurl(x_69, x_70, x_70, x_20);
lean_dec(x_69);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_io_remove_file(x_9, x_72);
lean_dec(x_9);
return x_73;
}
else
{
uint8_t x_74; 
lean_dec(x_9);
x_74 = !lean_is_exclusive(x_71);
if (x_74 == 0)
{
return x_71;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_71, 0);
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_71);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_19);
if (x_78 == 0)
{
return x_19;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_19, 0);
x_80 = lean_ctor_get(x_19, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_19);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_82 = !lean_is_exclusive(x_10);
if (x_82 == 0)
{
return x_10;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_10, 0);
x_84 = lean_ctor_get(x_10, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_10);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_3);
x_86 = !lean_is_exclusive(x_5);
if (x_86 == 0)
{
return x_5;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_5, 0);
x_88 = lean_ctor_get(x_5, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_5);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_revFold___at_Cache_Requests_commit___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_RBTree_toList___at_Cache_Requests_commit___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_commit___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_commit___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_commit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Cache_Requests_commit(x_1, x_5, x_3, x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_toCtorIdx(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Cache_Requests_QueryType_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_noConfusion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Cache_Requests_QueryType_noConfusion___rarg___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cache_Requests_QueryType_noConfusion___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Cache_Requests_QueryType_noConfusion___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_noConfusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Cache_Requests_QueryType_noConfusion___rarg(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_prefix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("&prefix=f/", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_prefix___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("&prefix=c/", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_prefix(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_Cache_Requests_QueryType_prefix___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Cache_Requests_QueryType_prefix___closed__2;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l_Cache_Requests_mkFileURL___closed__1;
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_prefix___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Cache_Requests_QueryType_prefix(x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_formatError___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid format for curl return", 30, 30);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_formatError___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_formatError___rarg___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_formatError___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Cache_Requests_formatError___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_formatError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Cache_Requests_formatError___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_desc___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hosted files", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_desc___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hosted commits", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_QueryType_desc___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("everything", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_desc(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_Cache_Requests_QueryType_desc___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Cache_Requests_QueryType_desc___closed__2;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l_Cache_Requests_QueryType_desc___closed__3;
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_QueryType_desc___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Cache_Requests_QueryType_desc(x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<Last-Modified>", 15, 15);
return x_1;
}
}
static uint8_t _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1;
x_2 = l_Cache_Requests_mkFileURL___closed__1;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("</Last-Modified>", 16, 16);
return x_1;
}
}
static uint8_t _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3;
x_2 = l_Cache_Requests_mkFileURL___closed__1;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("</Name>", 7, 7);
return x_1;
}
}
static uint8_t _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5;
x_2 = l_Cache_Requests_mkFileURL___closed__1;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_20; lean_object* x_21; uint8_t x_60; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_9 = x_2;
} else {
 lean_dec_ref(x_2);
 x_9 = lean_box(0);
}
x_60 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__6;
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5;
x_62 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_63 = l_String_splitOnAux(x_7, x_61, x_62, x_62, x_62, x_1);
lean_dec(x_7);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_64;
goto block_19;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_20 = x_65;
x_21 = x_66;
goto block_59;
}
}
else
{
lean_inc(x_1);
x_20 = x_7;
x_21 = x_1;
goto block_59;
}
block_19:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
if (lean_is_scalar(x_9)) {
 x_13 = lean_alloc_ctor(1, 2, 0);
} else {
 x_13 = x_9;
}
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_8;
x_3 = x_13;
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
block_59:
{
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_dec(x_20);
x_22 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_22;
goto block_19;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__2;
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1;
x_27 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_28 = l_String_splitOnAux(x_24, x_26, x_27, x_27, x_27, x_1);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_20);
x_29 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_29;
goto block_19;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
lean_dec(x_20);
x_31 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_31;
goto block_19;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec(x_30);
x_34 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__4;
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3;
lean_inc(x_1);
x_36 = l_String_splitOnAux(x_33, x_35, x_27, x_27, x_27, x_1);
lean_dec(x_33);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
lean_dec(x_20);
x_37 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_37;
goto block_19;
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
lean_dec(x_36);
lean_dec(x_20);
x_39 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_39;
goto block_19;
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
x_42 = lean_ctor_get(x_38, 0);
lean_dec(x_42);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_dec(x_45);
lean_ctor_set_tag(x_38, 0);
lean_ctor_set(x_38, 1, x_44);
lean_ctor_set(x_38, 0, x_20);
lean_ctor_set_tag(x_36, 0);
lean_ctor_set(x_36, 1, x_4);
lean_ctor_set(x_36, 0, x_38);
x_10 = x_36;
goto block_19;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_36, 0);
lean_inc(x_46);
lean_dec(x_36);
lean_ctor_set_tag(x_38, 0);
lean_ctor_set(x_38, 1, x_46);
lean_ctor_set(x_38, 0, x_20);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_38);
lean_ctor_set(x_47, 1, x_4);
x_10 = x_47;
goto block_19;
}
}
else
{
lean_object* x_48; 
lean_free_object(x_38);
lean_dec(x_41);
lean_dec(x_36);
lean_dec(x_20);
x_48 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_48;
goto block_19;
}
}
else
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_dec(x_38);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_36, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_51 = x_36;
} else {
 lean_dec_ref(x_36);
 x_51 = lean_box(0);
}
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_20);
lean_ctor_set(x_52, 1, x_50);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
 lean_ctor_set_tag(x_53, 0);
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_4);
x_10 = x_53;
goto block_19;
}
else
{
lean_object* x_54; 
lean_dec(x_49);
lean_dec(x_36);
lean_dec(x_20);
x_54 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_54;
goto block_19;
}
}
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_33);
lean_dec(x_20);
x_55 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_55;
goto block_19;
}
}
else
{
lean_object* x_56; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_20);
x_56 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_56;
goto block_19;
}
}
}
}
else
{
lean_object* x_57; 
lean_dec(x_24);
lean_dec(x_20);
x_57 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_57;
goto block_19;
}
}
else
{
lean_object* x_58; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_20);
x_58 = l_Cache_Requests_formatError___rarg(x_4);
x_10 = x_58;
goto block_19;
}
}
}
}
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Downloading info list of ", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\?comp=list&restype=container", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Cache_Requests_commit___closed__1;
x_2 = l_Cache_Requests_getFilesInfo___lambda__1___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<Name>", 6, 6);
return x_1;
}
}
static uint8_t _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Cache_Requests_getFilesInfo___lambda__1___closed__4;
x_2 = l_Cache_Requests_mkFileURL___closed__1;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Cache_Requests_QueryType_desc(x_1);
x_5 = l_Cache_Requests_getFilesInfo___lambda__1___closed__1;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_Cache_Requests_mkFileURL___closed__1;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_IO_println___at_Lean_Environment_displayStats___spec__3(x_8, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Cache_Requests_QueryType_prefix(x_1);
x_12 = l_Cache_Requests_getFilesInfo___lambda__1___closed__3;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = lean_string_append(x_13, x_7);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Cache_Requests_downloadFiles___lambda__11___closed__20;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Cache_Requests_putFiles___closed__8;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_array_mk(x_20);
x_22 = 1;
x_23 = l_Cache_IO_runCurl(x_21, x_22, x_22, x_10);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_31 = l_Cache_Requests_getFilesInfo___lambda__1___closed__5;
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = l_Cache_Requests_getFilesInfo___lambda__1___closed__4;
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_String_splitOnAux(x_24, x_32, x_33, x_33, x_33, x_15);
lean_dec(x_24);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
lean_dec(x_26);
x_35 = l_Cache_Requests_formatError___rarg(x_25);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_27 = x_36;
goto block_30;
}
}
else
{
lean_dec(x_24);
x_27 = x_15;
goto block_30;
}
block_30:
{
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_15);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_26);
x_29 = l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1(x_15, x_27, x_15, x_25);
return x_29;
}
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_9);
if (x_41 == 0)
{
return x_9;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_9, 0);
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_9);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("FIXME: getFilesInfo is not adapted to FRO cache yet", 51, 51);
return x_1;
}
}
static lean_object* _init_l_Cache_Requests_getFilesInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Cache_Requests_getFilesInfo___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Cache_Requests_useFROCache;
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Cache_Requests_getFilesInfo___lambda__1(x_1, x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Cache_Requests_getFilesInfo___closed__2;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Cache_Requests_getFilesInfo___lambda__1(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Cache_Requests_getFilesInfo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Cache_Requests_getFilesInfo(x_3, x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cache_Hashing(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cache_Requests(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cache_Hashing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Cache_Requests_useFROCache = _init_l_Cache_Requests_useFROCache();
l_Cache_Requests_URL___closed__1 = _init_l_Cache_Requests_URL___closed__1();
lean_mark_persistent(l_Cache_Requests_URL___closed__1);
l_Cache_Requests_URL___closed__2 = _init_l_Cache_Requests_URL___closed__2();
lean_mark_persistent(l_Cache_Requests_URL___closed__2);
l_Cache_Requests_URL___closed__3 = _init_l_Cache_Requests_URL___closed__3();
lean_mark_persistent(l_Cache_Requests_URL___closed__3);
l_Cache_Requests_URL = _init_l_Cache_Requests_URL();
lean_mark_persistent(l_Cache_Requests_URL);
l_Cache_Requests_getToken___closed__1 = _init_l_Cache_Requests_getToken___closed__1();
lean_mark_persistent(l_Cache_Requests_getToken___closed__1);
l_Cache_Requests_getToken___closed__2 = _init_l_Cache_Requests_getToken___closed__2();
lean_mark_persistent(l_Cache_Requests_getToken___closed__2);
l_Cache_Requests_getToken___closed__3 = _init_l_Cache_Requests_getToken___closed__3();
lean_mark_persistent(l_Cache_Requests_getToken___closed__3);
l_Cache_Requests_getToken___closed__4 = _init_l_Cache_Requests_getToken___closed__4();
lean_mark_persistent(l_Cache_Requests_getToken___closed__4);
l_Cache_Requests_getToken___closed__5 = _init_l_Cache_Requests_getToken___closed__5();
lean_mark_persistent(l_Cache_Requests_getToken___closed__5);
l_Cache_Requests_getToken___closed__6 = _init_l_Cache_Requests_getToken___closed__6();
lean_mark_persistent(l_Cache_Requests_getToken___closed__6);
l_Cache_Requests_getToken___closed__7 = _init_l_Cache_Requests_getToken___closed__7();
lean_mark_persistent(l_Cache_Requests_getToken___closed__7);
l_Cache_Requests_getToken___closed__8 = _init_l_Cache_Requests_getToken___closed__8();
lean_mark_persistent(l_Cache_Requests_getToken___closed__8);
l_Cache_Requests_getToken___closed__9 = _init_l_Cache_Requests_getToken___closed__9();
lean_mark_persistent(l_Cache_Requests_getToken___closed__9);
l_Cache_Requests_getToken___closed__10 = _init_l_Cache_Requests_getToken___closed__10();
lean_mark_persistent(l_Cache_Requests_getToken___closed__10);
l_Cache_Requests_mkFileURL___closed__1 = _init_l_Cache_Requests_mkFileURL___closed__1();
lean_mark_persistent(l_Cache_Requests_mkFileURL___closed__1);
l_Cache_Requests_mkFileURL___closed__2 = _init_l_Cache_Requests_mkFileURL___closed__2();
lean_mark_persistent(l_Cache_Requests_mkFileURL___closed__2);
l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__1);
l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__2);
l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3 = _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__3);
l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4 = _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__4);
l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5 = _init_l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Cache_Requests_mkGetConfigContent___spec__1___closed__5);
l_Cache_Requests_mkGetConfigContent___closed__1 = _init_l_Cache_Requests_mkGetConfigContent___closed__1();
lean_mark_persistent(l_Cache_Requests_mkGetConfigContent___closed__1);
l_Cache_Requests_downloadFile___closed__1 = _init_l_Cache_Requests_downloadFile___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFile___closed__1);
l_Cache_Requests_downloadFile___closed__2 = _init_l_Cache_Requests_downloadFile___closed__2();
lean_mark_persistent(l_Cache_Requests_downloadFile___closed__2);
l_Cache_Requests_downloadFile___closed__3 = _init_l_Cache_Requests_downloadFile___closed__3();
lean_mark_persistent(l_Cache_Requests_downloadFile___closed__3);
l_Cache_Requests_downloadFile___closed__4 = _init_l_Cache_Requests_downloadFile___closed__4();
lean_mark_persistent(l_Cache_Requests_downloadFile___closed__4);
l_Cache_Requests_downloadFiles___lambda__1___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__1___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__1___closed__1);
l_Cache_Requests_downloadFiles___lambda__4___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__1);
l_Cache_Requests_downloadFiles___lambda__4___closed__2 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__2();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__2);
l_Cache_Requests_downloadFiles___lambda__4___closed__3 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__3();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__3);
l_Cache_Requests_downloadFiles___lambda__4___closed__4 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__4();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__4);
l_Cache_Requests_downloadFiles___lambda__4___closed__5 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__5();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__5);
l_Cache_Requests_downloadFiles___lambda__4___closed__6 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__6();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__6);
l_Cache_Requests_downloadFiles___lambda__4___closed__7 = _init_l_Cache_Requests_downloadFiles___lambda__4___closed__7();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__4___closed__7);
l_Cache_Requests_downloadFiles___lambda__5___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__5___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__5___closed__1);
l_Cache_Requests_downloadFiles___lambda__7___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__1);
l_Cache_Requests_downloadFiles___lambda__7___closed__2 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__2();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__2);
l_Cache_Requests_downloadFiles___lambda__7___closed__3 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__3();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__3);
l_Cache_Requests_downloadFiles___lambda__7___closed__4 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__4();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__4);
l_Cache_Requests_downloadFiles___lambda__7___closed__5 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__5();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__5);
l_Cache_Requests_downloadFiles___lambda__7___closed__6 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__6();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__6);
l_Cache_Requests_downloadFiles___lambda__7___closed__7 = _init_l_Cache_Requests_downloadFiles___lambda__7___closed__7();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__7___closed__7);
l_Cache_Requests_downloadFiles___lambda__9___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__9___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__9___closed__1);
l_Cache_Requests_downloadFiles___lambda__9___closed__2 = _init_l_Cache_Requests_downloadFiles___lambda__9___closed__2();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__9___closed__2);
l_Cache_Requests_downloadFiles___lambda__9___closed__3 = _init_l_Cache_Requests_downloadFiles___lambda__9___closed__3();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__9___closed__3);
l_Cache_Requests_downloadFiles___lambda__11___closed__1 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__1();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__1);
l_Cache_Requests_downloadFiles___lambda__11___closed__2 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__2();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__2);
l_Cache_Requests_downloadFiles___lambda__11___closed__3 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__3();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__3);
l_Cache_Requests_downloadFiles___lambda__11___closed__4 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__4();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__4);
l_Cache_Requests_downloadFiles___lambda__11___closed__5 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__5();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__5);
l_Cache_Requests_downloadFiles___lambda__11___closed__6 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__6();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__6);
l_Cache_Requests_downloadFiles___lambda__11___closed__7 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__7();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__7);
l_Cache_Requests_downloadFiles___lambda__11___closed__8 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__8();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__8);
l_Cache_Requests_downloadFiles___lambda__11___closed__9 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__9();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__9);
l_Cache_Requests_downloadFiles___lambda__11___closed__10 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__10();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__10);
l_Cache_Requests_downloadFiles___lambda__11___closed__11 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__11();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__11);
l_Cache_Requests_downloadFiles___lambda__11___closed__12 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__12();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__12);
l_Cache_Requests_downloadFiles___lambda__11___closed__13 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__13();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__13);
l_Cache_Requests_downloadFiles___lambda__11___closed__14 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__14();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__14);
l_Cache_Requests_downloadFiles___lambda__11___closed__15 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__15();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__15);
l_Cache_Requests_downloadFiles___lambda__11___closed__16 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__16();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__16);
l_Cache_Requests_downloadFiles___lambda__11___closed__17 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__17();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__17);
l_Cache_Requests_downloadFiles___lambda__11___closed__18 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__18();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__18);
l_Cache_Requests_downloadFiles___lambda__11___closed__19 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__19();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__19);
l_Cache_Requests_downloadFiles___lambda__11___closed__20 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__20();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__20);
l_Cache_Requests_downloadFiles___lambda__11___closed__21 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__21();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__21);
l_Cache_Requests_downloadFiles___lambda__11___closed__22 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__22();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__22);
l_Cache_Requests_downloadFiles___lambda__11___closed__23 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__23();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__23);
l_Cache_Requests_downloadFiles___lambda__11___closed__24 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__24();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__24);
l_Cache_Requests_downloadFiles___lambda__11___closed__25 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__25();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__25);
l_Cache_Requests_downloadFiles___lambda__11___closed__26 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__26();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__26);
l_Cache_Requests_downloadFiles___lambda__11___closed__27 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__27();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__27);
l_Cache_Requests_downloadFiles___lambda__11___closed__28 = _init_l_Cache_Requests_downloadFiles___lambda__11___closed__28();
lean_mark_persistent(l_Cache_Requests_downloadFiles___lambda__11___closed__28);
l_Cache_Requests_checkForToolchainMismatch___closed__1 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__1();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__1);
l_Cache_Requests_checkForToolchainMismatch___closed__2 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__2();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__2);
l_Cache_Requests_checkForToolchainMismatch___closed__3 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__3();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__3);
l_Cache_Requests_checkForToolchainMismatch___closed__4 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__4();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__4);
l_Cache_Requests_checkForToolchainMismatch___closed__5 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__5();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__5);
l_Cache_Requests_checkForToolchainMismatch___closed__6 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__6();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__6);
l_Cache_Requests_checkForToolchainMismatch___closed__7 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__7();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__7);
l_Cache_Requests_checkForToolchainMismatch___closed__8 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__8();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__8);
l_Cache_Requests_checkForToolchainMismatch___closed__9 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__9();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__9);
l_Cache_Requests_checkForToolchainMismatch___closed__10 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__10();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__10);
l_Cache_Requests_checkForToolchainMismatch___closed__11 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__11();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__11);
l_Cache_Requests_checkForToolchainMismatch___closed__12 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__12();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__12);
l_Cache_Requests_checkForToolchainMismatch___closed__13 = _init_l_Cache_Requests_checkForToolchainMismatch___closed__13();
lean_mark_persistent(l_Cache_Requests_checkForToolchainMismatch___closed__13);
l_Cache_Requests_getProofWidgets___lambda__1___closed__1 = _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__1();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__1___closed__1);
l_Cache_Requests_getProofWidgets___lambda__1___closed__2 = _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__2();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__1___closed__2);
l_Cache_Requests_getProofWidgets___lambda__1___closed__3 = _init_l_Cache_Requests_getProofWidgets___lambda__1___closed__3();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__1___closed__3);
l_Cache_Requests_getProofWidgets___lambda__2___closed__1 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__1();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__1);
l_Cache_Requests_getProofWidgets___lambda__2___closed__2 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__2();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__2);
l_Cache_Requests_getProofWidgets___lambda__2___closed__3 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__3();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__3);
l_Cache_Requests_getProofWidgets___lambda__2___closed__4 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__4();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__4);
l_Cache_Requests_getProofWidgets___lambda__2___closed__5 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__5();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__5);
l_Cache_Requests_getProofWidgets___lambda__2___closed__6 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__6();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__6);
l_Cache_Requests_getProofWidgets___lambda__2___closed__7 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__7();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__7);
l_Cache_Requests_getProofWidgets___lambda__2___closed__8 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__8();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__8);
l_Cache_Requests_getProofWidgets___lambda__2___closed__9 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__9();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__9);
l_Cache_Requests_getProofWidgets___lambda__2___closed__10 = _init_l_Cache_Requests_getProofWidgets___lambda__2___closed__10();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___lambda__2___closed__10);
l_Cache_Requests_getProofWidgets___closed__1 = _init_l_Cache_Requests_getProofWidgets___closed__1();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__1);
l_Cache_Requests_getProofWidgets___closed__2 = _init_l_Cache_Requests_getProofWidgets___closed__2();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__2);
l_Cache_Requests_getProofWidgets___closed__3 = _init_l_Cache_Requests_getProofWidgets___closed__3();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__3);
l_Cache_Requests_getProofWidgets___closed__4 = _init_l_Cache_Requests_getProofWidgets___closed__4();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__4);
l_Cache_Requests_getProofWidgets___closed__5 = _init_l_Cache_Requests_getProofWidgets___closed__5();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__5);
l_Cache_Requests_getProofWidgets___closed__6 = _init_l_Cache_Requests_getProofWidgets___closed__6();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__6);
l_Cache_Requests_getProofWidgets___closed__7 = _init_l_Cache_Requests_getProofWidgets___closed__7();
lean_mark_persistent(l_Cache_Requests_getProofWidgets___closed__7);
l_Cache_Requests_getFiles___lambda__1___closed__1 = _init_l_Cache_Requests_getFiles___lambda__1___closed__1();
lean_mark_persistent(l_Cache_Requests_getFiles___lambda__1___closed__1);
l_Cache_Requests_UPLOAD__URL___closed__1 = _init_l_Cache_Requests_UPLOAD__URL___closed__1();
lean_mark_persistent(l_Cache_Requests_UPLOAD__URL___closed__1);
l_Cache_Requests_UPLOAD__URL___closed__2 = _init_l_Cache_Requests_UPLOAD__URL___closed__2();
lean_mark_persistent(l_Cache_Requests_UPLOAD__URL___closed__2);
l_Cache_Requests_UPLOAD__URL = _init_l_Cache_Requests_UPLOAD__URL();
lean_mark_persistent(l_Cache_Requests_UPLOAD__URL);
l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1 = _init_l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__1);
l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2 = _init_l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2();
lean_mark_persistent(l_List_mapM_loop___at_Cache_Requests_mkPutConfigContent___spec__1___closed__2);
l_Cache_Requests_mkPutConfigContent___closed__1 = _init_l_Cache_Requests_mkPutConfigContent___closed__1();
lean_mark_persistent(l_Cache_Requests_mkPutConfigContent___closed__1);
l_Cache_Requests_putFiles___closed__1 = _init_l_Cache_Requests_putFiles___closed__1();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__1);
l_Cache_Requests_putFiles___closed__2 = _init_l_Cache_Requests_putFiles___closed__2();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__2);
l_Cache_Requests_putFiles___closed__3 = _init_l_Cache_Requests_putFiles___closed__3();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__3);
l_Cache_Requests_putFiles___closed__4 = _init_l_Cache_Requests_putFiles___closed__4();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__4);
l_Cache_Requests_putFiles___closed__5 = _init_l_Cache_Requests_putFiles___closed__5();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__5);
l_Cache_Requests_putFiles___closed__6 = _init_l_Cache_Requests_putFiles___closed__6();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__6);
l_Cache_Requests_putFiles___closed__7 = _init_l_Cache_Requests_putFiles___closed__7();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__7);
l_Cache_Requests_putFiles___closed__8 = _init_l_Cache_Requests_putFiles___closed__8();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__8);
l_Cache_Requests_putFiles___closed__9 = _init_l_Cache_Requests_putFiles___closed__9();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__9);
l_Cache_Requests_putFiles___closed__10 = _init_l_Cache_Requests_putFiles___closed__10();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__10);
l_Cache_Requests_putFiles___closed__11 = _init_l_Cache_Requests_putFiles___closed__11();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__11);
l_Cache_Requests_putFiles___closed__12 = _init_l_Cache_Requests_putFiles___closed__12();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__12);
l_Cache_Requests_putFiles___closed__13 = _init_l_Cache_Requests_putFiles___closed__13();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__13);
l_Cache_Requests_putFiles___closed__14 = _init_l_Cache_Requests_putFiles___closed__14();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__14);
l_Cache_Requests_putFiles___closed__15 = _init_l_Cache_Requests_putFiles___closed__15();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__15);
l_Cache_Requests_putFiles___closed__16 = _init_l_Cache_Requests_putFiles___closed__16();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__16);
l_Cache_Requests_putFiles___closed__17 = _init_l_Cache_Requests_putFiles___closed__17();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__17);
l_Cache_Requests_putFiles___closed__18 = _init_l_Cache_Requests_putFiles___closed__18();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__18);
l_Cache_Requests_putFiles___closed__19 = _init_l_Cache_Requests_putFiles___closed__19();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__19);
l_Cache_Requests_putFiles___closed__20 = _init_l_Cache_Requests_putFiles___closed__20();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__20);
l_Cache_Requests_putFiles___closed__21 = _init_l_Cache_Requests_putFiles___closed__21();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__21);
l_Cache_Requests_putFiles___closed__22 = _init_l_Cache_Requests_putFiles___closed__22();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__22);
l_Cache_Requests_putFiles___closed__23 = _init_l_Cache_Requests_putFiles___closed__23();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__23);
l_Cache_Requests_putFiles___closed__24 = _init_l_Cache_Requests_putFiles___closed__24();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__24);
l_Cache_Requests_putFiles___closed__25 = _init_l_Cache_Requests_putFiles___closed__25();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__25);
l_Cache_Requests_putFiles___closed__26 = _init_l_Cache_Requests_putFiles___closed__26();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__26);
l_Cache_Requests_putFiles___closed__27 = _init_l_Cache_Requests_putFiles___closed__27();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__27);
l_Cache_Requests_putFiles___closed__28 = _init_l_Cache_Requests_putFiles___closed__28();
lean_mark_persistent(l_Cache_Requests_putFiles___closed__28);
l_Cache_Requests_isGitStatusClean___closed__1 = _init_l_Cache_Requests_isGitStatusClean___closed__1();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__1);
l_Cache_Requests_isGitStatusClean___closed__2 = _init_l_Cache_Requests_isGitStatusClean___closed__2();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__2);
l_Cache_Requests_isGitStatusClean___closed__3 = _init_l_Cache_Requests_isGitStatusClean___closed__3();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__3);
l_Cache_Requests_isGitStatusClean___closed__4 = _init_l_Cache_Requests_isGitStatusClean___closed__4();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__4);
l_Cache_Requests_isGitStatusClean___closed__5 = _init_l_Cache_Requests_isGitStatusClean___closed__5();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__5);
l_Cache_Requests_isGitStatusClean___closed__6 = _init_l_Cache_Requests_isGitStatusClean___closed__6();
lean_mark_persistent(l_Cache_Requests_isGitStatusClean___closed__6);
l_Cache_Requests_getGitCommitHash___closed__1 = _init_l_Cache_Requests_getGitCommitHash___closed__1();
lean_mark_persistent(l_Cache_Requests_getGitCommitHash___closed__1);
l_Cache_Requests_getGitCommitHash___closed__2 = _init_l_Cache_Requests_getGitCommitHash___closed__2();
lean_mark_persistent(l_Cache_Requests_getGitCommitHash___closed__2);
l_Cache_Requests_getGitCommitHash___closed__3 = _init_l_Cache_Requests_getGitCommitHash___closed__3();
lean_mark_persistent(l_Cache_Requests_getGitCommitHash___closed__3);
l_Cache_Requests_getGitCommitHash___closed__4 = _init_l_Cache_Requests_getGitCommitHash___closed__4();
lean_mark_persistent(l_Cache_Requests_getGitCommitHash___closed__4);
l_Cache_Requests_getGitCommitHash___closed__5 = _init_l_Cache_Requests_getGitCommitHash___closed__5();
lean_mark_persistent(l_Cache_Requests_getGitCommitHash___closed__5);
l_Cache_Requests_commit___closed__1 = _init_l_Cache_Requests_commit___closed__1();
lean_mark_persistent(l_Cache_Requests_commit___closed__1);
l_Cache_Requests_commit___closed__2 = _init_l_Cache_Requests_commit___closed__2();
lean_mark_persistent(l_Cache_Requests_commit___closed__2);
l_Cache_Requests_commit___closed__3 = _init_l_Cache_Requests_commit___closed__3();
lean_mark_persistent(l_Cache_Requests_commit___closed__3);
l_Cache_Requests_commit___closed__4 = _init_l_Cache_Requests_commit___closed__4();
lean_mark_persistent(l_Cache_Requests_commit___closed__4);
l_Cache_Requests_commit___closed__5 = _init_l_Cache_Requests_commit___closed__5();
lean_mark_persistent(l_Cache_Requests_commit___closed__5);
l_Cache_Requests_commit___closed__6 = _init_l_Cache_Requests_commit___closed__6();
lean_mark_persistent(l_Cache_Requests_commit___closed__6);
l_Cache_Requests_commit___closed__7 = _init_l_Cache_Requests_commit___closed__7();
lean_mark_persistent(l_Cache_Requests_commit___closed__7);
l_Cache_Requests_commit___closed__8 = _init_l_Cache_Requests_commit___closed__8();
lean_mark_persistent(l_Cache_Requests_commit___closed__8);
l_Cache_Requests_commit___closed__9 = _init_l_Cache_Requests_commit___closed__9();
lean_mark_persistent(l_Cache_Requests_commit___closed__9);
l_Cache_Requests_commit___closed__10 = _init_l_Cache_Requests_commit___closed__10();
lean_mark_persistent(l_Cache_Requests_commit___closed__10);
l_Cache_Requests_commit___closed__11 = _init_l_Cache_Requests_commit___closed__11();
lean_mark_persistent(l_Cache_Requests_commit___closed__11);
l_Cache_Requests_commit___closed__12 = _init_l_Cache_Requests_commit___closed__12();
lean_mark_persistent(l_Cache_Requests_commit___closed__12);
l_Cache_Requests_QueryType_noConfusion___rarg___closed__1 = _init_l_Cache_Requests_QueryType_noConfusion___rarg___closed__1();
lean_mark_persistent(l_Cache_Requests_QueryType_noConfusion___rarg___closed__1);
l_Cache_Requests_QueryType_prefix___closed__1 = _init_l_Cache_Requests_QueryType_prefix___closed__1();
lean_mark_persistent(l_Cache_Requests_QueryType_prefix___closed__1);
l_Cache_Requests_QueryType_prefix___closed__2 = _init_l_Cache_Requests_QueryType_prefix___closed__2();
lean_mark_persistent(l_Cache_Requests_QueryType_prefix___closed__2);
l_Cache_Requests_formatError___rarg___closed__1 = _init_l_Cache_Requests_formatError___rarg___closed__1();
lean_mark_persistent(l_Cache_Requests_formatError___rarg___closed__1);
l_Cache_Requests_formatError___rarg___closed__2 = _init_l_Cache_Requests_formatError___rarg___closed__2();
lean_mark_persistent(l_Cache_Requests_formatError___rarg___closed__2);
l_Cache_Requests_QueryType_desc___closed__1 = _init_l_Cache_Requests_QueryType_desc___closed__1();
lean_mark_persistent(l_Cache_Requests_QueryType_desc___closed__1);
l_Cache_Requests_QueryType_desc___closed__2 = _init_l_Cache_Requests_QueryType_desc___closed__2();
lean_mark_persistent(l_Cache_Requests_QueryType_desc___closed__2);
l_Cache_Requests_QueryType_desc___closed__3 = _init_l_Cache_Requests_QueryType_desc___closed__3();
lean_mark_persistent(l_Cache_Requests_QueryType_desc___closed__3);
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__1);
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__2 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__2();
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3();
lean_mark_persistent(l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__3);
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__4 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__4();
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5();
lean_mark_persistent(l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__5);
l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__6 = _init_l_List_mapM_loop___at_Cache_Requests_getFilesInfo___spec__1___closed__6();
l_Cache_Requests_getFilesInfo___lambda__1___closed__1 = _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__1();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___lambda__1___closed__1);
l_Cache_Requests_getFilesInfo___lambda__1___closed__2 = _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__2();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___lambda__1___closed__2);
l_Cache_Requests_getFilesInfo___lambda__1___closed__3 = _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__3();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___lambda__1___closed__3);
l_Cache_Requests_getFilesInfo___lambda__1___closed__4 = _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__4();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___lambda__1___closed__4);
l_Cache_Requests_getFilesInfo___lambda__1___closed__5 = _init_l_Cache_Requests_getFilesInfo___lambda__1___closed__5();
l_Cache_Requests_getFilesInfo___closed__1 = _init_l_Cache_Requests_getFilesInfo___closed__1();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___closed__1);
l_Cache_Requests_getFilesInfo___closed__2 = _init_l_Cache_Requests_getFilesInfo___closed__2();
lean_mark_persistent(l_Cache_Requests_getFilesInfo___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
