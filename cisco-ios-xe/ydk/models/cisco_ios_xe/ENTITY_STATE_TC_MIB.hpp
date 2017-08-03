#ifndef _ENTITY_STATE_TC_MIB_
#define _ENTITY_STATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ENTITY_STATE_TC_MIB {

class Entityusagestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf busy;

};

class Entityoperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf testing;

};

class Entitystandbystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf hotStandby;
        static const ydk::Enum::YLeaf coldStandby;
        static const ydk::Enum::YLeaf providingService;

};

class Entityadminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf shuttingDown;
        static const ydk::Enum::YLeaf unlocked;

};


}
}

#endif /* _ENTITY_STATE_TC_MIB_ */

