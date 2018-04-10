
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_packet_match_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_packet_match_types {

ETHERTYPE::ETHERTYPE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE")
{

}

ETHERTYPE::~ETHERTYPE()
{
}

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

ETHERTYPEIPV4::ETHERTYPEIPV4()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_IPV4")
{

}

ETHERTYPEIPV4::~ETHERTYPEIPV4()
{
}

ETHERTYPEARP::ETHERTYPEARP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_ARP")
{

}

ETHERTYPEARP::~ETHERTYPEARP()
{
}

ETHERTYPEVLAN::ETHERTYPEVLAN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_VLAN")
{

}

ETHERTYPEVLAN::~ETHERTYPEVLAN()
{
}

ETHERTYPEIPV6::ETHERTYPEIPV6()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_IPV6")
{

}

ETHERTYPEIPV6::~ETHERTYPEIPV6()
{
}

ETHERTYPEMPLS::ETHERTYPEMPLS()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_MPLS")
{

}

ETHERTYPEMPLS::~ETHERTYPEMPLS()
{
}

ETHERTYPELLDP::ETHERTYPELLDP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_LLDP")
{

}

ETHERTYPELLDP::~ETHERTYPELLDP()
{
}

ETHERTYPEROCE::ETHERTYPEROCE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:ETHERTYPE_ROCE")
{

}

ETHERTYPEROCE::~ETHERTYPEROCE()
{
}

IPTCP::IPTCP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_TCP")
{

}

IPTCP::~IPTCP()
{
}

IPUDP::IPUDP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_UDP")
{

}

IPUDP::~IPUDP()
{
}

IPICMP::IPICMP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_ICMP")
{

}

IPICMP::~IPICMP()
{
}

IPIGMP::IPIGMP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_IGMP")
{

}

IPIGMP::~IPIGMP()
{
}

IPPIM::IPPIM()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_PIM")
{

}

IPPIM::~IPPIM()
{
}

IPRSVP::IPRSVP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_RSVP")
{

}

IPRSVP::~IPRSVP()
{
}

IPGRE::IPGRE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_GRE")
{

}

IPGRE::~IPGRE()
{
}

IPAUTH::IPAUTH()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_AUTH")
{

}

IPAUTH::~IPAUTH()
{
}

IPL2TP::IPL2TP()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:IP_L2TP")
{

}

IPL2TP::~IPL2TP()
{
}

TCPSYN::TCPSYN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_SYN")
{

}

TCPSYN::~TCPSYN()
{
}

TCPFIN::TCPFIN()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_FIN")
{

}

TCPFIN::~TCPFIN()
{
}

TCPRST::TCPRST()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_RST")
{

}

TCPRST::~TCPRST()
{
}

TCPPSH::TCPPSH()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_PSH")
{

}

TCPPSH::~TCPPSH()
{
}

TCPACK::TCPACK()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_ACK")
{

}

TCPACK::~TCPACK()
{
}

TCPURG::TCPURG()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_URG")
{

}

TCPURG::~TCPURG()
{
}

TCPECE::TCPECE()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_ECE")
{

}

TCPECE::~TCPECE()
{
}

TCPCWR::TCPCWR()
     : Identity("http://openconfig.net/yang/packet-match-types", "openconfig-packet-match-types", "openconfig-packet-match-types:TCP_CWR")
{

}

TCPCWR::~TCPCWR()
{
}

const Enum::YLeaf PortNumRange::ANY {0, "ANY"};


}
}

