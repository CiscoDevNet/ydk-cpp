
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

VoiceFXO::VoiceFXO()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXO")
{

}

VoiceFXO::~VoiceFXO()
{
}

AtmVciEndPt::AtmVciEndPt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVciEndPt")
{

}

AtmVciEndPt::~AtmVciEndPt()
{
}

PropBWAp2Mp::PropBWAp2Mp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propBWAp2Mp")
{

}

PropBWAp2Mp::~PropBWAp2Mp()
{
}

PropDocsWirelessDownstream::PropDocsWirelessDownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessDownstream")
{

}

PropDocsWirelessDownstream::~PropDocsWirelessDownstream()
{
}

V11::V11()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v11")
{

}

V11::~V11()
{
}

SoftwareLoopback::SoftwareLoopback()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:softwareLoopback")
{

}

SoftwareLoopback::~SoftwareLoopback()
{
}

Hdlc::Hdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdlc")
{

}

Hdlc::~Hdlc()
{
}

VoiceFGDOS::VoiceFGDOS()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDOS")
{

}

VoiceFGDOS::~VoiceFGDOS()
{
}

FastEtherFX::FastEtherFX()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEtherFX")
{

}

FastEtherFX::~FastEtherFX()
{
}

DvbTdm::DvbTdm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbTdm")
{

}

DvbTdm::~DvbTdm()
{
}

Nfas::Nfas()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nfas")
{

}

Nfas::~Nfas()
{
}

IfPwType::IfPwType()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifPwType")
{

}

IfPwType::~IfPwType()
{
}

L2vlan::L2vlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l2vlan")
{

}

L2vlan::~L2vlan()
{
}

Adsl2plus::Adsl2plus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2plus")
{

}

Adsl2plus::~Adsl2plus()
{
}

Ieee802154::Ieee802154()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee802154")
{

}

Ieee802154::~Ieee802154()
{
}

VoiceFXS::VoiceFXS()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXS")
{

}

VoiceFXS::~VoiceFXS()
{
}

DvbRcsMacLayer::DvbRcsMacLayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsMacLayer")
{

}

DvbRcsMacLayer::~DvbRcsMacLayer()
{
}

Idsl::Idsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:idsl")
{

}

Idsl::~Idsl()
{
}

Infiniband::Infiniband()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:infiniband")
{

}

Infiniband::~Infiniband()
{
}

DdnX25::DdnX25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ddnX25")
{

}

DdnX25::~DdnX25()
{
}

WwanPP2::WwanPP2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP2")
{

}

WwanPP2::~WwanPP2()
{
}

DocsCableUpstream::DocsCableUpstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstream")
{

}

DocsCableUpstream::~DocsCableUpstream()
{
}

Ethernet3Mbit::Ethernet3Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernet3Mbit")
{

}

Ethernet3Mbit::~Ethernet3Mbit()
{
}

DigitalPowerline::DigitalPowerline()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalPowerline")
{

}

DigitalPowerline::~DigitalPowerline()
{
}

H323Proxy::H323Proxy()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Proxy")
{

}

H323Proxy::~H323Proxy()
{
}

Gtp::Gtp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gtp")
{

}

Gtp::~Gtp()
{
}

IpOverAtm::IpOverAtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverAtm")
{

}

IpOverAtm::~IpOverAtm()
{
}

AluEpon::AluEpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEpon")
{

}

AluEpon::~AluEpon()
{
}

Imt::Imt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:imt")
{

}

Imt::~Imt()
{
}

IpSwitch::IpSwitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipSwitch")
{

}

IpSwitch::~IpSwitch()
{
}

Msdsl::Msdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:msdsl")
{

}

Msdsl::~Msdsl()
{
}

DvbRccMacLayer::DvbRccMacLayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccMacLayer")
{

}

DvbRccMacLayer::~DvbRccMacLayer()
{
}

SmdsDxi::SmdsDxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsDxi")
{

}

SmdsDxi::~SmdsDxi()
{
}

VoiceOverAtm::VoiceOverAtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverAtm")
{

}

VoiceOverAtm::~VoiceOverAtm()
{
}

Arap::Arap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arap")
{

}

Arap::~Arap()
{
}

FastEther::FastEther()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEther")
{

}

FastEther::~FastEther()
{
}

Mpc::Mpc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpc")
{

}

Mpc::~Mpc()
{
}

Linegroup::Linegroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:linegroup")
{

}

Linegroup::~Linegroup()
{
}

Hippi::Hippi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippi")
{

}

Hippi::~Hippi()
{
}

Rpr::Rpr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rpr")
{

}

Rpr::~Rpr()
{
}

Ds1FDL::Ds1FDL()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1FDL")
{

}

Ds1FDL::~Ds1FDL()
{
}

SonetVT::SonetVT()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetVT")
{

}

SonetVT::~SonetVT()
{
}

VoiceEncap::VoiceEncap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEncap")
{

}

VoiceEncap::~VoiceEncap()
{
}

Ss7SigLink::Ss7SigLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ss7SigLink")
{

}

Ss7SigLink::~Ss7SigLink()
{
}

Arcnet::Arcnet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnet")
{

}

Arcnet::~Arcnet()
{
}

ActelisMetaLOOP::ActelisMetaLOOP()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:actelisMetaLOOP")
{

}

ActelisMetaLOOP::~ActelisMetaLOOP()
{
}

Qllc::Qllc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qllc")
{

}

Qllc::~Qllc()
{
}

Rfc877x25::Rfc877x25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc877x25")
{

}

Rfc877x25::~Rfc877x25()
{
}

MpegTransport::MpegTransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpegTransport")
{

}

MpegTransport::~MpegTransport()
{
}

X25mlp::X25mlp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25mlp")
{

}

X25mlp::~X25mlp()
{
}

VirtualTg::VirtualTg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualTg")
{

}

VirtualTg::~VirtualTg()
{
}

HostPad::HostPad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hostPad")
{

}

HostPad::~HostPad()
{
}

StarLan::StarLan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:starLan")
{

}

StarLan::~StarLan()
{
}

Iso88025Dtr::Iso88025Dtr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Dtr")
{

}

Iso88025Dtr::~Iso88025Dtr()
{
}

Ibm370parChan::Ibm370parChan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ibm370parChan")
{

}

Ibm370parChan::~Ibm370parChan()
{
}

Adsl2::Adsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2")
{

}

Adsl2::~Adsl2()
{
}

OtnOtu::OtnOtu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOtu")
{

}

OtnOtu::~OtnOtu()
{
}

PropWirelessP2P::PropWirelessP2P()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propWirelessP2P")
{

}

PropWirelessP2P::~PropWirelessP2P()
{
}

Interleave::Interleave()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:interleave")
{

}

Interleave::~Interleave()
{
}

Isup::Isup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isup")
{

}

Isup::~Isup()
{
}

Regular1822::Regular1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:regular1822")
{

}

Regular1822::~Regular1822()
{
}

Gr303RDT::Gr303RDT()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303RDT")
{

}

Gr303RDT::~Gr303RDT()
{
}

PropDocsWirelessMaclayer::PropDocsWirelessMaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessMaclayer")
{

}

PropDocsWirelessMaclayer::~PropDocsWirelessMaclayer()
{
}

Async::Async()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:async")
{

}

Async::~Async()
{
}

RadioMAC::RadioMAC()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radioMAC")
{

}

RadioMAC::~RadioMAC()
{
}

OpticalChannelGroup::OpticalChannelGroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannelGroup")
{

}

OpticalChannelGroup::~OpticalChannelGroup()
{
}

SixToFour::SixToFour()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sixToFour")
{

}

SixToFour::~SixToFour()
{
}

PropDocsWirelessUpstream::PropDocsWirelessUpstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessUpstream")
{

}

PropDocsWirelessUpstream::~PropDocsWirelessUpstream()
{
}

Q2931::Q2931()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:q2931")
{

}

Q2931::~Q2931()
{
}

Fddi::Fddi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fddi")
{

}

Fddi::~Fddi()
{
}

PropCnls::PropCnls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propCnls")
{

}

PropCnls::~PropCnls()
{
}

Aal2::Aal2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal2")
{

}

Aal2::~Aal2()
{
}

DvbAsiOut::DvbAsiOut()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiOut")
{

}

DvbAsiOut::~DvbAsiOut()
{
}

AluELP::AluELP()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluELP")
{

}

AluELP::~AluELP()
{
}

CiscoISLvlan::CiscoISLvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ciscoISLvlan")
{

}

CiscoISLvlan::~CiscoISLvlan()
{
}

DocsCableUpstreamRfPort::DocsCableUpstreamRfPort()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamRfPort")
{

}

DocsCableUpstreamRfPort::~DocsCableUpstreamRfPort()
{
}

Aal5::Aal5()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal5")
{

}

Aal5::~Aal5()
{
}

FrDlciEndPt::FrDlciEndPt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frDlciEndPt")
{

}

FrDlciEndPt::~FrDlciEndPt()
{
}

HippiInterface::HippiInterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippiInterface")
{

}

HippiInterface::~HippiInterface()
{
}

L3ipvlan::L3ipvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipvlan")
{

}

L3ipvlan::~L3ipvlan()
{
}

Miox25::Miox25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:miox25")
{

}

Miox25::~Miox25()
{
}

Hssi::Hssi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hssi")
{

}

Hssi::~Hssi()
{
}

AtmVirtual::AtmVirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVirtual")
{

}

AtmVirtual::~AtmVirtual()
{
}

AluGponOnu::AluGponOnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponOnu")
{

}

AluGponOnu::~AluGponOnu()
{
}

Rfc1483::Rfc1483()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc1483")
{

}

Rfc1483::~Rfc1483()
{
}

Cnr::Cnr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cnr")
{

}

Cnr::~Cnr()
{
}

SipSig::SipSig()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipSig")
{

}

SipSig::~SipSig()
{
}

Myrinet::Myrinet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:myrinet")
{

}

Myrinet::~Myrinet()
{
}

Dlsw::Dlsw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dlsw")
{

}

Dlsw::~Dlsw()
{
}

GigabitEthernet::GigabitEthernet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gigabitEthernet")
{

}

GigabitEthernet::~GigabitEthernet()
{
}

X25ple::X25ple()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25ple")
{

}

X25ple::~X25ple()
{
}

Lmp::Lmp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lmp")
{

}

Lmp::~Lmp()
{
}

OpticalTransport::OpticalTransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalTransport")
{

}

OpticalTransport::~OpticalTransport()
{
}

Sdlc::Sdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdlc")
{

}

Sdlc::~Sdlc()
{
}

VoiceEM::VoiceEM()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEM")
{

}

VoiceEM::~VoiceEM()
{
}

X86Laps::X86Laps()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x86Laps")
{

}

X86Laps::~X86Laps()
{
}

G9982::G9982()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9982")
{

}

G9982::~G9982()
{
}

Iso88022llc::Iso88022llc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88022llc")
{

}

Iso88022llc::~Iso88022llc()
{
}

DvbAsiIn::DvbAsiIn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiIn")
{

}

DvbAsiIn::~DvbAsiIn()
{
}

Bgppolicyaccounting::Bgppolicyaccounting()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bgppolicyaccounting")
{

}

Bgppolicyaccounting::~Bgppolicyaccounting()
{
}

AluEponOnu::AluEponOnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponOnu")
{

}

AluEponOnu::~AluEponOnu()
{
}

MfSigLink::MfSigLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mfSigLink")
{

}

MfSigLink::~MfSigLink()
{
}

Dcn::Dcn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dcn")
{

}

Dcn::~Dcn()
{
}

AtmDxi::AtmDxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmDxi")
{

}

AtmDxi::~AtmDxi()
{
}

VoiceOverFrameRelay::VoiceOverFrameRelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverFrameRelay")
{

}

VoiceOverFrameRelay::~VoiceOverFrameRelay()
{
}

Gfp::Gfp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gfp")
{

}

Gfp::~Gfp()
{
}

SonetOverheadChannel::SonetOverheadChannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetOverheadChannel")
{

}

SonetOverheadChannel::~SonetOverheadChannel()
{
}

VmwareVirtualNic::VmwareVirtualNic()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareVirtualNic")
{

}

VmwareVirtualNic::~VmwareVirtualNic()
{
}

FcipLink::FcipLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fcipLink")
{

}

FcipLink::~FcipLink()
{
}

IpOverClaw::IpOverClaw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverClaw")
{

}

IpOverClaw::~IpOverClaw()
{
}

Coffee::Coffee()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:coffee")
{

}

Coffee::~Coffee()
{
}

Radsl::Radsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radsl")
{

}

Radsl::~Radsl()
{
}

Vdsl2::Vdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl2")
{

}

Vdsl2::~Vdsl2()
{
}

Rs232::Rs232()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rs232")
{

}

Rs232::~Rs232()
{
}

E1::E1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:e1")
{

}

E1::~E1()
{
}

ReachDSL::ReachDSL()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:reachDSL")
{

}

ReachDSL::~ReachDSL()
{
}

VoiceOverCable::VoiceOverCable()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverCable")
{

}

VoiceOverCable::~VoiceOverCable()
{
}

Tr008::Tr008()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tr008")
{

}

Tr008::~Tr008()
{
}

VoiceOverIp::VoiceOverIp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverIp")
{

}

VoiceOverIp::~VoiceOverIp()
{
}

Atm::Atm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atm")
{

}

Atm::~Atm()
{
}

Ds3::Ds3()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds3")
{

}

Ds3::~Ds3()
{
}

Ds0::Ds0()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0")
{

}

Ds0::~Ds0()
{
}

Ds1::Ds1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1")
{

}

Ds1::~Ds1()
{
}

Srp::Srp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:srp")
{

}

Srp::~Srp()
{
}

DocsCableDownstream::DocsCableDownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableDownstream")
{

}

DocsCableDownstream::~DocsCableDownstream()
{
}

DvbRcsTdma::DvbRcsTdma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsTdma")
{

}

DvbRcsTdma::~DvbRcsTdma()
{
}

G9983::G9983()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9983")
{

}

G9983::~G9983()
{
}

Plc::Plc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:plc")
{

}

Plc::~Plc()
{
}

FrameRelayMPI::FrameRelayMPI()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayMPI")
{

}

FrameRelayMPI::~FrameRelayMPI()
{
}

Mvl::Mvl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mvl")
{

}

Mvl::~Mvl()
{
}

PropMultiplexor::PropMultiplexor()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propMultiplexor")
{

}

PropMultiplexor::~PropMultiplexor()
{
}

VoiceDID::VoiceDID()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceDID")
{

}

VoiceDID::~VoiceDID()
{
}

CompositeLink::CompositeLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:compositeLink")
{

}

CompositeLink::~CompositeLink()
{
}

Proteon10Mbit::Proteon10Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon10Mbit")
{

}

Proteon10Mbit::~Proteon10Mbit()
{
}

Atmbond::Atmbond()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmbond")
{

}

Atmbond::~Atmbond()
{
}

Frf16MfrBundle::Frf16MfrBundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frf16MfrBundle")
{

}

Frf16MfrBundle::~Frf16MfrBundle()
{
}

CctEmul::CctEmul()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cctEmul")
{

}

CctEmul::~CctEmul()
{
}

MplsTunnel::MplsTunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mplsTunnel")
{

}

MplsTunnel::~MplsTunnel()
{
}

Gpon::Gpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gpon")
{

}

Gpon::~Gpon()
{
}

Vdsl::Vdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl")
{

}

Vdsl::~Vdsl()
{
}

Pos::Pos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pos")
{

}

Pos::~Pos()
{
}

Ieee8023adLag::Ieee8023adLag()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee8023adLag")
{

}

Ieee8023adLag::~Ieee8023adLag()
{
}

DocsCableMaclayer::DocsCableMaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMaclayer")
{

}

DocsCableMaclayer::~DocsCableMaclayer()
{
}

DocsCableMCmtsDownstream::DocsCableMCmtsDownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMCmtsDownstream")
{

}

DocsCableMCmtsDownstream::~DocsCableMCmtsDownstream()
{
}

Ppp::Ppp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ppp")
{

}

Ppp::~Ppp()
{
}

FrameRelay::FrameRelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelay")
{

}

FrameRelay::~FrameRelay()
{
}

Eplrs::Eplrs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eplrs")
{

}

Eplrs::~Eplrs()
{
}

VmwareNicTeam::VmwareNicTeam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareNicTeam")
{

}

VmwareNicTeam::~VmwareNicTeam()
{
}

CableDownstreamRfPort::CableDownstreamRfPort()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cableDownstreamRfPort")
{

}

CableDownstreamRfPort::~CableDownstreamRfPort()
{
}

MacSecUncontrolledIF::MacSecUncontrolledIF()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecUncontrolledIF")
{

}

MacSecUncontrolledIF::~MacSecUncontrolledIF()
{
}

Iso88023Csmacd::Iso88023Csmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88023Csmacd")
{

}

Iso88023Csmacd::~Iso88023Csmacd()
{
}

Usb::Usb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:usb")
{

}

Usb::~Usb()
{
}

AtmFuni::AtmFuni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmFuni")
{

}

AtmFuni::~AtmFuni()
{
}

TeLink::TeLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:teLink")
{

}

TeLink::~TeLink()
{
}

Pon622::Pon622()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon622")
{

}

Pon622::~Pon622()
{
}

Econet::Econet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:econet")
{

}

Econet::~Econet()
{
}

Tdlc::Tdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tdlc")
{

}

Tdlc::~Tdlc()
{
}

Ds0Bundle::Ds0Bundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0Bundle")
{

}

Ds0Bundle::~Ds0Bundle()
{
}

Fast::Fast()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fast")
{

}

Fast::~Fast()
{
}

Ieee1394::Ieee1394()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee1394")
{

}

Ieee1394::~Ieee1394()
{
}

CblVectaStar::CblVectaStar()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cblVectaStar")
{

}

CblVectaStar::~CblVectaStar()
{
}

Rsrb::Rsrb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rsrb")
{

}

Rsrb::~Rsrb()
{
}

FrameRelayInterconnect::FrameRelayInterconnect()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayInterconnect")
{

}

FrameRelayInterconnect::~FrameRelayInterconnect()
{
}

Isdns::Isdns()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdns")
{

}

Isdns::~Isdns()
{
}

PppMultilinkBundle::PppMultilinkBundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pppMultilinkBundle")
{

}

PppMultilinkBundle::~PppMultilinkBundle()
{
}

Aflane8025::Aflane8025()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8025")
{

}

Aflane8025::~Aflane8025()
{
}

Lapb::Lapb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapb")
{

}

Lapb::~Lapb()
{
}

Aflane8023::Aflane8023()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8023")
{

}

Aflane8023::~Aflane8023()
{
}

Lapd::Lapd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapd")
{

}

Lapd::~Lapd()
{
}

Isdnu::Isdnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdnu")
{

}

Isdnu::~Isdnu()
{
}

Lapf::Lapf()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapf")
{

}

Lapf::~Lapf()
{
}

CapwapWtpVirtualRadio::CapwapWtpVirtualRadio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapWtpVirtualRadio")
{

}

CapwapWtpVirtualRadio::~CapwapWtpVirtualRadio()
{
}

IfVfiType::IfVfiType()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifVfiType")
{

}

IfVfiType::~IfVfiType()
{
}

X25huntGroup::X25huntGroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25huntGroup")
{

}

X25huntGroup::~X25huntGroup()
{
}

Para::Para()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:para")
{

}

Para::~Para()
{
}

MacSecControlledIF::MacSecControlledIF()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecControlledIF")
{

}

MacSecControlledIF::~MacSecControlledIF()
{
}

Iso88024TokenBus::Iso88024TokenBus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88024TokenBus")
{

}

Iso88024TokenBus::~Iso88024TokenBus()
{
}

LocalTalk::LocalTalk()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:localTalk")
{

}

LocalTalk::~LocalTalk()
{
}

Hyperchannel::Hyperchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hyperchannel")
{

}

Hyperchannel::~Hyperchannel()
{
}

MediaMailOverIp::MediaMailOverIp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mediaMailOverIp")
{

}

MediaMailOverIp::~MediaMailOverIp()
{
}

IfGsn::IfGsn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:if-gsn")
{

}

IfGsn::~IfGsn()
{
}

CapwapDot11Profile::CapwapDot11Profile()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Profile")
{

}

CapwapDot11Profile::~CapwapDot11Profile()
{
}

L3ipxvlan::L3ipxvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipxvlan")
{

}

L3ipxvlan::~L3ipxvlan()
{
}

AtmSubInterface::AtmSubInterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmSubInterface")
{

}

AtmSubInterface::~AtmSubInterface()
{
}

PrimaryISDN::PrimaryISDN()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:primaryISDN")
{

}

PrimaryISDN::~PrimaryISDN()
{
}

Proteon80Mbit::Proteon80Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon80Mbit")
{

}

Proteon80Mbit::~Proteon80Mbit()
{
}

Iso88026Man::Iso88026Man()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88026Man")
{

}

Iso88026Man::~Iso88026Man()
{
}

DigitalWrapperOverheadChannel::DigitalWrapperOverheadChannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalWrapperOverheadChannel")
{

}

DigitalWrapperOverheadChannel::~DigitalWrapperOverheadChannel()
{
}

DocsCableUpstreamChannel::DocsCableUpstreamChannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamChannel")
{

}

DocsCableUpstreamChannel::~DocsCableUpstreamChannel()
{
}

OpticalChannel::OpticalChannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannel")
{

}

OpticalChannel::~OpticalChannel()
{
}

EthernetCsmacd::EthernetCsmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernetCsmacd")
{

}

EthernetCsmacd::~EthernetCsmacd()
{
}

Bits::Bits()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bits")
{

}

Bits::~Bits()
{
}

Tunnel::Tunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tunnel")
{

}

Tunnel::~Tunnel()
{
}

Hdsl2::Hdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdsl2")
{

}

Hdsl2::~Hdsl2()
{
}

FrameRelayService::FrameRelayService()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayService")
{

}

FrameRelayService::~FrameRelayService()
{
}

Mpls::Mpls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpls")
{

}

Mpls::~Mpls()
{
}

Ieee80211::Ieee80211()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80211")
{

}

Ieee80211::~Ieee80211()
{
}

Ieee80212::Ieee80212()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80212")
{

}

Ieee80212::~Ieee80212()
{
}

MocaVersion1::MocaVersion1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mocaVersion1")
{

}

MocaVersion1::~MocaVersion1()
{
}

Sonet::Sonet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonet")
{

}

Sonet::~Sonet()
{
}

Escon::Escon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:escon")
{

}

Escon::~Escon()
{
}

AluEponLogicalLink::AluEponLogicalLink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponLogicalLink")
{

}

AluEponLogicalLink::~AluEponLogicalLink()
{
}

G703at2mb::G703at2mb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at2mb")
{

}

G703at2mb::~G703at2mb()
{
}

Ultra::Ultra()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ultra")
{

}

Ultra::~Ultra()
{
}

DvbRccDownstream::DvbRccDownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccDownstream")
{

}

DvbRccDownstream::~DvbRccDownstream()
{
}

SipTg::SipTg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipTg")
{

}

SipTg::~SipTg()
{
}

SmdsIcip::SmdsIcip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsIcip")
{

}

SmdsIcip::~SmdsIcip()
{
}

Bridge::Bridge()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bridge")
{

}

Bridge::~Bridge()
{
}

AtmLogical::AtmLogical()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmLogical")
{

}

AtmLogical::~AtmLogical()
{
}

PropPointToPointSerial::PropPointToPointSerial()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propPointToPointSerial")
{

}

PropPointToPointSerial::~PropPointToPointSerial()
{
}

V35::V35()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v35")
{

}

V35::~V35()
{
}

V36::V36()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v36")
{

}

V36::~V36()
{
}

V37::V37()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v37")
{

}

V37::~V37()
{
}

Ip::Ip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ip")
{

}

Ip::~Ip()
{
}

Gr303IDT::Gr303IDT()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303IDT")
{

}

Gr303IDT::~Gr303IDT()
{
}

BasicISDN::BasicISDN()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:basicISDN")
{

}

BasicISDN::~BasicISDN()
{
}

G703at64k::G703at64k()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at64k")
{

}

G703at64k::~G703at64k()
{
}

ArcnetPlus::ArcnetPlus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnetPlus")
{

}

ArcnetPlus::~ArcnetPlus()
{
}

Pip::Pip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pip")
{

}

Pip::~Pip()
{
}

Dtm::Dtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dtm")
{

}

Dtm::~Dtm()
{
}

Slip::Slip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:slip")
{

}

Slip::~Slip()
{
}

Hiperlan2::Hiperlan2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hiperlan2")
{

}

Hiperlan2::~Hiperlan2()
{
}

Adsl::Adsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl")
{

}

Adsl::~Adsl()
{
}

Ieee80216WMAN::Ieee80216WMAN()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80216WMAN")
{

}

Ieee80216WMAN::~Ieee80216WMAN()
{
}

AtmIma::AtmIma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmIma")
{

}

AtmIma::~AtmIma()
{
}

Isdn::Isdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdn")
{

}

Isdn::~Isdn()
{
}

CapwapDot11Bss::CapwapDot11Bss()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Bss")
{

}

CapwapDot11Bss::~CapwapDot11Bss()
{
}

Sip::Sip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sip")
{

}

Sip::~Sip()
{
}

PdnEtherLoop2::PdnEtherLoop2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop2")
{

}

PdnEtherLoop2::~PdnEtherLoop2()
{
}

VoiceEBS::VoiceEBS()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEBS")
{

}

VoiceEBS::~VoiceEBS()
{
}

IpForward::IpForward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipForward")
{

}

IpForward::~IpForward()
{
}

Iso88025CRFPInt::Iso88025CRFPInt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025CRFPInt")
{

}

Iso88025CRFPInt::~Iso88025CRFPInt()
{
}

PropVirtual::PropVirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propVirtual")
{

}

PropVirtual::~PropVirtual()
{
}

WwanPP::WwanPP()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP")
{

}

WwanPP::~WwanPP()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:other")
{

}

Other::~Other()
{
}

Pon155::Pon155()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon155")
{

}

Pon155::~Pon155()
{
}

Qam::Qam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qam")
{

}

Qam::~Qam()
{
}

OtnOdu::OtnOdu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOdu")
{

}

OtnOdu::~OtnOdu()
{
}

Iso88025Fiber::Iso88025Fiber()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Fiber")
{

}

Iso88025Fiber::~Iso88025Fiber()
{
}

Channel::Channel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:channel")
{

}

Channel::~Channel()
{
}

VoiceEMFGD::VoiceEMFGD()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEMFGD")
{

}

VoiceEMFGD::~VoiceEMFGD()
{
}

AluGponPhysicalUni::AluGponPhysicalUni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponPhysicalUni")
{

}

AluGponPhysicalUni::~AluGponPhysicalUni()
{
}

A12MppSwitch::A12MppSwitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:a12MppSwitch")
{

}

A12MppSwitch::~A12MppSwitch()
{
}

Ilan::Ilan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ilan")
{

}

Ilan::~Ilan()
{
}

PdnEtherLoop1::PdnEtherLoop1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop1")
{

}

PdnEtherLoop1::~PdnEtherLoop1()
{
}

X213::X213()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x213")
{

}

X213::~X213()
{
}

SonetPath::SonetPath()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetPath")
{

}

SonetPath::~SonetPath()
{
}

VoiceFGDEANA::VoiceFGDEANA()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDEANA")
{

}

VoiceFGDEANA::~VoiceFGDEANA()
{
}

Iso88025TokenRing::Iso88025TokenRing()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025TokenRing")
{

}

Iso88025TokenRing::~Iso88025TokenRing()
{
}

PropAtm::PropAtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propAtm")
{

}

PropAtm::~PropAtm()
{
}

AluEponPhysicalUni::AluEponPhysicalUni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponPhysicalUni")
{

}

AluEponPhysicalUni::~AluEponPhysicalUni()
{
}

StackToStack::StackToStack()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:stackToStack")
{

}

StackToStack::~StackToStack()
{
}

FrForward::FrForward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frForward")
{

}

FrForward::~FrForward()
{
}

Homepna::Homepna()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:homepna")
{

}

Homepna::~Homepna()
{
}

Sdsl::Sdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdsl")
{

}

Sdsl::~Sdsl()
{
}

VirtualIpAddress::VirtualIpAddress()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualIpAddress")
{

}

VirtualIpAddress::~VirtualIpAddress()
{
}

Bsc::Bsc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bsc")
{

}

Bsc::~Bsc()
{
}

AtmRadio::AtmRadio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmRadio")
{

}

AtmRadio::~AtmRadio()
{
}

AviciOpticalEther::AviciOpticalEther()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aviciOpticalEther")
{

}

AviciOpticalEther::~AviciOpticalEther()
{
}

G9981::G9981()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9981")
{

}

G9981::~G9981()
{
}

FibreChannel::FibreChannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fibreChannel")
{

}

FibreChannel::~FibreChannel()
{
}

Shdsl::Shdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:shdsl")
{

}

Shdsl::~Shdsl()
{
}

Eon::Eon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eon")
{

}

Eon::~Eon()
{
}

H323Gatekeeper::H323Gatekeeper()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Gatekeeper")
{

}

H323Gatekeeper::~H323Gatekeeper()
{
}

Hdh1822::Hdh1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdh1822")
{

}

Hdh1822::~Hdh1822()
{
}

DvbRccUpstream::DvbRccUpstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccUpstream")
{

}

DvbRccUpstream::~DvbRccUpstream()
{
}

Nsip::Nsip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nsip")
{

}

Nsip::~Nsip()
{
}

TranspHdlc::TranspHdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:transpHdlc")
{

}

TranspHdlc::~TranspHdlc()
{
}

TermPad::TermPad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:termPad")
{

}

TermPad::~TermPad()
{
}

IpOverCdlc::IpOverCdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverCdlc")
{

}

IpOverCdlc::~IpOverCdlc()
{
}

Ces::Ces()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ces")
{

}

Ces::~Ces()
{
}

Modem::Modem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:modem")
{

}

Modem::~Modem()
{
}


}
}

