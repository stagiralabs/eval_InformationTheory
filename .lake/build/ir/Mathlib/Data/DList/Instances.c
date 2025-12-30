// Lean compiler output
// Module: Mathlib.Data.DList.Instances
// Imports: Init Batteries.Data.DList.Lemmas Mathlib.Control.Traversable.Equiv Mathlib.Control.Traversable.Instances
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
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__2(lean_object*);
extern lean_object* l_List_instFunctor;
lean_object* l_Equiv_traversable___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Batteries_DList_empty___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Batteries_instTraversableDList;
static lean_object* l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__2___rarg(lean_object*);
static lean_object* l_Batteries_instInhabitedDList__mathlib___closed__1;
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList(lean_object*);
static lean_object* l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1;
lean_object* l_Equiv_functor___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instTraversableList;
lean_object* l_Batteries_DList_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_functor___at_Batteries_instTraversableDList___spec__2;
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__1___rarg(lean_object*);
static lean_object* l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2;
lean_object* l_Equiv_functor___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1;
lean_object* l_Batteries_DList_ofList___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3;
LEAN_EXPORT lean_object* l_Batteries_instInhabitedDList__mathlib(lean_object*);
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__1(lean_object*);
static lean_object* l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4;
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Batteries_DList_toList___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Batteries_DList_listEquivDList___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Batteries_DList_ofList___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Batteries_DList_listEquivDList___elambda__2___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Batteries_DList_listEquivDList(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Batteries_DList_listEquivDList___elambda__2___rarg), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Batteries_DList_listEquivDList___elambda__1___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Batteries_DList_listEquivDList), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1;
x_2 = l_List_instFunctor;
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__2___rarg), 6, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1;
x_2 = l_List_instFunctor;
x_3 = lean_alloc_closure((void*)(l_Equiv_functor___elambda__1___rarg), 6, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2;
x_2 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4;
return x_1;
}
}
static lean_object* _init_l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1;
x_2 = l_instTraversableList;
x_3 = lean_alloc_closure((void*)(l_Equiv_traversable___elambda__1___rarg), 8, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Equiv_functor___at_Batteries_instTraversableDList___spec__2;
x_2 = l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Batteries_instTraversableDList() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1;
return x_1;
}
}
static lean_object* _init_l_Batteries_instInhabitedDList__mathlib___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Batteries_DList_empty___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Batteries_instInhabitedDList__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Batteries_instInhabitedDList__mathlib___closed__1;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_DList_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Traversable_Instances(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_DList_Instances(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_DList_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Traversable_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1 = _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1();
lean_mark_persistent(l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__1);
l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2 = _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2();
lean_mark_persistent(l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__2);
l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3 = _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3();
lean_mark_persistent(l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__3);
l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4 = _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4();
lean_mark_persistent(l_Equiv_functor___at_Batteries_instTraversableDList___spec__2___closed__4);
l_Equiv_functor___at_Batteries_instTraversableDList___spec__2 = _init_l_Equiv_functor___at_Batteries_instTraversableDList___spec__2();
lean_mark_persistent(l_Equiv_functor___at_Batteries_instTraversableDList___spec__2);
l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1 = _init_l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1();
lean_mark_persistent(l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1___closed__1);
l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1 = _init_l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1();
lean_mark_persistent(l_Equiv_traversable___at_Batteries_instTraversableDList___spec__1);
l_Batteries_instTraversableDList = _init_l_Batteries_instTraversableDList();
lean_mark_persistent(l_Batteries_instTraversableDList);
l_Batteries_instInhabitedDList__mathlib___closed__1 = _init_l_Batteries_instInhabitedDList__mathlib___closed__1();
lean_mark_persistent(l_Batteries_instInhabitedDList__mathlib___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
