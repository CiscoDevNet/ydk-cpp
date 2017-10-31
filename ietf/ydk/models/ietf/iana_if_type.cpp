
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "iana_if_type.hpp"

using namespace ydk;

namespace ietf {
namespace iana_if_type {

IanaInterfaceType::IanaInterfaceType()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iana-interface-type")
{

}

IanaInterfaceType::~IanaInterfaceType()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:other")
{

}

Other::~Other()
{
}

Regular1822::Regular1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:regular1822")
{

}

Regular1822::~Regular1822()
{
}

Hdh1822::Hdh1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdh1822")
{

}

Hdh1822::~Hdh1822()
{
}

Ddnx25::Ddnx25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ddnX25")
{

}

Ddnx25::~Ddnx25()
{
}

Rfc877X25::Rfc877X25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc877x25")
{

}

Rfc877X25::~Rfc877X25()
{
}

Ethernetcsmacd::Ethernetcsmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernetCsmacd")
{

}

Ethernetcsmacd::~Ethernetcsmacd()
{
}

Iso88023Csmacd::Iso88023Csmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88023Csmacd")
{

}

Iso88023Csmacd::~Iso88023Csmacd()
{
}

Iso88024Tokenbus::Iso88024Tokenbus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88024TokenBus")
{

}

Iso88024Tokenbus::~Iso88024Tokenbus()
{
}

Iso88025Tokenring::Iso88025Tokenring()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025TokenRing")
{

}

Iso88025Tokenring::~Iso88025Tokenring()
{
}

Iso88026Man::Iso88026Man()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88026Man")
{

}

Iso88026Man::~Iso88026Man()
{
}

Starlan::Starlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:starLan")
{

}

Starlan::~Starlan()
{
}

Proteon10Mbit::Proteon10Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon10Mbit")
{

}

Proteon10Mbit::~Proteon10Mbit()
{
}

Proteon80Mbit::Proteon80Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon80Mbit")
{

}

Proteon80Mbit::~Proteon80Mbit()
{
}

Hyperchannel::Hyperchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hyperchannel")
{

}

Hyperchannel::~Hyperchannel()
{
}

Fddi::Fddi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fddi")
{

}

Fddi::~Fddi()
{
}

Lapb::Lapb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapb")
{

}

Lapb::~Lapb()
{
}

Sdlc::Sdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdlc")
{

}

Sdlc::~Sdlc()
{
}

Ds1::Ds1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1")
{

}

Ds1::~Ds1()
{
}

E1::E1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:e1")
{

}

E1::~E1()
{
}

Basicisdn::Basicisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:basicISDN")
{

}

Basicisdn::~Basicisdn()
{
}

Primaryisdn::Primaryisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:primaryISDN")
{

}

Primaryisdn::~Primaryisdn()
{
}

Proppointtopointserial::Proppointtopointserial()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propPointToPointSerial")
{

}

Proppointtopointserial::~Proppointtopointserial()
{
}

Ppp::Ppp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ppp")
{

}

Ppp::~Ppp()
{
}

Softwareloopback::Softwareloopback()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:softwareLoopback")
{

}

Softwareloopback::~Softwareloopback()
{
}

Eon::Eon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eon")
{

}

Eon::~Eon()
{
}

Ethernet3Mbit::Ethernet3Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernet3Mbit")
{

}

Ethernet3Mbit::~Ethernet3Mbit()
{
}

Nsip::Nsip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nsip")
{

}

Nsip::~Nsip()
{
}

Slip::Slip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:slip")
{

}

Slip::~Slip()
{
}

Ultra::Ultra()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ultra")
{

}

Ultra::~Ultra()
{
}

Ds3::Ds3()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds3")
{

}

Ds3::~Ds3()
{
}

Sip::Sip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sip")
{

}

Sip::~Sip()
{
}

Framerelay::Framerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelay")
{

}

Framerelay::~Framerelay()
{
}

Rs232::Rs232()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rs232")
{

}

Rs232::~Rs232()
{
}

Para::Para()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:para")
{

}

Para::~Para()
{
}

Arcnet::Arcnet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnet")
{

}

Arcnet::~Arcnet()
{
}

Arcnetplus::Arcnetplus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnetPlus")
{

}

Arcnetplus::~Arcnetplus()
{
}

Atm::Atm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atm")
{

}

Atm::~Atm()
{
}

Miox25::Miox25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:miox25")
{

}

Miox25::~Miox25()
{
}

Sonet::Sonet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonet")
{

}

Sonet::~Sonet()
{
}

X25Ple::X25Ple()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25ple")
{

}

X25Ple::~X25Ple()
{
}

Iso88022Llc::Iso88022Llc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88022llc")
{

}

Iso88022Llc::~Iso88022Llc()
{
}

Localtalk::Localtalk()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:localTalk")
{

}

Localtalk::~Localtalk()
{
}

Smdsdxi::Smdsdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsDxi")
{

}

Smdsdxi::~Smdsdxi()
{
}

Framerelayservice::Framerelayservice()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayService")
{

}

Framerelayservice::~Framerelayservice()
{
}

V35::V35()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v35")
{

}

V35::~V35()
{
}

Hssi::Hssi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hssi")
{

}

Hssi::~Hssi()
{
}

Hippi::Hippi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippi")
{

}

Hippi::~Hippi()
{
}

Modem::Modem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:modem")
{

}

Modem::~Modem()
{
}

Aal5::Aal5()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal5")
{

}

Aal5::~Aal5()
{
}

Sonetpath::Sonetpath()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetPath")
{

}

Sonetpath::~Sonetpath()
{
}

Sonetvt::Sonetvt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetVT")
{

}

Sonetvt::~Sonetvt()
{
}

Smdsicip::Smdsicip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsIcip")
{

}

Smdsicip::~Smdsicip()
{
}

Propvirtual::Propvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propVirtual")
{

}

Propvirtual::~Propvirtual()
{
}

Propmultiplexor::Propmultiplexor()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propMultiplexor")
{

}

Propmultiplexor::~Propmultiplexor()
{
}

Ieee80212::Ieee80212()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80212")
{

}

Ieee80212::~Ieee80212()
{
}

Fibrechannel::Fibrechannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fibreChannel")
{

}

Fibrechannel::~Fibrechannel()
{
}

Hippiinterface::Hippiinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippiInterface")
{

}

Hippiinterface::~Hippiinterface()
{
}

Framerelayinterconnect::Framerelayinterconnect()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayInterconnect")
{

}

Framerelayinterconnect::~Framerelayinterconnect()
{
}

Aflane8023::Aflane8023()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8023")
{

}

Aflane8023::~Aflane8023()
{
}

Aflane8025::Aflane8025()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8025")
{

}

Aflane8025::~Aflane8025()
{
}

Cctemul::Cctemul()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cctEmul")
{

}

Cctemul::~Cctemul()
{
}

Fastether::Fastether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEther")
{

}

Fastether::~Fastether()
{
}

Isdn::Isdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdn")
{

}

Isdn::~Isdn()
{
}

V11::V11()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v11")
{

}

V11::~V11()
{
}

V36::V36()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v36")
{

}

V36::~V36()
{
}

G703At64K::G703At64K()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at64k")
{

}

G703At64K::~G703At64K()
{
}

G703At2Mb::G703At2Mb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at2mb")
{

}

G703At2Mb::~G703At2Mb()
{
}

Qllc::Qllc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qllc")
{

}

Qllc::~Qllc()
{
}

Fastetherfx::Fastetherfx()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEtherFX")
{

}

Fastetherfx::~Fastetherfx()
{
}

Channel::Channel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:channel")
{

}

Channel::~Channel()
{
}

Ieee80211::Ieee80211()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80211")
{

}

Ieee80211::~Ieee80211()
{
}

Ibm370Parchan::Ibm370Parchan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ibm370parChan")
{

}

Ibm370Parchan::~Ibm370Parchan()
{
}

Escon::Escon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:escon")
{

}

Escon::~Escon()
{
}

Dlsw::Dlsw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dlsw")
{

}

Dlsw::~Dlsw()
{
}

Isdns::Isdns()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdns")
{

}

Isdns::~Isdns()
{
}

Isdnu::Isdnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdnu")
{

}

Isdnu::~Isdnu()
{
}

Lapd::Lapd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapd")
{

}

Lapd::~Lapd()
{
}

Ipswitch::Ipswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipSwitch")
{

}

Ipswitch::~Ipswitch()
{
}

Rsrb::Rsrb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rsrb")
{

}

Rsrb::~Rsrb()
{
}

Atmlogical::Atmlogical()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmLogical")
{

}

Atmlogical::~Atmlogical()
{
}

Ds0::Ds0()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0")
{

}

Ds0::~Ds0()
{
}

Ds0Bundle::Ds0Bundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0Bundle")
{

}

Ds0Bundle::~Ds0Bundle()
{
}

Bsc::Bsc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bsc")
{

}

Bsc::~Bsc()
{
}

Async::Async()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:async")
{

}

Async::~Async()
{
}

Cnr::Cnr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cnr")
{

}

Cnr::~Cnr()
{
}

Iso88025Dtr::Iso88025Dtr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Dtr")
{

}

Iso88025Dtr::~Iso88025Dtr()
{
}

Eplrs::Eplrs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eplrs")
{

}

Eplrs::~Eplrs()
{
}

Arap::Arap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arap")
{

}

Arap::~Arap()
{
}

Propcnls::Propcnls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propCnls")
{

}

Propcnls::~Propcnls()
{
}

Hostpad::Hostpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hostPad")
{

}

Hostpad::~Hostpad()
{
}

Termpad::Termpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:termPad")
{

}

Termpad::~Termpad()
{
}

Framerelaympi::Framerelaympi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayMPI")
{

}

Framerelaympi::~Framerelaympi()
{
}

X213::X213()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x213")
{

}

X213::~X213()
{
}

Adsl::Adsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl")
{

}

Adsl::~Adsl()
{
}

Radsl::Radsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radsl")
{

}

Radsl::~Radsl()
{
}

Sdsl::Sdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdsl")
{

}

Sdsl::~Sdsl()
{
}

Vdsl::Vdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl")
{

}

Vdsl::~Vdsl()
{
}

Iso88025Crfpint::Iso88025Crfpint()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025CRFPInt")
{

}

Iso88025Crfpint::~Iso88025Crfpint()
{
}

Myrinet::Myrinet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:myrinet")
{

}

Myrinet::~Myrinet()
{
}

Voiceem::Voiceem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEM")
{

}

Voiceem::~Voiceem()
{
}

Voicefxo::Voicefxo()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXO")
{

}

Voicefxo::~Voicefxo()
{
}

Voicefxs::Voicefxs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXS")
{

}

Voicefxs::~Voicefxs()
{
}

Voiceencap::Voiceencap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEncap")
{

}

Voiceencap::~Voiceencap()
{
}

Voiceoverip::Voiceoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverIp")
{

}

Voiceoverip::~Voiceoverip()
{
}

Atmdxi::Atmdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmDxi")
{

}

Atmdxi::~Atmdxi()
{
}

Atmfuni::Atmfuni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmFuni")
{

}

Atmfuni::~Atmfuni()
{
}

Atmima::Atmima()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmIma")
{

}

Atmima::~Atmima()
{
}

Pppmultilinkbundle::Pppmultilinkbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pppMultilinkBundle")
{

}

Pppmultilinkbundle::~Pppmultilinkbundle()
{
}

Ipovercdlc::Ipovercdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverCdlc")
{

}

Ipovercdlc::~Ipovercdlc()
{
}

Ipoverclaw::Ipoverclaw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverClaw")
{

}

Ipoverclaw::~Ipoverclaw()
{
}

Stacktostack::Stacktostack()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:stackToStack")
{

}

Stacktostack::~Stacktostack()
{
}

Virtualipaddress::Virtualipaddress()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualIpAddress")
{

}

Virtualipaddress::~Virtualipaddress()
{
}

Mpc::Mpc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpc")
{

}

Mpc::~Mpc()
{
}

Ipoveratm::Ipoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverAtm")
{

}

Ipoveratm::~Ipoveratm()
{
}

Iso88025Fiber::Iso88025Fiber()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Fiber")
{

}

Iso88025Fiber::~Iso88025Fiber()
{
}

Tdlc::Tdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tdlc")
{

}

Tdlc::~Tdlc()
{
}

Gigabitethernet::Gigabitethernet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gigabitEthernet")
{

}

Gigabitethernet::~Gigabitethernet()
{
}

Hdlc::Hdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdlc")
{

}

Hdlc::~Hdlc()
{
}

Lapf::Lapf()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapf")
{

}

Lapf::~Lapf()
{
}

V37::V37()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v37")
{

}

V37::~V37()
{
}

X25Mlp::X25Mlp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25mlp")
{

}

X25Mlp::~X25Mlp()
{
}

X25Huntgroup::X25Huntgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25huntGroup")
{

}

X25Huntgroup::~X25Huntgroup()
{
}

Transphdlc::Transphdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:transpHdlc")
{

}

Transphdlc::~Transphdlc()
{
}

Interleave::Interleave()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:interleave")
{

}

Interleave::~Interleave()
{
}

Fast::Fast()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fast")
{

}

Fast::~Fast()
{
}

Ip::Ip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ip")
{

}

Ip::~Ip()
{
}

Docscablemaclayer::Docscablemaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMaclayer")
{

}

Docscablemaclayer::~Docscablemaclayer()
{
}

Docscabledownstream::Docscabledownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableDownstream")
{

}

Docscabledownstream::~Docscabledownstream()
{
}

Docscableupstream::Docscableupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstream")
{

}

Docscableupstream::~Docscableupstream()
{
}

A12Mppswitch::A12Mppswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:a12MppSwitch")
{

}

A12Mppswitch::~A12Mppswitch()
{
}

Tunnel::Tunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tunnel")
{

}

Tunnel::~Tunnel()
{
}

Coffee::Coffee()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:coffee")
{

}

Coffee::~Coffee()
{
}

Ces::Ces()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ces")
{

}

Ces::~Ces()
{
}

Atmsubinterface::Atmsubinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmSubInterface")
{

}

Atmsubinterface::~Atmsubinterface()
{
}

L2Vlan::L2Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l2vlan")
{

}

L2Vlan::~L2Vlan()
{
}

L3Ipvlan::L3Ipvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipvlan")
{

}

L3Ipvlan::~L3Ipvlan()
{
}

L3Ipxvlan::L3Ipxvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipxvlan")
{

}

L3Ipxvlan::~L3Ipxvlan()
{
}

Digitalpowerline::Digitalpowerline()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalPowerline")
{

}

Digitalpowerline::~Digitalpowerline()
{
}

Mediamailoverip::Mediamailoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mediaMailOverIp")
{

}

Mediamailoverip::~Mediamailoverip()
{
}

Dtm::Dtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dtm")
{

}

Dtm::~Dtm()
{
}

Dcn::Dcn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dcn")
{

}

Dcn::~Dcn()
{
}

Ipforward::Ipforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipForward")
{

}

Ipforward::~Ipforward()
{
}

Msdsl::Msdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:msdsl")
{

}

Msdsl::~Msdsl()
{
}

Ieee1394::Ieee1394()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee1394")
{

}

Ieee1394::~Ieee1394()
{
}

IfGsn::IfGsn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:if-gsn")
{

}

IfGsn::~IfGsn()
{
}

Dvbrccmaclayer::Dvbrccmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccMacLayer")
{

}

Dvbrccmaclayer::~Dvbrccmaclayer()
{
}

Dvbrccdownstream::Dvbrccdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccDownstream")
{

}

Dvbrccdownstream::~Dvbrccdownstream()
{
}

Dvbrccupstream::Dvbrccupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccUpstream")
{

}

Dvbrccupstream::~Dvbrccupstream()
{
}

Atmvirtual::Atmvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVirtual")
{

}

Atmvirtual::~Atmvirtual()
{
}

Mplstunnel::Mplstunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mplsTunnel")
{

}

Mplstunnel::~Mplstunnel()
{
}

Srp::Srp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:srp")
{

}

Srp::~Srp()
{
}

Voiceoveratm::Voiceoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverAtm")
{

}

Voiceoveratm::~Voiceoveratm()
{
}

Voiceoverframerelay::Voiceoverframerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverFrameRelay")
{

}

Voiceoverframerelay::~Voiceoverframerelay()
{
}

Idsl::Idsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:idsl")
{

}

Idsl::~Idsl()
{
}

Compositelink::Compositelink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:compositeLink")
{

}

Compositelink::~Compositelink()
{
}

Ss7Siglink::Ss7Siglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ss7SigLink")
{

}

Ss7Siglink::~Ss7Siglink()
{
}

Propwirelessp2P::Propwirelessp2P()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propWirelessP2P")
{

}

Propwirelessp2P::~Propwirelessp2P()
{
}

Frforward::Frforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frForward")
{

}

Frforward::~Frforward()
{
}

Rfc1483::Rfc1483()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc1483")
{

}

Rfc1483::~Rfc1483()
{
}

Usb::Usb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:usb")
{

}

Usb::~Usb()
{
}

Ieee8023Adlag::Ieee8023Adlag()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee8023adLag")
{

}

Ieee8023Adlag::~Ieee8023Adlag()
{
}

Bgppolicyaccounting::Bgppolicyaccounting()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bgppolicyaccounting")
{

}

Bgppolicyaccounting::~Bgppolicyaccounting()
{
}

Frf16Mfrbundle::Frf16Mfrbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frf16MfrBundle")
{

}

Frf16Mfrbundle::~Frf16Mfrbundle()
{
}

H323Gatekeeper::H323Gatekeeper()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Gatekeeper")
{

}

H323Gatekeeper::~H323Gatekeeper()
{
}

H323Proxy::H323Proxy()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Proxy")
{

}

H323Proxy::~H323Proxy()
{
}

Mpls::Mpls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpls")
{

}

Mpls::~Mpls()
{
}

Mfsiglink::Mfsiglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mfSigLink")
{

}

Mfsiglink::~Mfsiglink()
{
}

Hdsl2::Hdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdsl2")
{

}

Hdsl2::~Hdsl2()
{
}

Shdsl::Shdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:shdsl")
{

}

Shdsl::~Shdsl()
{
}

Ds1Fdl::Ds1Fdl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1FDL")
{

}

Ds1Fdl::~Ds1Fdl()
{
}

Pos::Pos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pos")
{

}

Pos::~Pos()
{
}

Dvbasiin::Dvbasiin()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiIn")
{

}

Dvbasiin::~Dvbasiin()
{
}

Dvbasiout::Dvbasiout()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiOut")
{

}

Dvbasiout::~Dvbasiout()
{
}

Plc::Plc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:plc")
{

}

Plc::~Plc()
{
}

Nfas::Nfas()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nfas")
{

}

Nfas::~Nfas()
{
}

Tr008::Tr008()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tr008")
{

}

Tr008::~Tr008()
{
}

Gr303Rdt::Gr303Rdt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303RDT")
{

}

Gr303Rdt::~Gr303Rdt()
{
}

Gr303Idt::Gr303Idt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303IDT")
{

}

Gr303Idt::~Gr303Idt()
{
}

Isup::Isup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isup")
{

}

Isup::~Isup()
{
}

Propdocswirelessmaclayer::Propdocswirelessmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessMaclayer")
{

}

Propdocswirelessmaclayer::~Propdocswirelessmaclayer()
{
}

Propdocswirelessdownstream::Propdocswirelessdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessDownstream")
{

}

Propdocswirelessdownstream::~Propdocswirelessdownstream()
{
}

Propdocswirelessupstream::Propdocswirelessupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessUpstream")
{

}

Propdocswirelessupstream::~Propdocswirelessupstream()
{
}

Hiperlan2::Hiperlan2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hiperlan2")
{

}

Hiperlan2::~Hiperlan2()
{
}

Propbwap2Mp::Propbwap2Mp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propBWAp2Mp")
{

}

Propbwap2Mp::~Propbwap2Mp()
{
}

Sonetoverheadchannel::Sonetoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetOverheadChannel")
{

}

Sonetoverheadchannel::~Sonetoverheadchannel()
{
}

Digitalwrapperoverheadchannel::Digitalwrapperoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalWrapperOverheadChannel")
{

}

Digitalwrapperoverheadchannel::~Digitalwrapperoverheadchannel()
{
}

Aal2::Aal2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal2")
{

}

Aal2::~Aal2()
{
}

Radiomac::Radiomac()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radioMAC")
{

}

Radiomac::~Radiomac()
{
}

Atmradio::Atmradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmRadio")
{

}

Atmradio::~Atmradio()
{
}

Imt::Imt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:imt")
{

}

Imt::~Imt()
{
}

Mvl::Mvl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mvl")
{

}

Mvl::~Mvl()
{
}

Reachdsl::Reachdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:reachDSL")
{

}

Reachdsl::~Reachdsl()
{
}

Frdlciendpt::Frdlciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frDlciEndPt")
{

}

Frdlciendpt::~Frdlciendpt()
{
}

Atmvciendpt::Atmvciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVciEndPt")
{

}

Atmvciendpt::~Atmvciendpt()
{
}

Opticalchannel::Opticalchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannel")
{

}

Opticalchannel::~Opticalchannel()
{
}

Opticaltransport::Opticaltransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalTransport")
{

}

Opticaltransport::~Opticaltransport()
{
}

Propatm::Propatm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propAtm")
{

}

Propatm::~Propatm()
{
}

Voiceovercable::Voiceovercable()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverCable")
{

}

Voiceovercable::~Voiceovercable()
{
}

Infiniband::Infiniband()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:infiniband")
{

}

Infiniband::~Infiniband()
{
}

Telink::Telink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:teLink")
{

}

Telink::~Telink()
{
}

Q2931::Q2931()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:q2931")
{

}

Q2931::~Q2931()
{
}

Virtualtg::Virtualtg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualTg")
{

}

Virtualtg::~Virtualtg()
{
}

Siptg::Siptg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipTg")
{

}

Siptg::~Siptg()
{
}

Sipsig::Sipsig()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipSig")
{

}

Sipsig::~Sipsig()
{
}

Docscableupstreamchannel::Docscableupstreamchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamChannel")
{

}

Docscableupstreamchannel::~Docscableupstreamchannel()
{
}

Econet::Econet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:econet")
{

}

Econet::~Econet()
{
}

Pon155::Pon155()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon155")
{

}

Pon155::~Pon155()
{
}

Pon622::Pon622()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon622")
{

}

Pon622::~Pon622()
{
}

Bridge::Bridge()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bridge")
{

}

Bridge::~Bridge()
{
}

Linegroup::Linegroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:linegroup")
{

}

Linegroup::~Linegroup()
{
}

Voiceemfgd::Voiceemfgd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEMFGD")
{

}

Voiceemfgd::~Voiceemfgd()
{
}

Voicefgdeana::Voicefgdeana()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDEANA")
{

}

Voicefgdeana::~Voicefgdeana()
{
}

Voicedid::Voicedid()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceDID")
{

}

Voicedid::~Voicedid()
{
}

Mpegtransport::Mpegtransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpegTransport")
{

}

Mpegtransport::~Mpegtransport()
{
}

Sixtofour::Sixtofour()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sixToFour")
{

}

Sixtofour::~Sixtofour()
{
}

Gtp::Gtp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gtp")
{

}

Gtp::~Gtp()
{
}

Pdnetherloop1::Pdnetherloop1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop1")
{

}

Pdnetherloop1::~Pdnetherloop1()
{
}

Pdnetherloop2::Pdnetherloop2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop2")
{

}

Pdnetherloop2::~Pdnetherloop2()
{
}

Opticalchannelgroup::Opticalchannelgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannelGroup")
{

}

Opticalchannelgroup::~Opticalchannelgroup()
{
}

Homepna::Homepna()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:homepna")
{

}

Homepna::~Homepna()
{
}

Gfp::Gfp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gfp")
{

}

Gfp::~Gfp()
{
}

Ciscoislvlan::Ciscoislvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ciscoISLvlan")
{

}

Ciscoislvlan::~Ciscoislvlan()
{
}

Actelismetaloop::Actelismetaloop()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:actelisMetaLOOP")
{

}

Actelismetaloop::~Actelismetaloop()
{
}

Fciplink::Fciplink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fcipLink")
{

}

Fciplink::~Fciplink()
{
}

Rpr::Rpr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rpr")
{

}

Rpr::~Rpr()
{
}

Qam::Qam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qam")
{

}

Qam::~Qam()
{
}

Lmp::Lmp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lmp")
{

}

Lmp::~Lmp()
{
}

Cblvectastar::Cblvectastar()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cblVectaStar")
{

}

Cblvectastar::~Cblvectastar()
{
}

Docscablemcmtsdownstream::Docscablemcmtsdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMCmtsDownstream")
{

}

Docscablemcmtsdownstream::~Docscablemcmtsdownstream()
{
}

Adsl2::Adsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2")
{

}

Adsl2::~Adsl2()
{
}

Macseccontrolledif::Macseccontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecControlledIF")
{

}

Macseccontrolledif::~Macseccontrolledif()
{
}

Macsecuncontrolledif::Macsecuncontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecUncontrolledIF")
{

}

Macsecuncontrolledif::~Macsecuncontrolledif()
{
}

Aviciopticalether::Aviciopticalether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aviciOpticalEther")
{

}

Aviciopticalether::~Aviciopticalether()
{
}

Atmbond::Atmbond()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmbond")
{

}

Atmbond::~Atmbond()
{
}

Voicefgdos::Voicefgdos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDOS")
{

}

Voicefgdos::~Voicefgdos()
{
}

Mocaversion1::Mocaversion1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mocaVersion1")
{

}

Mocaversion1::~Mocaversion1()
{
}

Ieee80216Wman::Ieee80216Wman()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80216WMAN")
{

}

Ieee80216Wman::~Ieee80216Wman()
{
}

Adsl2Plus::Adsl2Plus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2plus")
{

}

Adsl2Plus::~Adsl2Plus()
{
}

Dvbrcsmaclayer::Dvbrcsmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsMacLayer")
{

}

Dvbrcsmaclayer::~Dvbrcsmaclayer()
{
}

Dvbtdm::Dvbtdm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbTdm")
{

}

Dvbtdm::~Dvbtdm()
{
}

Dvbrcstdma::Dvbrcstdma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsTdma")
{

}

Dvbrcstdma::~Dvbrcstdma()
{
}

X86Laps::X86Laps()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x86Laps")
{

}

X86Laps::~X86Laps()
{
}

Wwanpp::Wwanpp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP")
{

}

Wwanpp::~Wwanpp()
{
}

Wwanpp2::Wwanpp2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP2")
{

}

Wwanpp2::~Wwanpp2()
{
}

Voiceebs::Voiceebs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEBS")
{

}

Voiceebs::~Voiceebs()
{
}

Ifpwtype::Ifpwtype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifPwType")
{

}

Ifpwtype::~Ifpwtype()
{
}

Ilan::Ilan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ilan")
{

}

Ilan::~Ilan()
{
}

Pip::Pip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pip")
{

}

Pip::~Pip()
{
}

Aluelp::Aluelp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluELP")
{

}

Aluelp::~Aluelp()
{
}

Gpon::Gpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gpon")
{

}

Gpon::~Gpon()
{
}

Vdsl2::Vdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl2")
{

}

Vdsl2::~Vdsl2()
{
}

Capwapdot11Profile::Capwapdot11Profile()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Profile")
{

}

Capwapdot11Profile::~Capwapdot11Profile()
{
}

Capwapdot11Bss::Capwapdot11Bss()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Bss")
{

}

Capwapdot11Bss::~Capwapdot11Bss()
{
}

Capwapwtpvirtualradio::Capwapwtpvirtualradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapWtpVirtualRadio")
{

}

Capwapwtpvirtualradio::~Capwapwtpvirtualradio()
{
}

Bits::Bits()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bits")
{

}

Bits::~Bits()
{
}

Docscableupstreamrfport::Docscableupstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamRfPort")
{

}

Docscableupstreamrfport::~Docscableupstreamrfport()
{
}

Cabledownstreamrfport::Cabledownstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cableDownstreamRfPort")
{

}

Cabledownstreamrfport::~Cabledownstreamrfport()
{
}

Vmwarevirtualnic::Vmwarevirtualnic()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareVirtualNic")
{

}

Vmwarevirtualnic::~Vmwarevirtualnic()
{
}

Ieee802154::Ieee802154()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee802154")
{

}

Ieee802154::~Ieee802154()
{
}

Otnodu::Otnodu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOdu")
{

}

Otnodu::~Otnodu()
{
}

Otnotu::Otnotu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOtu")
{

}

Otnotu::~Otnotu()
{
}

Ifvfitype::Ifvfitype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifVfiType")
{

}

Ifvfitype::~Ifvfitype()
{
}

G9981::G9981()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9981")
{

}

G9981::~G9981()
{
}

G9982::G9982()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9982")
{

}

G9982::~G9982()
{
}

G9983::G9983()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9983")
{

}

G9983::~G9983()
{
}

Aluepon::Aluepon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEpon")
{

}

Aluepon::~Aluepon()
{
}

Aluepononu::Aluepononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponOnu")
{

}

Aluepononu::~Aluepononu()
{
}

Alueponphysicaluni::Alueponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponPhysicalUni")
{

}

Alueponphysicaluni::~Alueponphysicaluni()
{
}

Alueponlogicallink::Alueponlogicallink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponLogicalLink")
{

}

Alueponlogicallink::~Alueponlogicallink()
{
}

Alugpononu::Alugpononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponOnu")
{

}

Alugpononu::~Alugpononu()
{
}

Alugponphysicaluni::Alugponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponPhysicalUni")
{

}

Alugponphysicaluni::~Alugponphysicaluni()
{
}

Vmwarenicteam::Vmwarenicteam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareNicTeam")
{

}

Vmwarenicteam::~Vmwarenicteam()
{
}


}
}

