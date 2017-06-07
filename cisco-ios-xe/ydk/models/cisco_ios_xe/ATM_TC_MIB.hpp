#ifndef _ATM_TC_MIB_
#define _ATM_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace ATM_TC_MIB {

class AtmclptransparentnoscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclptransparentnoscrIdentity();
        ~AtmclptransparentnoscrIdentity();


}; // AtmclptransparentnoscrIdentity

class AtmnoclpscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnoclpscrIdentity();
        ~AtmnoclpscrIdentity();


}; // AtmnoclpscrIdentity

class AtmclptransparentscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclptransparentscrIdentity();
        ~AtmclptransparentscrIdentity();


}; // AtmclptransparentscrIdentity

class AtmnoclpnoscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnoclpnoscrIdentity();
        ~AtmnoclpnoscrIdentity();


}; // AtmnoclpnoscrIdentity

class AtmclpnotaggingscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclpnotaggingscrIdentity();
        ~AtmclpnotaggingscrIdentity();


}; // AtmclpnotaggingscrIdentity

class AtmnoclptaggingnoscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnoclptaggingnoscrIdentity();
        ~AtmnoclptaggingnoscrIdentity();


}; // AtmnoclptaggingnoscrIdentity

class AtmclpnotaggingmcrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclpnotaggingmcrIdentity();
        ~AtmclpnotaggingmcrIdentity();


}; // AtmclpnotaggingmcrIdentity

class AtmclpnotaggingscrcdvtIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclpnotaggingscrcdvtIdentity();
        ~AtmclpnotaggingscrcdvtIdentity();


}; // AtmclpnotaggingscrcdvtIdentity

class AtmnotrafficdescriptorIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnotrafficdescriptorIdentity();
        ~AtmnotrafficdescriptorIdentity();


}; // AtmnotrafficdescriptorIdentity

class AtmclptaggingnoscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclptaggingnoscrIdentity();
        ~AtmclptaggingnoscrIdentity();


}; // AtmclptaggingnoscrIdentity

class AtmnoclpscrcdvtIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnoclpscrcdvtIdentity();
        ~AtmnoclpscrcdvtIdentity();


}; // AtmnoclpscrcdvtIdentity

class AtmnoclpnoscrcdvtIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmnoclpnoscrcdvtIdentity();
        ~AtmnoclpnoscrcdvtIdentity();


}; // AtmnoclpnoscrcdvtIdentity

class AtmclptaggingscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclptaggingscrIdentity();
        ~AtmclptaggingscrIdentity();


}; // AtmclptaggingscrIdentity

class AtmclpnotaggingnoscrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclpnotaggingnoscrIdentity();
        ~AtmclpnotaggingnoscrIdentity();


}; // AtmclpnotaggingnoscrIdentity

class AtmclptaggingscrcdvtIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        AtmclptaggingscrcdvtIdentity();
        ~AtmclptaggingscrcdvtIdentity();


}; // AtmclptaggingscrcdvtIdentity

class AtmvorxadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class AtmservicecategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf rtVbr;
        static const Enum::YLeaf nrtVbr;
        static const Enum::YLeaf abr;
        static const Enum::YLeaf ubr;

};

class AtminterfacetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf autoConfig;
        static const Enum::YLeaf ituDss2;
        static const Enum::YLeaf atmfUni3Dot0;
        static const Enum::YLeaf atmfUni3Dot1;
        static const Enum::YLeaf atmfUni4Dot0;
        static const Enum::YLeaf atmfIispUni3Dot0;
        static const Enum::YLeaf atmfIispUni3Dot1;
        static const Enum::YLeaf atmfIispUni4Dot0;
        static const Enum::YLeaf atmfPnni1Dot0;
        static const Enum::YLeaf atmfBici2Dot0;
        static const Enum::YLeaf atmfUniPvcOnly;
        static const Enum::YLeaf atmfNniPvcOnly;

};

class AtmconnkindEnum : public Enum
{
    public:
        static const Enum::YLeaf pvc;
        static const Enum::YLeaf svcIncoming;
        static const Enum::YLeaf svcOutgoing;
        static const Enum::YLeaf spvcInitiator;
        static const Enum::YLeaf spvcTarget;

};

class AtmvorxoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf unknown;

};

class AtmconncasttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf p2mpRoot;
        static const Enum::YLeaf p2mpLeaf;

};


}
}

#endif /* _ATM_TC_MIB_ */

