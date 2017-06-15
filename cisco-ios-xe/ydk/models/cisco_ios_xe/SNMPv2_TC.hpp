#ifndef _SNMPV2_TC_
#define _SNMPV2_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace SNMPv2_TC {

class TruthvalueEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;
        static const Enum::YLeaf false_;

};

class StoragetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf volatile_;
        static const Enum::YLeaf nonVolatile;
        static const Enum::YLeaf permanent;
        static const Enum::YLeaf readOnly;

};

class RowstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf notInService;
        static const Enum::YLeaf notReady;
        static const Enum::YLeaf createAndGo;
        static const Enum::YLeaf createAndWait;
        static const Enum::YLeaf destroy;

};


}
}

#endif /* _SNMPV2_TC_ */

