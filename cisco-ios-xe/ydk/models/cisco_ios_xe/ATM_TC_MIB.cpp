
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ATM_TC_MIB {

AtmNoTrafficDescriptor::AtmNoTrafficDescriptor()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoTrafficDescriptor")
{

}

AtmNoTrafficDescriptor::~AtmNoTrafficDescriptor()
{
}

AtmNoClpNoScr::AtmNoClpNoScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpNoScr")
{

}

AtmNoClpNoScr::~AtmNoClpNoScr()
{
}

AtmClpNoTaggingNoScr::AtmClpNoTaggingNoScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingNoScr")
{

}

AtmClpNoTaggingNoScr::~AtmClpNoTaggingNoScr()
{
}

AtmClpTaggingNoScr::AtmClpTaggingNoScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingNoScr")
{

}

AtmClpTaggingNoScr::~AtmClpTaggingNoScr()
{
}

AtmNoClpScr::AtmNoClpScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpScr")
{

}

AtmNoClpScr::~AtmNoClpScr()
{
}

AtmClpNoTaggingScr::AtmClpNoTaggingScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingScr")
{

}

AtmClpNoTaggingScr::~AtmClpNoTaggingScr()
{
}

AtmClpTaggingScr::AtmClpTaggingScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingScr")
{

}

AtmClpTaggingScr::~AtmClpTaggingScr()
{
}

AtmClpNoTaggingMcr::AtmClpNoTaggingMcr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingMcr")
{

}

AtmClpNoTaggingMcr::~AtmClpNoTaggingMcr()
{
}

AtmClpTransparentNoScr::AtmClpTransparentNoScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTransparentNoScr")
{

}

AtmClpTransparentNoScr::~AtmClpTransparentNoScr()
{
}

AtmClpTransparentScr::AtmClpTransparentScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTransparentScr")
{

}

AtmClpTransparentScr::~AtmClpTransparentScr()
{
}

AtmNoClpTaggingNoScr::AtmNoClpTaggingNoScr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpTaggingNoScr")
{

}

AtmNoClpTaggingNoScr::~AtmNoClpTaggingNoScr()
{
}

AtmNoClpNoScrCdvt::AtmNoClpNoScrCdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpNoScrCdvt")
{

}

AtmNoClpNoScrCdvt::~AtmNoClpNoScrCdvt()
{
}

AtmNoClpScrCdvt::AtmNoClpScrCdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmNoClpScrCdvt")
{

}

AtmNoClpScrCdvt::~AtmNoClpScrCdvt()
{
}

AtmClpNoTaggingScrCdvt::AtmClpNoTaggingScrCdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpNoTaggingScrCdvt")
{

}

AtmClpNoTaggingScrCdvt::~AtmClpNoTaggingScrCdvt()
{
}

AtmClpTaggingScrCdvt::AtmClpTaggingScrCdvt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB", "ATM-TC-MIB", "ATM-TC-MIB:atmClpTaggingScrCdvt")
{

}

AtmClpTaggingScrCdvt::~AtmClpTaggingScrCdvt()
{
}

const Enum::YLeaf AtmConnCastType::p2p {1, "p2p"};
const Enum::YLeaf AtmConnCastType::p2mpRoot {2, "p2mpRoot"};
const Enum::YLeaf AtmConnCastType::p2mpLeaf {3, "p2mpLeaf"};

const Enum::YLeaf AtmConnKind::pvc {1, "pvc"};
const Enum::YLeaf AtmConnKind::svcIncoming {2, "svcIncoming"};
const Enum::YLeaf AtmConnKind::svcOutgoing {3, "svcOutgoing"};
const Enum::YLeaf AtmConnKind::spvcInitiator {4, "spvcInitiator"};
const Enum::YLeaf AtmConnKind::spvcTarget {5, "spvcTarget"};

const Enum::YLeaf AtmInterfaceType::other {1, "other"};
const Enum::YLeaf AtmInterfaceType::autoConfig {2, "autoConfig"};
const Enum::YLeaf AtmInterfaceType::ituDss2 {3, "ituDss2"};
const Enum::YLeaf AtmInterfaceType::atmfUni3Dot0 {4, "atmfUni3Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfUni3Dot1 {5, "atmfUni3Dot1"};
const Enum::YLeaf AtmInterfaceType::atmfUni4Dot0 {6, "atmfUni4Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfIispUni3Dot0 {7, "atmfIispUni3Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfIispUni3Dot1 {8, "atmfIispUni3Dot1"};
const Enum::YLeaf AtmInterfaceType::atmfIispUni4Dot0 {9, "atmfIispUni4Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfPnni1Dot0 {10, "atmfPnni1Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfBici2Dot0 {11, "atmfBici2Dot0"};
const Enum::YLeaf AtmInterfaceType::atmfUniPvcOnly {12, "atmfUniPvcOnly"};
const Enum::YLeaf AtmInterfaceType::atmfNniPvcOnly {13, "atmfNniPvcOnly"};

const Enum::YLeaf AtmServiceCategory::other {1, "other"};
const Enum::YLeaf AtmServiceCategory::cbr {2, "cbr"};
const Enum::YLeaf AtmServiceCategory::rtVbr {3, "rtVbr"};
const Enum::YLeaf AtmServiceCategory::nrtVbr {4, "nrtVbr"};
const Enum::YLeaf AtmServiceCategory::abr {5, "abr"};
const Enum::YLeaf AtmServiceCategory::ubr {6, "ubr"};

const Enum::YLeaf AtmVorXAdminStatus::up {1, "up"};
const Enum::YLeaf AtmVorXAdminStatus::down {2, "down"};

const Enum::YLeaf AtmVorXOperStatus::up {1, "up"};
const Enum::YLeaf AtmVorXOperStatus::down {2, "down"};
const Enum::YLeaf AtmVorXOperStatus::unknown {3, "unknown"};


}
}

