#ifndef _CISCO_ATM_EXT_MIB_
#define _CISCO_ATM_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ATM_EXT_MIB {

class OamCCVcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf verified;
        static const ydk::Enum::YLeaf aisrdi;
        static const ydk::Enum::YLeaf notManaged;

};

class OamCCStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf waitActiveResponse;
        static const ydk::Enum::YLeaf waitActiveConfirm;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf waitDeactiveConfirm;

};


}
}

#endif /* _CISCO_ATM_EXT_MIB_ */

