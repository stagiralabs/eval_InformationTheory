// Lean compiler output
// Module: Mathlib.Data.ZMod.Basic
// Imports: Init Mathlib.Algebra.CharP.Basic Mathlib.Algebra.Module.End Mathlib.Algebra.Ring.Prod Mathlib.Data.Fintype.Units Mathlib.GroupTheory.GroupAction.SubMulAction Mathlib.GroupTheory.OrderOfElement Mathlib.Tactic.FinCases
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
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitOfCoprime(lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_instInv(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_ZMod_finEquiv___spec__3(lean_object*);
lean_object* l_ZMod_commRing(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_ZMod_finEquiv___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_chineseRemainder___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_inv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_refl___at_ZMod_finEquiv___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_ringEquivCongr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1;
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2;
lean_object* l_finCongr(lean_object*, lean_object*, lean_object*);
lean_object* l_AddMonoidHom_liftOfRightInverse___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_lift___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_unitOfCoprime___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_inv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime(lean_object*, lean_object*);
lean_object* l_Int_sign(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___boxed(lean_object*, lean_object*);
lean_object* l_Nat_chineseRemainder_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquivRight(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingEquiv_refl___at_ZMod_finEquiv___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__17___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_ZMod_lift___closed__1;
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__1(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Nat_residueClassesEquiv___elambda__2___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidHom_liftOfRightInverse___at_ZMod_lift___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_val___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_inv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_ZMod_ringEquivCongr___spec__3;
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_ringEquivCongr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_ZMod_finEquiv___spec__2(lean_object*);
lean_object* l_Nat_gcdA(lean_object*, lean_object*);
extern lean_object* l_Int_instAddGroup;
LEAN_EXPORT lean_object* l_ZMod_finEquiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter(lean_object*);
lean_object* l_AddMonoidHom_liftOfRightInverse___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Int_castAddHom___at_ZMod_lift___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_lift___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__12(lean_object*, lean_object*, lean_object*);
static lean_object* l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__5(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_chineseRemainder___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ZMod_inv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_lift___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_finEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZMod_castHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___boxed(lean_object*);
static lean_object* _init_l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_ZMod_finEquiv___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_ZMod_finEquiv___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_refl___at_ZMod_finEquiv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_refl(lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_finEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_refl(lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_refl___at_ZMod_finEquiv___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_refl___at_ZMod_finEquiv___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddEquiv_refl___at_ZMod_finEquiv___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingEquiv_refl___at_ZMod_finEquiv___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingEquiv_refl___at_ZMod_finEquiv___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_finEquiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ZMod_finEquiv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZMod_val(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_nat_abs(x_2);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_val___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ZMod_val(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_ZMod_Basic_0__ZMod_val_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_11 = l_ZMod_val(x_10, x_3);
lean_dec(x_3);
lean_dec(x_10);
x_12 = lean_apply_1(x_9, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_1(x_13, x_3);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_cast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_cast___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_cast___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_ZMod_Basic_0__ZMod_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_12 = l_ZMod_val(x_11, x_3);
lean_dec(x_3);
lean_dec(x_11);
x_13 = lean_apply_1(x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 4);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_14, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_castHom___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_cast___at_ZMod_castHom___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ZMod_castHom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2() {
_start:
{
lean_object* x_1; 
x_1 = l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1;
return x_1;
}
}
static lean_object* _init_l_AddEquiv_refl___at_ZMod_ringEquivCongr___spec__3() {
_start:
{
lean_object* x_1; 
x_1 = l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1;
return x_1;
}
}
static lean_object* _init_l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZMod_ringEquivCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_nat_sub(x_2, x_6);
x_9 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_10 = lean_nat_add(x_8, x_6);
lean_dec(x_8);
x_11 = l_finCongr(x_9, x_10, lean_box(0));
lean_dec(x_10);
lean_dec(x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1;
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_ringEquivCongr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ZMod_ringEquivCongr(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_inv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = l_ZMod_commRing(x_4);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_inv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_nat_add(x_6, x_5);
x_8 = l_ZMod_val(x_7, x_2);
x_9 = l_Nat_gcdA(x_8, x_7);
x_10 = l_Int_cast___at_ZMod_inv___spec__1(x_6, x_9);
lean_dec(x_6);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Int_sign(x_2);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_inv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_cast___at_ZMod_inv___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZMod_inv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ZMod_inv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZMod_instInv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_inv___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
x_13 = lean_apply_6(x_8, x_12, x_2, x_3, x_4, x_5, x_6);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_8);
x_14 = lean_apply_5(x_7, x_2, x_3, x_4, x_5, x_6);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Mathlib_Data_ZMod_Basic_0__Nat_xgcdAux_match__1_splitter___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_unitOfCoprime___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_ZMod_commRing(x_1);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitOfCoprime(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = l_Nat_cast___at_ZMod_unitOfCoprime___spec__1(x_1, x_2);
x_5 = l_ZMod_inv(x_1, x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_ZMod_val(x_1, x_2);
x_4 = l_ZMod_unitOfCoprime(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZMod_unitsEquivCoprime___elambda__2___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_ZMod_unitsEquivCoprime___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_ZMod_unitsEquivCoprime___elambda__2___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ZMod_unitsEquivCoprime___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZMod_unitsEquivCoprime___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_unitsEquivCoprime___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ZMod_unitsEquivCoprime___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = l_Int_cast___at_ZMod_chineseRemainder___spec__4(x_1, x_3);
x_5 = l_Int_cast___at_ZMod_chineseRemainder___spec__5(x_2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = l_Nat_cast___at_ZMod_chineseRemainder___spec__7(x_1, x_3);
x_5 = l_Nat_cast___at_ZMod_chineseRemainder___spec__8(x_2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_10 = l_ZMod_val(x_9, x_4);
lean_dec(x_4);
lean_dec(x_9);
x_11 = l_Nat_cast___at_ZMod_chineseRemainder___spec__6(x_1, x_2, x_10);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Int_cast___at_ZMod_chineseRemainder___spec__3(x_1, x_2, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_chineseRemainder___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_chineseRemainder___spec__2___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_nat_mul(x_1, x_2);
x_5 = l_ZMod_commRing(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_nat_mul(x_1, x_2);
x_5 = l_ZMod_commRing(x_4);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_nat_mul(x_1, x_2);
x_5 = l_ZMod_commRing(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_10 = l_ZMod_val(x_9, x_4);
lean_dec(x_4);
lean_dec(x_9);
x_11 = l_Nat_cast___at_ZMod_chineseRemainder___spec__13(x_1, x_2, x_10);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Int_cast___at_ZMod_chineseRemainder___spec__12(x_1, x_2, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_nat_mul(x_1, x_2);
x_5 = l_ZMod_commRing(x_4);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_nat_mul(x_1, x_2);
x_5 = l_ZMod_commRing(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_10 = l_ZMod_val(x_9, x_4);
lean_dec(x_4);
lean_dec(x_9);
x_11 = l_Nat_cast___at_ZMod_chineseRemainder___spec__17(x_1, x_2, x_10);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Int_cast___at_ZMod_chineseRemainder___spec__16(x_1, x_2, x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_ZMod_val(x_2, x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_ZMod_val(x_3, x_9);
lean_dec(x_9);
lean_inc(x_2);
lean_inc(x_3);
x_11 = l_Nat_chineseRemainder_x27(x_3, x_2, x_8, x_10, lean_box(0));
x_12 = l_Nat_cast___at_ZMod_chineseRemainder___spec__9(x_2, x_3, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_2, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = l_ZMod_cast___at_ZMod_chineseRemainder___spec__11(x_2, x_3, x_2, x_15);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = l_ZMod_cast___at_ZMod_chineseRemainder___spec__15(x_2, x_3, x_3, x_17);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_nat_mul(x_1, x_2);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_chineseRemainder___spec__2___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
x_6 = lean_alloc_closure((void*)(l_ZMod_chineseRemainder___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_cast___at_ZMod_chineseRemainder___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZMod_castHom___at_ZMod_chineseRemainder___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ZMod_castHom___at_ZMod_chineseRemainder___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_ZMod_chineseRemainder___spec__9(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_fst___at_ZMod_chineseRemainder___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_fst___at_ZMod_chineseRemainder___spec__10(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Int_cast___at_ZMod_chineseRemainder___spec__12(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_ZMod_chineseRemainder___spec__13(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_cast___at_ZMod_chineseRemainder___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_snd___at_ZMod_chineseRemainder___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_snd___at_ZMod_chineseRemainder___spec__14(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_chineseRemainder___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Int_cast___at_ZMod_chineseRemainder___spec__16(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_chineseRemainder___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_ZMod_chineseRemainder___spec__17(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_chineseRemainder___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_cast___at_ZMod_chineseRemainder___spec__15(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ZMod_chineseRemainder___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ZMod_chineseRemainder___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_ZMod_commRing(x_1);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_castAddHom___at_ZMod_lift___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_cast___at_ZMod_lift___spec__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__4(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ZMod_lift___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_lift___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_nat_add(x_6, x_5);
lean_dec(x_6);
x_8 = l_ZMod_val(x_7, x_2);
lean_dec(x_7);
x_9 = lean_nat_to_int(x_8);
return x_9;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_AddMonoidHom_liftOfRightInverse___at_ZMod_lift___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_ZMod_commRing(x_1);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_7);
x_9 = l_AddGroupWithOne_toAddGroup___rarg(x_8);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_AddMonoidHom_liftOfRightInverse___elambda__2___rarg), 3, 2);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, lean_box(0));
x_11 = l_Int_instAddGroup;
x_12 = lean_alloc_closure((void*)(l_AddMonoidHom_liftOfRightInverse___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
static lean_object* _init_l_ZMod_lift___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivRight(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_ZMod_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Int_cast___at_ZMod_lift___spec__2), 2, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_ZMod_cast___at_ZMod_lift___spec__3___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_AddMonoidHom_liftOfRightInverse___at_ZMod_lift___spec__6(x_1, lean_box(0), x_3, x_4, x_5, lean_box(0));
x_7 = l_ZMod_lift___closed__1;
x_8 = l_Equiv_trans___rarg(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at_ZMod_lift___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_cast___at_ZMod_lift___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ZMod_cast___at_ZMod_lift___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ZMod_cast___at_ZMod_lift___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddSubgroupClass_instZModSMul___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddSubgroupClass_instZModSMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg___boxed), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_AddSubgroupClass_instZModModule___rarg), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_AddSubmonoidClass_subtype___at_AddSubgroupClass_instZModModule___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddSubgroupClass_instZModModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddSubgroupClass_instZModModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_ZMod_val(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_nat_mul(x_1, x_5);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Nat_residueClassesEquiv___elambda__2___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_ZMod_commRing(x_1);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Nat_cast___at_Nat_residueClassesEquiv___elambda__2___spec__1(x_1, x_2);
x_4 = lean_nat_div(x_2, x_1);
lean_dec(x_1);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Nat_residueClassesEquiv___elambda__2), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Nat_residueClassesEquiv___elambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_residueClassesEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_residueClassesEquiv___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_SubMulAction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_OrderOfElement(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FinCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_ZMod_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_SubMulAction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_OrderOfElement(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FinCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1 = _init_l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1();
lean_mark_persistent(l_MulEquiv_refl___at_ZMod_finEquiv___spec__2___closed__1);
l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2 = _init_l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2();
lean_mark_persistent(l_MulEquiv_refl___at_ZMod_ringEquivCongr___spec__2);
l_AddEquiv_refl___at_ZMod_ringEquivCongr___spec__3 = _init_l_AddEquiv_refl___at_ZMod_ringEquivCongr___spec__3();
lean_mark_persistent(l_AddEquiv_refl___at_ZMod_ringEquivCongr___spec__3);
l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1 = _init_l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1();
lean_mark_persistent(l_RingEquiv_refl___at_ZMod_ringEquivCongr___spec__1);
l_ZMod_lift___closed__1 = _init_l_ZMod_lift___closed__1();
lean_mark_persistent(l_ZMod_lift___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
