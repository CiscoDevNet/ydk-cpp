
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SMI.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SMI {

Ciscoproducts::Ciscoproducts()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoProducts")
{

}

Ciscoproducts::~Ciscoproducts()
{
}

Local::Local()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:local")
{

}

Local::~Local()
{
}

Temporary::Temporary()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:temporary")
{

}

Temporary::~Temporary()
{
}

Pakmon::Pakmon()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:pakmon")
{

}

Pakmon::~Pakmon()
{
}

Workgroup::Workgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:workgroup")
{

}

Workgroup::~Workgroup()
{
}

Otherenterprises::Otherenterprises()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:otherEnterprises")
{

}

Otherenterprises::~Otherenterprises()
{
}

Ciscosb::Ciscosb()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoSB")
{

}

Ciscosb::~Ciscosb()
{
}

Ciscosmb::Ciscosmb()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoSMB")
{

}

Ciscosmb::~Ciscosmb()
{
}

Ciscoagentcapability::Ciscoagentcapability()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoAgentCapability")
{

}

Ciscoagentcapability::~Ciscoagentcapability()
{
}

Ciscoconfig::Ciscoconfig()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoConfig")
{

}

Ciscoconfig::~Ciscoconfig()
{
}

Ciscomgmt::Ciscomgmt()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoMgmt")
{

}

Ciscomgmt::~Ciscomgmt()
{
}

Ciscoexperiment::Ciscoexperiment()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoExperiment")
{

}

Ciscoexperiment::~Ciscoexperiment()
{
}

Ciscoadmin::Ciscoadmin()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoAdmin")
{

}

Ciscoadmin::~Ciscoadmin()
{
}

Ciscoproxy::Ciscoproxy()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoProxy")
{

}

Ciscoproxy::~Ciscoproxy()
{
}

Ciscorptrgroupobjectid::Ciscorptrgroupobjectid()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoRptrGroupObjectID")
{

}

Ciscorptrgroupobjectid::~Ciscorptrgroupobjectid()
{
}

Ciscounknownrptrgroup::Ciscounknownrptrgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoUnknownRptrGroup")
{

}

Ciscounknownrptrgroup::~Ciscounknownrptrgroup()
{
}

Cisco2505Rptrgroup::Cisco2505Rptrgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:cisco2505RptrGroup")
{

}

Cisco2505Rptrgroup::~Cisco2505Rptrgroup()
{
}

Cisco2507Rptrgroup::Cisco2507Rptrgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:cisco2507RptrGroup")
{

}

Cisco2507Rptrgroup::~Cisco2507Rptrgroup()
{
}

Cisco2516Rptrgroup::Cisco2516Rptrgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:cisco2516RptrGroup")
{

}

Cisco2516Rptrgroup::~Cisco2516Rptrgroup()
{
}

Ciscowsx5020Rptrgroup::Ciscowsx5020Rptrgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoWsx5020RptrGroup")
{

}

Ciscowsx5020Rptrgroup::~Ciscowsx5020Rptrgroup()
{
}

Ciscochipsets::Ciscochipsets()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoChipSets")
{

}

Ciscochipsets::~Ciscochipsets()
{
}

Ciscochipsetsaint1::Ciscochipsetsaint1()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoChipSetSaint1")
{

}

Ciscochipsetsaint1::~Ciscochipsetsaint1()
{
}

Ciscochipsetsaint2::Ciscochipsetsaint2()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoChipSetSaint2")
{

}

Ciscochipsetsaint2::~Ciscochipsetsaint2()
{
}

Ciscochipsetsaint3::Ciscochipsetsaint3()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoChipSetSaint3")
{

}

Ciscochipsetsaint3::~Ciscochipsetsaint3()
{
}

Ciscochipsetsaint4::Ciscochipsetsaint4()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoChipSetSaint4")
{

}

Ciscochipsetsaint4::~Ciscochipsetsaint4()
{
}

Ciscomodules::Ciscomodules()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoModules")
{

}

Ciscomodules::~Ciscomodules()
{
}

Lightstream::Lightstream()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:lightstream")
{

}

Lightstream::~Lightstream()
{
}

Ciscoworks::Ciscoworks()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoworks")
{

}

Ciscoworks::~Ciscoworks()
{
}

Newport::Newport()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:newport")
{

}

Newport::~Newport()
{
}

Ciscopartnerproducts::Ciscopartnerproducts()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPartnerProducts")
{

}

Ciscopartnerproducts::~Ciscopartnerproducts()
{
}

Ciscopolicy::Ciscopolicy()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPolicy")
{

}

Ciscopolicy::~Ciscopolicy()
{
}

Ciscopib::Ciscopib()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPIB")
{

}

Ciscopib::~Ciscopib()
{
}

Ciscopolicyauto::Ciscopolicyauto()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPolicyAuto")
{

}

Ciscopolicyauto::~Ciscopolicyauto()
{
}

Ciscopibtomib::Ciscopibtomib()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPibToMib")
{

}

Ciscopibtomib::~Ciscopibtomib()
{
}

Ciscodomains::Ciscodomains()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoDomains")
{

}

Ciscodomains::~Ciscodomains()
{
}

Ciscotdomainudpipv4::Ciscotdomainudpipv4()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainUdpIpv4")
{

}

Ciscotdomainudpipv4::~Ciscotdomainudpipv4()
{
}

Ciscotdomainudpipv6::Ciscotdomainudpipv6()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainUdpIpv6")
{

}

Ciscotdomainudpipv6::~Ciscotdomainudpipv6()
{
}

Ciscotdomaintcpipv4::Ciscotdomaintcpipv4()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainTcpIpv4")
{

}

Ciscotdomaintcpipv4::~Ciscotdomaintcpipv4()
{
}

Ciscotdomaintcpipv6::Ciscotdomaintcpipv6()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainTcpIpv6")
{

}

Ciscotdomaintcpipv6::~Ciscotdomaintcpipv6()
{
}

Ciscotdomainlocal::Ciscotdomainlocal()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainLocal")
{

}

Ciscotdomainlocal::~Ciscotdomainlocal()
{
}

Ciscotdomainclns::Ciscotdomainclns()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainClns")
{

}

Ciscotdomainclns::~Ciscotdomainclns()
{
}

Ciscotdomaincons::Ciscotdomaincons()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainCons")
{

}

Ciscotdomaincons::~Ciscotdomaincons()
{
}

Ciscotdomainddp::Ciscotdomainddp()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainDdp")
{

}

Ciscotdomainddp::~Ciscotdomainddp()
{
}

Ciscotdomainipx::Ciscotdomainipx()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainIpx")
{

}

Ciscotdomainipx::~Ciscotdomainipx()
{
}

Ciscotdomainsctpipv4::Ciscotdomainsctpipv4()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainSctpIpv4")
{

}

Ciscotdomainsctpipv4::~Ciscotdomainsctpipv4()
{
}

Ciscotdomainsctpipv6::Ciscotdomainsctpipv6()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoTDomainSctpIpv6")
{

}

Ciscotdomainsctpipv6::~Ciscotdomainsctpipv6()
{
}

Ciscocib::Ciscocib()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoCIB")
{

}

Ciscocib::~Ciscocib()
{
}

Ciscocibmmigroup::Ciscocibmmigroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoCibMmiGroup")
{

}

Ciscocibmmigroup::~Ciscocibmmigroup()
{
}

Ciscocibprovgroup::Ciscocibprovgroup()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoCibProvGroup")
{

}

Ciscocibprovgroup::~Ciscocibprovgroup()
{
}

Ciscopki::Ciscopki()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI", "CISCO-SMI", "CISCO-SMI:ciscoPKI")
{

}

Ciscopki::~Ciscopki()
{
}


}
}

