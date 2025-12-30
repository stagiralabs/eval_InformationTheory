// Lean compiler output
// Module: Mathlib.Algebra.Category.ModuleCat.Kernels
// Imports: Init Mathlib.Algebra.Category.ModuleCat.EpiMono Mathlib.CategoryTheory.ConcreteCategory.Elementwise
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
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__6(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg(lean_object*);
lean_object* l_Submodule_Quotient_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__23___boxed(lean_object*, lean_object*);
lean_object* l_Submodule_Quotient_instSMul_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_addCommGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__19(lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelCocone___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Submodule_liftQ___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__18___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12(lean_object*);
static lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Submodule_module___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_ModuleCat_cokernelCocone___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__13___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ModuleCat_cokernelCocone(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_QuotientAddGroup_Quotient_addGroup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__18___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2(lean_object*);
lean_object* l_ModuleCat_moduleCategory___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
x_8 = l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg(x_2, x_3, x_4, lean_box(0), x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg___boxed), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
if (x_3 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2___boxed), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_ModuleCat_moduleCategory___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8) {
_start:
{
if (x_8 == 0)
{
lean_dec(x_7);
return x_1;
}
else
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_9 = l_ModuleCat_moduleCategory___rarg(x_1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_inc(x_1);
x_11 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_6);
x_13 = lean_apply_1(x_12, x_6);
x_14 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_14, 0, x_7);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_9);
lean_closure_set(x_14, 4, x_13);
lean_closure_set(x_14, 5, x_10);
lean_closure_set(x_14, 6, x_4);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg(x_1, x_2, x_3, x_11, lean_box(0), x_4);
lean_dec(x_11);
lean_inc(x_12);
x_13 = l_Submodule_addCommGroup___rarg(x_5, x_6, x_12);
x_14 = l_Submodule_module___rarg(x_7, x_8, x_6, x_12);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_closure((void*)(l_ModuleCat_kernelCone___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_16, 0, x_10);
x_17 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg___boxed), 1, 0);
x_19 = l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg(x_1, x_2, x_3, x_4, x_17, x_15, x_18, lean_box(0));
return x_19;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_kernelCone___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelCone___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_comap___at_ModuleCat_kernelCone___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_ker___at_ModuleCat_kernelCone___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_subtype___at_ModuleCat_kernelCone___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelCone___spec__8(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__11(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelCone___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1(x_1, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__14(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelCone___spec__13(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__16(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelCone___spec__15(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__18___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__18(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelCone___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelCone___spec__17(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__4(x_1, x_2, x_3, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelCone___spec__19___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__19(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = l_LinearMap_comp___at_ModuleCat_kernelCone___spec__20(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = l_CategoryTheory_Limits_Fork_of_u03b9___at_ModuleCat_kernelCone___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelCone___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ModuleCat_kernelCone___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
x_8 = l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg(x_2, x_3, x_4, lean_box(0), x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_ModuleCat_moduleCategory___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = 0;
x_4 = lean_box(x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___rarg), 3, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg___boxed), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___rarg(x_7);
x_9 = lean_alloc_closure((void*)(l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_ModuleCat_kernelCone___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = lean_alloc_closure((void*)(l_ModuleCat_kernelIsLimit___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_9);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_kernelIsLimit___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_comap___at_ModuleCat_kernelIsLimit___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LinearMap_ker___at_ModuleCat_kernelIsLimit___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__5(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__10(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelIsLimit___spec__4___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__12(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__15(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__14(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__11___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Limits_Fork__u03b9___at_ModuleCat_kernelIsLimit___spec__16(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LinearMap_codRestrict___at_ModuleCat_kernelIsLimit___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__20(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__23___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelIsLimit___spec__23(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_kernelIsLimit___spec__22(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelIsLimit___spec__19___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Limits_Fork_IsLimit_mk___at_ModuleCat_kernelIsLimit___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_kernelIsLimit___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ModuleCat_kernelIsLimit___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
x_9 = l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg(x_3, x_4, lean_box(0), x_4, lean_box(0), x_7, x_8);
lean_dec(x_8);
x_10 = l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg(x_3, x_9, lean_box(0), lean_box(0));
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_ModuleCat_moduleCategory___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_closure((void*)(l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19___rarg), 2, 0);
return x_12;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8) {
_start:
{
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_dec(x_7);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_9 = l_ModuleCat_moduleCategory___rarg(x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_inc(x_1);
x_11 = l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_6);
x_13 = lean_apply_1(x_12, x_6);
x_14 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_9);
lean_closure_set(x_14, 3, x_10);
lean_closure_set(x_14, 4, x_13);
lean_closure_set(x_14, 5, x_7);
lean_closure_set(x_14, 6, x_4);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg), 8, 0);
return x_2;
}
}
static lean_object* _init_l_ModuleCat_cokernelCocone___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Submodule_Quotient_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelCocone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_9 = l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg(x_1, x_2, x_3, x_8, lean_box(0), lean_box(0), x_4);
lean_dec(x_8);
x_10 = l_QuotientAddGroup_Quotient_addGroup___rarg(x_5, x_9, lean_box(0));
x_11 = lean_alloc_closure((void*)(l_Submodule_Quotient_instSMul_x27___rarg___boxed), 5, 3);
lean_closure_set(x_11, 0, x_6);
lean_closure_set(x_11, 1, lean_box(0));
lean_closure_set(x_11, 2, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_closure((void*)(l_ModuleCat_kernelCone___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_13, 0, x_7);
x_14 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = l_ModuleCat_cokernelCocone___rarg___closed__1;
x_16 = l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg(x_1, x_2, x_3, x_4, x_14, x_12, x_15, lean_box(0));
return x_16;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelCocone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_cokernelCocone___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_ModuleCat_cokernelCocone___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_copy___at_ModuleCat_cokernelCocone___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_range___at_ModuleCat_cokernelCocone___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__7(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__10(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelCocone___spec__6___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__12(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__15(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__14(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__17___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__17(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelCocone___spec__16(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_ModuleCat_cokernelCocone___spec__11___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelCocone___spec__18___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelCocone___spec__18(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = l_LinearMap_comp___at_ModuleCat_cokernelCocone___spec__19(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = l_CategoryTheory_Limits_Cofork_of_u03c0___at_ModuleCat_cokernelCocone___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
x_9 = l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg(x_3, x_4, lean_box(0), x_4, lean_box(0), x_7, x_8);
lean_dec(x_8);
x_10 = l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg(x_3, x_9, lean_box(0), lean_box(0));
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_ModuleCat_moduleCategory___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__23(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_inc(x_1);
return x_1;
}
case 1:
{
lean_inc(x_2);
return x_2;
}
default: 
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_kernelCone___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1___boxed), 8, 5);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg___boxed), 3, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0), lean_box(0), x_5);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___rarg(x_9);
x_15 = l_Submodule_liftQ___rarg(x_1, x_7, x_8, x_10, lean_box(0), lean_box(0), x_1, x_12, x_13, x_4, x_14, lean_box(0));
lean_dec(x_13);
lean_dec(x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_ModuleCat_kernelCone___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_11 = lean_alloc_closure((void*)(l_ModuleCat_cokernelIsColimit___rarg___lambda__1___boxed), 9, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_10);
lean_closure_set(x_11, 4, x_4);
lean_closure_set(x_11, 5, x_9);
lean_closure_set(x_11, 6, x_5);
lean_closure_set(x_11, 7, x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ModuleCat_cokernelIsColimit___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_map___at_ModuleCat_cokernelIsColimit___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Submodule_copy___at_ModuleCat_cokernelIsColimit___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LinearMap_range___at_ModuleCat_cokernelIsColimit___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__8(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__12(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__11(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__14(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__13(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__16___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__16(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__15(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Functor_const___at_ModuleCat_cokernelIsColimit___spec__10___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Limits_Cofork__u03c0___at_ModuleCat_cokernelIsColimit___spec__17(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__21(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__20(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__23___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ModuleCat_cokernelIsColimit___spec__23(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_id___at_ModuleCat_cokernelIsColimit___spec__22(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_CategoryTheory_Limits_parallelPair___at_ModuleCat_cokernelIsColimit___spec__19___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Limits_Cofork_IsColimit_mk___at_ModuleCat_cokernelIsColimit___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ModuleCat_cokernelIsColimit___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ModuleCat_cokernelIsColimit___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_EpiMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_ConcreteCategory_Elementwise(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_ModuleCat_Kernels(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_ModuleCat_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_ConcreteCategory_Elementwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1 = _init_l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ModuleCat_kernelCone___spec__1___closed__1);
l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1 = _init_l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1();
lean_mark_persistent(l_CategoryTheory_Functor_const___at_ModuleCat_kernelCone___spec__12___rarg___closed__1);
l_ModuleCat_cokernelCocone___rarg___closed__1 = _init_l_ModuleCat_cokernelCocone___rarg___closed__1();
lean_mark_persistent(l_ModuleCat_cokernelCocone___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
