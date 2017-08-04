
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "iana_if_type.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace iana_if_type {

IanaInterfaceType::IanaInterfaceType()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iana-interface-type")
{
}

IanaInterfaceType::~IanaInterfaceType()
{
}

Mpc::Mpc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpc")
{
}

Mpc::~Mpc()
{
}

Smdsicip::Smdsicip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsIcip")
{
}

Smdsicip::~Smdsicip()
{
}

Gigabitethernet::Gigabitethernet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gigabitEthernet")
{
}

Gigabitethernet::~Gigabitethernet()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:other")
{
}

Other::~Other()
{
}

Ces::Ces()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ces")
{
}

Ces::~Ces()
{
}

Radsl::Radsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radsl")
{
}

Radsl::~Radsl()
{
}

Isdns::Isdns()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdns")
{
}

Isdns::~Isdns()
{
}

Gr303Idt::Gr303Idt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303IDT")
{
}

Gr303Idt::~Gr303Idt()
{
}

Homepna::Homepna()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:homepna")
{
}

Homepna::~Homepna()
{
}

Rpr::Rpr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rpr")
{
}

Rpr::~Rpr()
{
}

Propmultiplexor::Propmultiplexor()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propMultiplexor")
{
}

Propmultiplexor::~Propmultiplexor()
{
}

Voicedid::Voicedid()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceDID")
{
}

Voicedid::~Voicedid()
{
}

Framerelaympi::Framerelaympi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayMPI")
{
}

Framerelaympi::~Framerelaympi()
{
}

Fibrechannel::Fibrechannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fibreChannel")
{
}

Fibrechannel::~Fibrechannel()
{
}

E1::E1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:e1")
{
}

E1::~E1()
{
}

A12Mppswitch::A12Mppswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:a12MppSwitch")
{
}

A12Mppswitch::~A12Mppswitch()
{
}

Atmdxi::Atmdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmDxi")
{
}

Atmdxi::~Atmdxi()
{
}

Bridge::Bridge()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bridge")
{
}

Bridge::~Bridge()
{
}

Para::Para()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:para")
{
}

Para::~Para()
{
}

Iso88022Llc::Iso88022Llc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88022llc")
{
}

Iso88022Llc::~Iso88022Llc()
{
}

Ieee802154::Ieee802154()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee802154")
{
}

Ieee802154::~Ieee802154()
{
}

Isup::Isup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isup")
{
}

Isup::~Isup()
{
}

V37::V37()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v37")
{
}

V37::~V37()
{
}

Ultra::Ultra()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ultra")
{
}

Ultra::~Ultra()
{
}

Ipswitch::Ipswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipSwitch")
{
}

Ipswitch::~Ipswitch()
{
}

Voiceoveratm::Voiceoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverAtm")
{
}

Voiceoveratm::~Voiceoveratm()
{
}

Mpls::Mpls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpls")
{
}

Mpls::~Mpls()
{
}

Pos::Pos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pos")
{
}

Pos::~Pos()
{
}

Ip::Ip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ip")
{
}

Ip::~Ip()
{
}

Lmp::Lmp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lmp")
{
}

Lmp::~Lmp()
{
}

Frdlciendpt::Frdlciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frDlciEndPt")
{
}

Frdlciendpt::~Frdlciendpt()
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

Wwanpp::Wwanpp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP")
{
}

Wwanpp::~Wwanpp()
{
}

Gfp::Gfp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gfp")
{
}

Gfp::~Gfp()
{
}

Iso88023Csmacd::Iso88023Csmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88023Csmacd")
{
}

Iso88023Csmacd::~Iso88023Csmacd()
{
}

Ipoveratm::Ipoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverAtm")
{
}

Ipoveratm::~Ipoveratm()
{
}

Cnr::Cnr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cnr")
{
}

Cnr::~Cnr()
{
}

Hdh1822::Hdh1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdh1822")
{
}

Hdh1822::~Hdh1822()
{
}

Ipovercdlc::Ipovercdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverCdlc")
{
}

Ipovercdlc::~Ipovercdlc()
{
}

Pdnetherloop1::Pdnetherloop1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop1")
{
}

Pdnetherloop1::~Pdnetherloop1()
{
}

Voiceovercable::Voiceovercable()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverCable")
{
}

Voiceovercable::~Voiceovercable()
{
}

Ieee80216Wman::Ieee80216Wman()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80216WMAN")
{
}

Ieee80216Wman::~Ieee80216Wman()
{
}

Docscablemcmtsdownstream::Docscablemcmtsdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMCmtsDownstream")
{
}

Docscablemcmtsdownstream::~Docscablemcmtsdownstream()
{
}

Alueponlogicallink::Alueponlogicallink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponLogicalLink")
{
}

Alueponlogicallink::~Alueponlogicallink()
{
}

Stacktostack::Stacktostack()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:stackToStack")
{
}

Stacktostack::~Stacktostack()
{
}

Hippi::Hippi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippi")
{
}

Hippi::~Hippi()
{
}

Dvbasiin::Dvbasiin()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiIn")
{
}

Dvbasiin::~Dvbasiin()
{
}

Hiperlan2::Hiperlan2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hiperlan2")
{
}

Hiperlan2::~Hiperlan2()
{
}

Linegroup::Linegroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:linegroup")
{
}

Linegroup::~Linegroup()
{
}

Arap::Arap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arap")
{
}

Arap::~Arap()
{
}

Ifpwtype::Ifpwtype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifPwType")
{
}

Ifpwtype::~Ifpwtype()
{
}

Mediamailoverip::Mediamailoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mediaMailOverIp")
{
}

Mediamailoverip::~Mediamailoverip()
{
}

Vmwarevirtualnic::Vmwarevirtualnic()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareVirtualNic")
{
}

Vmwarevirtualnic::~Vmwarevirtualnic()
{
}

Gpon::Gpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gpon")
{
}

Gpon::~Gpon()
{
}

Voicefgdos::Voicefgdos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDOS")
{
}

Voicefgdos::~Voicefgdos()
{
}

Macseccontrolledif::Macseccontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecControlledIF")
{
}

Macseccontrolledif::~Macseccontrolledif()
{
}

Docscableupstreamchannel::Docscableupstreamchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamChannel")
{
}

Docscableupstreamchannel::~Docscableupstreamchannel()
{
}

Sonetvt::Sonetvt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetVT")
{
}

Sonetvt::~Sonetvt()
{
}

Gr303Rdt::Gr303Rdt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303RDT")
{
}

Gr303Rdt::~Gr303Rdt()
{
}

Rfc1483::Rfc1483()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc1483")
{
}

Rfc1483::~Rfc1483()
{
}

Pip::Pip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pip")
{
}

Pip::~Pip()
{
}

Capwapdot11Profile::Capwapdot11Profile()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Profile")
{
}

Capwapdot11Profile::~Capwapdot11Profile()
{
}

Telink::Telink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:teLink")
{
}

Telink::~Telink()
{
}

X25Huntgroup::X25Huntgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25huntGroup")
{
}

X25Huntgroup::~X25Huntgroup()
{
}

Sdsl::Sdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdsl")
{
}

Sdsl::~Sdsl()
{
}

Iso88025Dtr::Iso88025Dtr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Dtr")
{
}

Iso88025Dtr::~Iso88025Dtr()
{
}

Arcnet::Arcnet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnet")
{
}

Arcnet::~Arcnet()
{
}

Iso88025Fiber::Iso88025Fiber()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Fiber")
{
}

Iso88025Fiber::~Iso88025Fiber()
{
}

Coffee::Coffee()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:coffee")
{
}

Coffee::~Coffee()
{
}

Propvirtual::Propvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propVirtual")
{
}

Propvirtual::~Propvirtual()
{
}

Sipsig::Sipsig()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipSig")
{
}

Sipsig::~Sipsig()
{
}

Adsl::Adsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl")
{
}

Adsl::~Adsl()
{
}

Dvbrccdownstream::Dvbrccdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccDownstream")
{
}

Dvbrccdownstream::~Dvbrccdownstream()
{
}

Radiomac::Radiomac()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radioMAC")
{
}

Radiomac::~Radiomac()
{
}

Digitalpowerline::Digitalpowerline()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalPowerline")
{
}

Digitalpowerline::~Digitalpowerline()
{
}

Msdsl::Msdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:msdsl")
{
}

Msdsl::~Msdsl()
{
}

Bsc::Bsc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bsc")
{
}

Bsc::~Bsc()
{
}

Pdnetherloop2::Pdnetherloop2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop2")
{
}

Pdnetherloop2::~Pdnetherloop2()
{
}

IfGsn::IfGsn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:if-gsn")
{
}

IfGsn::~IfGsn()
{
}

Tr008::Tr008()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tr008")
{
}

Tr008::~Tr008()
{
}

X86Laps::X86Laps()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x86Laps")
{
}

X86Laps::~X86Laps()
{
}

Fast::Fast()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fast")
{
}

Fast::~Fast()
{
}

Ethernetcsmacd::Ethernetcsmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernetCsmacd")
{
}

Ethernetcsmacd::~Ethernetcsmacd()
{
}

Dvbtdm::Dvbtdm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbTdm")
{
}

Dvbtdm::~Dvbtdm()
{
}

Fastetherfx::Fastetherfx()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEtherFX")
{
}

Fastetherfx::~Fastetherfx()
{
}

Ethernet3Mbit::Ethernet3Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernet3Mbit")
{
}

Ethernet3Mbit::~Ethernet3Mbit()
{
}

Opticalchannel::Opticalchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannel")
{
}

Opticalchannel::~Opticalchannel()
{
}

Primaryisdn::Primaryisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:primaryISDN")
{
}

Primaryisdn::~Primaryisdn()
{
}

L3Ipxvlan::L3Ipxvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipxvlan")
{
}

L3Ipxvlan::~L3Ipxvlan()
{
}

Aluelp::Aluelp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluELP")
{
}

Aluelp::~Aluelp()
{
}

Bgppolicyaccounting::Bgppolicyaccounting()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bgppolicyaccounting")
{
}

Bgppolicyaccounting::~Bgppolicyaccounting()
{
}

Otnodu::Otnodu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOdu")
{
}

Otnodu::~Otnodu()
{
}

Aflane8025::Aflane8025()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8025")
{
}

Aflane8025::~Aflane8025()
{
}

Slip::Slip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:slip")
{
}

Slip::~Slip()
{
}

Vdsl::Vdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl")
{
}

Vdsl::~Vdsl()
{
}

X25Ple::X25Ple()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25ple")
{
}

X25Ple::~X25Ple()
{
}

Channel::Channel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:channel")
{
}

Channel::~Channel()
{
}

Adsl2::Adsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2")
{
}

Adsl2::~Adsl2()
{
}

Srp::Srp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:srp")
{
}

Srp::~Srp()
{
}

Qam::Qam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qam")
{
}

Qam::~Qam()
{
}

G9981::G9981()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9981")
{
}

G9981::~G9981()
{
}

Sdlc::Sdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdlc")
{
}

Sdlc::~Sdlc()
{
}

V11::V11()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v11")
{
}

V11::~V11()
{
}

G9983::G9983()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9983")
{
}

G9983::~G9983()
{
}

Docscableupstream::Docscableupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstream")
{
}

Docscableupstream::~Docscableupstream()
{
}

Dlsw::Dlsw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dlsw")
{
}

Dlsw::~Dlsw()
{
}

Pon155::Pon155()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon155")
{
}

Pon155::~Pon155()
{
}

Aluepononu::Aluepononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponOnu")
{
}

Aluepononu::~Aluepononu()
{
}

Opticalchannelgroup::Opticalchannelgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannelGroup")
{
}

Opticalchannelgroup::~Opticalchannelgroup()
{
}

V35::V35()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v35")
{
}

V35::~V35()
{
}

Hdsl2::Hdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdsl2")
{
}

Hdsl2::~Hdsl2()
{
}

Myrinet::Myrinet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:myrinet")
{
}

Myrinet::~Myrinet()
{
}

Isdnu::Isdnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdnu")
{
}

Isdnu::~Isdnu()
{
}

Atmradio::Atmradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmRadio")
{
}

Atmradio::~Atmradio()
{
}

Ilan::Ilan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ilan")
{
}

Ilan::~Ilan()
{
}

Adsl2Plus::Adsl2Plus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2plus")
{
}

Adsl2Plus::~Adsl2Plus()
{
}

Shdsl::Shdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:shdsl")
{
}

Shdsl::~Shdsl()
{
}

Propcnls::Propcnls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propCnls")
{
}

Propcnls::~Propcnls()
{
}

Aal2::Aal2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal2")
{
}

Aal2::~Aal2()
{
}

Siptg::Siptg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipTg")
{
}

Siptg::~Siptg()
{
}

Aflane8023::Aflane8023()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8023")
{
}

Aflane8023::~Aflane8023()
{
}

Ieee1394::Ieee1394()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee1394")
{
}

Ieee1394::~Ieee1394()
{
}

Alueponphysicaluni::Alueponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponPhysicalUni")
{
}

Alueponphysicaluni::~Alueponphysicaluni()
{
}

Rs232::Rs232()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rs232")
{
}

Rs232::~Rs232()
{
}

Nfas::Nfas()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nfas")
{
}

Nfas::~Nfas()
{
}

L3Ipvlan::L3Ipvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipvlan")
{
}

L3Ipvlan::~L3Ipvlan()
{
}

Atmima::Atmima()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmIma")
{
}

Atmima::~Atmima()
{
}

Docscablemaclayer::Docscablemaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMaclayer")
{
}

Docscablemaclayer::~Docscablemaclayer()
{
}

Compositelink::Compositelink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:compositeLink")
{
}

Compositelink::~Compositelink()
{
}

G703At2Mb::G703At2Mb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at2mb")
{
}

G703At2Mb::~G703At2Mb()
{
}

Hippiinterface::Hippiinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippiInterface")
{
}

Hippiinterface::~Hippiinterface()
{
}

Mvl::Mvl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mvl")
{
}

Mvl::~Mvl()
{
}

Rsrb::Rsrb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rsrb")
{
}

Rsrb::~Rsrb()
{
}

Sip::Sip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sip")
{
}

Sip::~Sip()
{
}

Bits::Bits()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bits")
{
}

Bits::~Bits()
{
}

Lapf::Lapf()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapf")
{
}

Lapf::~Lapf()
{
}

Qllc::Qllc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qllc")
{
}

Qllc::~Qllc()
{
}

Framerelayinterconnect::Framerelayinterconnect()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayInterconnect")
{
}

Framerelayinterconnect::~Framerelayinterconnect()
{
}

Framerelayservice::Framerelayservice()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayService")
{
}

Framerelayservice::~Framerelayservice()
{
}

Capwapwtpvirtualradio::Capwapwtpvirtualradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapWtpVirtualRadio")
{
}

Capwapwtpvirtualradio::~Capwapwtpvirtualradio()
{
}

Sonet::Sonet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonet")
{
}

Sonet::~Sonet()
{
}

Cblvectastar::Cblvectastar()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cblVectaStar")
{
}

Cblvectastar::~Cblvectastar()
{
}

Hssi::Hssi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hssi")
{
}

Hssi::~Hssi()
{
}

Framerelay::Framerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelay")
{
}

Framerelay::~Framerelay()
{
}

Starlan::Starlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:starLan")
{
}

Starlan::~Starlan()
{
}

Ieee8023Adlag::Ieee8023Adlag()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee8023adLag")
{
}

Ieee8023Adlag::~Ieee8023Adlag()
{
}

Imt::Imt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:imt")
{
}

Imt::~Imt()
{
}

Nsip::Nsip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nsip")
{
}

Nsip::~Nsip()
{
}

Otnotu::Otnotu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOtu")
{
}

Otnotu::~Otnotu()
{
}

Virtualtg::Virtualtg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualTg")
{
}

Virtualtg::~Virtualtg()
{
}

Lapb::Lapb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapb")
{
}

Lapb::~Lapb()
{
}

Dvbrccupstream::Dvbrccupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccUpstream")
{
}

Dvbrccupstream::~Dvbrccupstream()
{
}

Mocaversion1::Mocaversion1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mocaVersion1")
{
}

Mocaversion1::~Mocaversion1()
{
}

Dvbrccmaclayer::Dvbrccmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccMacLayer")
{
}

Dvbrccmaclayer::~Dvbrccmaclayer()
{
}

Iso88025Tokenring::Iso88025Tokenring()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025TokenRing")
{
}

Iso88025Tokenring::~Iso88025Tokenring()
{
}

Propdocswirelessmaclayer::Propdocswirelessmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessMaclayer")
{
}

Propdocswirelessmaclayer::~Propdocswirelessmaclayer()
{
}

Proteon10Mbit::Proteon10Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon10Mbit")
{
}

Proteon10Mbit::~Proteon10Mbit()
{
}

X213::X213()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x213")
{
}

X213::~X213()
{
}

Proppointtopointserial::Proppointtopointserial()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propPointToPointSerial")
{
}

Proppointtopointserial::~Proppointtopointserial()
{
}

H323Gatekeeper::H323Gatekeeper()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Gatekeeper")
{
}

H323Gatekeeper::~H323Gatekeeper()
{
}

Ibm370Parchan::Ibm370Parchan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ibm370parChan")
{
}

Ibm370Parchan::~Ibm370Parchan()
{
}

Fciplink::Fciplink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fcipLink")
{
}

Fciplink::~Fciplink()
{
}

Mpegtransport::Mpegtransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpegTransport")
{
}

Mpegtransport::~Mpegtransport()
{
}

Frforward::Frforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frForward")
{
}

Frforward::~Frforward()
{
}

Proteon80Mbit::Proteon80Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon80Mbit")
{
}

Proteon80Mbit::~Proteon80Mbit()
{
}

Ifvfitype::Ifvfitype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifVfiType")
{
}

Ifvfitype::~Ifvfitype()
{
}

Regular1822::Regular1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:regular1822")
{
}

Regular1822::~Regular1822()
{
}

Dvbrcstdma::Dvbrcstdma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsTdma")
{
}

Dvbrcstdma::~Dvbrcstdma()
{
}

Opticaltransport::Opticaltransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalTransport")
{
}

Opticaltransport::~Opticaltransport()
{
}

Localtalk::Localtalk()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:localTalk")
{
}

Localtalk::~Localtalk()
{
}

Ppp::Ppp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ppp")
{
}

Ppp::~Ppp()
{
}

Dtm::Dtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dtm")
{
}

Dtm::~Dtm()
{
}

Alugpononu::Alugpononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponOnu")
{
}

Alugpononu::~Alugpononu()
{
}

Cabledownstreamrfport::Cabledownstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cableDownstreamRfPort")
{
}

Cabledownstreamrfport::~Cabledownstreamrfport()
{
}

Mplstunnel::Mplstunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mplsTunnel")
{
}

Mplstunnel::~Mplstunnel()
{
}

Hostpad::Hostpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hostPad")
{
}

Hostpad::~Hostpad()
{
}

Voiceencap::Voiceencap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEncap")
{
}

Voiceencap::~Voiceencap()
{
}

Escon::Escon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:escon")
{
}

Escon::~Escon()
{
}

Voicefxo::Voicefxo()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXO")
{
}

Voicefxo::~Voicefxo()
{
}

Miox25::Miox25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:miox25")
{
}

Miox25::~Miox25()
{
}

Hyperchannel::Hyperchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hyperchannel")
{
}

Hyperchannel::~Hyperchannel()
{
}

Aviciopticalether::Aviciopticalether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aviciOpticalEther")
{
}

Aviciopticalether::~Aviciopticalether()
{
}

Basicisdn::Basicisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:basicISDN")
{
}

Basicisdn::~Basicisdn()
{
}

Ipoverclaw::Ipoverclaw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverClaw")
{
}

Ipoverclaw::~Ipoverclaw()
{
}

Voicefgdeana::Voicefgdeana()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDEANA")
{
}

Voicefgdeana::~Voicefgdeana()
{
}

Iso88025Crfpint::Iso88025Crfpint()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025CRFPInt")
{
}

Iso88025Crfpint::~Iso88025Crfpint()
{
}

Propatm::Propatm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propAtm")
{
}

Propatm::~Propatm()
{
}

Fddi::Fddi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fddi")
{
}

Fddi::~Fddi()
{
}

Eplrs::Eplrs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eplrs")
{
}

Eplrs::~Eplrs()
{
}

X25Mlp::X25Mlp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25mlp")
{
}

X25Mlp::~X25Mlp()
{
}

Arcnetplus::Arcnetplus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnetPlus")
{
}

Arcnetplus::~Arcnetplus()
{
}

Gtp::Gtp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gtp")
{
}

Gtp::~Gtp()
{
}

Voiceoverip::Voiceoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverIp")
{
}

Voiceoverip::~Voiceoverip()
{
}

Virtualipaddress::Virtualipaddress()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualIpAddress")
{
}

Virtualipaddress::~Virtualipaddress()
{
}

Idsl::Idsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:idsl")
{
}

Idsl::~Idsl()
{
}

Actelismetaloop::Actelismetaloop()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:actelisMetaLOOP")
{
}

Actelismetaloop::~Actelismetaloop()
{
}

Ieee80211::Ieee80211()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80211")
{
}

Ieee80211::~Ieee80211()
{
}

Propbwap2Mp::Propbwap2Mp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propBWAp2Mp")
{
}

Propbwap2Mp::~Propbwap2Mp()
{
}

H323Proxy::H323Proxy()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Proxy")
{
}

H323Proxy::~H323Proxy()
{
}

Capwapdot11Bss::Capwapdot11Bss()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Bss")
{
}

Capwapdot11Bss::~Capwapdot11Bss()
{
}

Econet::Econet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:econet")
{
}

Econet::~Econet()
{
}

Atmvirtual::Atmvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVirtual")
{
}

Atmvirtual::~Atmvirtual()
{
}

Eon::Eon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eon")
{
}

Eon::~Eon()
{
}

Infiniband::Infiniband()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:infiniband")
{
}

Infiniband::~Infiniband()
{
}

Docscableupstreamrfport::Docscableupstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamRfPort")
{
}

Docscableupstreamrfport::~Docscableupstreamrfport()
{
}

Atmfuni::Atmfuni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmFuni")
{
}

Atmfuni::~Atmfuni()
{
}

Pon622::Pon622()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon622")
{
}

Pon622::~Pon622()
{
}

Dvbasiout::Dvbasiout()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiOut")
{
}

Dvbasiout::~Dvbasiout()
{
}

Iso88024Tokenbus::Iso88024Tokenbus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88024TokenBus")
{
}

Iso88024Tokenbus::~Iso88024Tokenbus()
{
}

Modem::Modem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:modem")
{
}

Modem::~Modem()
{
}

Propdocswirelessupstream::Propdocswirelessupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessUpstream")
{
}

Propdocswirelessupstream::~Propdocswirelessupstream()
{
}

Ds0::Ds0()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0")
{
}

Ds0::~Ds0()
{
}

Docscabledownstream::Docscabledownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableDownstream")
{
}

Docscabledownstream::~Docscabledownstream()
{
}

Mfsiglink::Mfsiglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mfSigLink")
{
}

Mfsiglink::~Mfsiglink()
{
}

Aluepon::Aluepon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEpon")
{
}

Aluepon::~Aluepon()
{
}

Smdsdxi::Smdsdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsDxi")
{
}

Smdsdxi::~Smdsdxi()
{
}

Macsecuncontrolledif::Macsecuncontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecUncontrolledIF")
{
}

Macsecuncontrolledif::~Macsecuncontrolledif()
{
}

Ciscoislvlan::Ciscoislvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ciscoISLvlan")
{
}

Ciscoislvlan::~Ciscoislvlan()
{
}

Plc::Plc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:plc")
{
}

Plc::~Plc()
{
}

Propwirelessp2P::Propwirelessp2P()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propWirelessP2P")
{
}

Propwirelessp2P::~Propwirelessp2P()
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

Ddnx25::Ddnx25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ddnX25")
{
}

Ddnx25::~Ddnx25()
{
}

Fastether::Fastether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEther")
{
}

Fastether::~Fastether()
{
}

Atmvciendpt::Atmvciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVciEndPt")
{
}

Atmvciendpt::~Atmvciendpt()
{
}

Voicefxs::Voicefxs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXS")
{
}

Voicefxs::~Voicefxs()
{
}

Iso88026Man::Iso88026Man()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88026Man")
{
}

Iso88026Man::~Iso88026Man()
{
}

Vmwarenicteam::Vmwarenicteam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareNicTeam")
{
}

Vmwarenicteam::~Vmwarenicteam()
{
}

Propdocswirelessdownstream::Propdocswirelessdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessDownstream")
{
}

Propdocswirelessdownstream::~Propdocswirelessdownstream()
{
}

Vdsl2::Vdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl2")
{
}

Vdsl2::~Vdsl2()
{
}

Ss7Siglink::Ss7Siglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ss7SigLink")
{
}

Ss7Siglink::~Ss7Siglink()
{
}

Lapd::Lapd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapd")
{
}

Lapd::~Lapd()
{
}

Sonetpath::Sonetpath()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetPath")
{
}

Sonetpath::~Sonetpath()
{
}

Atmlogical::Atmlogical()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmLogical")
{
}

Atmlogical::~Atmlogical()
{
}

G703At64K::G703At64K()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at64k")
{
}

G703At64K::~G703At64K()
{
}

Digitalwrapperoverheadchannel::Digitalwrapperoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalWrapperOverheadChannel")
{
}

Digitalwrapperoverheadchannel::~Digitalwrapperoverheadchannel()
{
}

Voiceemfgd::Voiceemfgd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEMFGD")
{
}

Voiceemfgd::~Voiceemfgd()
{
}

Softwareloopback::Softwareloopback()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:softwareLoopback")
{
}

Softwareloopback::~Softwareloopback()
{
}

Reachdsl::Reachdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:reachDSL")
{
}

Reachdsl::~Reachdsl()
{
}

Ieee80212::Ieee80212()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80212")
{
}

Ieee80212::~Ieee80212()
{
}

Isdn::Isdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdn")
{
}

Isdn::~Isdn()
{
}

Dvbrcsmaclayer::Dvbrcsmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsMacLayer")
{
}

Dvbrcsmaclayer::~Dvbrcsmaclayer()
{
}

Voiceem::Voiceem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEM")
{
}

Voiceem::~Voiceem()
{
}

Async::Async()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:async")
{
}

Async::~Async()
{
}

Ds0Bundle::Ds0Bundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0Bundle")
{
}

Ds0Bundle::~Ds0Bundle()
{
}

Aal5::Aal5()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal5")
{
}

Aal5::~Aal5()
{
}

Usb::Usb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:usb")
{
}

Usb::~Usb()
{
}

Hdlc::Hdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdlc")
{
}

Hdlc::~Hdlc()
{
}

Ds1Fdl::Ds1Fdl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1FDL")
{
}

Ds1Fdl::~Ds1Fdl()
{
}

Cctemul::Cctemul()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cctEmul")
{
}

Cctemul::~Cctemul()
{
}

Sixtofour::Sixtofour()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sixToFour")
{
}

Sixtofour::~Sixtofour()
{
}

Ds1::Ds1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1")
{
}

Ds1::~Ds1()
{
}

Pppmultilinkbundle::Pppmultilinkbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pppMultilinkBundle")
{
}

Pppmultilinkbundle::~Pppmultilinkbundle()
{
}

Tdlc::Tdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tdlc")
{
}

Tdlc::~Tdlc()
{
}

Interleave::Interleave()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:interleave")
{
}

Interleave::~Interleave()
{
}

Voiceoverframerelay::Voiceoverframerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverFrameRelay")
{
}

Voiceoverframerelay::~Voiceoverframerelay()
{
}

Dcn::Dcn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dcn")
{
}

Dcn::~Dcn()
{
}

Termpad::Termpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:termPad")
{
}

Termpad::~Termpad()
{
}

Alugponphysicaluni::Alugponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponPhysicalUni")
{
}

Alugponphysicaluni::~Alugponphysicaluni()
{
}

Transphdlc::Transphdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:transpHdlc")
{
}

Transphdlc::~Transphdlc()
{
}

Rfc877X25::Rfc877X25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc877x25")
{
}

Rfc877X25::~Rfc877X25()
{
}

G9982::G9982()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9982")
{
}

G9982::~G9982()
{
}

Ds3::Ds3()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds3")
{
}

Ds3::~Ds3()
{
}

Sonetoverheadchannel::Sonetoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetOverheadChannel")
{
}

Sonetoverheadchannel::~Sonetoverheadchannel()
{
}

Ipforward::Ipforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipForward")
{
}

Ipforward::~Ipforward()
{
}

Atmbond::Atmbond()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmbond")
{
}

Atmbond::~Atmbond()
{
}

Tunnel::Tunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tunnel")
{
}

Tunnel::~Tunnel()
{
}

V36::V36()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v36")
{
}

V36::~V36()
{
}

Q2931::Q2931()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:q2931")
{
}

Q2931::~Q2931()
{
}

Frf16Mfrbundle::Frf16Mfrbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frf16MfrBundle")
{
}

Frf16Mfrbundle::~Frf16Mfrbundle()
{
}

Atm::Atm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atm")
{
}

Atm::~Atm()
{
}


}
}
