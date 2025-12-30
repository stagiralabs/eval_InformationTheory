// Lean compiler output
// Module: Mathlib.Data.String.Basic
// Imports: Init Batteries.Data.String.Lemmas Mathlib.Data.List.Lex Mathlib.Data.Char Mathlib.Algebra.Order.Group.Nat
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
LEAN_EXPORT uint8_t l_String_ltb(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
static lean_object* l_String_instLinearOrder___closed__8;
static lean_object* l_String_instLinearOrder___closed__1;
LEAN_EXPORT uint8_t l_String_decidableLE(lean_object*, lean_object*);
static lean_object* l_String_instLinearOrder___closed__2;
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_String_instLinearOrder___closed__7;
uint8_t l_instDecidableNot___rarg(uint8_t);
static lean_object* l_String_instLinearOrder___closed__4;
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_ltb_inductionOn(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Basic_0__String_Iterator_remainingBytes_match__1_splitter___rarg(lean_object*, lean_object*);
static lean_object* l_String_instLinearOrder___closed__6;
LEAN_EXPORT lean_object* l_String_LT_x27;
LEAN_EXPORT lean_object* l_String_instLinearOrder___lambda__1(lean_object*, lean_object*);
static lean_object* l_String_instLinearOrder___closed__5;
LEAN_EXPORT lean_object* l_String_decidableLT_x27___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_decidableLT_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLinearOrder;
LEAN_EXPORT lean_object* l_String_instLinearOrder___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1___boxed(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
static lean_object* l_String_instLinearOrder___closed__3;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Basic_0__String_Iterator_remainingBytes_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_String_ltb_inductionOn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_LE;
LEAN_EXPORT lean_object* l_String_decidableLE___boxed(lean_object*, lean_object*);
lean_object* l_instOrdString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_ltb___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_ltb(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_string_utf8_byte_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_string_utf8_byte_size(x_10);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_14 = 1;
return x_14;
}
else
{
uint32_t x_15; uint32_t x_16; uint8_t x_17; 
x_15 = lean_string_utf8_get(x_10, x_11);
x_16 = lean_string_utf8_get(x_4, x_5);
x_17 = lean_uint32_dec_eq(x_15, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_18 = lean_uint32_dec_lt(x_15, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_string_utf8_next(x_10, x_11);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_19);
x_20 = lean_string_utf8_next(x_4, x_5);
lean_dec(x_5);
lean_ctor_set(x_2, 1, x_20);
goto _start;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_string_utf8_byte_size(x_22);
x_25 = lean_nat_dec_lt(x_23, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_22);
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_26 = 1;
return x_26;
}
else
{
uint32_t x_27; uint32_t x_28; uint8_t x_29; 
x_27 = lean_string_utf8_get(x_22, x_23);
x_28 = lean_string_utf8_get(x_4, x_5);
x_29 = lean_uint32_dec_eq(x_27, x_28);
if (x_29 == 0)
{
uint8_t x_30; 
lean_dec(x_23);
lean_dec(x_22);
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
x_30 = lean_uint32_dec_lt(x_27, x_28);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_string_utf8_next(x_22, x_23);
lean_dec(x_23);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_string_utf8_next(x_4, x_5);
lean_dec(x_5);
lean_ctor_set(x_2, 1, x_33);
x_1 = x_32;
goto _start;
}
}
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_2, 0);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_2);
x_37 = lean_string_utf8_byte_size(x_35);
x_38 = lean_nat_dec_lt(x_36, x_37);
lean_dec(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_1);
x_39 = 0;
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_42 = x_1;
} else {
 lean_dec_ref(x_1);
 x_42 = lean_box(0);
}
x_43 = lean_string_utf8_byte_size(x_40);
x_44 = lean_nat_dec_lt(x_41, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
uint8_t x_45; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_36);
lean_dec(x_35);
x_45 = 1;
return x_45;
}
else
{
uint32_t x_46; uint32_t x_47; uint8_t x_48; 
x_46 = lean_string_utf8_get(x_40, x_41);
x_47 = lean_string_utf8_get(x_35, x_36);
x_48 = lean_uint32_dec_eq(x_46, x_47);
if (x_48 == 0)
{
uint8_t x_49; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_36);
lean_dec(x_35);
x_49 = lean_uint32_dec_lt(x_46, x_47);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_string_utf8_next(x_40, x_41);
lean_dec(x_41);
if (lean_is_scalar(x_42)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_42;
}
lean_ctor_set(x_51, 0, x_40);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_string_utf8_next(x_35, x_36);
lean_dec(x_36);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_35);
lean_ctor_set(x_53, 1, x_52);
x_1 = x_51;
x_2 = x_53;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_ltb___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_ltb(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_String_LT_x27() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_String_decidableLT_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
x_6 = l_String_ltb(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_String_decidableLT_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_decidableLT_x27(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_String_ltb_inductionOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_string_utf8_byte_size(x_8);
x_11 = lean_nat_dec_lt(x_9, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_5(x_6, x_12, x_8, x_13, x_9, lean_box(0));
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_string_utf8_byte_size(x_16);
x_19 = lean_nat_dec_lt(x_17, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_free_object(x_1);
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_apply_6(x_5, x_16, x_8, x_17, x_9, lean_box(0), lean_box(0));
return x_20;
}
else
{
uint32_t x_21; uint32_t x_22; uint8_t x_23; 
x_21 = lean_string_utf8_get(x_16, x_17);
x_22 = lean_string_utf8_get(x_8, x_9);
x_23 = lean_uint32_dec_eq(x_21, x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_free_object(x_1);
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_24 = lean_apply_7(x_4, x_16, x_8, x_17, x_9, lean_box(0), lean_box(0), lean_box(0));
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_string_utf8_next(x_16, x_17);
lean_inc(x_16);
lean_ctor_set(x_1, 1, x_25);
x_26 = lean_string_utf8_next(x_8, x_9);
lean_inc(x_8);
lean_ctor_set(x_2, 1, x_26);
lean_inc(x_3);
x_27 = l_String_ltb_inductionOn___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_28 = lean_apply_8(x_3, x_16, x_8, x_17, x_9, lean_box(0), lean_box(0), lean_box(0), x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_1, 0);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_1);
x_31 = lean_string_utf8_byte_size(x_29);
x_32 = lean_nat_dec_lt(x_30, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_apply_6(x_5, x_29, x_8, x_30, x_9, lean_box(0), lean_box(0));
return x_33;
}
else
{
uint32_t x_34; uint32_t x_35; uint8_t x_36; 
x_34 = lean_string_utf8_get(x_29, x_30);
x_35 = lean_string_utf8_get(x_8, x_9);
x_36 = lean_uint32_dec_eq(x_34, x_35);
if (x_36 == 0)
{
lean_object* x_37; 
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_37 = lean_apply_7(x_4, x_29, x_8, x_30, x_9, lean_box(0), lean_box(0), lean_box(0));
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_string_utf8_next(x_29, x_30);
lean_inc(x_29);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_29);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_string_utf8_next(x_8, x_9);
lean_inc(x_8);
lean_ctor_set(x_2, 1, x_40);
lean_inc(x_3);
x_41 = l_String_ltb_inductionOn___rarg(x_39, x_2, x_3, x_4, x_5, x_6);
x_42 = lean_apply_8(x_3, x_29, x_8, x_30, x_9, lean_box(0), lean_box(0), lean_box(0), x_41);
return x_42;
}
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_2, 0);
x_44 = lean_ctor_get(x_2, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_2);
x_45 = lean_string_utf8_byte_size(x_43);
x_46 = lean_nat_dec_lt(x_44, x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_apply_5(x_6, x_47, x_43, x_48, x_44, lean_box(0));
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_1, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_52 = x_1;
} else {
 lean_dec_ref(x_1);
 x_52 = lean_box(0);
}
x_53 = lean_string_utf8_byte_size(x_50);
x_54 = lean_nat_dec_lt(x_51, x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
lean_dec(x_52);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_55 = lean_apply_6(x_5, x_50, x_43, x_51, x_44, lean_box(0), lean_box(0));
return x_55;
}
else
{
uint32_t x_56; uint32_t x_57; uint8_t x_58; 
x_56 = lean_string_utf8_get(x_50, x_51);
x_57 = lean_string_utf8_get(x_43, x_44);
x_58 = lean_uint32_dec_eq(x_56, x_57);
if (x_58 == 0)
{
lean_object* x_59; 
lean_dec(x_52);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_59 = lean_apply_7(x_4, x_50, x_43, x_51, x_44, lean_box(0), lean_box(0), lean_box(0));
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_string_utf8_next(x_50, x_51);
lean_inc(x_50);
if (lean_is_scalar(x_52)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_52;
}
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_string_utf8_next(x_43, x_44);
lean_inc(x_43);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_43);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_3);
x_64 = l_String_ltb_inductionOn___rarg(x_61, x_63, x_3, x_4, x_5, x_6);
x_65 = lean_apply_8(x_3, x_50, x_43, x_51, x_44, lean_box(0), lean_box(0), lean_box(0), x_64);
return x_65;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_ltb_inductionOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_ltb_inductionOn___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Basic_0__String_Iterator_remainingBytes_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_String_Basic_0__String_Iterator_remainingBytes_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_String_Basic_0__String_Iterator_remainingBytes_match__1_splitter___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_String_LE() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_String_decidableLE(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = l_String_decidableLT_x27(x_2, x_1);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_String_decidableLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_decidableLE(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_String_decidableLE(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = l_String_decidableLE(x_2, x_1);
return x_5;
}
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_String_decidableLE(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = l_String_decidableLE(x_2, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrder___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_String_decidableLE(x_1, x_2);
if (x_3 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_String_instLinearOrder___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_String_decidableLE(x_1, x_2);
if (x_3 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
static lean_object* _init_l_String_instLinearOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_String_LE;
x_2 = l_String_LT_x27;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_String_instLinearOrder___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_String_instLinearOrder___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instOrdString___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_String_decidableLE___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_instLinearOrder___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_String_instLinearOrder___closed__1;
x_2 = l_String_instLinearOrder___closed__2;
x_3 = l_String_instLinearOrder___closed__3;
x_4 = l_String_instLinearOrder___closed__4;
x_5 = l_String_instLinearOrder___closed__5;
x_6 = l_String_instLinearOrder___closed__6;
x_7 = l_String_instLinearOrder___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_String_instLinearOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_String_instLinearOrder___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_decidableEqOfDecidableLE___at_String_instLinearOrder___spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_decidableLTOfDecidableLE___at_String_instLinearOrder___spec__2(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_String_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Char(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_String_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_String_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Char(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_LT_x27 = _init_l_String_LT_x27();
lean_mark_persistent(l_String_LT_x27);
l_String_LE = _init_l_String_LE();
lean_mark_persistent(l_String_LE);
l_String_instLinearOrder___closed__1 = _init_l_String_instLinearOrder___closed__1();
lean_mark_persistent(l_String_instLinearOrder___closed__1);
l_String_instLinearOrder___closed__2 = _init_l_String_instLinearOrder___closed__2();
lean_mark_persistent(l_String_instLinearOrder___closed__2);
l_String_instLinearOrder___closed__3 = _init_l_String_instLinearOrder___closed__3();
lean_mark_persistent(l_String_instLinearOrder___closed__3);
l_String_instLinearOrder___closed__4 = _init_l_String_instLinearOrder___closed__4();
lean_mark_persistent(l_String_instLinearOrder___closed__4);
l_String_instLinearOrder___closed__5 = _init_l_String_instLinearOrder___closed__5();
lean_mark_persistent(l_String_instLinearOrder___closed__5);
l_String_instLinearOrder___closed__6 = _init_l_String_instLinearOrder___closed__6();
lean_mark_persistent(l_String_instLinearOrder___closed__6);
l_String_instLinearOrder___closed__7 = _init_l_String_instLinearOrder___closed__7();
lean_mark_persistent(l_String_instLinearOrder___closed__7);
l_String_instLinearOrder___closed__8 = _init_l_String_instLinearOrder___closed__8();
lean_mark_persistent(l_String_instLinearOrder___closed__8);
l_String_instLinearOrder = _init_l_String_instLinearOrder();
lean_mark_persistent(l_String_instLinearOrder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
