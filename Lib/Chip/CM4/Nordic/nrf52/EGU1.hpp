#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Event Generator Unit 1
    namespace Egu1Inten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40015300,0xffff0000,0x00000000,unsigned>;
        ///Enable or disable interrupt on EVENTS_TRIGGERED[0] event
        enum class Triggered0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Triggered0Val> triggered0{}; 
        namespace Triggered0ValC{
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[1] event
        enum class Triggered1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Triggered1Val> triggered1{}; 
        namespace Triggered1ValC{
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[2] event
        enum class Triggered2Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Triggered2Val> triggered2{}; 
        namespace Triggered2ValC{
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[3] event
        enum class Triggered3Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Triggered3Val> triggered3{}; 
        namespace Triggered3ValC{
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[4] event
        enum class Triggered4Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Triggered4Val> triggered4{}; 
        namespace Triggered4ValC{
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[5] event
        enum class Triggered5Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Triggered5Val> triggered5{}; 
        namespace Triggered5ValC{
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[6] event
        enum class Triggered6Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Triggered6Val> triggered6{}; 
        namespace Triggered6ValC{
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[7] event
        enum class Triggered7Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Triggered7Val> triggered7{}; 
        namespace Triggered7ValC{
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[8] event
        enum class Triggered8Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Triggered8Val> triggered8{}; 
        namespace Triggered8ValC{
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[9] event
        enum class Triggered9Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Triggered9Val> triggered9{}; 
        namespace Triggered9ValC{
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[10] event
        enum class Triggered10Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Triggered10Val> triggered10{}; 
        namespace Triggered10ValC{
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[11] event
        enum class Triggered11Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Triggered11Val> triggered11{}; 
        namespace Triggered11ValC{
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[12] event
        enum class Triggered12Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Triggered12Val> triggered12{}; 
        namespace Triggered12ValC{
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[13] event
        enum class Triggered13Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Triggered13Val> triggered13{}; 
        namespace Triggered13ValC{
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[14] event
        enum class Triggered14Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Triggered14Val> triggered14{}; 
        namespace Triggered14ValC{
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TRIGGERED[15] event
        enum class Triggered15Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Triggered15Val> triggered15{}; 
        namespace Triggered15ValC{
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::enabled> enabled{};
        }
    }
    namespace Egu1Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40015304,0xffff0000,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[0] event
        enum class Triggered0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Triggered0Val> triggered0{}; 
        namespace Triggered0ValC{
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[1] event
        enum class Triggered1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Triggered1Val> triggered1{}; 
        namespace Triggered1ValC{
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[2] event
        enum class Triggered2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Triggered2Val> triggered2{}; 
        namespace Triggered2ValC{
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[3] event
        enum class Triggered3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Triggered3Val> triggered3{}; 
        namespace Triggered3ValC{
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[4] event
        enum class Triggered4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Triggered4Val> triggered4{}; 
        namespace Triggered4ValC{
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[5] event
        enum class Triggered5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Triggered5Val> triggered5{}; 
        namespace Triggered5ValC{
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[6] event
        enum class Triggered6Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Triggered6Val> triggered6{}; 
        namespace Triggered6ValC{
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[7] event
        enum class Triggered7Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Triggered7Val> triggered7{}; 
        namespace Triggered7ValC{
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[8] event
        enum class Triggered8Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Triggered8Val> triggered8{}; 
        namespace Triggered8ValC{
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[9] event
        enum class Triggered9Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Triggered9Val> triggered9{}; 
        namespace Triggered9ValC{
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[10] event
        enum class Triggered10Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Triggered10Val> triggered10{}; 
        namespace Triggered10ValC{
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[11] event
        enum class Triggered11Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Triggered11Val> triggered11{}; 
        namespace Triggered11ValC{
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[12] event
        enum class Triggered12Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Triggered12Val> triggered12{}; 
        namespace Triggered12ValC{
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[13] event
        enum class Triggered13Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Triggered13Val> triggered13{}; 
        namespace Triggered13ValC{
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[14] event
        enum class Triggered14Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Triggered14Val> triggered14{}; 
        namespace Triggered14ValC{
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TRIGGERED[15] event
        enum class Triggered15Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Triggered15Val> triggered15{}; 
        namespace Triggered15ValC{
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::set> set{};
        }
    }
    namespace Egu1Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40015308,0xffff0000,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[0] event
        enum class Triggered0Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Triggered0Val> triggered0{}; 
        namespace Triggered0ValC{
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered0)::Type,Triggered0Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[1] event
        enum class Triggered1Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Triggered1Val> triggered1{}; 
        namespace Triggered1ValC{
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered1)::Type,Triggered1Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[2] event
        enum class Triggered2Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Triggered2Val> triggered2{}; 
        namespace Triggered2ValC{
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered2)::Type,Triggered2Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[3] event
        enum class Triggered3Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Triggered3Val> triggered3{}; 
        namespace Triggered3ValC{
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered3)::Type,Triggered3Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[4] event
        enum class Triggered4Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Triggered4Val> triggered4{}; 
        namespace Triggered4ValC{
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered4)::Type,Triggered4Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[5] event
        enum class Triggered5Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Triggered5Val> triggered5{}; 
        namespace Triggered5ValC{
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered5)::Type,Triggered5Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[6] event
        enum class Triggered6Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Triggered6Val> triggered6{}; 
        namespace Triggered6ValC{
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered6)::Type,Triggered6Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[7] event
        enum class Triggered7Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Triggered7Val> triggered7{}; 
        namespace Triggered7ValC{
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered7)::Type,Triggered7Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[8] event
        enum class Triggered8Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Triggered8Val> triggered8{}; 
        namespace Triggered8ValC{
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered8)::Type,Triggered8Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[9] event
        enum class Triggered9Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Triggered9Val> triggered9{}; 
        namespace Triggered9ValC{
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered9)::Type,Triggered9Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[10] event
        enum class Triggered10Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Triggered10Val> triggered10{}; 
        namespace Triggered10ValC{
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered10)::Type,Triggered10Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[11] event
        enum class Triggered11Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Triggered11Val> triggered11{}; 
        namespace Triggered11ValC{
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered11)::Type,Triggered11Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[12] event
        enum class Triggered12Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Triggered12Val> triggered12{}; 
        namespace Triggered12ValC{
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered12)::Type,Triggered12Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[13] event
        enum class Triggered13Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Triggered13Val> triggered13{}; 
        namespace Triggered13ValC{
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered13)::Type,Triggered13Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[14] event
        enum class Triggered14Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Triggered14Val> triggered14{}; 
        namespace Triggered14ValC{
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered14)::Type,Triggered14Val::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TRIGGERED[15] event
        enum class Triggered15Val {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Triggered15Val> triggered15{}; 
        namespace Triggered15ValC{
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(triggered15)::Type,Triggered15Val::clear> clear{};
        }
    }
    namespace Egu1TasksTrigger0{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger1{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger2{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger3{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001500c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger4{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger5{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger6{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015018,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger7{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001501c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger8{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger9{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015024,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger10{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015028,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger11{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001502c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger12{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015030,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger13{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015034,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger14{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015038,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger15{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001503c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered0{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered1{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered2{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered3{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001510c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered4{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015110,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered5{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015114,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered6{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015118,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered7{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001511c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered8{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015120,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered9{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered10{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015128,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered11{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001512c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered12{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015130,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered13{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015134,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered14{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered15{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001513c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger0{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger1{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015004,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger2{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger3{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001500c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger4{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015010,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger5{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger6{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015018,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger7{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001501c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger8{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger9{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015024,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger10{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015028,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger11{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001502c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger12{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015030,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger13{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015034,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger14{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x40015038,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1TasksTrigger15{    ///<Description collection[0]:  Trigger 0 for triggering the corresponding TRIGGERED[0] event
        using Addr = Register::Address<0x4001503c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered0{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015100,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered1{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered2{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered3{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001510c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered4{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015110,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered5{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015114,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered6{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015118,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered7{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001511c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered8{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015120,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered9{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered10{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015128,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered11{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001512c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered12{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015130,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered13{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015134,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered14{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x40015138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Egu1EventsTriggered15{    ///<Description collection[0]:  Event number 0 generated by triggering the corresponding TRIGGER[0] task
        using Addr = Register::Address<0x4001513c,0xffffffff,0x00000000,unsigned>;
    }
}
