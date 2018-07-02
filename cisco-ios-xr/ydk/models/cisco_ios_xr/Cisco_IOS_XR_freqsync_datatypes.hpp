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

};

class FsyncClock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf gnss;

};

class GnssConstellation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf galileo;
        static const ydk::Enum::YLeaf bei_dou;
        static const ydk::Enum::YLeaf qzss;

};

class Gnss1ppsPolarity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf positive;
        static const ydk::Enum::YLeaf negative;

};


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_DATATYPES_ */

