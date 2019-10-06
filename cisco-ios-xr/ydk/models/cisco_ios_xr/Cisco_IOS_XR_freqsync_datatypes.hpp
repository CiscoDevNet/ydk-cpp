#ifndef _CISCO_IOS_XR_FREQSYNC_DATATYPES_
#define _CISCO_IOS_XR_FREQSYNC_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_datatypes {

class FsyncQlOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option_1;
        static const ydk::Enum::YLeaf option_2__COMMA___generation_1;
        static const ydk::Enum::YLeaf option_2__COMMA___generation_2;

        static int get_enum_value(const std::string & name) {
            if (name == "option-1") return 1;
            if (name == "option-2,-generation-1") return 2;
            if (name == "option-2,-generation-2") return 3;
            return -1;
        }
};

class FsyncQlValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dnu;
        static const ydk::Enum::YLeaf o1_prc;
        static const ydk::Enum::YLeaf o1_ssu_a;
        static const ydk::Enum::YLeaf o1_ssu_b;
        static const ydk::Enum::YLeaf o1_sec;
        static const ydk::Enum::YLeaf o2_g1_prs;
        static const ydk::Enum::YLeaf o2_g1_stu;
        static const ydk::Enum::YLeaf o2_g1_st2;
        static const ydk::Enum::YLeaf o2_g1_st3;
        static const ydk::Enum::YLeaf o2_g1_smc;
        static const ydk::Enum::YLeaf o2_g1_st4;
        static const ydk::Enum::YLeaf o2_g2_prs;
        static const ydk::Enum::YLeaf o2_g2_stu;
        static const ydk::Enum::YLeaf o2_g2_st2;
        static const ydk::Enum::YLeaf o2_g2_st3;
        static const ydk::Enum::YLeaf o2_g2_tnc;
        static const ydk::Enum::YLeaf o2_g2_st3e;
        static const ydk::Enum::YLeaf o2_g2_smc;
        static const ydk::Enum::YLeaf o2_g2_st4;

        static int get_enum_value(const std::string & name) {
            if (name == "dnu") return 1;
            if (name == "o1-prc") return 10;
            if (name == "o1-ssu-a") return 11;
            if (name == "o1-ssu-b") return 12;
            if (name == "o1-sec") return 13;
            if (name == "o2-g1-prs") return 20;
            if (name == "o2-g1-stu") return 21;
            if (name == "o2-g1-st2") return 22;
            if (name == "o2-g1-st3") return 23;
            if (name == "o2-g1-smc") return 24;
            if (name == "o2-g1-st4") return 25;
            if (name == "o2-g2-prs") return 30;
            if (name == "o2-g2-stu") return 31;
            if (name == "o2-g2-st2") return 32;
            if (name == "o2-g2-st3") return 33;
            if (name == "o2-g2-tnc") return 34;
            if (name == "o2-g2-st3e") return 35;
            if (name == "o2-g2-smc") return 36;
            if (name == "o2-g2-st4") return 37;
            return -1;
        }
};

class FsyncClock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf gnss;

        static int get_enum_value(const std::string & name) {
            if (name == "sync") return 3;
            if (name == "internal") return 4;
            if (name == "gnss") return 8;
            return -1;
        }
};

class GnssConstellation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf galileo;
        static const ydk::Enum::YLeaf bei_dou;
        static const ydk::Enum::YLeaf qzss;
        static const ydk::Enum::YLeaf glonass;
        static const ydk::Enum::YLeaf sbas;
        static const ydk::Enum::YLeaf irnss;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "gps") return 1;
            if (name == "galileo") return 2;
            if (name == "bei-dou") return 3;
            if (name == "qzss") return 4;
            if (name == "glonass") return 5;
            if (name == "sbas") return 6;
            if (name == "irnss") return 7;
            return -1;
        }
};

class Gnss1ppsPolarity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf positive;
        static const ydk::Enum::YLeaf negative;

        static int get_enum_value(const std::string & name) {
            if (name == "positive") return 0;
            if (name == "negative") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_DATATYPES_ */

