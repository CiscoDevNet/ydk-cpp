#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_
#define _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_cfg {

class DiffSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class ModSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qpsk;
        static const ydk::Enum::YLeaf Y_8qam;
        static const ydk::Enum::YLeaf Y_16qam;

        static int get_enum_value(const std::string & name) {
            if (name == "qpsk") return 1;
            if (name == "8qam") return 2;
            if (name == "16qam") return 3;
            return -1;
        }
};

class FecSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_15sdfec;
        static const ydk::Enum::YLeaf Y_25sdfec;
        static const ydk::Enum::YLeaf Y_15sdfecde;
        static const ydk::Enum::YLeaf otu7staircase;

        static int get_enum_value(const std::string & name) {
            if (name == "15sdfec") return 0;
            if (name == "25sdfec") return 1;
            if (name == "15sdfecde") return 2;
            if (name == "otu7staircase") return 3;
            return -1;
        }
};

class SpeedSel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_100g;
        static const ydk::Enum::YLeaf Y_150g;
        static const ydk::Enum::YLeaf Y_200g;

        static int get_enum_value(const std::string & name) {
            if (name == "100g") return 100000000;
            if (name == "150g") return 150000000;
            if (name == "200g") return 200000000;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_CFG_ */

