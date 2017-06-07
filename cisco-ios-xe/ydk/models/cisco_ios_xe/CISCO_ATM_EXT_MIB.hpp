#ifndef _CISCO_ATM_EXT_MIB_
#define _CISCO_ATM_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ATM_EXT_MIB {

class OamccvcstateEnum : public Enum
{
    public:
        static const Enum::YLeaf verified;
        static const Enum::YLeaf aisrdi;
        static const Enum::YLeaf notManaged;

};

class OamccstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ready;
        static const Enum::YLeaf waitActiveResponse;
        static const Enum::YLeaf waitActiveConfirm;
        static const Enum::YLeaf active;
        static const Enum::YLeaf waitDeactiveConfirm;

};


}
}

#endif /* _CISCO_ATM_EXT_MIB_ */

