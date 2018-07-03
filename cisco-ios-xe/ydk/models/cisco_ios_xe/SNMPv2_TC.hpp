#ifndef _SNMPV2_TC_
#define _SNMPV2_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace SNMPv2_TC {

class TruthValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};

class StorageType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf volatile_;
        static const ydk::Enum::YLeaf nonVolatile;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf readOnly;

};

class RowStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf notInService;
        static const ydk::Enum::YLeaf notReady;
        static const ydk::Enum::YLeaf createAndGo;
        static const ydk::Enum::YLeaf createAndWait;
        static const ydk::Enum::YLeaf destroy;

};


}
}

#endif /* _SNMPV2_TC_ */

