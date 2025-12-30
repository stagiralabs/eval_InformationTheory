// Lean compiler output
// Module: Mathlib.GroupTheory.CoprodI
// Imports: Init Mathlib.Algebra.Group.Action.End Mathlib.Algebra.Group.Submonoid.Membership Mathlib.Data.Set.Pointwise.SMul Mathlib.GroupTheory.Congruence.Basic Mathlib.GroupTheory.FreeGroup.IsFreeGroup Mathlib.SetTheory.Cardinal.Basic
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
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_mulHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Monoid_CoprodI_Word_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1;
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instInv___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Monoid_CoprodI_instInv___rarg___closed__1;
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_freeGroupEquivCoprodI___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_of___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_freeGroupEquivCoprodI___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1(lean_object*, lean_object*);
static lean_object* l_freeGroupEquivCoprodI___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1(lean_object*, lean_object*);
lean_object* l_MulOpposite_opEquiv(lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_instMonoidCoprodI___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1;
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___rarg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Con_monoid___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_Word_prod___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8___rarg(lean_object*, lean_object*);
static lean_object* l_freeGroupEquivCoprodI___closed__3;
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg(lean_object*);
lean_object* l_MulOpposite_unop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5(lean_object*, lean_object*);
static lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3;
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_List_head_x3f___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20___rarg(lean_object*, lean_object*);
lean_object* l_FreeMonoid_instCancelMonoid(lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6(lean_object*, lean_object*);
lean_object* l_FreeMonoid_lift___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabitedPair___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg___boxed(lean_object*);
lean_object* l_MulOpposite_instMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_lift___elambda__2___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonoidEnd___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_instMonoidCoprodI___closed__1;
static lean_object* l_freeGroupEquivCoprodI___closed__2;
LEAN_EXPORT uint8_t l_Monoid_CoprodI_Word_instDecidableEq__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedCoprodI(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_empty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_freeGroupEquivCoprodI___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2;
static lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3;
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead(lean_object*, lean_object*);
lean_object* l_FreeGroup_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg(lean_object*, lean_object*);
static lean_object* l_freeGroupEquivCoprodI___closed__4;
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12(lean_object*, lean_object*);
lean_object* l_MonoidHom_op___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__13(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_rcons(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedCoprodI___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_instDecidableEqSigma___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instMonoidCoprodI(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_freeGroupEquivCoprodI___closed__1;
LEAN_EXPORT lean_object* l_conGen___at_instMonoidCoprodI___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__3(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction(lean_object*, lean_object*);
static lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabitedPair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10___rarg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7___rarg(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_mulHead___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1;
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_empty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FreeGroup_lift___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_FreeMonoid_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg___boxed(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21(lean_object*, lean_object*);
static lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4;
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_rcons___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1(lean_object*, lean_object*);
lean_object* l_FreeGroup_lift___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FreeGroup_instGroup(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conGen___at_instMonoidCoprodI___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
static lean_object* _init_l_instMonoidCoprodI___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_FreeMonoid_instCancelMonoid(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_instMonoidCoprodI(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = l_instMonoidCoprodI___closed__1;
x_6 = l_Con_monoid___rarg(x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instMonoidCoprodI___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instMonoidCoprodI(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instInhabitedCoprodI(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instInhabitedCoprodI___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instInhabitedCoprodI(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_of___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_toQuotient___at_Monoid_CoprodI_of___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_Monoid_CoprodI_of___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_of(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___elambda__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_lift___elambda__2___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_box(0);
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___elambda__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_FreeMonoid_lift___elambda__2___rarg___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___elambda__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___elambda__1___rarg___boxed), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_lift___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonoidHom_comp___at_Monoid_CoprodI_lift___elambda__1___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Monoid_CoprodI_lift___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_liftOn___at_Monoid_CoprodI_lift___elambda__2___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Con_lift___at_Monoid_CoprodI_lift___elambda__2___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_lift___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_lift___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instInv___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_MulOpposite_opEquiv(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_inv___at_Monoid_CoprodI_instInv___spec__6___rarg(x_1, x_2);
x_4 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1;
x_5 = l_Equiv_trans___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_MonoidHom_op___elambda__2___rarg(x_3);
x_5 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg(x_1, x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Monoid_CoprodI_instInv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MulOpposite_unop___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_instMonoidCoprodI(lean_box(0), lean_box(0), x_2);
lean_dec(x_2);
x_4 = l_MulOpposite_instMonoid___rarg(x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_4, x_5);
x_7 = l_Monoid_CoprodI_instInv___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instInv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_toQuotient___at_Monoid_CoprodI_instInv___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_Monoid_CoprodI_instInv___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_of___at_Monoid_CoprodI_instInv___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instInv___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_comp___at_Monoid_CoprodI_instInv___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__7___rarg(x_1, x_2);
x_4 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1;
x_5 = l_Equiv_trans___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_MonoidHom_op___elambda__2___rarg(x_3);
x_5 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__6___rarg(x_1, x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_appendTR___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_instMonoidCoprodI(lean_box(0), lean_box(0), x_4);
lean_dec(x_4);
x_6 = l_MulOpposite_instMonoid___rarg(x_5);
x_7 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_6, x_7);
x_9 = lean_apply_1(x_8, x_3);
x_10 = l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1;
x_11 = lean_apply_2(x_10, x_2, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_inc(x_3);
x_8 = l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg(x_1, x_7, x_3);
lean_dec(x_7);
x_9 = l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1;
x_10 = lean_apply_2(x_9, x_8, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_box(0);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_instGroup___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Equiv_inv___at_Monoid_CoprodI_instGroup___spec__21___rarg(x_1, x_2);
x_4 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1;
x_5 = l_Equiv_trans___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_MonoidHom_op___elambda__2___rarg(x_3);
x_5 = l_MulEquiv_inv_x27___at_Monoid_CoprodI_instGroup___spec__20___rarg(x_1, x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1;
x_6 = lean_int_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = lean_nat_abs(x_3);
x_8 = lean_apply_2(x_2, x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_nat_abs(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_instMonoidCoprodI(lean_box(0), lean_box(0), x_12);
lean_dec(x_12);
x_14 = l_MulOpposite_instMonoid___rarg(x_13);
x_15 = lean_alloc_closure((void*)(l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___lambda__1), 2, 1);
lean_closure_set(x_15, 0, x_1);
x_16 = lean_nat_add(x_11, x_10);
lean_dec(x_11);
x_17 = lean_apply_2(x_2, x_16, x_4);
x_18 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_14, x_15);
x_19 = lean_apply_1(x_18, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instInv___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_instMonoidCoprodI(lean_box(0), lean_box(0), x_2);
lean_dec(x_2);
lean_inc(x_1);
x_4 = l_Monoid_CoprodI_instInv___rarg(x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg___boxed), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_instGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_instGroup___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quotient_map_u2082___at_Monoid_CoprodI_instGroup___spec__14(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_npowRec___at_Monoid_CoprodI_instGroup___spec__12___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_toQuotient___at_Monoid_CoprodI_instGroup___spec__19(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_Monoid_CoprodI_instGroup___spec__18___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_of___at_Monoid_CoprodI_instGroup___spec__16(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_instGroup___spec__22(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_comp___at_Monoid_CoprodI_instGroup___spec__23(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_empty(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_empty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_Word_empty(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_Word_instInhabited(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Monoid_CoprodI_of___rarg(x_9, x_10);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_11);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l_Monoid_CoprodI_of___rarg(x_15, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
x_3 = x_14;
x_4 = x_18;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_Word_prod___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
x_10 = l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1;
x_11 = lean_apply_2(x_10, x_9, x_5);
x_3 = x_8;
x_5 = x_11;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
x_10 = l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1;
x_11 = lean_apply_2(x_10, x_9, x_5);
x_3 = x_8;
x_5 = x_11;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_mk(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_le(x_5, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = 0;
x_11 = l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg(x_1, x_4, x_9, x_10, x_2);
lean_dec(x_4);
return x_11;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_5);
if (x_13 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
return x_2;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_instMonoidCoprodI(lean_box(0), lean_box(0), x_1);
x_4 = l_Monoid_toMulOneClass___rarg(x_3);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg(x_1, x_4, x_2, x_5);
lean_dec(x_4);
x_7 = l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_prod___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapTR_loop___at_Monoid_CoprodI_Word_prod___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quotient_map_u2082___at_Monoid_CoprodI_Word_prod___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__6___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Monoid_CoprodI_Word_prod___spec__7___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_Monoid_CoprodI_Word_prod___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_prod___at_Monoid_CoprodI_Word_prod___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_prod___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Monoid_CoprodI_Word_prod___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x3f___rarg(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_fstIdx___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Monoid_CoprodI_Word_fstIdx___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_fstIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_Word_fstIdx(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabitedPair___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instInhabitedPair(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_instInhabitedPair___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_cons___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_cons___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_Word_cons(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_rcons___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_8 = lean_apply_3(x_2, x_3, x_5, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = l_Monoid_CoprodI_Word_cons___rarg(x_3, x_5, x_10, lean_box(0), lean_box(0));
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_3);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_rcons(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_rcons___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_4, lean_box(0), lean_box(0));
x_10 = lean_apply_6(x_1, x_7, x_8, x_3, lean_box(0), lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__2), 6, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_4, x_5, x_1);
lean_dec(x_4);
x_7 = lean_apply_2(x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_Word_consRecOn(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___rarg___lambda__2), 6, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_4, x_5, x_1);
lean_dec(x_4);
x_7 = lean_apply_2(x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_5);
x_11 = lean_apply_2(x_1, x_2, x_5);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Monoid_CoprodI_Word_cons___rarg(x_5, x_6, x_7, lean_box(0), lean_box(0));
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
lean_inc(x_4);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_box(0);
lean_inc(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1___boxed), 10, 4);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, x_7);
x_11 = l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___rarg(x_5, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_Word_consRecOn___at___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_Word_rcons___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equivPair___elambda__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equivPair___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equivPair___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Monoid_CoprodI_Word_equivPair___elambda__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_4);
lean_inc(x_1);
x_8 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(x_1, x_2, x_3, x_4, x_7);
x_9 = l_Monoid_toMulOneClass___rarg(x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_apply_2(x_10, x_6, x_11);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
lean_ctor_set(x_8, 0, x_12);
x_15 = l_Monoid_CoprodI_Word_rcons___rarg(x_1, x_3, x_4, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Monoid_CoprodI_Word_rcons___rarg(x_1, x_3, x_4, x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1___boxed), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_summandAction___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Monoid_CoprodI_Word_summandAction___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_4);
lean_inc(x_1);
x_8 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_Word_equivPairAux___rarg(x_1, x_2, x_3, x_4, x_7);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_apply_2(x_9, x_6, x_10);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 0);
lean_dec(x_13);
lean_ctor_set(x_8, 0, x_11);
x_14 = l_Monoid_CoprodI_Word_rcons___rarg(x_1, x_3, x_4, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Monoid_CoprodI_Word_rcons___rarg(x_1, x_3, x_4, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_Monoid_toMulOneClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg___lambda__1), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___rarg), 3, 0);
return x_4;
}
}
static lean_object* _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMonoidEnd___lambda__1), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1;
x_2 = l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2;
x_3 = l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4;
x_6 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_5, x_4);
x_7 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___rarg), 3, 1);
lean_closure_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_instMulAction___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SMul_comp_smul___at_Monoid_CoprodI_Word_instMulAction___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Monoid_CoprodI_Word_prod___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equiv___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_Monoid_toMulOneClass___rarg(x_5);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_instMulAction___spec__1___rarg___lambda__1), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_alloc_closure((void*)(l_MulAction_toEndHom___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__1___rarg), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_box(0);
x_7 = l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4;
x_8 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_7, x_5);
x_9 = lean_apply_2(x_8, x_4, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equiv___elambda__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equiv___elambda__2___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equiv___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_equiv___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_equiv___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Monoid_CoprodI_Word_equiv___elambda__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SMul_comp_smul___at_Monoid_CoprodI_Word_equiv___elambda__2___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Sigma_instDecidableEqSigma___rarg(x_1, x_2, x_8, x_10);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = 0;
return x_14;
}
else
{
x_3 = x_9;
x_4 = x_11;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(x_1, x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Monoid_CoprodI_Word_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_instDecidableEq___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Monoid_CoprodI_Word_instDecidableEq___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_5);
x_9 = lean_apply_1(x_7, x_6);
x_10 = l_List_hasDecEq___at_Monoid_CoprodI_Word_instDecidableEq___spec__1___rarg(x_1, x_2, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg(x_2, x_3, x_4, lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Monoid_CoprodI_Word_instDecidableEq__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Monoid_CoprodI_Word_equiv___rarg(x_1, x_2, x_3);
x_7 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg(x_2, x_3, x_6, lean_box(0), x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_Word_instDecidableEq__1___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Function_Injective_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Equiv_decidableEq___at_Monoid_CoprodI_Word_instDecidableEq__1___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_Word_instDecidableEq__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Monoid_CoprodI_Word_instDecidableEq__1___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 5);
lean_inc(x_16);
lean_dec(x_4);
x_17 = l_Monoid_CoprodI_NeWord_toList___rarg(x_1, x_2, x_13, x_15);
lean_dec(x_13);
x_18 = l_Monoid_CoprodI_NeWord_toList___rarg(x_1, x_14, x_3, x_16);
x_19 = l_List_appendTR___rarg(x_17, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_toList___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toList___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_toList___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_4, x_1, x_6, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 4);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 5);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_7(x_5, x_1, x_2, x_8, x_9, x_10, lean_box(0), x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_toList_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 4);
x_3 = x_6;
x_4 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_head___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_head___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_head___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 2);
x_7 = lean_ctor_get(x_4, 5);
x_2 = x_6;
x_4 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_last___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_last___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_last___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_toList___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_toWord___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_toWord___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_toWord___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Monoid_CoprodI_NeWord_toList___rarg(x_1, x_2, x_3, x_4);
x_6 = l_Monoid_CoprodI_Word_prod___rarg(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_prod___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_prod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Monoid_CoprodI_NeWord_prod___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_6, 1);
x_13 = lean_ctor_get(x_6, 4);
x_14 = lean_ctor_get(x_6, 3);
lean_dec(x_14);
x_15 = lean_ctor_get(x_6, 0);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_2);
x_16 = l_Monoid_CoprodI_NeWord_replaceHead___rarg(x_1, x_2, x_12, x_4, lean_box(0), x_13);
lean_ctor_set(x_6, 4, x_16);
lean_ctor_set(x_6, 3, x_3);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_19 = lean_ctor_get(x_6, 4);
x_20 = lean_ctor_get(x_6, 5);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
lean_inc(x_17);
lean_inc(x_2);
x_21 = l_Monoid_CoprodI_NeWord_replaceHead___rarg(x_1, x_2, x_17, x_4, lean_box(0), x_19);
x_22 = lean_alloc_ctor(1, 6, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_17);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_3);
lean_ctor_set(x_22, 4, x_21);
lean_ctor_set(x_22, 5, x_20);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_replaceHead___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_replaceHead___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Monoid_CoprodI_NeWord_replaceHead___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_5(x_6, x_1, x_3, lean_box(0), x_8, lean_box(0));
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 4);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 5);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_apply_9(x_7, x_1, x_2, x_3, lean_box(0), x_10, x_11, x_12, lean_box(0), x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter___rarg), 7, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_replaceHead_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_mulHead___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_1(x_1, x_2);
x_8 = l_Monoid_toMulOneClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Monoid_CoprodI_NeWord_head___rarg(x_1, x_2, x_3, x_4);
x_11 = lean_apply_2(x_9, x_5, x_10);
x_12 = l_Monoid_CoprodI_NeWord_replaceHead___rarg(x_1, x_2, x_3, x_11, lean_box(0), x_4);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_mulHead(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_mulHead___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_inv___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
lean_inc(x_2);
x_8 = lean_apply_1(x_1, x_2);
x_9 = l_DivInvOneMonoid_toInvOneClass___rarg(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_6);
lean_ctor_set(x_4, 1, x_11);
lean_ctor_set(x_4, 0, x_2);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
lean_inc(x_2);
x_13 = lean_apply_1(x_1, x_2);
x_14 = l_DivInvOneMonoid_toInvOneClass___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_1(x_15, x_12);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_4);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_4, 1);
x_20 = lean_ctor_get(x_4, 2);
x_21 = lean_ctor_get(x_4, 4);
x_22 = lean_ctor_get(x_4, 5);
x_23 = lean_ctor_get(x_4, 3);
lean_dec(x_23);
x_24 = lean_ctor_get(x_4, 0);
lean_dec(x_24);
lean_inc(x_3);
lean_inc(x_20);
lean_inc(x_1);
x_25 = l_Monoid_CoprodI_NeWord_inv___rarg(x_1, x_20, x_3, x_22);
lean_inc(x_19);
lean_inc(x_2);
x_26 = l_Monoid_CoprodI_NeWord_inv___rarg(x_1, x_2, x_19, x_21);
lean_ctor_set(x_4, 5, x_26);
lean_ctor_set(x_4, 4, x_25);
lean_ctor_set(x_4, 3, x_2);
lean_ctor_set(x_4, 2, x_19);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_4, 1);
x_28 = lean_ctor_get(x_4, 2);
x_29 = lean_ctor_get(x_4, 4);
x_30 = lean_ctor_get(x_4, 5);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_28);
lean_inc(x_1);
x_31 = l_Monoid_CoprodI_NeWord_inv___rarg(x_1, x_28, x_3, x_30);
lean_inc(x_27);
lean_inc(x_2);
x_32 = l_Monoid_CoprodI_NeWord_inv___rarg(x_1, x_2, x_27, x_29);
x_33 = lean_alloc_ctor(1, 6, 0);
lean_ctor_set(x_33, 0, x_3);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_27);
lean_ctor_set(x_33, 3, x_2);
lean_ctor_set(x_33, 4, x_31);
lean_ctor_set(x_33, 5, x_32);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_NeWord_inv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Monoid_CoprodI_NeWord_inv___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_4, x_1, x_6, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 4);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 5);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_7(x_5, x_1, x_2, x_8, x_9, x_10, lean_box(0), x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter___rarg), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_GroupTheory_CoprodI_0__Monoid_CoprodI_NeWord_inv_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_conGen___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5___rarg), 1, 0);
return x_6;
}
}
static lean_object* _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_FreeGroup_instGroup(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1;
x_2 = lean_alloc_closure((void*)(l_FreeGroup_lift___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FreeGroup_lift___elambda__1___rarg), 2, 0);
return x_1;
}
}
static lean_object* _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2;
x_2 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4;
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7(lean_box(0), lean_box(0), x_2);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_closure((void*)(l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Equiv_trans___rarg(x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Equiv_symm___rarg(x_5);
x_8 = l_FreeGroup_of___rarg(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_1(x_9, x_8);
x_11 = l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___rarg(x_4, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeGroup_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
lean_inc(x_3);
x_5 = l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg(x_2, x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__2), 2, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_3 = l_Monoid_CoprodI_instGroup___rarg(x_1);
x_4 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_1);
x_7 = l_FreeGroup_lift___elambda__2___rarg(x_3, x_6);
x_8 = lean_alloc_closure((void*)(l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__3), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_5, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Equiv_symm___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_toQuotient___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_of___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__9(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__10(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MulEquiv_toMonoidHom___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__11(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MonoidHom_comp___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__12(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FreeGroupBasis_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__6___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonoidHom_toMulEquiv___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__13(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulEquiv_symm___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__14(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Monoid_CoprodI_FreeGroupBasis_coprodI___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_conGen___at_freeGroupEquivCoprodI___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = l_FreeMonoid_of___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_freeGroupEquivCoprodI___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MonoidHom_toMulEquiv___at_freeGroupEquivCoprodI___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidHom_toMulEquiv___at_freeGroupEquivCoprodI___spec__5___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1;
return x_2;
}
}
static lean_object* _init_l_freeGroupEquivCoprodI___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_FreeGroup_of___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_freeGroupEquivCoprodI___lambda__2___closed__1;
x_3 = l_Monoid_CoprodI_of___at_freeGroupEquivCoprodI___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FreeGroup_of___rarg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_freeGroupEquivCoprodI___lambda__3___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_FreeGroup_lift___elambda__2___rarg(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_freeGroupEquivCoprodI___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_freeGroupEquivCoprodI___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_freeGroupEquivCoprodI___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_freeGroupEquivCoprodI___closed__1;
x_2 = l_Monoid_CoprodI_instGroup___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_freeGroupEquivCoprodI___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_freeGroupEquivCoprodI___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_freeGroupEquivCoprodI___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_freeGroupEquivCoprodI___closed__2;
x_2 = l_freeGroupEquivCoprodI___closed__3;
x_3 = l_FreeGroup_lift___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_freeGroupEquivCoprodI___lambda__4), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Monoid_CoprodI_lift___elambda__2___rarg(x_3, x_4);
x_6 = l_freeGroupEquivCoprodI___closed__4;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Con_toQuotient___at_freeGroupEquivCoprodI___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Con_mk_x27___at_freeGroupEquivCoprodI___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_freeGroupEquivCoprodI___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_freeGroupEquivCoprodI___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_freeGroupEquivCoprodI___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Membership(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Congruence_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_FreeGroup_IsFreeGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_CoprodI(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Membership(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Congruence_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_FreeGroup_IsFreeGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instMonoidCoprodI___closed__1 = _init_l_instMonoidCoprodI___closed__1();
lean_mark_persistent(l_instMonoidCoprodI___closed__1);
l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1 = _init_l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1();
lean_mark_persistent(l_MulEquiv_inv_x27___at_Monoid_CoprodI_instInv___spec__5___rarg___closed__1);
l_Monoid_CoprodI_instInv___rarg___closed__1 = _init_l_Monoid_CoprodI_instInv___rarg___closed__1();
lean_mark_persistent(l_Monoid_CoprodI_instInv___rarg___closed__1);
l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1 = _init_l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1();
lean_mark_persistent(l_DivInvMonoid_div_x27___at_Monoid_CoprodI_instGroup___spec__1___rarg___closed__1);
l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1 = _init_l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1();
lean_mark_persistent(l_zpowRec___at_Monoid_CoprodI_instGroup___spec__15___rarg___closed__1);
l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1 = _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1();
lean_mark_persistent(l_Monoid_CoprodI_Word_instMulAction___rarg___closed__1);
l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2 = _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2();
lean_mark_persistent(l_Monoid_CoprodI_Word_instMulAction___rarg___closed__2);
l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3 = _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3();
lean_mark_persistent(l_Monoid_CoprodI_Word_instMulAction___rarg___closed__3);
l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4 = _init_l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4();
lean_mark_persistent(l_Monoid_CoprodI_Word_instMulAction___rarg___closed__4);
l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1 = _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1();
lean_mark_persistent(l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__1);
l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2 = _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2();
lean_mark_persistent(l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__2);
l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3 = _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3();
lean_mark_persistent(l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__3);
l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4 = _init_l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4();
lean_mark_persistent(l_FreeGroup_lift___at_Monoid_CoprodI_FreeGroupBasis_coprodI___spec__7___closed__4);
l_freeGroupEquivCoprodI___lambda__2___closed__1 = _init_l_freeGroupEquivCoprodI___lambda__2___closed__1();
lean_mark_persistent(l_freeGroupEquivCoprodI___lambda__2___closed__1);
l_freeGroupEquivCoprodI___closed__1 = _init_l_freeGroupEquivCoprodI___closed__1();
lean_mark_persistent(l_freeGroupEquivCoprodI___closed__1);
l_freeGroupEquivCoprodI___closed__2 = _init_l_freeGroupEquivCoprodI___closed__2();
lean_mark_persistent(l_freeGroupEquivCoprodI___closed__2);
l_freeGroupEquivCoprodI___closed__3 = _init_l_freeGroupEquivCoprodI___closed__3();
lean_mark_persistent(l_freeGroupEquivCoprodI___closed__3);
l_freeGroupEquivCoprodI___closed__4 = _init_l_freeGroupEquivCoprodI___closed__4();
lean_mark_persistent(l_freeGroupEquivCoprodI___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
