#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral SWWDT 
    namespace SwwdtWdogload{    ///< register WDOGLOAD 
        using Addr = Register::Address<0x40012000,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogvalue{    ///< register WDOGVALUE 
        using Addr = Register::Address<0x40012004,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogcontrol{    ///< register WDOGCONTROL 
        using Addr = Register::Address<0x40012008,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield RESEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        /// bitfield INTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace SwwdtWdogintclr{    ///< register WDOGINTCLR 
        using Addr = Register::Address<0x4001200c,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogris{    ///< register WDOGRIS 
        using Addr = Register::Address<0x40012010,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ris{}; 
    }
    namespace SwwdtWdoglock{    ///< register WDOGLOCK 
        using Addr = Register::Address<0x40012c00,0xffffffff,0x00000000,unsigned>;
    }
}
