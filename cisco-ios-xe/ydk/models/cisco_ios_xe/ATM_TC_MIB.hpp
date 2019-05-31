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

class AtmNoTrafficDescriptor : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoTrafficDescriptor();
        ~AtmNoTrafficDescriptor();


}; // AtmNoTrafficDescriptor

class AtmNoClpNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpNoScr();
        ~AtmNoClpNoScr();


}; // AtmNoClpNoScr

class AtmClpNoTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingNoScr();
        ~AtmClpNoTaggingNoScr();


}; // AtmClpNoTaggingNoScr

class AtmClpTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingNoScr();
        ~AtmClpTaggingNoScr();


}; // AtmClpTaggingNoScr

class AtmNoClpScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpScr();
        ~AtmNoClpScr();


}; // AtmNoClpScr

class AtmClpNoTaggingScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingScr();
        ~AtmClpNoTaggingScr();


}; // AtmClpNoTaggingScr

class AtmClpTaggingScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingScr();
        ~AtmClpTaggingScr();


}; // AtmClpTaggingScr

class AtmClpNoTaggingMcr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingMcr();
        ~AtmClpNoTaggingMcr();


}; // AtmClpNoTaggingMcr

class AtmClpTransparentNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTransparentNoScr();
        ~AtmClpTransparentNoScr();


}; // AtmClpTransparentNoScr

class AtmClpTransparentScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTransparentScr();
        ~AtmClpTransparentScr();


}; // AtmClpTransparentScr

class AtmNoClpTaggingNoScr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpTaggingNoScr();
        ~AtmNoClpTaggingNoScr();


}; // AtmNoClpTaggingNoScr

class AtmNoClpNoScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpNoScrCdvt();
        ~AtmNoClpNoScrCdvt();


}; // AtmNoClpNoScrCdvt

class AtmNoClpScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmNoClpScrCdvt();
        ~AtmNoClpScrCdvt();


}; // AtmNoClpScrCdvt

class AtmClpNoTaggingScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpNoTaggingScrCdvt();
        ~AtmClpNoTaggingScrCdvt();


}; // AtmClpNoTaggingScrCdvt

class AtmClpTaggingScrCdvt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        AtmClpTaggingScrCdvt();
        ~AtmClpTaggingScrCdvt();


}; // AtmClpTaggingScrCdvt

class AtmConnCastType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mpRoot;
        static const ydk::Enum::YLeaf p2mpLeaf;

};

class AtmConnKind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvc;
        static const ydk::Enum::YLeaf svcIncoming;
        static const ydk::Enum::YLeaf svcOutgoing;
        static const ydk::Enum::YLeaf spvcInitiator;
        static const ydk::Enum::YLeaf spvcTarget;

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

};

class AtmVorXAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class AtmVorXOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _ATM_TC_MIB_ */

