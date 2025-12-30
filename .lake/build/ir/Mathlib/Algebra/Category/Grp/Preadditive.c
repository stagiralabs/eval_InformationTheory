// Lean compiler output
// Module: Mathlib.Algebra.Category.Grp.Preadditive
// Imports: Init Mathlib.Algebra.Category.Grp.Basic Mathlib.CategoryTheory.Preadditive.Basic
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
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___boxed(lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom(lean_object*);
lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddCommGrp_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_AddMonoidHom_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instNegHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instAddCommGroupHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_homAddEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_AddCommGrp_instPreadditive___closed__1;
lean_object* l_AddMonoid_toAddZeroClass___rarg(lean_object*);
static lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1;
LEAN_EXPORT lean_object* l_AddCommGrp_instPreadditive;
LEAN_EXPORT lean_object* l_AddCommGrp_instSubHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddCommGrp_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSubHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom(lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2;
LEAN_EXPORT lean_object* l_AddCommGrp_instNegHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_AddMonoidHom_add___elambda__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGrp_instAddHom___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_instAddHom___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instAddHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGrp_instAddHom(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_AddCommGrp_instZeroHom__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGrp_instZeroHom__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddCommGrp_instZeroHom__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instZeroHom__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGrp_instZeroHom__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_5, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_AddCommGrp_instSMulNatHom___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGrp_instSMulNatHom___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulNatHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGrp_instSMulNatHom(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instNegHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_AddMonoid_toAddZeroClass___rarg(x_4);
x_6 = l_AddMonoidHom_instNeg___elambda__1___rarg(x_5, x_2, x_3);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instNegHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCommGrp_instNegHom(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSubHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_AddMonoid_toAddZeroClass___rarg(x_5);
x_7 = l_AddMonoidHom_instSub___elambda__1___rarg(x_6, x_2, x_3, x_4);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSubHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AddCommGrp_instSubHom(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_3, x_4);
x_7 = lean_apply_2(x_5, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCommGrp_instSMulIntHom___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instSMulIntHom___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddCommGrp_instSMulIntHom(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_instAddCommGroupHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_AddCommGrp_instAddHom___rarg___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_2);
x_4 = l_AddCommGrp_instZeroHom__1___rarg(x_2);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_AddCommGrp_instSMulNatHom___rarg), 3, 1);
lean_closure_set(x_5, 0, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_AddCommGrp_instNegHom___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_AddCommGrp_instSubHom___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_closure((void*)(l_AddCommGrp_instSMulIntHom___rarg), 4, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_9, 0, x_5);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_7);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
}
static lean_object* _init_l_AddCommGrp_instPreadditive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommGrp_instAddCommGroupHom), 2, 0);
return x_1;
}
}
static lean_object* _init_l_AddCommGrp_instPreadditive() {
_start:
{
lean_object* x_1; 
x_1 = l_AddCommGrp_instPreadditive___closed__1;
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommGrp_instConcreteCategoryAddMonoidHomCarrier___elambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddCommGrp_instConcreteCategoryAddMonoidHomCarrier___elambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ConcreteCategory_homEquiv___elambda__2___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2;
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_ConcreteCategory_homEquiv___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddCommGrp_homAddEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Grp_Preadditive(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddCommGrp_instPreadditive___closed__1 = _init_l_AddCommGrp_instPreadditive___closed__1();
lean_mark_persistent(l_AddCommGrp_instPreadditive___closed__1);
l_AddCommGrp_instPreadditive = _init_l_AddCommGrp_instPreadditive();
lean_mark_persistent(l_AddCommGrp_instPreadditive);
l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1 = _init_l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__1);
l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2 = _init_l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2();
lean_mark_persistent(l_CategoryTheory_ConcreteCategory_homEquiv___at_AddCommGrp_homAddEquiv___spec__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
