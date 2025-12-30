// Lean compiler output
// Module: Mathlib.Order.Hom.Basic
// Imports: Init Mathlib.Logic.Equiv.Option Mathlib.Order.RelIso.Basic Mathlib.Order.Disjoint Mathlib.Order.WithBot Mathlib.Tactic.Monotonicity.Attr Mathlib.Util.AssertExists
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
LEAN_EXPORT lean_object* l_OrderIso_prodComm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_onDiag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr___rarg(lean_object*);
static lean_object* l_term___u21aao_____closed__3;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1(lean_object*, lean_object*);
static lean_object* l_OrderHom_curry___closed__3;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_id(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11;
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u21aao__;
LEAN_EXPORT lean_object* l_OrderEmbedding_ofIsEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4;
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap___rarg(lean_object*);
static lean_object* l_term___u2192o_____closed__3;
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_dual___elambda__1___rarg___closed__1;
static lean_object* l_term___u2243o_____closed__1;
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_fst(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__2;
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1___rarg(lean_object*);
static lean_object* l_OrderIso_prodComm___closed__1;
static lean_object* l_OrderEmbedding_subtype___closed__1;
lean_object* l_WithTop_map___rarg(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3;
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10;
static lean_object* l_term___u21aao_____closed__6;
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_copy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1___rarg(lean_object*);
lean_object* l_Equiv_optionCongr___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_WithTop_coeOrderHom(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_curry___closed__2;
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopCoe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___rarg(lean_object*, lean_object*);
static lean_object* l_OrderHom_prod_u2098___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243o_____closed__4;
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_OrderEmbedding_ofIsEmpty___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_prodComm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_funUnique(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_piIso(lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_dualIso___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_symm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderIso_instEquivLike___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_withTopMap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_some___rarg(lean_object*);
static lean_object* l_term___u21aao_____closed__5;
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodMap___rarg(lean_object*, lean_object*);
static lean_object* l_term___u21aao_____closed__7;
lean_object* l_Prod_map___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_snd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6;
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg(lean_object*);
static lean_object* l_term___u2243o_____closed__6;
static lean_object* l_term___u2243o_____closed__3;
static lean_object* l_OrderEmbedding_withTopCoe___closed__1;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instFunLike___rarg(lean_object*, lean_object*);
static lean_object* l_term___u21aao_____closed__1;
static lean_object* l_term___u2192o_____closed__7;
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofIsEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_coeOrderHom___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_comp_u2098___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u2243o__;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_comp_u2098___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_onDiag___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_prod_u2098___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_curry___lambda__2(lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13;
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___elambda__1(lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__6;
LEAN_EXPORT lean_object* l_OrderHom_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u21aao_____closed__2;
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dualDual___boxed(lean_object*, lean_object*);
static lean_object* l_OrderHom_apply___rarg___closed__1;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_OrderHom_comp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_conj___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1;
static lean_object* l_term___u2192o_____closed__11;
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_apply___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9;
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___rarg(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2;
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4;
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instPreorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_diag(lean_object*, lean_object*);
lean_object* l_Function_const___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_copy___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_OrderHom_prodIso___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_symm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_conj(lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__4;
LEAN_EXPORT lean_object* l_OrderHom_pi___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subtype_orderEmbedding___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg___lambda__1(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_toDualBotEquiv___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3;
LEAN_EXPORT lean_object* l_OrderIso_trans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_prodComm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8;
LEAN_EXPORT lean_object* l_OrderIso_refl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderIso_instEquivLike___closed__3;
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1___rarg___boxed(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_pi(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dual(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dualIso___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___rarg(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_uliftMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__8;
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderIso__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_pi___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_diag___boxed(lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_snd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_unique(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodIso(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_comp_u2098___rarg___closed__1;
static lean_object* l_term___u2192o_____closed__1;
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__5;
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodMap___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Embedding_optionMap___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Function_curry___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5;
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__9;
LEAN_EXPORT lean_object* l_OrderHom_unique___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_toDualTopEquiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u2192o__;
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___rarg___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5;
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_orderEmbedding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_instPreorder___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_prodIso___rarg___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_OrderHom_dualIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_apply___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_coeOrderHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_toOrderIso(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192o_____closed__10;
static lean_object* l_OrderHom_curry___closed__1;
static lean_object* l_OrderHom_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotCoe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_prod_u2098___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3;
lean_object* l_WithBot_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_isEmptyElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_fst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderEmbedding__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12;
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithTop_toDualBotEquiv(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2;
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_funUnique___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_onDiag___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_withBotMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___rarg___boxed(lean_object*);
static lean_object* l_OrderIso_instEquivLike___closed__2;
static lean_object* l_OrderEmbedding_withBotCoe___closed__1;
LEAN_EXPORT lean_object* l_OrderHom_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_impEmbedding___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_coeOrderHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_symm___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14;
LEAN_EXPORT lean_object* l_OrderHom_onDiag___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___elambda__1___rarg(lean_object*, lean_object*);
static lean_object* l_term___u2243o_____closed__5;
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instInhabited___boxed(lean_object*, lean_object*);
lean_object* l_EquivLike_toEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_orderEmbedding(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_copy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_copy___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_const___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u21aao_____closed__4;
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderIso__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_dual(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_funUnique___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_dualIso___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_WithBot_some___rarg(lean_object*);
lean_object* l_Equiv_refl(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dual___rarg___boxed(lean_object*);
static lean_object* l_term___u2243o_____closed__2;
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotCoe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_curry___lambda__1(lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderEmbedding__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7;
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithBot_toDualTopEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_prod___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop(lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_dualDual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_refl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_trans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderHom_diag___closed__1;
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopCoe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_piUnique___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom___rarg(lean_object*, lean_object*);
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_term___u2192o_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_→o_", 10, 8);
return x_1;
}
}
static lean_object* _init_l_term___u2192o_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192o_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192o_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term___u2192o_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192o_____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192o_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" →o ", 6, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2192o_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2192o_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2192o_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2192o_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192o_____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192o_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___u2192o_____closed__8;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192o_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192o_____closed__4;
x_2 = l_term___u2192o_____closed__6;
x_3 = l_term___u2192o_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192o_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_term___u2192o_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_unsigned_to_nat(26u);
x_4 = l_term___u2192o_____closed__10;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_term___u2192o__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2192o_____closed__11;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1;
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2;
x_3 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3;
x_4 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OrderHom", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9;
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2192o_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
x_13 = 0;
x_14 = l_Lean_SourceInfo_fromRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_15);
x_19 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7;
x_20 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12;
lean_inc(x_14);
x_21 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14;
lean_inc(x_14);
x_23 = l_Lean_Syntax_node2(x_14, x_22, x_9, x_11);
x_24 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
x_25 = l_Lean_Syntax_node2(x_14, x_24, x_21, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_22 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_23 = 0;
x_24 = l_Lean_SourceInfo_fromRef(x_22, x_23);
lean_dec(x_22);
x_25 = l_term___u2192o_____closed__5;
lean_inc(x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_term___u2192o_____closed__2;
x_28 = l_Lean_Syntax_node3(x_24, x_27, x_20, x_26, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_term___u21aao_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_↪o_", 10, 8);
return x_1;
}
}
static lean_object* _init_l_term___u21aao_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u21aao_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u21aao_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ↪o ", 6, 4);
return x_1;
}
}
static lean_object* _init_l_term___u21aao_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u21aao_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u21aao_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___u2192o_____closed__8;
x_2 = lean_unsigned_to_nat(26u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u21aao_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192o_____closed__4;
x_2 = l_term___u21aao_____closed__4;
x_3 = l_term___u21aao_____closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u21aao_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u21aao_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = l_term___u21aao_____closed__6;
x_4 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u21aao__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u21aao_____closed__7;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OrderEmbedding", 14, 14);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u21aao_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
x_13 = 0;
x_14 = l_Lean_SourceInfo_fromRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_15);
x_19 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2;
x_20 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5;
lean_inc(x_14);
x_21 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14;
lean_inc(x_14);
x_23 = l_Lean_Syntax_node2(x_14, x_22, x_9, x_11);
x_24 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
x_25 = l_Lean_Syntax_node2(x_14, x_24, x_21, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderEmbedding__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_22 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_23 = 0;
x_24 = l_Lean_SourceInfo_fromRef(x_22, x_23);
lean_dec(x_22);
x_25 = l_term___u21aao_____closed__3;
lean_inc(x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_term___u21aao_____closed__2;
x_28 = l_Lean_Syntax_node3(x_24, x_27, x_20, x_26, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderEmbedding__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderEmbedding__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_term___u2243o_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_≃o_", 10, 8);
return x_1;
}
}
static lean_object* _init_l_term___u2243o_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2243o_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2243o_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ≃o ", 6, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2243o_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2243o_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2243o_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192o_____closed__4;
x_2 = l_term___u2243o_____closed__4;
x_3 = l_term___u21aao_____closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243o_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2243o_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = l_term___u2243o_____closed__5;
x_4 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243o__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2243o_____closed__6;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OrderIso", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2243o_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 5);
lean_inc(x_12);
x_13 = 0;
x_14 = l_Lean_SourceInfo_fromRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_15);
x_19 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2;
x_20 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5;
lean_inc(x_14);
x_21 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14;
lean_inc(x_14);
x_23 = l_Lean_Syntax_node2(x_14, x_22, x_9, x_11);
x_24 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
x_25 = l_Lean_Syntax_node2(x_14, x_24, x_21, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderIso__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_22 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_23 = 0;
x_24 = l_Lean_SourceInfo_fromRef(x_22, x_23);
lean_dec(x_22);
x_25 = l_term___u2243o_____closed__3;
lean_inc(x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_term___u2243o_____closed__2;
x_28 = l_Lean_Syntax_node3(x_24, x_27, x_20, x_26, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderIso__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderIso__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_EquivLike_toEquiv___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderIsoClass_toOrderIso___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIsoClass_toOrderIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIsoClass_toOrderIso(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderIsoClass_toOrderIso___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_instCoeTCOrderIsoOfOrderIsoClass___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instCoeTCOrderIsoOfOrderIsoClass___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_instCoeTCOrderIsoOfOrderIsoClass(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_toOrderHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_instCoeTCOrderHom___rarg), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_instCoeTCOrderHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_instCoeTCOrderHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_instFunLike___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_instFunLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_Simps_coe___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Simps_coe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_Simps_coe(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_copy___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHom_copy___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_copy___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_copy___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_copy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHom_copy(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_id___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_id(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_id___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_id___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_id___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_id___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_id(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_OrderHom_instInhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_id___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_instInhabited___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_OrderHom_instPreorder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instPreorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_instPreorder___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instPreorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_instPreorder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_instPreorder___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_instPartialOrder(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_curry___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_OrderHom_curry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_OrderHom_curry___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_OrderHom_curry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_OrderHom_curry___closed__1;
x_2 = l_OrderHom_curry___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry___closed__3;
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderHom_comp___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_comp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_comp_u2098___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry___closed__3;
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_OrderHom_comp_u2098___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_comp_u2098___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__1), 2, 0);
x_5 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__2), 1, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_OrderHom_comp_u2098___rarg___closed__1;
x_8 = l_Equiv_toEmbedding___elambda__1___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_comp_u2098___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_comp_u2098___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry___at_OrderHom_comp_u2098___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp_u2098___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_comp_u2098___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_const___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_const___elambda__1___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_const___elambda__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_const___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_const___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_const___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_const___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderHom_prod___elambda__1___rarg), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHom_prod___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_prod___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_prod___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHom_prod___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_prod_u2098___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry___closed__3;
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_OrderHom_prod___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_OrderHom_prod_u2098___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_prod_u2098___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__1), 2, 0);
x_5 = lean_alloc_closure((void*)(l_OrderHom_curry___lambda__2), 1, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_OrderHom_prod_u2098___rarg___closed__1;
x_8 = l_Equiv_toEmbedding___elambda__1___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_prod_u2098___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_curry___at_OrderHom_prod_u2098___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_curry___at_OrderHom_prod_u2098___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prod_u2098___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_prod_u2098___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_OrderHom_diag___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_OrderHom_instInhabited___closed__1;
x_2 = lean_alloc_closure((void*)(l_OrderHom_prod___elambda__1___rarg), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_diag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_diag___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_diag___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_diag(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_comp___at_OrderHom_onDiag___spec__1___rarg), 2, 0);
return x_5;
}
}
static lean_object* _init_l_OrderHom_onDiag___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_OrderHom_curry___closed__3;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_onDiag___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_OrderHom_onDiag___rarg___closed__1;
x_5 = l_Equiv_toEmbedding___elambda__1___rarg(x_4, x_3);
x_6 = l_OrderHom_diag___closed__1;
x_7 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_onDiag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_onDiag___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_onDiag___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_comp___at_OrderHom_onDiag___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_onDiag___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_onDiag___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_fst___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_fst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_fst___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_fst___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_fst___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_fst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_fst(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_snd___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_snd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_snd___elambda__1___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_snd___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_snd___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_snd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_snd(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderHom_comp___at_OrderHom_prodIso___spec__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderHom_comp___at_OrderHom_prodIso___spec__2___rarg), 2, 0);
return x_7;
}
}
static lean_object* _init_l_OrderHom_prodIso___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_fst___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_OrderHom_prodIso___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_snd___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_OrderHom_prodIso___rarg___lambda__1___closed__1;
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = l_OrderHom_prodIso___rarg___lambda__1___closed__2;
x_8 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_prodIso___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = l_OrderHom_prod_u2098___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodIso(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_prodIso___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_comp___at_OrderHom_prodIso___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_prodIso___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_comp___at_OrderHom_prodIso___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodIso___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_prodIso___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Prod_map___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_prodMap___elambda__1___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_prodMap___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_OrderHom_prodMap___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OrderHom_prodMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_OrderHom_prodMap(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalOrderHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_coeFnHom___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_coeFnHom___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_coeFnHom___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_coeFnHom___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_coeFnHom___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_coeFnHom___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___at_OrderHom_apply___spec__1___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_comp___at_OrderHom_apply___spec__2___rarg), 2, 0);
return x_5;
}
}
static lean_object* _init_l_OrderHom_apply___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_coeFnHom___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_apply___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_OrderHom_apply___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_apply(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_apply___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_evalOrderHom___at_OrderHom_apply___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_evalOrderHom___at_OrderHom_apply___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_apply___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_comp___at_OrderHom_apply___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_apply___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_apply___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHom_pi___elambda__1___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHom_pi___elambda__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_pi___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHom_pi___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_pi___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHom_pi___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderHom_comp___at_OrderHom_piIso___spec__1___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Pi_evalOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_OrderHom_piIso___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_OrderHom_pi___rarg___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, lean_box(0));
lean_closure_set(x_6, 2, lean_box(0));
lean_closure_set(x_6, 3, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_piIso(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_piIso___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_comp___at_OrderHom_piIso___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderHom_comp___at_OrderHom_piIso___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderHom_piIso___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_piIso___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_Subtype_val___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_Subtype_val___elambda__1___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_Subtype_val___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_Subtype_val___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_Subtype_val(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Subtype_orderEmbedding___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Subtype_impEmbedding___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Subtype_orderEmbedding(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subtype_orderEmbedding___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_Subtype_orderEmbedding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Subtype_orderEmbedding(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHom_unique(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_instInhabited___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_unique___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_unique(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_OrderHom_dual___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderHom_dual___elambda__1___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_OrderHom_dual___elambda__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_dual___elambda__1___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_OrderHom_dual___elambda__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_dual___elambda__2___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_dual___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_closure((void*)(l_OrderHom_dual___elambda__1___rarg), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_dual___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderHom_dual___elambda__1___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_dual___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_dual___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dual___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dual___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_OrderHom_dualIso___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dualIso___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_OrderHom_dual___rarg(x_1, x_2);
x_4 = l_OrderHom_dualIso___rarg___closed__1;
x_5 = l_Equiv_trans___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dualIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_dualIso___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_dualIso___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dualIso___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_map___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_withBotMap___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_withBotMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withBotMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_withBotMap___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withBotMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_withBotMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_map___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_withTopMap___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderHom_withTopMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withTopMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_withTopMap___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_withTopMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_withTopMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderHom_uliftMap___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderHom_uliftMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderHom_uliftMap___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderHom_uliftMap___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHom_uliftMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderHom_uliftMap___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RelEmbedding_orderEmbeddingOfLTEmbedding___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RelEmbedding_orderEmbeddingOfLTEmbedding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelEmbedding_orderEmbeddingOfLTEmbedding(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_ltEmbedding___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderEmbedding_ltEmbedding___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ltEmbedding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_ltEmbedding(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_dual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_dual___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderEmbedding_dual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_dual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_dual(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_Embedding_optionMap___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_withBotMap___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_withBotMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_withTopMap___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_withTopMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_OrderEmbedding_withBotCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotCoe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withBotCoe___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withBotCoe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withBotCoe(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_OrderEmbedding_withTopCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopCoe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withTopCoe___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopCoe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withTopCoe(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_ofMapLEIff___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_ofMapLEIff___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofMapLEIff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_ofMapLEIff(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_ofStrictMono___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_ofStrictMono___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_ofStrictMono(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_OrderEmbedding_subtype___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderEmbedding_subtype___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_subtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderEmbedding_subtype(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderEmbedding_toOrderHom___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderEmbedding_toOrderHom___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_toOrderHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OrderEmbedding_toOrderHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_OrderEmbedding_ofIsEmpty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_isEmptyElim___boxed), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofIsEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderEmbedding_ofIsEmpty___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofIsEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderEmbedding_ofIsEmpty(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RelHom_toOrderHom___elambda__1___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_RelHom_toOrderHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RelHom_toOrderHom___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RelHom_toOrderHom___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RelHom_toOrderHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RelHom_toOrderHom___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_OrderIso_instEquivLike___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderIso_instEquivLike___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_OrderIso_instEquivLike___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OrderIso_instEquivLike___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_OrderIso_instEquivLike___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_OrderIso_instEquivLike___closed__1;
x_2 = l_OrderIso_instEquivLike___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_instEquivLike___closed__3;
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_instEquivLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_instEquivLike(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_toOrderEmbedding___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toOrderEmbedding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_toOrderEmbedding(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_refl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dualIso___rarg___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_refl___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderIso_refl(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_symm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_symm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_symm___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_symm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_symm(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_trans___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_trans(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderIso_trans___rarg), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_trans___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderIso_trans(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
static lean_object* _init_l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Equiv_symm___rarg(x_4);
x_11 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_Equiv_symm___rarg(x_1);
x_9 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 0);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l_OrderHomClass_toOrderHom___elambda__1___rarg), 3, 2);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_OrderHom_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_OrderIso_arrowCongr___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_5);
lean_closure_set(x_7, 4, x_1);
lean_closure_set(x_7, 5, x_3);
x_8 = lean_alloc_closure((void*)(l_OrderIso_arrowCongr___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_1);
lean_closure_set(x_8, 4, x_3);
lean_closure_set(x_8, 5, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_arrowCongr___rarg), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_OrderIso_arrowCongr___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderIso_arrowCongr___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_OrderIso_arrowCongr___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_OrderIso_instEquivLike___closed__1;
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_OrderIso_instEquivLike___closed__2;
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_conj___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_OrderIso_arrowCongr___rarg(x_1, x_1, x_2, x_2, x_3, x_3);
x_5 = l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___rarg(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_conj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderIso_conj___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_EquivLike_toEquiv___at_OrderIso_conj___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EquivLike_toEquiv___at_OrderIso_conj___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_OrderIso_prodComm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_prodComm(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_prodComm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_prodComm___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_prodComm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_prodComm(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dualDual(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dualIso___rarg___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dualDual___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderIso_dualDual(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_toRelIsoLT___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderIso_toRelIsoLT___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_toRelIsoLT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_toRelIsoLT(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_ofRelIsoLT___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderIso_ofRelIsoLT___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofRelIsoLT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_ofRelIsoLT(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_ofCmpEqCmp___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofCmpEqCmp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_ofCmpEqCmp(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_apply_1(x_1, x_5);
x_10 = lean_apply_1(x_3, x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_OrderIso_ofHomInv___rarg), 8, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_ofHomInv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_OrderIso_ofHomInv(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_funUnique___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Equiv_piUnique___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_funUnique(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OrderIso_funUnique___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_funUnique___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderIso_funUnique___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_toOrderIso(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Equiv_toOrderIso___rarg___boxed), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Equiv_toOrderIso___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_toOrderIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_toOrderIso(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StrictMono_orderIsoOfRightInverse___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StrictMono_orderIsoOfRightInverse(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dual___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_dual___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dual___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderIso_dual___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_dual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_dual(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithBot_toDualTopEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dualIso___rarg___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_toDualTopEquiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_toDualTopEquiv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_coeOrderHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withBotCoe___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithBot_coeOrderHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithBot_coeOrderHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_toDualBotEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderHom_dualIso___rarg___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_toDualBotEquiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_toDualBotEquiv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_Embedding_coeWithTop___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_coeWithTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Function_Embedding_coeWithTop___elambda__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithTop_coeOrderHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_withTopCoe___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithTop_coeOrderHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithTop_coeOrderHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_optionCongr___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_withTopCongr___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withTopCongr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_withTopCongr(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Equiv_optionCongr___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OrderIso_withBotCongr___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_withBotCongr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_withBotCongr(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Option(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelIso_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Disjoint(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_WithBot(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Monotonicity_Attr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AssertExists(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Option(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelIso_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Disjoint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_WithBot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Monotonicity_Attr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AssertExists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_term___u2192o_____closed__1 = _init_l_term___u2192o_____closed__1();
lean_mark_persistent(l_term___u2192o_____closed__1);
l_term___u2192o_____closed__2 = _init_l_term___u2192o_____closed__2();
lean_mark_persistent(l_term___u2192o_____closed__2);
l_term___u2192o_____closed__3 = _init_l_term___u2192o_____closed__3();
lean_mark_persistent(l_term___u2192o_____closed__3);
l_term___u2192o_____closed__4 = _init_l_term___u2192o_____closed__4();
lean_mark_persistent(l_term___u2192o_____closed__4);
l_term___u2192o_____closed__5 = _init_l_term___u2192o_____closed__5();
lean_mark_persistent(l_term___u2192o_____closed__5);
l_term___u2192o_____closed__6 = _init_l_term___u2192o_____closed__6();
lean_mark_persistent(l_term___u2192o_____closed__6);
l_term___u2192o_____closed__7 = _init_l_term___u2192o_____closed__7();
lean_mark_persistent(l_term___u2192o_____closed__7);
l_term___u2192o_____closed__8 = _init_l_term___u2192o_____closed__8();
lean_mark_persistent(l_term___u2192o_____closed__8);
l_term___u2192o_____closed__9 = _init_l_term___u2192o_____closed__9();
lean_mark_persistent(l_term___u2192o_____closed__9);
l_term___u2192o_____closed__10 = _init_l_term___u2192o_____closed__10();
lean_mark_persistent(l_term___u2192o_____closed__10);
l_term___u2192o_____closed__11 = _init_l_term___u2192o_____closed__11();
lean_mark_persistent(l_term___u2192o_____closed__11);
l_term___u2192o__ = _init_l_term___u2192o__();
lean_mark_persistent(l_term___u2192o__);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__1);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__2);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__3);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__4);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__5);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__6);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__7);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__8);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__9);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__10);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__11);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__12);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__13);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2192o____1___closed__14);
l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1 = _init_l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__1);
l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2 = _init_l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______unexpand__OrderHom__1___closed__2);
l_term___u21aao_____closed__1 = _init_l_term___u21aao_____closed__1();
lean_mark_persistent(l_term___u21aao_____closed__1);
l_term___u21aao_____closed__2 = _init_l_term___u21aao_____closed__2();
lean_mark_persistent(l_term___u21aao_____closed__2);
l_term___u21aao_____closed__3 = _init_l_term___u21aao_____closed__3();
lean_mark_persistent(l_term___u21aao_____closed__3);
l_term___u21aao_____closed__4 = _init_l_term___u21aao_____closed__4();
lean_mark_persistent(l_term___u21aao_____closed__4);
l_term___u21aao_____closed__5 = _init_l_term___u21aao_____closed__5();
lean_mark_persistent(l_term___u21aao_____closed__5);
l_term___u21aao_____closed__6 = _init_l_term___u21aao_____closed__6();
lean_mark_persistent(l_term___u21aao_____closed__6);
l_term___u21aao_____closed__7 = _init_l_term___u21aao_____closed__7();
lean_mark_persistent(l_term___u21aao_____closed__7);
l_term___u21aao__ = _init_l_term___u21aao__();
lean_mark_persistent(l_term___u21aao__);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__1);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__2);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__3);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__4);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u21aao____1___closed__5);
l_term___u2243o_____closed__1 = _init_l_term___u2243o_____closed__1();
lean_mark_persistent(l_term___u2243o_____closed__1);
l_term___u2243o_____closed__2 = _init_l_term___u2243o_____closed__2();
lean_mark_persistent(l_term___u2243o_____closed__2);
l_term___u2243o_____closed__3 = _init_l_term___u2243o_____closed__3();
lean_mark_persistent(l_term___u2243o_____closed__3);
l_term___u2243o_____closed__4 = _init_l_term___u2243o_____closed__4();
lean_mark_persistent(l_term___u2243o_____closed__4);
l_term___u2243o_____closed__5 = _init_l_term___u2243o_____closed__5();
lean_mark_persistent(l_term___u2243o_____closed__5);
l_term___u2243o_____closed__6 = _init_l_term___u2243o_____closed__6();
lean_mark_persistent(l_term___u2243o_____closed__6);
l_term___u2243o__ = _init_l_term___u2243o__();
lean_mark_persistent(l_term___u2243o__);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__1);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__2);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__3);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__4);
l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5 = _init_l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Order__Hom__Basic______macroRules__term___u2243o____1___closed__5);
l_OrderHom_instInhabited___closed__1 = _init_l_OrderHom_instInhabited___closed__1();
lean_mark_persistent(l_OrderHom_instInhabited___closed__1);
l_OrderHom_instPreorder___closed__1 = _init_l_OrderHom_instPreorder___closed__1();
lean_mark_persistent(l_OrderHom_instPreorder___closed__1);
l_OrderHom_curry___closed__1 = _init_l_OrderHom_curry___closed__1();
lean_mark_persistent(l_OrderHom_curry___closed__1);
l_OrderHom_curry___closed__2 = _init_l_OrderHom_curry___closed__2();
lean_mark_persistent(l_OrderHom_curry___closed__2);
l_OrderHom_curry___closed__3 = _init_l_OrderHom_curry___closed__3();
lean_mark_persistent(l_OrderHom_curry___closed__3);
l_OrderHom_comp_u2098___rarg___closed__1 = _init_l_OrderHom_comp_u2098___rarg___closed__1();
lean_mark_persistent(l_OrderHom_comp_u2098___rarg___closed__1);
l_OrderHom_prod_u2098___rarg___closed__1 = _init_l_OrderHom_prod_u2098___rarg___closed__1();
lean_mark_persistent(l_OrderHom_prod_u2098___rarg___closed__1);
l_OrderHom_diag___closed__1 = _init_l_OrderHom_diag___closed__1();
lean_mark_persistent(l_OrderHom_diag___closed__1);
l_OrderHom_onDiag___rarg___closed__1 = _init_l_OrderHom_onDiag___rarg___closed__1();
lean_mark_persistent(l_OrderHom_onDiag___rarg___closed__1);
l_OrderHom_prodIso___rarg___lambda__1___closed__1 = _init_l_OrderHom_prodIso___rarg___lambda__1___closed__1();
lean_mark_persistent(l_OrderHom_prodIso___rarg___lambda__1___closed__1);
l_OrderHom_prodIso___rarg___lambda__1___closed__2 = _init_l_OrderHom_prodIso___rarg___lambda__1___closed__2();
lean_mark_persistent(l_OrderHom_prodIso___rarg___lambda__1___closed__2);
l_OrderHom_apply___rarg___closed__1 = _init_l_OrderHom_apply___rarg___closed__1();
lean_mark_persistent(l_OrderHom_apply___rarg___closed__1);
l_Subtype_orderEmbedding___closed__1 = _init_l_Subtype_orderEmbedding___closed__1();
lean_mark_persistent(l_Subtype_orderEmbedding___closed__1);
l_OrderHom_dual___elambda__1___rarg___closed__1 = _init_l_OrderHom_dual___elambda__1___rarg___closed__1();
lean_mark_persistent(l_OrderHom_dual___elambda__1___rarg___closed__1);
l_OrderHom_dualIso___rarg___closed__1 = _init_l_OrderHom_dualIso___rarg___closed__1();
lean_mark_persistent(l_OrderHom_dualIso___rarg___closed__1);
l_OrderEmbedding_withBotCoe___closed__1 = _init_l_OrderEmbedding_withBotCoe___closed__1();
lean_mark_persistent(l_OrderEmbedding_withBotCoe___closed__1);
l_OrderEmbedding_withTopCoe___closed__1 = _init_l_OrderEmbedding_withTopCoe___closed__1();
lean_mark_persistent(l_OrderEmbedding_withTopCoe___closed__1);
l_OrderEmbedding_subtype___closed__1 = _init_l_OrderEmbedding_subtype___closed__1();
lean_mark_persistent(l_OrderEmbedding_subtype___closed__1);
l_OrderEmbedding_ofIsEmpty___closed__1 = _init_l_OrderEmbedding_ofIsEmpty___closed__1();
lean_mark_persistent(l_OrderEmbedding_ofIsEmpty___closed__1);
l_OrderIso_instEquivLike___closed__1 = _init_l_OrderIso_instEquivLike___closed__1();
lean_mark_persistent(l_OrderIso_instEquivLike___closed__1);
l_OrderIso_instEquivLike___closed__2 = _init_l_OrderIso_instEquivLike___closed__2();
lean_mark_persistent(l_OrderIso_instEquivLike___closed__2);
l_OrderIso_instEquivLike___closed__3 = _init_l_OrderIso_instEquivLike___closed__3();
lean_mark_persistent(l_OrderIso_instEquivLike___closed__3);
l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1 = _init_l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1();
lean_mark_persistent(l_OrderHomClass_toOrderHom___at_OrderIso_arrowCongr___spec__1___rarg___closed__1);
l_OrderIso_prodComm___closed__1 = _init_l_OrderIso_prodComm___closed__1();
lean_mark_persistent(l_OrderIso_prodComm___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
