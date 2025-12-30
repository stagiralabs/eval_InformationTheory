// Lean compiler output
// Module: Mathlib.MeasureTheory.Function.AEEqFun
// Imports: Init Mathlib.MeasureTheory.Integral.Lebesgue Mathlib.Order.Filter.Germ.Basic Mathlib.Topology.ContinuousMap.Algebra Mathlib.MeasureTheory.Function.StronglyMeasurable.AEStronglyMeasurable
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
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5;
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13;
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_aeEqSetoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___rarg(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg(lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1;
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddGroup(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommGroup(lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermAddMonoidHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_AEEqFun_instPreorder___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommMonoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12;
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermAddMonoidHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1;
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDiv(lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d__;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPreorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7;
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_aeEqSetoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_aeEqSetoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_Measure_aeEqSetoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_Measure_aeEqSetoid(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MeasureTheory", 13, 13);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_→ₘ[_]_", 15, 11);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1;
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" →ₘ[", 8, 4);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5;
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7;
x_3 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("] ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5;
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11;
x_3 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5;
x_2 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14;
x_3 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d__() {
_start:
{
lean_object* x_1; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16;
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1;
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2;
x_3 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3;
x_4 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("AEEqFun", 7, 7);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1;
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 5);
lean_inc(x_14);
x_15 = 0;
x_16 = l_Lean_SourceInfo_fromRef(x_14, x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8;
x_20 = l_Lean_addMacroScope(x_18, x_19, x_17);
x_21 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7;
x_22 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11;
lean_inc(x_16);
x_23 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_20);
lean_ctor_set(x_23, 3, x_22);
x_24 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13;
lean_inc(x_16);
x_25 = l_Lean_Syntax_node3(x_16, x_24, x_9, x_13, x_11);
x_26 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5;
x_27 = l_Lean_Syntax_node2(x_16, x_26, x_23, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5;
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
x_10 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2;
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
x_16 = lean_unsigned_to_nat(3u);
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_15, x_22);
lean_dec(x_15);
x_24 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_25 = 0;
x_26 = l_Lean_SourceInfo_fromRef(x_24, x_25);
lean_dec(x_24);
x_27 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6;
lean_inc(x_26);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12;
lean_inc(x_26);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3;
x_32 = l_Lean_Syntax_node5(x_26, x_31, x_20, x_28, x_23, x_30, x_21);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MeasureTheory_AEEqFun_compQuasiMeasurePreserving___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MeasureTheory_AEEqFun_compMeasurePreserving___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_compMeasurable___rarg___boxed), 14, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_compMeasurable___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_MeasureTheory_AEEqFun_compMeasurable___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_3, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2___rarg), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_pair___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_pair___rarg___lambda__2(x_1, x_3, x_4, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_pair___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_pair___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Quotient_liftOn_u2082_x27___at_MeasureTheory_AEEqFun_pair___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_pair___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_pair___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg___boxed), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_10, 0, x_6);
x_11 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_2, x_4, x_5, x_8, x_9);
x_12 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg(x_1, x_3, x_4, x_5, x_2, x_10, lean_box(0), x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_comp_u2082___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MeasureTheory_AEEqFun_comp_u2082___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg___boxed), 14, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_21, 0, x_17);
x_22 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_2, x_4, x_5, x_19, x_20);
x_23 = l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg(x_1, x_3, x_4, x_5, x_6, x_9, x_13, x_2, lean_box(0), lean_box(0), lean_box(0), x_21, lean_box(0), x_22);
return x_23;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg___boxed), 20, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_MeasureTheory_AEEqFun_compMeasurable___at_MeasureTheory_AEEqFun_comp_u2082Measurable___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_MeasureTheory_AEEqFun_comp_u2082Measurable___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_toGerm___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MeasureTheory_AEEqFun_toGerm___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGerm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_toGerm(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_MeasureTheory_AEEqFun_instPreorder___closed__1() {
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
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPreorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instPreorder___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPreorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instPreorder(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instPreorder___closed__1;
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instPartialOrder(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_2, x_2, x_6, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg(x_1, x_2, x_3, x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg(x_1, x_3, x_2, x_8, lean_box(0), x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSup___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSup___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSup___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instSup___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instSup___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_2, x_2, x_6, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg(x_1, x_2, x_3, x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg(x_1, x_3, x_2, x_8, lean_box(0), x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instInf___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instInf___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instInf___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instInf___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instInf___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_2, x_2, x_6, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg(x_1, x_2, x_3, x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_2, x_2, x_6, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg(x_1, x_2, x_3, x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_4);
x_6 = l_Lattice_toSemilatticeInf___rarg(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_MeasureTheory_AEEqFun_instPartialOrder(lean_box(0), lean_box(0), x_1, x_2, x_3, x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instLattice___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instLattice___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instLattice___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instLattice___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instLattice___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_const___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_const___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_const___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_const___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_const___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instInhabited___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_instInhabited___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instOne___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instOne___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_instOne___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instZero___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MeasureTheory_AEEqFun_instZero___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_1(x_5, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg(x_1, x_3, x_2, x_9, lean_box(0), x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSMul___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instSMul___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instSMul___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MeasureTheory_AEEqFun_instSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 1);
lean_closure_set(x_8, 0, x_4);
x_9 = l_MeasureTheory_AEEqFun_pair___rarg(x_1, x_3, x_2, x_2, x_6, x_7);
x_10 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg(x_1, x_2, x_3, x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_2);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instMul___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMul___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMul___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___rarg(x_1, x_2, x_3, x_3, x_3, x_5, lean_box(0), x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_6);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_8);
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSMul___rarg___boxed), 8, 6);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, lean_box(0));
lean_closure_set(x_11, 4, x_10);
lean_closure_set(x_11, 5, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAddMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, x_6);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_8);
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSMul___rarg___boxed), 8, 6);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, lean_box(0));
lean_closure_set(x_11, 4, x_10);
lean_closure_set(x_11, 5, lean_box(0));
x_12 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAddCommMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
x_9 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg(x_1, x_3, x_2, x_8, lean_box(0), x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowNat___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowNat___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowNat___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowNat___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instPowNat___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, lean_box(0));
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_8);
x_10 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_2);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMonoid___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMonoid___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instMonoid___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_toGerm___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_toGermMonoidHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermAddMonoidHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1;
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_toGermAddMonoidHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_toGermAddMonoidHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_6);
lean_closure_set(x_7, 4, lean_box(0));
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_8);
x_10 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_2);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instCommMonoid___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instCommMonoid___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instCommMonoid___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instCommMonoid___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_DivInvOneMonoid_toInvOneClass___rarg(x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___rarg___boxed), 7, 6);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_3);
lean_closure_set(x_8, 4, x_7);
lean_closure_set(x_8, 5, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instInv___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instInv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_instInv___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___rarg(x_1, x_2, x_3, x_3, x_5, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg___boxed), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instNeg___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instNeg___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
lean_dec(x_4);
lean_inc_n(x_3, 2);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___rarg___boxed), 9, 7);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_3);
lean_closure_set(x_7, 4, x_3);
lean_closure_set(x_7, 5, x_6);
lean_closure_set(x_7, 6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instDiv___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_comp_u2082___rarg(x_1, x_2, x_3, x_3, x_3, x_5, lean_box(0), x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSub___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instSub___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowInt___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
x_9 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg(x_1, x_3, x_2, x_8, lean_box(0), x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowInt___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instPowInt___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instPowInt___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instPowInt___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_instPowInt___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAdd___elambda__1___rarg___boxed), 7, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_7);
lean_closure_set(x_8, 4, x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_9);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSMul___rarg___boxed), 8, 6);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, lean_box(0));
lean_closure_set(x_12, 4, x_11);
lean_closure_set(x_12, 5, lean_box(0));
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_MeasureTheory_AEEqFun_instNeg___rarg(x_1, x_2, x_3, x_4, lean_box(0));
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_MeasureTheory_AEEqFun_instSub___rarg(x_1, x_2, x_3, x_4, lean_box(0));
x_15 = lean_ctor_get(x_4, 3);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instSMul___rarg___boxed), 8, 6);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, lean_box(0));
lean_closure_set(x_16, 4, x_15);
lean_closure_set(x_16, 5, lean_box(0));
x_17 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_12);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_10);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_19, 0, x_16);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_13);
lean_ctor_set(x_20, 2, x_14);
lean_ctor_set(x_20, 3, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAddGroup___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_instAddGroup___rarg(x_1, x_2, x_3, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instAddCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instAddCommGroup___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowNat___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instPowInt___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg(x_2, x_3, x_4, x_7, lean_box(0), x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp_u2082___at_MeasureTheory_AEEqFun_instMul___spec__1___rarg___boxed), 7, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_7);
lean_closure_set(x_8, 4, lean_box(0));
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = l_MeasureTheory_AEEqFun_const___rarg(x_1, x_2, x_3, x_9);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_MeasureTheory_AEEqFun_instInv___rarg(x_1, x_2, x_3, x_4, lean_box(0));
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_MeasureTheory_AEEqFun_instDiv___rarg(x_1, x_2, x_3, x_4, lean_box(0));
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1___boxed), 6, 4);
lean_closure_set(x_13, 0, x_6);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_2);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2___boxed), 6, 4);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_2);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_12);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instGroup___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instGroup___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instGroup___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_instGroup___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_instGroup___rarg(x_1, x_2, x_3, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instCommGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instCommGroup___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_1(x_6, x_8);
x_11 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg(x_1, x_3, x_2, x_10, lean_box(0), x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instMulAction___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instMulAction___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instMulAction___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_MeasureTheory_AEEqFun_instMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_apply_1(x_8, x_10);
x_13 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg(x_1, x_3, x_2, x_12, lean_box(0), x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instDistribMulAction___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instDistribMulAction___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instDistribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MeasureTheory_AEEqFun_instDistribMulAction___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_apply_1(x_8, x_10);
x_13 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg(x_1, x_3, x_2, x_12, lean_box(0), x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_instModule___rarg___boxed), 11, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_instModule___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_instModule___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_instModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_MeasureTheory_AEEqFun_instModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_posPart___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_6);
x_9 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg(x_1, x_3, x_2, x_8, lean_box(0), x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_posPart___rarg___boxed), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_MeasureTheory_AEEqFun_posPart___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MeasureTheory_AEEqFun_comp___at_MeasureTheory_AEEqFun_posPart___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_posPart___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MeasureTheory_AEEqFun_posPart___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_inc(x_8);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFun___rarg___boxed), 8, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MeasureTheory_AEEqFun_mk___at_ContinuousMap_toAEEqFun___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFun___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ContinuousMap_toAEEqFun___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFun___rarg___boxed), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, lean_box(0));
lean_closure_set(x_10, 6, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFunMulHom___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunMulHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ContinuousMap_toAEEqFunMulHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFun___rarg___boxed), 8, 7);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, lean_box(0));
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, lean_box(0));
lean_closure_set(x_10, 6, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFunAddHom___rarg___boxed), 9, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunAddHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ContinuousMap_toAEEqFunAddHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
static lean_object* _init_l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFun___rarg___boxed), 8, 7);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, lean_box(0));
lean_closure_set(x_14, 4, x_7);
lean_closure_set(x_14, 5, lean_box(0));
lean_closure_set(x_14, 6, lean_box(0));
return x_14;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_toAEEqFunLinearMap___rarg___boxed), 13, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_toAEEqFunLinearMap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_ContinuousMap_toAEEqFunLinearMap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
return x_14;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Integral_Lebesgue(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Germ_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Function_StronglyMeasurable_AEStronglyMeasurable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Function_AEEqFun(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Integral_Lebesgue(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Germ_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Function_StronglyMeasurable_AEStronglyMeasurable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__1);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__2);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__3);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__4);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__5);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__6);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__7);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__8);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__9);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__10);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__11);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__12);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__13);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__14);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__15);
l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16 = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d_____closed__16);
l_MeasureTheory_term___u2192_u2098_x5b___x5d__ = _init_l_MeasureTheory_term___u2192_u2098_x5b___x5d__();
lean_mark_persistent(l_MeasureTheory_term___u2192_u2098_x5b___x5d__);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__1);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__2);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__3);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__4);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__5);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__6);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__7);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__8);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__9);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__10);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__11);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__12);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______macroRules__MeasureTheory__term___u2192_u2098_x5b___x5d____1___closed__13);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__1);
l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2 = _init_l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2();
lean_mark_persistent(l_MeasureTheory___aux__Mathlib__MeasureTheory__Function__AEEqFun______unexpand__MeasureTheory__AEEqFun__1___closed__2);
l_MeasureTheory_AEEqFun_instPreorder___closed__1 = _init_l_MeasureTheory_AEEqFun_instPreorder___closed__1();
lean_mark_persistent(l_MeasureTheory_AEEqFun_instPreorder___closed__1);
l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1 = _init_l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1();
lean_mark_persistent(l_MeasureTheory_AEEqFun_toGermMonoidHom___closed__1);
l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1 = _init_l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ContinuousMap_toAEEqFunLinearMap___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
