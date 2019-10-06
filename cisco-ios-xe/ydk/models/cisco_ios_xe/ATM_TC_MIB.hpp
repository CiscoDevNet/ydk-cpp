#ifndef _ATM_TC_MIB_
#define _ATM_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace ATM_TC_MIB {

class AtmClpTransparentNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTransparentNoScr();
        ~AtmClpTransparentNoScr();


}; // AtmClpTransparentNoScr

class AtmNoClpScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpScr();
        ~AtmNoClpScr();


}; // AtmNoClpScr

class AtmClpTransparentScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTransparentScr();
        ~AtmClpTransparentScr();


}; // AtmClpTransparentScr

class AtmNoClpNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpNoScr();
        ~AtmNoClpNoScr();


}; // AtmNoClpNoScr

class AtmClpNoTaggingScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingScr();
        ~AtmClpNoTaggingScr();


}; // AtmClpNoTaggingScr

class AtmNoClpTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpTaggingNoScr();
        ~AtmNoClpTaggingNoScr();


}; // AtmNoClpTaggingNoScr

class AtmClpNoTaggingMcr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingMcr();
        ~AtmClpNoTaggingMcr();


}; // AtmClpNoTaggingMcr

class AtmClpNoTaggingScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingScrCdvt();
        ~AtmClpNoTaggingScrCdvt();


}; // AtmClpNoTaggingScrCdvt

class AtmNoTrafficDescriptor : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoTrafficDescriptor();
        ~AtmNoTrafficDescriptor();


}; // AtmNoTrafficDescriptor

class AtmClpTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingNoScr();
        ~AtmClpTaggingNoScr();


}; // AtmClpTaggingNoScr

class AtmNoClpScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpScrCdvt();
        ~AtmNoClpScrCdvt();


}; // AtmNoClpScrCdvt

class AtmNoClpNoScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpNoScrCdvt();
        ~AtmNoClpNoScrCdvt();


}; // AtmNoClpNoScrCdvt

class AtmClpTaggingScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingScr();
        ~AtmClpTaggingScr();


}; // AtmClpTaggingScr

class AtmClpNoTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingNoScr();
        ~AtmClpNoTaggingNoScr();


}; // AtmClpNoTaggingNoScr

class AtmClpTaggingScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingScrCdvt();
        ~AtmClpTaggingScrCdvt();


}; // AtmClpTaggingScrCdvt

class AtmVorXAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class AtmServiceCategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf rtVbr;
        static const ydk::Enum::YLeaf nrtVbr;
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf ubr;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "cbr") return 2;
            if (name == "rtVbr") return 3;
            if (name == "nrtVbr") return 4;
            if (name == "abr") return 5;
            if (name == "ubr") return 6;
            return -1;
        }
};

class AtmInterfaceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf autoConfig;
        static const ydk::Enum::YLeaf ituDss2;
        static const ydk::Enum::YLeaf atmfUni3Dot0;
        static const ydk::Enum::YLeaf atmfUni3Dot1;
        static const ydk::Enum::YLeaf atmfUni4Dot0;
        static const ydk::Enum::YLeaf atmfIispUni3Dot0;
        static const ydk::Enum::YLeaf atmfIispUni3Dot1;
        static const ydk::Enum::YLeaf atmfIispUni4Dot0;
        static const ydk::Enum::YLeaf atmfPnni1Dot0;
        static const ydk::Enum::YLeaf atmfBici2Dot0;
        static const ydk::Enum::YLeaf atmfUniPvcOnly;
        static const ydk::Enum::YLeaf atmfNniPvcOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "autoConfig") return 2;
            if (name == "ituDss2") return 3;
            if (name == "atmfUni3Dot0") return 4;
            if (name == "atmfUni3Dot1") return 5;
            if (name == "atmfUni4Dot0") return 6;
            if (name == "atmfIispUni3Dot0") return 7;
            if (name == "atmfIispUni3Dot1") return 8;
            if (name == "atmfIispUni4Dot0") return 9;
            if (name == "atmfPnni1Dot0") return 10;
            if (name == "atmfBici2Dot0") return 11;
            if (name == "atmfUniPvcOnly") return 12;
            if (name == "atmfNniPvcOnly") return 13;
            return -1;
        }
};

class AtmConnKind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvc;
        static const ydk::Enum::YLeaf svcIncoming;
        static const ydk::Enum::YLeaf svcOutgoing;
        static const ydk::Enum::YLeaf spvcInitiator;
        static const ydk::Enum::YLeaf spvcTarget;

        static int get_enum_value(const std::string & name) {
            if (name == "pvc") return 1;
            if (name == "svcIncoming") return 2;
            if (name == "svcOutgoing") return 3;
            if (name == "spvcInitiator") return 4;
            if (name == "spvcTarget") return 5;
            return -1;
        }
};

class AtmVorXOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};

class AtmConnCastType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mpRoot;
        static const ydk::Enum::YLeaf p2mpLeaf;

        static int get_enum_value(const std::string & name) {
            if (name == "p2p") return 1;
            if (name == "p2mpRoot") return 2;
            if (name == "p2mpLeaf") return 3;
            return -1;
        }
};


}
}

#endif /* _ATM_TC_MIB_ */

