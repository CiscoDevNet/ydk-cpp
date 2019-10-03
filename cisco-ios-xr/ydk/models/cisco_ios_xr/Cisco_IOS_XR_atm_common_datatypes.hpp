#ifndef _CISCO_IOS_XR_ATM_COMMON_DATATYPES_
#define _CISCO_IOS_XR_ATM_COMMON_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_common_datatypes {

class AtmVpShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf vbr_nrt;
        static const ydk::Enum::YLeaf vbr_rt;
        static const ydk::Enum::YLeaf ubr;

        static int get_enum_value(const std::string & name) {
            if (name == "cbr") return 1;
            if (name == "vbr-nrt") return 2;
            if (name == "vbr-rt") return 3;
            if (name == "ubr") return 6;
            return -1;
        }
};

class AtmPvcShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf vbr_nrt;
        static const ydk::Enum::YLeaf vbr_rt;
        static const ydk::Enum::YLeaf ubr;

        static int get_enum_value(const std::string & name) {
            if (name == "cbr") return 1;
            if (name == "vbr-nrt") return 2;
            if (name == "vbr-rt") return 3;
            if (name == "ubr") return 6;
            return -1;
        }
};

class AtmPvcEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf vc_mux;
        static const ydk::Enum::YLeaf nlpid;
        static const ydk::Enum::YLeaf aal0;
        static const ydk::Enum::YLeaf aal5;

        static int get_enum_value(const std::string & name) {
            if (name == "snap") return 3;
            if (name == "vc-mux") return 4;
            if (name == "nlpid") return 5;
            if (name == "aal0") return 7;
            if (name == "aal5") return 8;
            return -1;
        }
};

class AtmPvcData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf ilmi;
        static const ydk::Enum::YLeaf layer2;

        static int get_enum_value(const std::string & name) {
            if (name == "data") return 0;
            if (name == "ilmi") return 2;
            if (name == "layer2") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ATM_COMMON_DATATYPES_ */

