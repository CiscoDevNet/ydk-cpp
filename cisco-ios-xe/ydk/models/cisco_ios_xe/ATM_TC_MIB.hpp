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

class Atmclpnotaggingscrcdvt : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclpnotaggingscrcdvt();
        ~Atmclpnotaggingscrcdvt();


}; // Atmclpnotaggingscrcdvt

class Atmclptransparentnoscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclptransparentnoscr();
        ~Atmclptransparentnoscr();


}; // Atmclptransparentnoscr

class Atmclpnotaggingmcr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclpnotaggingmcr();
        ~Atmclpnotaggingmcr();


}; // Atmclpnotaggingmcr

class Atmclptaggingnoscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclptaggingnoscr();
        ~Atmclptaggingnoscr();


}; // Atmclptaggingnoscr

class Atmnoclpnoscrcdvt : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnoclpnoscrcdvt();
        ~Atmnoclpnoscrcdvt();


}; // Atmnoclpnoscrcdvt

class Atmclpnotaggingscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclpnotaggingscr();
        ~Atmclpnotaggingscr();


}; // Atmclpnotaggingscr

class Atmclptaggingscrcdvt : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclptaggingscrcdvt();
        ~Atmclptaggingscrcdvt();


}; // Atmclptaggingscrcdvt

class Atmnoclpnoscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnoclpnoscr();
        ~Atmnoclpnoscr();


}; // Atmnoclpnoscr

class Atmnotrafficdescriptor : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnotrafficdescriptor();
        ~Atmnotrafficdescriptor();


}; // Atmnotrafficdescriptor

class Atmclpnotaggingnoscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclpnotaggingnoscr();
        ~Atmclpnotaggingnoscr();


}; // Atmclpnotaggingnoscr

class Atmclptaggingscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclptaggingscr();
        ~Atmclptaggingscr();


}; // Atmclptaggingscr

class Atmnoclptaggingnoscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnoclptaggingnoscr();
        ~Atmnoclptaggingnoscr();


}; // Atmnoclptaggingnoscr

class Atmnoclpscrcdvt : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnoclpscrcdvt();
        ~Atmnoclpscrcdvt();


}; // Atmnoclpscrcdvt

class Atmclptransparentscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmclptransparentscr();
        ~Atmclptransparentscr();


}; // Atmclptransparentscr

class Atmnoclpscr : public ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Atmnoclpscr();
        ~Atmnoclpscr();


}; // Atmnoclpscr

class Atmvorxoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf unknown;

};

class Atmservicecategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf rtVbr;
        static const ydk::Enum::YLeaf nrtVbr;
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf ubr;

};

class Atmvorxadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class Atminterfacetype : public ydk::Enum
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

class Atmconnkind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvc;
        static const ydk::Enum::YLeaf svcIncoming;
        static const ydk::Enum::YLeaf svcOutgoing;
        static const ydk::Enum::YLeaf spvcInitiator;
        static const ydk::Enum::YLeaf spvcTarget;

};

class Atmconncasttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mpRoot;
        static const ydk::Enum::YLeaf p2mpLeaf;

};


}
}

#endif /* _ATM_TC_MIB_ */

