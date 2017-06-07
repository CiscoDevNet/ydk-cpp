#ifndef _ENTITY_STATE_TC_MIB_
#define _ENTITY_STATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ENTITY_STATE_TC_MIB {

class EntitystandbystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf hotStandby;
        static const Enum::YLeaf coldStandby;
        static const Enum::YLeaf providingService;

};

class EntityoperstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf testing;

};

class EntityadminstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf locked;
        static const Enum::YLeaf shuttingDown;
        static const Enum::YLeaf unlocked;

};

class EntityusagestateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf idle;
        static const Enum::YLeaf active;
        static const Enum::YLeaf busy;

};


}
}

#endif /* _ENTITY_STATE_TC_MIB_ */

