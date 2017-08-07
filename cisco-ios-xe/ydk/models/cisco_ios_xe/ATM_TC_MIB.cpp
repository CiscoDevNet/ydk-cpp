
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ATM_TC_MIB {

Atmclpnotaggingscrcdvt::Atmclpnotaggingscrcdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingScrCdvt")
{
}

Atmclpnotaggingscrcdvt::~Atmclpnotaggingscrcdvt()
{
}

Atmclptransparentnoscr::Atmclptransparentnoscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTransparentNoScr")
{
}

Atmclptransparentnoscr::~Atmclptransparentnoscr()
{
}

Atmclpnotaggingmcr::Atmclpnotaggingmcr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingMcr")
{
}

Atmclpnotaggingmcr::~Atmclpnotaggingmcr()
{
}

Atmclptaggingnoscr::Atmclptaggingnoscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingNoScr")
{
}

Atmclptaggingnoscr::~Atmclptaggingnoscr()
{
}

Atmnoclpnoscrcdvt::Atmnoclpnoscrcdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpNoScrCdvt")
{
}

Atmnoclpnoscrcdvt::~Atmnoclpnoscrcdvt()
{
}

Atmclpnotaggingscr::Atmclpnotaggingscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingScr")
{
}

Atmclpnotaggingscr::~Atmclpnotaggingscr()
{
}

Atmclptaggingscrcdvt::Atmclptaggingscrcdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingScrCdvt")
{
}

Atmclptaggingscrcdvt::~Atmclptaggingscrcdvt()
{
}

Atmnoclpnoscr::Atmnoclpnoscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpNoScr")
{
}

Atmnoclpnoscr::~Atmnoclpnoscr()
{
}

Atmnotrafficdescriptor::Atmnotrafficdescriptor()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoTrafficDescriptor")
{
}

Atmnotrafficdescriptor::~Atmnotrafficdescriptor()
{
}

Atmclpnotaggingnoscr::Atmclpnotaggingnoscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingNoScr")
{
}

Atmclpnotaggingnoscr::~Atmclpnotaggingnoscr()
{
}

Atmclptaggingscr::Atmclptaggingscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingScr")
{
}

Atmclptaggingscr::~Atmclptaggingscr()
{
}

Atmnoclptaggingnoscr::Atmnoclptaggingnoscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpTaggingNoScr")
{
}

Atmnoclptaggingnoscr::~Atmnoclptaggingnoscr()
{
}

Atmnoclpscrcdvt::Atmnoclpscrcdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpScrCdvt")
{
}

Atmnoclpscrcdvt::~Atmnoclpscrcdvt()
{
}

Atmclptransparentscr::Atmclptransparentscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTransparentScr")
{
}

Atmclptransparentscr::~Atmclptransparentscr()
{
}

Atmnoclpscr::Atmnoclpscr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpScr")
{
}

Atmnoclpscr::~Atmnoclpscr()
{
}

const Enum::YLeaf Atmvorxoperstatus::up {1, "up"};
const Enum::YLeaf Atmvorxoperstatus::down {2, "down"};
const Enum::YLeaf Atmvorxoperstatus::unknown {3, "unknown"};

const Enum::YLeaf Atmservicecategory::other {1, "other"};
const Enum::YLeaf Atmservicecategory::cbr {2, "cbr"};
const Enum::YLeaf Atmservicecategory::rtVbr {3, "rtVbr"};
const Enum::YLeaf Atmservicecategory::nrtVbr {4, "nrtVbr"};
const Enum::YLeaf Atmservicecategory::abr {5, "abr"};
const Enum::YLeaf Atmservicecategory::ubr {6, "ubr"};

const Enum::YLeaf Atmvorxadminstatus::up {1, "up"};
const Enum::YLeaf Atmvorxadminstatus::down {2, "down"};

const Enum::YLeaf Atminterfacetype::other {1, "other"};
const Enum::YLeaf Atminterfacetype::autoConfig {2, "autoConfig"};
const Enum::YLeaf Atminterfacetype::ituDss2 {3, "ituDss2"};
const Enum::YLeaf Atminterfacetype::atmfUni3Dot0 {4, "atmfUni3Dot0"};
const Enum::YLeaf Atminterfacetype::atmfUni3Dot1 {5, "atmfUni3Dot1"};
const Enum::YLeaf Atminterfacetype::atmfUni4Dot0 {6, "atmfUni4Dot0"};
const Enum::YLeaf Atminterfacetype::atmfIispUni3Dot0 {7, "atmfIispUni3Dot0"};
const Enum::YLeaf Atminterfacetype::atmfIispUni3Dot1 {8, "atmfIispUni3Dot1"};
const Enum::YLeaf Atminterfacetype::atmfIispUni4Dot0 {9, "atmfIispUni4Dot0"};
const Enum::YLeaf Atminterfacetype::atmfPnni1Dot0 {10, "atmfPnni1Dot0"};
const Enum::YLeaf Atminterfacetype::atmfBici2Dot0 {11, "atmfBici2Dot0"};
const Enum::YLeaf Atminterfacetype::atmfUniPvcOnly {12, "atmfUniPvcOnly"};
const Enum::YLeaf Atminterfacetype::atmfNniPvcOnly {13, "atmfNniPvcOnly"};

const Enum::YLeaf Atmconnkind::pvc {1, "pvc"};
const Enum::YLeaf Atmconnkind::svcIncoming {2, "svcIncoming"};
const Enum::YLeaf Atmconnkind::svcOutgoing {3, "svcOutgoing"};
const Enum::YLeaf Atmconnkind::spvcInitiator {4, "spvcInitiator"};
const Enum::YLeaf Atmconnkind::spvcTarget {5, "spvcTarget"};

const Enum::YLeaf Atmconncasttype::p2p {1, "p2p"};
const Enum::YLeaf Atmconncasttype::p2mpRoot {2, "p2mpRoot"};
const Enum::YLeaf Atmconncasttype::p2mpLeaf {3, "p2mpLeaf"};


}
}

