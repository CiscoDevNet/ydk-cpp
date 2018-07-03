
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_packet_match_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_packet_match_types {

IPPROTOCOL::IPPROTOCOL()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_PROTOCOL")
{

}

IPPROTOCOL::~IPPROTOCOL()
{
}

TCPFLAGS::TCPFLAGS()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_FLAGS")
{

}

TCPFLAGS::~TCPFLAGS()
{
}

ETHERTYPE::ETHERTYPE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE")
{

}

ETHERTYPE::~ETHERTYPE()
{
}

TCPACK::TCPACK()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_ACK")
{

}

TCPACK::~TCPACK()
{
}

IPUDP::IPUDP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_UDP")
{

}

IPUDP::~IPUDP()
{
}

ETHERTYPEARP::ETHERTYPEARP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_ARP")
{

}

ETHERTYPEARP::~ETHERTYPEARP()
{
}

TCPSYN::TCPSYN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_SYN")
{

}

TCPSYN::~TCPSYN()
{
}

ETHERTYPEVLAN::ETHERTYPEVLAN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_VLAN")
{

}

ETHERTYPEVLAN::~ETHERTYPEVLAN()
{
}

TCPECE::TCPECE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_ECE")
{

}

TCPECE::~TCPECE()
{
}

IPICMP::IPICMP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_ICMP")
{

}

IPICMP::~IPICMP()
{
}

TCPFIN::TCPFIN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_FIN")
{

}

TCPFIN::~TCPFIN()
{
}

ETHERTYPEROCE::ETHERTYPEROCE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_ROCE")
{

}

ETHERTYPEROCE::~ETHERTYPEROCE()
{
}

IPPIM::IPPIM()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_PIM")
{

}

IPPIM::~IPPIM()
{
}

TCPRST::TCPRST()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_RST")
{

}

TCPRST::~TCPRST()
{
}

ETHERTYPEIPV4::ETHERTYPEIPV4()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_IPV4")
{

}

ETHERTYPEIPV4::~ETHERTYPEIPV4()
{
}

IPTCP::IPTCP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_TCP")
{

}

IPTCP::~IPTCP()
{
}

ETHERTYPEIPV6::ETHERTYPEIPV6()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_IPV6")
{

}

ETHERTYPEIPV6::~ETHERTYPEIPV6()
{
}

TCPURG::TCPURG()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_URG")
{

}

TCPURG::~TCPURG()
{
}

IPRSVP::IPRSVP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_RSVP")
{

}

IPRSVP::~IPRSVP()
{
}

ETHERTYPEMPLS::ETHERTYPEMPLS()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_MPLS")
{

}

ETHERTYPEMPLS::~ETHERTYPEMPLS()
{
}

TCPPSH::TCPPSH()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_PSH")
{

}

TCPPSH::~TCPPSH()
{
}

IPAUTH::IPAUTH()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_AUTH")
{

}

IPAUTH::~IPAUTH()
{
}

IPGRE::IPGRE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_GRE")
{

}

IPGRE::~IPGRE()
{
}

IPIGMP::IPIGMP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_IGMP")
{

}

IPIGMP::~IPIGMP()
{
}

ETHERTYPELLDP::ETHERTYPELLDP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_LLDP")
{

}

ETHERTYPELLDP::~ETHERTYPELLDP()
{
}

TCPCWR::TCPCWR()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_CWR")
{

}

TCPCWR::~TCPCWR()
{
}

IPL2TP::IPL2TP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_L2TP")
{

}

IPL2TP::~IPL2TP()
{
}

const Enum::YLeaf PortNumRange::ANY {0, "ANY"};


}
}

