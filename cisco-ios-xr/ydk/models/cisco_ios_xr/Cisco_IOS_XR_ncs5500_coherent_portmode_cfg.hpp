#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_
#define _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_cfg {

class FecSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_15percent;
        static const ydk::Enum::YLeaf Y_25percent;

};

class SpeedSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_100g;
        static const ydk::Enum::YLeaf Y_150g;
        static const ydk::Enum::YLeaf Y_200g;

};

class DiffSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_ */

