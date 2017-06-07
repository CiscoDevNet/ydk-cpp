
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_TC_MIB.hpp"

namespace ydk {
namespace ATM_TC_MIB {

AtmclptransparentnoscrIdentity::AtmclptransparentnoscrIdentity()
     : Identity("ATM-TC-MIB:atmClpTransparentNoScr")
{
}

AtmclptransparentnoscrIdentity::~AtmclptransparentnoscrIdentity()
{
}

AtmnoclpscrIdentity::AtmnoclpscrIdentity()
     : Identity("ATM-TC-MIB:atmNoClpScr")
{
}

AtmnoclpscrIdentity::~AtmnoclpscrIdentity()
{
}

AtmclptransparentscrIdentity::AtmclptransparentscrIdentity()
     : Identity("ATM-TC-MIB:atmClpTransparentScr")
{
}

AtmclptransparentscrIdentity::~AtmclptransparentscrIdentity()
{
}

AtmnoclpnoscrIdentity::AtmnoclpnoscrIdentity()
     : Identity("ATM-TC-MIB:atmNoClpNoScr")
{
}

AtmnoclpnoscrIdentity::~AtmnoclpnoscrIdentity()
{
}

AtmclpnotaggingscrIdentity::AtmclpnotaggingscrIdentity()
     : Identity("ATM-TC-MIB:atmClpNoTaggingScr")
{
}

AtmclpnotaggingscrIdentity::~AtmclpnotaggingscrIdentity()
{
}

AtmnoclptaggingnoscrIdentity::AtmnoclptaggingnoscrIdentity()
     : Identity("ATM-TC-MIB:atmNoClpTaggingNoScr")
{
}

AtmnoclptaggingnoscrIdentity::~AtmnoclptaggingnoscrIdentity()
{
}

AtmclpnotaggingmcrIdentity::AtmclpnotaggingmcrIdentity()
     : Identity("ATM-TC-MIB:atmClpNoTaggingMcr")
{
}

AtmclpnotaggingmcrIdentity::~AtmclpnotaggingmcrIdentity()
{
}

AtmclpnotaggingscrcdvtIdentity::AtmclpnotaggingscrcdvtIdentity()
     : Identity("ATM-TC-MIB:atmClpNoTaggingScrCdvt")
{
}

AtmclpnotaggingscrcdvtIdentity::~AtmclpnotaggingscrcdvtIdentity()
{
}

AtmnotrafficdescriptorIdentity::AtmnotrafficdescriptorIdentity()
     : Identity("ATM-TC-MIB:atmNoTrafficDescriptor")
{
}

AtmnotrafficdescriptorIdentity::~AtmnotrafficdescriptorIdentity()
{
}

AtmclptaggingnoscrIdentity::AtmclptaggingnoscrIdentity()
     : Identity("ATM-TC-MIB:atmClpTaggingNoScr")
{
}

AtmclptaggingnoscrIdentity::~AtmclptaggingnoscrIdentity()
{
}

AtmnoclpscrcdvtIdentity::AtmnoclpscrcdvtIdentity()
     : Identity("ATM-TC-MIB:atmNoClpScrCdvt")
{
}

AtmnoclpscrcdvtIdentity::~AtmnoclpscrcdvtIdentity()
{
}

AtmnoclpnoscrcdvtIdentity::AtmnoclpnoscrcdvtIdentity()
     : Identity("ATM-TC-MIB:atmNoClpNoScrCdvt")
{
}

AtmnoclpnoscrcdvtIdentity::~AtmnoclpnoscrcdvtIdentity()
{
}

AtmclptaggingscrIdentity::AtmclptaggingscrIdentity()
     : Identity("ATM-TC-MIB:atmClpTaggingScr")
{
}

AtmclptaggingscrIdentity::~AtmclptaggingscrIdentity()
{
}

AtmclpnotaggingnoscrIdentity::AtmclpnotaggingnoscrIdentity()
     : Identity("ATM-TC-MIB:atmClpNoTaggingNoScr")
{
}

AtmclpnotaggingnoscrIdentity::~AtmclpnotaggingnoscrIdentity()
{
}

AtmclptaggingscrcdvtIdentity::AtmclptaggingscrcdvtIdentity()
     : Identity("ATM-TC-MIB:atmClpTaggingScrCdvt")
{
}

AtmclptaggingscrcdvtIdentity::~AtmclptaggingscrcdvtIdentity()
{
}

const Enum::YLeaf AtmvorxadminstatusEnum::up {1, "up"};
const Enum::YLeaf AtmvorxadminstatusEnum::down {2, "down"};

const Enum::YLeaf AtmservicecategoryEnum::other {1, "other"};
const Enum::YLeaf AtmservicecategoryEnum::cbr {2, "cbr"};
const Enum::YLeaf AtmservicecategoryEnum::rtVbr {3, "rtVbr"};
const Enum::YLeaf AtmservicecategoryEnum::nrtVbr {4, "nrtVbr"};
const Enum::YLeaf AtmservicecategoryEnum::abr {5, "abr"};
const Enum::YLeaf AtmservicecategoryEnum::ubr {6, "ubr"};

const Enum::YLeaf AtminterfacetypeEnum::other {1, "other"};
const Enum::YLeaf AtminterfacetypeEnum::autoConfig {2, "autoConfig"};
const Enum::YLeaf AtminterfacetypeEnum::ituDss2 {3, "ituDss2"};
const Enum::YLeaf AtminterfacetypeEnum::atmfUni3Dot0 {4, "atmfUni3Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfUni3Dot1 {5, "atmfUni3Dot1"};
const Enum::YLeaf AtminterfacetypeEnum::atmfUni4Dot0 {6, "atmfUni4Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfIispUni3Dot0 {7, "atmfIispUni3Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfIispUni3Dot1 {8, "atmfIispUni3Dot1"};
const Enum::YLeaf AtminterfacetypeEnum::atmfIispUni4Dot0 {9, "atmfIispUni4Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfPnni1Dot0 {10, "atmfPnni1Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfBici2Dot0 {11, "atmfBici2Dot0"};
const Enum::YLeaf AtminterfacetypeEnum::atmfUniPvcOnly {12, "atmfUniPvcOnly"};
const Enum::YLeaf AtminterfacetypeEnum::atmfNniPvcOnly {13, "atmfNniPvcOnly"};

const Enum::YLeaf AtmconnkindEnum::pvc {1, "pvc"};
const Enum::YLeaf AtmconnkindEnum::svcIncoming {2, "svcIncoming"};
const Enum::YLeaf AtmconnkindEnum::svcOutgoing {3, "svcOutgoing"};
const Enum::YLeaf AtmconnkindEnum::spvcInitiator {4, "spvcInitiator"};
const Enum::YLeaf AtmconnkindEnum::spvcTarget {5, "spvcTarget"};

const Enum::YLeaf AtmvorxoperstatusEnum::up {1, "up"};
const Enum::YLeaf AtmvorxoperstatusEnum::down {2, "down"};
const Enum::YLeaf AtmvorxoperstatusEnum::unknown {3, "unknown"};

const Enum::YLeaf AtmconncasttypeEnum::p2p {1, "p2p"};
const Enum::YLeaf AtmconncasttypeEnum::p2mpRoot {2, "p2mpRoot"};
const Enum::YLeaf AtmconncasttypeEnum::p2mpLeaf {3, "p2mpLeaf"};


}
}

