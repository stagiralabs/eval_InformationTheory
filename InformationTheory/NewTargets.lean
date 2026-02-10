import VerifiedAgora.tagger
import InformationTheory.Hamming

namespace AgoraInformationTheory

-- Create some new simple targets for trading
@[target]
theorem simple_add : 2 + 2 = 4 := rfl

@[target]
theorem simple_mul : 3 * 5 = 15 := rfl

@[target]
theorem simple_nat : (10 : Nat) > 5 := by omega

end AgoraInformationTheory
