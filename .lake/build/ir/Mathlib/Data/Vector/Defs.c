// Lean compiler output
// Module: Mathlib.Data.Vector.Defs
// Imports: Init Mathlib.Data.List.Defs Mathlib.Tactic.Common
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
LEAN_EXPORT lean_object* l_List_Vector_drop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_elim___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_drop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_cons___boxed(lean_object*, lean_object*);
lean_object* l_List_mapAccumr_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_congr___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map_u2082___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Vector_pmap___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_take___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_pmap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx___boxed(lean_object*, lean_object*);
lean_object* l_List_zipWithTR_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_tail___rarg___boxed(lean_object*);
lean_object* l_List_mapAccumr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_head(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map(lean_object*, lean_object*, lean_object*);
uint8_t l_List_hasDecEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_tail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_shiftRightFill(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_toList___boxed(lean_object*, lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_congr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Vector_pmap___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_head___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_elim___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_length___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_tail___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg(lean_object*, lean_object*);
lean_object* l_List_replicateTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_take___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_drop(lean_object*, lean_object*);
lean_object* l_List_eraseIdxTR_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_Vector_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_length___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_replicate(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_elim(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_takeTR_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_congr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_head___boxed(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_toList___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_shiftRightFill___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map_u2082___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_nil(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_length(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_drop___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_pmap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_replicate___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_tail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_cons___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_get___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_head___rarg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_toList(lean_object*, lean_object*);
static lean_object* l_List_Vector_map_u2082___rarg___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_map_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_cons(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Vector_append___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_Vector_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_List_hasDecEq___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_instDecidableEq___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_Vector_instDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instDecidableEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_instDecidableEq(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_nil(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_cons___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_cons(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_cons___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_cons___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_cons(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_length___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_Vector_length(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Vector_length___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_length___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_length___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_head___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_head(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_head___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_head___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_Vector_head___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_head___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_head(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_tail___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_tail(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_tail___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_tail___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_Vector_tail___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_tail___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_tail(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_toList___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_Vector_toList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_toList___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_toList___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_Vector_toList___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_toList___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_toList(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_get___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_get(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_get___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_get___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_get___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_get___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_get(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_append___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_appendTR___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_append(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_Vector_append___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_append___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Vector_append(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_elim___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_elim(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_elim___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_elim___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Vector_elim___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_mapTR_loop___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_Vector_map___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Vector_map(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Vector_pmap___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_6, lean_box(0));
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_8);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_apply_2(x_1, x_10, lean_box(0));
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Vector_pmap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_Vector_pmap___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_pmap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___at_List_Vector_pmap___spec__1___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_pmap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_Vector_pmap___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_pmap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_pmap(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_List_Vector_map_u2082___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_Vector_map_u2082___rarg___closed__1;
x_5 = l_List_zipWithTR_go___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_Vector_map_u2082___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_map_u2082___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_map_u2082(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_replicate___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_replicateTR___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_replicate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Vector_replicate___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_drop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_drop___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_drop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_drop___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_drop___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_drop___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_drop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_drop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_take___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_Vector_map_u2082___rarg___closed__1;
lean_inc(x_2);
x_4 = l_List_takeTR_go___rarg(x_2, x_2, x_1, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_take(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_take___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_take___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_take(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_Vector_map_u2082___rarg___closed__1;
lean_inc(x_2);
x_4 = l_List_eraseIdxTR_go___rarg(x_2, x_2, x_1, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_eraseIdx___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_eraseIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_eraseIdx(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_nat_add(x_6, x_5);
x_8 = lean_nat_mod(x_3, x_7);
lean_dec(x_7);
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_alloc_closure((void*)(l_List_Vector_ofFn___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_2);
x_11 = l_List_Vector_ofFn___rarg(x_6, x_10);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_2);
x_13 = lean_box(0);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_ofFn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Vector_ofFn___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_ofFn___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_ofFn___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_ofFn___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_congr___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_Vector_congr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_Vector_congr___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_congr___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_Vector_congr___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_congr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_congr(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_List_mapAccumr___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_Vector_mapAccumr___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_mapAccumr(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_List_mapAccumr_u2082___rarg(x_1, x_2, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_List_Vector_mapAccumr_u2082___rarg), 4, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_mapAccumr_u2082___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_Vector_mapAccumr_u2082(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_nat_dec_le(x_1, x_3);
lean_inc(x_3);
x_6 = l_List_drop___rarg(x_3, x_2);
if (x_5 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = l_List_replicateTR___rarg(x_3, x_4);
x_8 = l_List_appendTR___rarg(x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = l_List_replicateTR___rarg(x_1, x_4);
x_10 = l_List_appendTR___rarg(x_6, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Vector_shiftLeftFill___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_shiftLeftFill___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_Vector_shiftLeftFill___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Vector_shiftRightFill___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_nat_dec_le(x_1, x_3);
x_6 = lean_nat_sub(x_1, x_3);
x_7 = l_List_Vector_take___rarg(x_6, x_2);
if (x_5 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = l_List_replicateTR___rarg(x_3, x_4);
x_9 = l_List_appendTR___rarg(x_8, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = l_List_replicateTR___rarg(x_1, x_4);
x_11 = l_List_appendTR___rarg(x_10, x_7);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_List_Vector_shiftRightFill(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Vector_shiftRightFill___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get___rarg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_Vector_instGetElemNatLt___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_Vector_instGetElemNatLt___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Vector_instGetElemNatLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_Vector_instGetElemNatLt(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Vector_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_Vector_map_u2082___rarg___closed__1 = _init_l_List_Vector_map_u2082___rarg___closed__1();
lean_mark_persistent(l_List_Vector_map_u2082___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
