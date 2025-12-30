// Lean compiler output
// Module: Mathlib.Tactic.CategoryTheory.CheckCompositions
// Imports: Init Mathlib.CategoryTheory.Category.Basic
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
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7;
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2;
static uint64_t l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3;
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2;
lean_object* l_Lean_Expr_appArg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFnCleanup(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9;
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions___aux__Mathlib__Tactic__CategoryTheory__CheckCompositions______elabRules__Mathlib__Tactic__CheckCompositions__tacticCheck__compositions__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1;
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3;
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1;
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4;
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1;
static lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2;
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_110; uint8_t x_111; 
x_110 = lean_st_ref_get(x_3, x_8);
x_111 = !lean_is_exclusive(x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint64_t x_116; uint64_t x_117; uint64_t x_118; uint64_t x_119; uint64_t x_120; uint64_t x_121; uint64_t x_122; size_t x_123; size_t x_124; size_t x_125; size_t x_126; size_t x_127; lean_object* x_128; lean_object* x_129; 
x_112 = lean_ctor_get(x_110, 0);
x_113 = lean_ctor_get(x_110, 1);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_array_get_size(x_114);
x_116 = l_Lean_Expr_hash(x_2);
x_117 = 32;
x_118 = lean_uint64_shift_right(x_116, x_117);
x_119 = lean_uint64_xor(x_116, x_118);
x_120 = 16;
x_121 = lean_uint64_shift_right(x_119, x_120);
x_122 = lean_uint64_xor(x_119, x_121);
x_123 = lean_uint64_to_usize(x_122);
x_124 = lean_usize_of_nat(x_115);
lean_dec(x_115);
x_125 = 1;
x_126 = lean_usize_sub(x_124, x_125);
x_127 = lean_usize_land(x_123, x_126);
x_128 = lean_array_uget(x_114, x_127);
lean_dec(x_114);
x_129 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__2(x_2, x_128);
lean_dec(x_128);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; 
lean_free_object(x_110);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_130 = lean_apply_6(x_1, x_2, x_4, x_5, x_6, x_7, x_113);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_unbox(x_131);
lean_dec(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
x_134 = lean_box(0);
x_9 = x_134;
x_10 = x_133;
goto block_109;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_130, 1);
lean_inc(x_135);
lean_dec(x_130);
x_136 = lean_ctor_get(x_2, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_2, 1);
lean_inc(x_137);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_138 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_136, x_3, x_4, x_5, x_6, x_7, x_135);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
lean_dec(x_138);
x_140 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_137, x_3, x_4, x_5, x_6, x_7, x_139);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_9 = x_141;
x_10 = x_142;
goto block_109;
}
else
{
uint8_t x_143; 
lean_dec(x_2);
x_143 = !lean_is_exclusive(x_140);
if (x_143 == 0)
{
return x_140;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_140, 0);
x_145 = lean_ctor_get(x_140, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_140);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_137);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_147 = !lean_is_exclusive(x_138);
if (x_147 == 0)
{
return x_138;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_138, 0);
x_149 = lean_ctor_get(x_138, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_138);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
case 6:
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_130, 1);
lean_inc(x_151);
lean_dec(x_130);
x_152 = lean_ctor_get(x_2, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_2, 2);
lean_inc(x_153);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_154 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_152, x_3, x_4, x_5, x_6, x_7, x_151);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_156 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_153, x_3, x_4, x_5, x_6, x_7, x_155);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_9 = x_157;
x_10 = x_158;
goto block_109;
}
else
{
uint8_t x_159; 
lean_dec(x_2);
x_159 = !lean_is_exclusive(x_156);
if (x_159 == 0)
{
return x_156;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_156, 0);
x_161 = lean_ctor_get(x_156, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_156);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_153);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_154);
if (x_163 == 0)
{
return x_154;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_154, 0);
x_165 = lean_ctor_get(x_154, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_154);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
case 7:
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_167 = lean_ctor_get(x_130, 1);
lean_inc(x_167);
lean_dec(x_130);
x_168 = lean_ctor_get(x_2, 1);
lean_inc(x_168);
x_169 = lean_ctor_get(x_2, 2);
lean_inc(x_169);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_170 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_168, x_3, x_4, x_5, x_6, x_7, x_167);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
lean_dec(x_170);
x_172 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_169, x_3, x_4, x_5, x_6, x_7, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_9 = x_173;
x_10 = x_174;
goto block_109;
}
else
{
uint8_t x_175; 
lean_dec(x_2);
x_175 = !lean_is_exclusive(x_172);
if (x_175 == 0)
{
return x_172;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_172, 0);
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_172);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_170);
if (x_179 == 0)
{
return x_170;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_170, 0);
x_181 = lean_ctor_get(x_170, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_170);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
case 8:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_183 = lean_ctor_get(x_130, 1);
lean_inc(x_183);
lean_dec(x_130);
x_184 = lean_ctor_get(x_2, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_2, 3);
lean_inc(x_186);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_187 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_184, x_3, x_4, x_5, x_6, x_7, x_183);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
lean_dec(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_189 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_185, x_3, x_4, x_5, x_6, x_7, x_188);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
x_191 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_186, x_3, x_4, x_5, x_6, x_7, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_9 = x_192;
x_10 = x_193;
goto block_109;
}
else
{
uint8_t x_194; 
lean_dec(x_2);
x_194 = !lean_is_exclusive(x_191);
if (x_194 == 0)
{
return x_191;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_191, 0);
x_196 = lean_ctor_get(x_191, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_191);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_186);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_198 = !lean_is_exclusive(x_189);
if (x_198 == 0)
{
return x_189;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_189, 0);
x_200 = lean_ctor_get(x_189, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_189);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
uint8_t x_202; 
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_202 = !lean_is_exclusive(x_187);
if (x_202 == 0)
{
return x_187;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_187, 0);
x_204 = lean_ctor_get(x_187, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_187);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
}
}
case 10:
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_130, 1);
lean_inc(x_206);
lean_dec(x_130);
x_207 = lean_ctor_get(x_2, 1);
lean_inc(x_207);
x_208 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_207, x_3, x_4, x_5, x_6, x_7, x_206);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; 
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
x_9 = x_209;
x_10 = x_210;
goto block_109;
}
else
{
uint8_t x_211; 
lean_dec(x_2);
x_211 = !lean_is_exclusive(x_208);
if (x_211 == 0)
{
return x_208;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_208, 0);
x_213 = lean_ctor_get(x_208, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_208);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
case 11:
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_130, 1);
lean_inc(x_215);
lean_dec(x_130);
x_216 = lean_ctor_get(x_2, 2);
lean_inc(x_216);
x_217 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_216, x_3, x_4, x_5, x_6, x_7, x_215);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_9 = x_218;
x_10 = x_219;
goto block_109;
}
else
{
uint8_t x_220; 
lean_dec(x_2);
x_220 = !lean_is_exclusive(x_217);
if (x_220 == 0)
{
return x_217;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_217, 0);
x_222 = lean_ctor_get(x_217, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_217);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
default: 
{
lean_object* x_224; lean_object* x_225; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_224 = lean_ctor_get(x_130, 1);
lean_inc(x_224);
lean_dec(x_130);
x_225 = lean_box(0);
x_9 = x_225;
x_10 = x_224;
goto block_109;
}
}
}
}
else
{
uint8_t x_226; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_226 = !lean_is_exclusive(x_130);
if (x_226 == 0)
{
return x_130;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_130, 0);
x_228 = lean_ctor_get(x_130, 1);
lean_inc(x_228);
lean_inc(x_227);
lean_dec(x_130);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
else
{
lean_object* x_230; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_230 = lean_ctor_get(x_129, 0);
lean_inc(x_230);
lean_dec(x_129);
lean_ctor_set(x_110, 0, x_230);
return x_110;
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint64_t x_235; uint64_t x_236; uint64_t x_237; uint64_t x_238; uint64_t x_239; uint64_t x_240; uint64_t x_241; size_t x_242; size_t x_243; size_t x_244; size_t x_245; size_t x_246; lean_object* x_247; lean_object* x_248; 
x_231 = lean_ctor_get(x_110, 0);
x_232 = lean_ctor_get(x_110, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_110);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = lean_array_get_size(x_233);
x_235 = l_Lean_Expr_hash(x_2);
x_236 = 32;
x_237 = lean_uint64_shift_right(x_235, x_236);
x_238 = lean_uint64_xor(x_235, x_237);
x_239 = 16;
x_240 = lean_uint64_shift_right(x_238, x_239);
x_241 = lean_uint64_xor(x_238, x_240);
x_242 = lean_uint64_to_usize(x_241);
x_243 = lean_usize_of_nat(x_234);
lean_dec(x_234);
x_244 = 1;
x_245 = lean_usize_sub(x_243, x_244);
x_246 = lean_usize_land(x_242, x_245);
x_247 = lean_array_uget(x_233, x_246);
lean_dec(x_233);
x_248 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__2(x_2, x_247);
lean_dec(x_247);
if (lean_obj_tag(x_248) == 0)
{
lean_object* x_249; 
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_249 = lean_apply_6(x_1, x_2, x_4, x_5, x_6, x_7, x_232);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_250; uint8_t x_251; 
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_unbox(x_250);
lean_dec(x_250);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_252 = lean_ctor_get(x_249, 1);
lean_inc(x_252);
lean_dec(x_249);
x_253 = lean_box(0);
x_9 = x_253;
x_10 = x_252;
goto block_109;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_254 = lean_ctor_get(x_249, 1);
lean_inc(x_254);
lean_dec(x_249);
x_255 = lean_ctor_get(x_2, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_2, 1);
lean_inc(x_256);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_257 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_255, x_3, x_4, x_5, x_6, x_7, x_254);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; 
x_258 = lean_ctor_get(x_257, 1);
lean_inc(x_258);
lean_dec(x_257);
x_259 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_256, x_3, x_4, x_5, x_6, x_7, x_258);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_260; lean_object* x_261; 
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
x_9 = x_260;
x_10 = x_261;
goto block_109;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_2);
x_262 = lean_ctor_get(x_259, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_259, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_264 = x_259;
} else {
 lean_dec_ref(x_259);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(1, 2, 0);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_262);
lean_ctor_set(x_265, 1, x_263);
return x_265;
}
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_256);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_266 = lean_ctor_get(x_257, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_257, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_268 = x_257;
} else {
 lean_dec_ref(x_257);
 x_268 = lean_box(0);
}
if (lean_is_scalar(x_268)) {
 x_269 = lean_alloc_ctor(1, 2, 0);
} else {
 x_269 = x_268;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
}
case 6:
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_270 = lean_ctor_get(x_249, 1);
lean_inc(x_270);
lean_dec(x_249);
x_271 = lean_ctor_get(x_2, 1);
lean_inc(x_271);
x_272 = lean_ctor_get(x_2, 2);
lean_inc(x_272);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_273 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_271, x_3, x_4, x_5, x_6, x_7, x_270);
if (lean_obj_tag(x_273) == 0)
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_273, 1);
lean_inc(x_274);
lean_dec(x_273);
x_275 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_272, x_3, x_4, x_5, x_6, x_7, x_274);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_9 = x_276;
x_10 = x_277;
goto block_109;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
lean_dec(x_2);
x_278 = lean_ctor_get(x_275, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_275, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_280 = x_275;
} else {
 lean_dec_ref(x_275);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_278);
lean_ctor_set(x_281, 1, x_279);
return x_281;
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_272);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_282 = lean_ctor_get(x_273, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_273, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 x_284 = x_273;
} else {
 lean_dec_ref(x_273);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_282);
lean_ctor_set(x_285, 1, x_283);
return x_285;
}
}
case 7:
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_286 = lean_ctor_get(x_249, 1);
lean_inc(x_286);
lean_dec(x_249);
x_287 = lean_ctor_get(x_2, 1);
lean_inc(x_287);
x_288 = lean_ctor_get(x_2, 2);
lean_inc(x_288);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_289 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_287, x_3, x_4, x_5, x_6, x_7, x_286);
if (lean_obj_tag(x_289) == 0)
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_289, 1);
lean_inc(x_290);
lean_dec(x_289);
x_291 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_288, x_3, x_4, x_5, x_6, x_7, x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_9 = x_292;
x_10 = x_293;
goto block_109;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_2);
x_294 = lean_ctor_get(x_291, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_291, 1);
lean_inc(x_295);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_296 = x_291;
} else {
 lean_dec_ref(x_291);
 x_296 = lean_box(0);
}
if (lean_is_scalar(x_296)) {
 x_297 = lean_alloc_ctor(1, 2, 0);
} else {
 x_297 = x_296;
}
lean_ctor_set(x_297, 0, x_294);
lean_ctor_set(x_297, 1, x_295);
return x_297;
}
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
lean_dec(x_288);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_298 = lean_ctor_get(x_289, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_289, 1);
lean_inc(x_299);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 x_300 = x_289;
} else {
 lean_dec_ref(x_289);
 x_300 = lean_box(0);
}
if (lean_is_scalar(x_300)) {
 x_301 = lean_alloc_ctor(1, 2, 0);
} else {
 x_301 = x_300;
}
lean_ctor_set(x_301, 0, x_298);
lean_ctor_set(x_301, 1, x_299);
return x_301;
}
}
case 8:
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_302 = lean_ctor_get(x_249, 1);
lean_inc(x_302);
lean_dec(x_249);
x_303 = lean_ctor_get(x_2, 1);
lean_inc(x_303);
x_304 = lean_ctor_get(x_2, 2);
lean_inc(x_304);
x_305 = lean_ctor_get(x_2, 3);
lean_inc(x_305);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_306 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_303, x_3, x_4, x_5, x_6, x_7, x_302);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; 
x_307 = lean_ctor_get(x_306, 1);
lean_inc(x_307);
lean_dec(x_306);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_308 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_304, x_3, x_4, x_5, x_6, x_7, x_307);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; lean_object* x_310; 
x_309 = lean_ctor_get(x_308, 1);
lean_inc(x_309);
lean_dec(x_308);
x_310 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_305, x_3, x_4, x_5, x_6, x_7, x_309);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; 
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 1);
lean_inc(x_312);
lean_dec(x_310);
x_9 = x_311;
x_10 = x_312;
goto block_109;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_2);
x_313 = lean_ctor_get(x_310, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_310, 1);
lean_inc(x_314);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_315 = x_310;
} else {
 lean_dec_ref(x_310);
 x_315 = lean_box(0);
}
if (lean_is_scalar(x_315)) {
 x_316 = lean_alloc_ctor(1, 2, 0);
} else {
 x_316 = x_315;
}
lean_ctor_set(x_316, 0, x_313);
lean_ctor_set(x_316, 1, x_314);
return x_316;
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
lean_dec(x_305);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_317 = lean_ctor_get(x_308, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_308, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_319 = x_308;
} else {
 lean_dec_ref(x_308);
 x_319 = lean_box(0);
}
if (lean_is_scalar(x_319)) {
 x_320 = lean_alloc_ctor(1, 2, 0);
} else {
 x_320 = x_319;
}
lean_ctor_set(x_320, 0, x_317);
lean_ctor_set(x_320, 1, x_318);
return x_320;
}
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_305);
lean_dec(x_304);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_321 = lean_ctor_get(x_306, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_306, 1);
lean_inc(x_322);
if (lean_is_exclusive(x_306)) {
 lean_ctor_release(x_306, 0);
 lean_ctor_release(x_306, 1);
 x_323 = x_306;
} else {
 lean_dec_ref(x_306);
 x_323 = lean_box(0);
}
if (lean_is_scalar(x_323)) {
 x_324 = lean_alloc_ctor(1, 2, 0);
} else {
 x_324 = x_323;
}
lean_ctor_set(x_324, 0, x_321);
lean_ctor_set(x_324, 1, x_322);
return x_324;
}
}
case 10:
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_249, 1);
lean_inc(x_325);
lean_dec(x_249);
x_326 = lean_ctor_get(x_2, 1);
lean_inc(x_326);
x_327 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_326, x_3, x_4, x_5, x_6, x_7, x_325);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; 
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
lean_dec(x_327);
x_9 = x_328;
x_10 = x_329;
goto block_109;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
lean_dec(x_2);
x_330 = lean_ctor_get(x_327, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_327, 1);
lean_inc(x_331);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 x_332 = x_327;
} else {
 lean_dec_ref(x_327);
 x_332 = lean_box(0);
}
if (lean_is_scalar(x_332)) {
 x_333 = lean_alloc_ctor(1, 2, 0);
} else {
 x_333 = x_332;
}
lean_ctor_set(x_333, 0, x_330);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
}
case 11:
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_249, 1);
lean_inc(x_334);
lean_dec(x_249);
x_335 = lean_ctor_get(x_2, 2);
lean_inc(x_335);
x_336 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_335, x_3, x_4, x_5, x_6, x_7, x_334);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
x_9 = x_337;
x_10 = x_338;
goto block_109;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_2);
x_339 = lean_ctor_get(x_336, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_336, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_341 = x_336;
} else {
 lean_dec_ref(x_336);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
return x_342;
}
}
default: 
{
lean_object* x_343; lean_object* x_344; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_343 = lean_ctor_get(x_249, 1);
lean_inc(x_343);
lean_dec(x_249);
x_344 = lean_box(0);
x_9 = x_344;
x_10 = x_343;
goto block_109;
}
}
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_345 = lean_ctor_get(x_249, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_249, 1);
lean_inc(x_346);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_347 = x_249;
} else {
 lean_dec_ref(x_249);
 x_347 = lean_box(0);
}
if (lean_is_scalar(x_347)) {
 x_348 = lean_alloc_ctor(1, 2, 0);
} else {
 x_348 = x_347;
}
lean_ctor_set(x_348, 0, x_345);
lean_ctor_set(x_348, 1, x_346);
return x_348;
}
}
else
{
lean_object* x_349; lean_object* x_350; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_349 = lean_ctor_get(x_248, 0);
lean_inc(x_349);
lean_dec(x_248);
x_350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_232);
return x_350;
}
}
block_109:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; lean_object* x_30; uint8_t x_31; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_array_get_size(x_16);
x_18 = l_Lean_Expr_hash(x_2);
x_19 = 32;
x_20 = lean_uint64_shift_right(x_18, x_19);
x_21 = lean_uint64_xor(x_18, x_20);
x_22 = 16;
x_23 = lean_uint64_shift_right(x_21, x_22);
x_24 = lean_uint64_xor(x_21, x_23);
x_25 = lean_uint64_to_usize(x_24);
x_26 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_27 = 1;
x_28 = lean_usize_sub(x_26, x_27);
x_29 = lean_usize_land(x_25, x_28);
x_30 = lean_array_uget(x_16, x_29);
x_31 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(x_2, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_15, x_32);
lean_dec(x_15);
lean_inc(x_9);
x_34 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_34, 0, x_2);
lean_ctor_set(x_34, 1, x_9);
lean_ctor_set(x_34, 2, x_30);
x_35 = lean_array_uset(x_16, x_29, x_34);
x_36 = lean_unsigned_to_nat(4u);
x_37 = lean_nat_mul(x_33, x_36);
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_nat_div(x_37, x_38);
lean_dec(x_37);
x_40 = lean_array_get_size(x_35);
x_41 = lean_nat_dec_le(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(x_35);
lean_ctor_set(x_12, 1, x_42);
lean_ctor_set(x_12, 0, x_33);
x_43 = lean_st_ref_set(x_3, x_12, x_13);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set(x_43, 0, x_9);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_9);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
lean_ctor_set(x_12, 1, x_35);
lean_ctor_set(x_12, 0, x_33);
x_48 = lean_st_ref_set(x_3, x_12, x_13);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
lean_ctor_set(x_48, 0, x_9);
return x_48;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_9);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_53 = lean_box(0);
x_54 = lean_array_uset(x_16, x_29, x_53);
lean_inc(x_9);
x_55 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__1(x_2, x_9, x_30);
x_56 = lean_array_uset(x_54, x_29, x_55);
lean_ctor_set(x_12, 1, x_56);
x_57 = lean_st_ref_set(x_3, x_12, x_13);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set(x_57, 0, x_9);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_9);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; size_t x_72; size_t x_73; size_t x_74; size_t x_75; size_t x_76; lean_object* x_77; uint8_t x_78; 
x_62 = lean_ctor_get(x_12, 0);
x_63 = lean_ctor_get(x_12, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_12);
x_64 = lean_array_get_size(x_63);
x_65 = l_Lean_Expr_hash(x_2);
x_66 = 32;
x_67 = lean_uint64_shift_right(x_65, x_66);
x_68 = lean_uint64_xor(x_65, x_67);
x_69 = 16;
x_70 = lean_uint64_shift_right(x_68, x_69);
x_71 = lean_uint64_xor(x_68, x_70);
x_72 = lean_uint64_to_usize(x_71);
x_73 = lean_usize_of_nat(x_64);
lean_dec(x_64);
x_74 = 1;
x_75 = lean_usize_sub(x_73, x_74);
x_76 = lean_usize_land(x_72, x_75);
x_77 = lean_array_uget(x_63, x_76);
x_78 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(x_2, x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_nat_add(x_62, x_79);
lean_dec(x_62);
lean_inc(x_9);
x_81 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_81, 0, x_2);
lean_ctor_set(x_81, 1, x_9);
lean_ctor_set(x_81, 2, x_77);
x_82 = lean_array_uset(x_63, x_76, x_81);
x_83 = lean_unsigned_to_nat(4u);
x_84 = lean_nat_mul(x_80, x_83);
x_85 = lean_unsigned_to_nat(3u);
x_86 = lean_nat_div(x_84, x_85);
lean_dec(x_84);
x_87 = lean_array_get_size(x_82);
x_88 = lean_nat_dec_le(x_86, x_87);
lean_dec(x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(x_82);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_80);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_st_ref_set(x_3, x_90, x_13);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_9);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_80);
lean_ctor_set(x_95, 1, x_82);
x_96 = lean_st_ref_set(x_3, x_95, x_13);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_98 = x_96;
} else {
 lean_dec_ref(x_96);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_9);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_100 = lean_box(0);
x_101 = lean_array_uset(x_63, x_76, x_100);
lean_inc(x_9);
x_102 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Meta_ExprDefEq_0__Lean_Meta_mkLambdaFVarsWithLetDeps_collectLetDeclsFrom_visit___spec__1(x_2, x_9, x_77);
x_103 = lean_array_uset(x_101, x_76, x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_62);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_st_ref_set(x_3, x_104, x_13);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_107 = x_105;
} else {
 lean_dec_ref(x_105);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_9);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CategoryTheory", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CategoryStruct", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("comp", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1;
x_2 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2;
x_3 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4;
x_9 = lean_unsigned_to_nat(7u);
x_10 = l_Lean_Expr_isAppOfArity(x_2, x_8, x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = 1;
x_18 = lean_box(x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = 1;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_forEachComposition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_alloc_closure((void*)(l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1), 7, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3;
x_10 = lean_st_mk_ref(x_9, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_8, x_1, x_11, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_11, x_15);
lean_dec(x_11);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_14);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_11);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_ForEachExpr_visit___at_Mathlib_Tactic_CheckCompositions_forEachComposition___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("In composition\n  ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nthe target of\n  ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nis\n  ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nbut should be\n  ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_MessageData_ofExpr(x_3);
x_16 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_MessageData_ofExpr(x_4);
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_MessageData_ofExpr(x_1);
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_MessageData_ofExpr(x_2);
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = 0;
x_33 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_31, x_32, x_6, x_7, x_8, x_9, x_14);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_11);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_11, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_11, 0, x_36);
return x_11;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_11, 1);
lean_inc(x_37);
lean_dec(x_11);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_11);
if (x_40 == 0)
{
return x_11;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_11, 0);
x_42 = lean_ctor_get(x_11, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_11);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static uint64_t _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 3;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nthe source of\n  ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
uint64_t x_15; uint8_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; lean_object* x_22; 
x_15 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_16 = 3;
lean_ctor_set_uint8(x_13, 9, x_16);
x_17 = 2;
x_18 = lean_uint64_shift_right(x_15, x_17);
x_19 = lean_uint64_shift_left(x_18, x_17);
x_20 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
x_21 = lean_uint64_lor(x_19, x_20);
lean_ctor_set_uint64(x_7, sizeof(void*)*7, x_21);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_5);
x_22 = l_Lean_Meta_isExprDefEq(x_5, x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_3);
x_26 = l_Lean_MessageData_ofExpr(x_3);
x_27 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_inc(x_4);
x_31 = l_Lean_MessageData_ofExpr(x_4);
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_MessageData_ofExpr(x_5);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_MessageData_ofExpr(x_1);
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = 0;
lean_inc(x_9);
x_44 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_42, x_43, x_7, x_8, x_9, x_10, x_25);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_45, x_7, x_8, x_9, x_10, x_46);
lean_dec(x_45);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_47);
if (x_52 == 0)
{
return x_47;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_47, 0);
x_54 = lean_ctor_get(x_47, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_47);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_5);
lean_dec(x_1);
x_56 = lean_ctor_get(x_22, 1);
lean_inc(x_56);
lean_dec(x_22);
x_57 = lean_box(0);
x_58 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_57, x_7, x_8, x_9, x_10, x_56);
if (lean_obj_tag(x_58) == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
return x_58;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_58);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
else
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_58);
if (x_63 == 0)
{
return x_58;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_58, 0);
x_65 = lean_ctor_get(x_58, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_58);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_22);
if (x_67 == 0)
{
return x_22;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_22, 0);
x_69 = lean_ctor_get(x_22, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_22);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint64_t x_71; uint8_t x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; uint8_t x_87; uint8_t x_88; uint8_t x_89; lean_object* x_90; uint64_t x_91; uint64_t x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; lean_object* x_96; 
x_71 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_72 = lean_ctor_get_uint8(x_13, 0);
x_73 = lean_ctor_get_uint8(x_13, 1);
x_74 = lean_ctor_get_uint8(x_13, 2);
x_75 = lean_ctor_get_uint8(x_13, 3);
x_76 = lean_ctor_get_uint8(x_13, 4);
x_77 = lean_ctor_get_uint8(x_13, 5);
x_78 = lean_ctor_get_uint8(x_13, 6);
x_79 = lean_ctor_get_uint8(x_13, 7);
x_80 = lean_ctor_get_uint8(x_13, 8);
x_81 = lean_ctor_get_uint8(x_13, 10);
x_82 = lean_ctor_get_uint8(x_13, 11);
x_83 = lean_ctor_get_uint8(x_13, 12);
x_84 = lean_ctor_get_uint8(x_13, 13);
x_85 = lean_ctor_get_uint8(x_13, 14);
x_86 = lean_ctor_get_uint8(x_13, 15);
x_87 = lean_ctor_get_uint8(x_13, 16);
x_88 = lean_ctor_get_uint8(x_13, 17);
lean_dec(x_13);
x_89 = 3;
x_90 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_90, 0, x_72);
lean_ctor_set_uint8(x_90, 1, x_73);
lean_ctor_set_uint8(x_90, 2, x_74);
lean_ctor_set_uint8(x_90, 3, x_75);
lean_ctor_set_uint8(x_90, 4, x_76);
lean_ctor_set_uint8(x_90, 5, x_77);
lean_ctor_set_uint8(x_90, 6, x_78);
lean_ctor_set_uint8(x_90, 7, x_79);
lean_ctor_set_uint8(x_90, 8, x_80);
lean_ctor_set_uint8(x_90, 9, x_89);
lean_ctor_set_uint8(x_90, 10, x_81);
lean_ctor_set_uint8(x_90, 11, x_82);
lean_ctor_set_uint8(x_90, 12, x_83);
lean_ctor_set_uint8(x_90, 13, x_84);
lean_ctor_set_uint8(x_90, 14, x_85);
lean_ctor_set_uint8(x_90, 15, x_86);
lean_ctor_set_uint8(x_90, 16, x_87);
lean_ctor_set_uint8(x_90, 17, x_88);
x_91 = 2;
x_92 = lean_uint64_shift_right(x_71, x_91);
x_93 = lean_uint64_shift_left(x_92, x_91);
x_94 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
x_95 = lean_uint64_lor(x_93, x_94);
lean_ctor_set(x_7, 0, x_90);
lean_ctor_set_uint64(x_7, sizeof(void*)*7, x_95);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_5);
x_96 = l_Lean_Meta_isExprDefEq(x_5, x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_unbox(x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec(x_96);
lean_inc(x_3);
x_100 = l_Lean_MessageData_ofExpr(x_3);
x_101 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_102 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
x_104 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_4);
x_105 = l_Lean_MessageData_ofExpr(x_4);
x_106 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
x_107 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_108 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_MessageData_ofExpr(x_5);
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Lean_MessageData_ofExpr(x_1);
x_114 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
x_115 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = 0;
lean_inc(x_9);
x_118 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_116, x_117, x_7, x_8, x_9, x_10, x_99);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_119, x_7, x_8, x_9, x_10, x_120);
lean_dec(x_119);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_121, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_121, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_128 = x_121;
} else {
 lean_dec_ref(x_121);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(1, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_5);
lean_dec(x_1);
x_130 = lean_ctor_get(x_96, 1);
lean_inc(x_130);
lean_dec(x_96);
x_131 = lean_box(0);
x_132 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_131, x_7, x_8, x_9, x_10, x_130);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_132, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_132, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_139 = x_132;
} else {
 lean_dec_ref(x_132);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = lean_ctor_get(x_96, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_96, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_143 = x_96;
} else {
 lean_dec_ref(x_96);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
return x_144;
}
}
}
else
{
lean_object* x_145; uint64_t x_146; uint8_t x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; uint8_t x_155; uint8_t x_156; uint8_t x_157; uint8_t x_158; uint8_t x_159; uint8_t x_160; uint8_t x_161; uint8_t x_162; uint8_t x_163; uint8_t x_164; uint8_t x_165; uint8_t x_166; uint8_t x_167; uint8_t x_168; uint8_t x_169; uint8_t x_170; uint8_t x_171; uint8_t x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; uint64_t x_176; uint64_t x_177; uint64_t x_178; uint64_t x_179; uint64_t x_180; lean_object* x_181; lean_object* x_182; 
x_145 = lean_ctor_get(x_7, 0);
x_146 = lean_ctor_get_uint64(x_7, sizeof(void*)*7);
x_147 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 8);
x_148 = lean_ctor_get(x_7, 1);
x_149 = lean_ctor_get(x_7, 2);
x_150 = lean_ctor_get(x_7, 3);
x_151 = lean_ctor_get(x_7, 4);
x_152 = lean_ctor_get(x_7, 5);
x_153 = lean_ctor_get(x_7, 6);
x_154 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 9);
x_155 = lean_ctor_get_uint8(x_7, sizeof(void*)*7 + 10);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
lean_inc(x_150);
lean_inc(x_149);
lean_inc(x_148);
lean_inc(x_145);
lean_dec(x_7);
x_156 = lean_ctor_get_uint8(x_145, 0);
x_157 = lean_ctor_get_uint8(x_145, 1);
x_158 = lean_ctor_get_uint8(x_145, 2);
x_159 = lean_ctor_get_uint8(x_145, 3);
x_160 = lean_ctor_get_uint8(x_145, 4);
x_161 = lean_ctor_get_uint8(x_145, 5);
x_162 = lean_ctor_get_uint8(x_145, 6);
x_163 = lean_ctor_get_uint8(x_145, 7);
x_164 = lean_ctor_get_uint8(x_145, 8);
x_165 = lean_ctor_get_uint8(x_145, 10);
x_166 = lean_ctor_get_uint8(x_145, 11);
x_167 = lean_ctor_get_uint8(x_145, 12);
x_168 = lean_ctor_get_uint8(x_145, 13);
x_169 = lean_ctor_get_uint8(x_145, 14);
x_170 = lean_ctor_get_uint8(x_145, 15);
x_171 = lean_ctor_get_uint8(x_145, 16);
x_172 = lean_ctor_get_uint8(x_145, 17);
if (lean_is_exclusive(x_145)) {
 x_173 = x_145;
} else {
 lean_dec_ref(x_145);
 x_173 = lean_box(0);
}
x_174 = 3;
if (lean_is_scalar(x_173)) {
 x_175 = lean_alloc_ctor(0, 0, 18);
} else {
 x_175 = x_173;
}
lean_ctor_set_uint8(x_175, 0, x_156);
lean_ctor_set_uint8(x_175, 1, x_157);
lean_ctor_set_uint8(x_175, 2, x_158);
lean_ctor_set_uint8(x_175, 3, x_159);
lean_ctor_set_uint8(x_175, 4, x_160);
lean_ctor_set_uint8(x_175, 5, x_161);
lean_ctor_set_uint8(x_175, 6, x_162);
lean_ctor_set_uint8(x_175, 7, x_163);
lean_ctor_set_uint8(x_175, 8, x_164);
lean_ctor_set_uint8(x_175, 9, x_174);
lean_ctor_set_uint8(x_175, 10, x_165);
lean_ctor_set_uint8(x_175, 11, x_166);
lean_ctor_set_uint8(x_175, 12, x_167);
lean_ctor_set_uint8(x_175, 13, x_168);
lean_ctor_set_uint8(x_175, 14, x_169);
lean_ctor_set_uint8(x_175, 15, x_170);
lean_ctor_set_uint8(x_175, 16, x_171);
lean_ctor_set_uint8(x_175, 17, x_172);
x_176 = 2;
x_177 = lean_uint64_shift_right(x_146, x_176);
x_178 = lean_uint64_shift_left(x_177, x_176);
x_179 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
x_180 = lean_uint64_lor(x_178, x_179);
x_181 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_181, 0, x_175);
lean_ctor_set(x_181, 1, x_148);
lean_ctor_set(x_181, 2, x_149);
lean_ctor_set(x_181, 3, x_150);
lean_ctor_set(x_181, 4, x_151);
lean_ctor_set(x_181, 5, x_152);
lean_ctor_set(x_181, 6, x_153);
lean_ctor_set_uint64(x_181, sizeof(void*)*7, x_180);
lean_ctor_set_uint8(x_181, sizeof(void*)*7 + 8, x_147);
lean_ctor_set_uint8(x_181, sizeof(void*)*7 + 9, x_154);
lean_ctor_set_uint8(x_181, sizeof(void*)*7 + 10, x_155);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_181);
lean_inc(x_1);
lean_inc(x_5);
x_182 = l_Lean_Meta_isExprDefEq(x_5, x_1, x_181, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_unbox(x_183);
lean_dec(x_183);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_185 = lean_ctor_get(x_182, 1);
lean_inc(x_185);
lean_dec(x_182);
lean_inc(x_3);
x_186 = l_Lean_MessageData_ofExpr(x_3);
x_187 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_188 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
x_189 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
x_190 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
lean_inc(x_4);
x_191 = l_Lean_MessageData_ofExpr(x_4);
x_192 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
x_193 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_194 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
x_195 = l_Lean_MessageData_ofExpr(x_5);
x_196 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
x_197 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_198 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_197);
x_199 = l_Lean_MessageData_ofExpr(x_1);
x_200 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
x_201 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_202 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
x_203 = 0;
lean_inc(x_9);
x_204 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_202, x_203, x_181, x_8, x_9, x_10, x_185);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_205, x_181, x_8, x_9, x_10, x_206);
lean_dec(x_205);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_210 = x_207;
} else {
 lean_dec_ref(x_207);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_212 = lean_ctor_get(x_207, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_207, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_214 = x_207;
} else {
 lean_dec_ref(x_207);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_212);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
lean_dec(x_5);
lean_dec(x_1);
x_216 = lean_ctor_get(x_182, 1);
lean_inc(x_216);
lean_dec(x_182);
x_217 = lean_box(0);
x_218 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_6, x_2, x_3, x_4, x_217, x_181, x_8, x_9, x_10, x_216);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_221 = x_218;
} else {
 lean_dec_ref(x_218);
 x_221 = lean_box(0);
}
if (lean_is_scalar(x_221)) {
 x_222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_222 = x_221;
}
lean_ctor_set(x_222, 0, x_219);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_223 = lean_ctor_get(x_218, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_225 = x_218;
} else {
 lean_dec_ref(x_218);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_223);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
}
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_181);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_227 = lean_ctor_get(x_182, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_182, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_229 = x_182;
} else {
 lean_dec_ref(x_182);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_228);
return x_230;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nthe type of\n  ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nis not a morphism.", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = l_Lean_MessageData_ofExpr(x_1);
x_10 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_MessageData_ofExpr(x_2);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_17, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Quiver", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Hom", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1;
x_2 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_11 = lean_infer_type(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_instantiateMVarsIfMVarApp(x_12, x_6, x_7, x_8, x_9, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_cleanupAnnotations(x_15);
x_18 = l_Lean_Expr_isApp(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_4, x_1, x_19, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = l_Lean_Expr_appArg(x_17, lean_box(0));
x_22 = l_Lean_Expr_appFnCleanup(x_17, lean_box(0));
x_23 = l_Lean_Expr_isApp(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
x_25 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_4, x_1, x_24, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = l_Lean_Expr_appArg(x_22, lean_box(0));
x_27 = l_Lean_Expr_appFnCleanup(x_22, lean_box(0));
x_28 = l_Lean_Expr_isApp(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_4, x_1, x_29, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_Expr_appFnCleanup(x_27, lean_box(0));
x_32 = l_Lean_Expr_isApp(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_box(0);
x_34 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_4, x_1, x_33, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = l_Lean_Expr_appFnCleanup(x_31, lean_box(0));
x_36 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3;
x_37 = l_Lean_Expr_isConstOf(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_26);
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_box(0);
x_39 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_4, x_1, x_38, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_39;
}
else
{
lean_object* x_40; 
x_40 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2(x_2, x_3, x_4, x_1, x_26, x_21, x_6, x_7, x_8, x_9, x_16);
return x_40;
}
}
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_11);
if (x_41 == 0)
{
return x_11;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_11, 0);
x_43 = lean_ctor_get(x_11, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_11);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint64_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_15 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_8, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 4);
lean_inc(x_19);
x_20 = lean_ctor_get(x_8, 5);
lean_inc(x_20);
x_21 = lean_ctor_get(x_8, 6);
lean_inc(x_21);
x_22 = !lean_is_exclusive(x_13);
if (x_22 == 0)
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_24 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_25 = 3;
lean_ctor_set_uint8(x_13, 9, x_25);
x_26 = 2;
x_27 = lean_uint64_shift_right(x_14, x_26);
x_28 = lean_uint64_shift_left(x_27, x_26);
x_29 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
x_30 = lean_uint64_lor(x_28, x_29);
x_31 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_31, 0, x_13);
lean_ctor_set(x_31, 1, x_16);
lean_ctor_set(x_31, 2, x_17);
lean_ctor_set(x_31, 3, x_18);
lean_ctor_set(x_31, 4, x_19);
lean_ctor_set(x_31, 5, x_20);
lean_ctor_set(x_31, 6, x_21);
lean_ctor_set_uint64(x_31, sizeof(void*)*7, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 8, x_15);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 9, x_23);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 10, x_24);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_31);
lean_inc(x_1);
lean_inc(x_6);
x_32 = l_Lean_Meta_isExprDefEq(x_6, x_1, x_31, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
lean_inc(x_3);
x_36 = l_Lean_MessageData_ofExpr(x_3);
x_37 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_4);
x_41 = l_Lean_MessageData_ofExpr(x_4);
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_MessageData_ofExpr(x_6);
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_MessageData_ofExpr(x_1);
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = 0;
lean_inc(x_10);
x_54 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_52, x_53, x_31, x_9, x_10, x_11, x_35);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_57 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_7, x_2, x_3, x_4, x_55, x_31, x_9, x_10, x_11, x_56);
lean_dec(x_55);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_apply_6(x_5, x_58, x_8, x_9, x_10, x_11, x_59);
return x_60;
}
else
{
uint8_t x_61; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_61 = !lean_is_exclusive(x_57);
if (x_61 == 0)
{
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_57);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_6);
lean_dec(x_1);
x_65 = lean_ctor_get(x_32, 1);
lean_inc(x_65);
lean_dec(x_32);
x_66 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_67 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_7, x_2, x_3, x_4, x_66, x_31, x_9, x_10, x_11, x_65);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_apply_6(x_5, x_68, x_8, x_9, x_10, x_11, x_69);
return x_70;
}
else
{
uint8_t x_71; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_67);
if (x_71 == 0)
{
return x_67;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_67, 0);
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_67);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_31);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_32);
if (x_75 == 0)
{
return x_32;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_32, 0);
x_77 = lean_ctor_get(x_32, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_32);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; uint8_t x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; lean_object* x_99; uint64_t x_100; uint64_t x_101; uint64_t x_102; uint64_t x_103; uint64_t x_104; lean_object* x_105; lean_object* x_106; 
x_79 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_80 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
x_81 = lean_ctor_get_uint8(x_13, 0);
x_82 = lean_ctor_get_uint8(x_13, 1);
x_83 = lean_ctor_get_uint8(x_13, 2);
x_84 = lean_ctor_get_uint8(x_13, 3);
x_85 = lean_ctor_get_uint8(x_13, 4);
x_86 = lean_ctor_get_uint8(x_13, 5);
x_87 = lean_ctor_get_uint8(x_13, 6);
x_88 = lean_ctor_get_uint8(x_13, 7);
x_89 = lean_ctor_get_uint8(x_13, 8);
x_90 = lean_ctor_get_uint8(x_13, 10);
x_91 = lean_ctor_get_uint8(x_13, 11);
x_92 = lean_ctor_get_uint8(x_13, 12);
x_93 = lean_ctor_get_uint8(x_13, 13);
x_94 = lean_ctor_get_uint8(x_13, 14);
x_95 = lean_ctor_get_uint8(x_13, 15);
x_96 = lean_ctor_get_uint8(x_13, 16);
x_97 = lean_ctor_get_uint8(x_13, 17);
lean_dec(x_13);
x_98 = 3;
x_99 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_99, 0, x_81);
lean_ctor_set_uint8(x_99, 1, x_82);
lean_ctor_set_uint8(x_99, 2, x_83);
lean_ctor_set_uint8(x_99, 3, x_84);
lean_ctor_set_uint8(x_99, 4, x_85);
lean_ctor_set_uint8(x_99, 5, x_86);
lean_ctor_set_uint8(x_99, 6, x_87);
lean_ctor_set_uint8(x_99, 7, x_88);
lean_ctor_set_uint8(x_99, 8, x_89);
lean_ctor_set_uint8(x_99, 9, x_98);
lean_ctor_set_uint8(x_99, 10, x_90);
lean_ctor_set_uint8(x_99, 11, x_91);
lean_ctor_set_uint8(x_99, 12, x_92);
lean_ctor_set_uint8(x_99, 13, x_93);
lean_ctor_set_uint8(x_99, 14, x_94);
lean_ctor_set_uint8(x_99, 15, x_95);
lean_ctor_set_uint8(x_99, 16, x_96);
lean_ctor_set_uint8(x_99, 17, x_97);
x_100 = 2;
x_101 = lean_uint64_shift_right(x_14, x_100);
x_102 = lean_uint64_shift_left(x_101, x_100);
x_103 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1;
x_104 = lean_uint64_lor(x_102, x_103);
x_105 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_105, 0, x_99);
lean_ctor_set(x_105, 1, x_16);
lean_ctor_set(x_105, 2, x_17);
lean_ctor_set(x_105, 3, x_18);
lean_ctor_set(x_105, 4, x_19);
lean_ctor_set(x_105, 5, x_20);
lean_ctor_set(x_105, 6, x_21);
lean_ctor_set_uint64(x_105, sizeof(void*)*7, x_104);
lean_ctor_set_uint8(x_105, sizeof(void*)*7 + 8, x_15);
lean_ctor_set_uint8(x_105, sizeof(void*)*7 + 9, x_79);
lean_ctor_set_uint8(x_105, sizeof(void*)*7 + 10, x_80);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_105);
lean_inc(x_1);
lean_inc(x_6);
x_106 = l_Lean_Meta_isExprDefEq(x_6, x_1, x_105, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; uint8_t x_108; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_unbox(x_107);
lean_dec(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
lean_dec(x_106);
lean_inc(x_3);
x_110 = l_Lean_MessageData_ofExpr(x_3);
x_111 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3;
x_114 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
lean_inc(x_4);
x_115 = l_Lean_MessageData_ofExpr(x_4);
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6;
x_118 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_MessageData_ofExpr(x_6);
x_120 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8;
x_122 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_Lean_MessageData_ofExpr(x_1);
x_124 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_126 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
x_127 = 0;
lean_inc(x_10);
x_128 = l_Lean_log___at_Lean_Meta_LazyDiscrTree_findImportMatches___spec__6(x_126, x_127, x_105, x_9, x_10, x_11, x_109);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_131 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_7, x_2, x_3, x_4, x_129, x_105, x_9, x_10, x_11, x_130);
lean_dec(x_129);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_134 = lean_apply_6(x_5, x_132, x_8, x_9, x_10, x_11, x_133);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_135 = lean_ctor_get(x_131, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_131, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_137 = x_131;
} else {
 lean_dec_ref(x_131);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_6);
lean_dec(x_1);
x_139 = lean_ctor_get(x_106, 1);
lean_inc(x_139);
lean_dec(x_106);
x_140 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_141 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_7, x_2, x_3, x_4, x_140, x_105, x_9, x_10, x_11, x_139);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_apply_6(x_5, x_142, x_8, x_9, x_10, x_11, x_143);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_145 = lean_ctor_get(x_141, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_141, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_147 = x_141;
} else {
 lean_dec_ref(x_141);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_105);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_149 = lean_ctor_get(x_106, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_106, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_151 = x_106;
} else {
 lean_dec_ref(x_106);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_10 = l_Lean_MessageData_ofExpr(x_1);
x_11 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_MessageData_ofExpr(x_2);
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_18, x_5, x_6, x_7, x_8, x_9);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_12 = lean_infer_type(x_5, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_1);
lean_inc(x_3);
x_15 = lean_alloc_closure((void*)(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___boxed), 10, 4);
lean_closure_set(x_15, 0, x_6);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_4);
lean_closure_set(x_15, 3, x_1);
x_16 = l_Lean_Meta_instantiateMVarsIfMVarApp(x_13, x_7, x_8, x_9, x_10, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Expr_cleanupAnnotations(x_17);
x_20 = l_Lean_Expr_isApp(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_5, x_15, x_21, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_15);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = l_Lean_Expr_appArg(x_19, lean_box(0));
x_24 = l_Lean_Expr_appFnCleanup(x_19, lean_box(0));
x_25 = l_Lean_Expr_isApp(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_box(0);
x_27 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_5, x_15, x_26, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_15);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_Lean_Expr_appArg(x_24, lean_box(0));
x_29 = l_Lean_Expr_appFnCleanup(x_24, lean_box(0));
x_30 = l_Lean_Expr_isApp(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_box(0);
x_32 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_5, x_15, x_31, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_15);
return x_32;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Expr_appFnCleanup(x_29, lean_box(0));
x_34 = l_Lean_Expr_isApp(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_box(0);
x_36 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_5, x_15, x_35, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_15);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = l_Lean_Expr_appFnCleanup(x_33, lean_box(0));
x_38 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3;
x_39 = l_Lean_Expr_isConstOf(x_37, x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_28);
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_box(0);
x_41 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_5, x_15, x_40, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_15);
return x_41;
}
else
{
lean_object* x_42; 
x_42 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__5(x_2, x_3, x_1, x_5, x_15, x_28, x_23, x_7, x_8, x_9, x_10, x_18);
return x_42;
}
}
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_12);
if (x_43 == 0)
{
return x_12;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_12, 0);
x_45 = lean_ctor_get(x_12, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_12);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" is not a composition.", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_Lean_MessageData_ofExpr(x_1);
x_9 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_12, x_3, x_4, x_5, x_6, x_7);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_7 = l_Lean_Meta_instantiateMVarsIfMVarApp(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Expr_cleanupAnnotations(x_8);
x_11 = l_Lean_Expr_isApp(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_12, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Expr_appArg(x_10, lean_box(0));
x_15 = l_Lean_Expr_appFnCleanup(x_10, lean_box(0));
x_16 = l_Lean_Expr_isApp(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_17, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l_Lean_Expr_appArg(x_15, lean_box(0));
x_20 = l_Lean_Expr_appFnCleanup(x_15, lean_box(0));
x_21 = l_Lean_Expr_isApp(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_14);
x_22 = lean_box(0);
x_23 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_22, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Expr_appArg(x_20, lean_box(0));
x_25 = l_Lean_Expr_appFnCleanup(x_20, lean_box(0));
x_26 = l_Lean_Expr_isApp(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
x_27 = lean_box(0);
x_28 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_27, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = l_Lean_Expr_appArg(x_25, lean_box(0));
x_30 = l_Lean_Expr_appFnCleanup(x_25, lean_box(0));
x_31 = l_Lean_Expr_isApp(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
x_32 = lean_box(0);
x_33 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_32, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = l_Lean_Expr_appArg(x_30, lean_box(0));
x_35 = l_Lean_Expr_appFnCleanup(x_30, lean_box(0));
x_36 = l_Lean_Expr_isApp(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
x_37 = lean_box(0);
x_38 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_37, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Expr_appFnCleanup(x_35, lean_box(0));
x_40 = l_Lean_Expr_isApp(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_39);
lean_dec(x_34);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
x_41 = lean_box(0);
x_42 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_41, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = l_Lean_Expr_appFnCleanup(x_39, lean_box(0));
x_44 = l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4;
x_45 = l_Lean_Expr_isConstOf(x_43, x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_34);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
x_46 = lean_box(0);
x_47 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_46, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__7(x_1, x_34, x_29, x_24, x_19, x_14, x_2, x_3, x_4, x_5, x_9);
return x_48;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Tactic_CheckCompositions_checkComposition), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1;
x_8 = l_Mathlib_Tactic_CheckCompositions_forEachComposition(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getMainTarget(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1;
x_14 = l_Mathlib_Tactic_CheckCompositions_forEachComposition(x_11, x_13, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("CheckCompositions", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticCheck_compositions", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1;
x_2 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2;
x_3 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3;
x_4 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("check_compositions", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_CheckCompositions___aux__Mathlib__Tactic__CategoryTheory__CheckCompositions______elabRules__Mathlib__Tactic__CheckCompositions__tacticCheck__compositions__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5;
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_LeanSearchClient_leanSearchTacticImpl___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1;
x_15 = l_Lean_Elab_Tactic_withMainContext___rarg(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Category_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_CategoryTheory_CheckCompositions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Category_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__1);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__2);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__3);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___lambda__1___closed__4);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__1);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__2);
l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_forEachComposition___closed__3);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__1);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__2);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__3);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__4);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__5);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__6);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__7);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__8);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__9);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__1___closed__10);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__1();
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__2);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__2___closed__3);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__1);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__2);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__3);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__3___closed__4);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__1);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__2);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__4___closed__3);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__1);
l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkComposition___lambda__8___closed__2);
l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkCompositions___closed__1);
l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_checkCompositionsTac___closed__1);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__1);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__2);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__3);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__4);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__5);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__6);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__7);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8 = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions___closed__8);
l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions = _init_l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions();
lean_mark_persistent(l_Mathlib_Tactic_CheckCompositions_tacticCheck__compositions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
