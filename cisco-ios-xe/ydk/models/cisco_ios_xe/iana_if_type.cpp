
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "iana_if_type.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace iana_if_type {

IanaInterfaceType::IanaInterfaceType()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iana-interface-type")
{
}

IanaInterfaceType::~IanaInterfaceType()
{
}

Idsl::Idsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:idsl")
{
}

Idsl::~Idsl()
{
}

Coffee::Coffee()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:coffee")
{
}

Coffee::~Coffee()
{
}

Digitalpowerline::Digitalpowerline()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalPowerline")
{
}

Digitalpowerline::~Digitalpowerline()
{
}

Transphdlc::Transphdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:transpHdlc")
{
}

Transphdlc::~Transphdlc()
{
}

Voiceebs::Voiceebs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEBS")
{
}

Voiceebs::~Voiceebs()
{
}

Fastether::Fastether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEther")
{
}

Fastether::~Fastether()
{
}

Vmwarevirtualnic::Vmwarevirtualnic()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareVirtualNic")
{
}

Vmwarevirtualnic::~Vmwarevirtualnic()
{
}

Alugpononu::Alugpononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponOnu")
{
}

Alugpononu::~Alugpononu()
{
}

Vdsl2::Vdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl2")
{
}

Vdsl2::~Vdsl2()
{
}

Gr303Idt::Gr303Idt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303IDT")
{
}

Gr303Idt::~Gr303Idt()
{
}

Ilan::Ilan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ilan")
{
}

Ilan::~Ilan()
{
}

Eon::Eon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eon")
{
}

Eon::~Eon()
{
}

Arcnet::Arcnet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnet")
{
}

Arcnet::~Arcnet()
{
}

L3Ipvlan::L3Ipvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipvlan")
{
}

L3Ipvlan::~L3Ipvlan()
{
}

Sonetoverheadchannel::Sonetoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetOverheadChannel")
{
}

Sonetoverheadchannel::~Sonetoverheadchannel()
{
}

Sixtofour::Sixtofour()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sixToFour")
{
}

Sixtofour::~Sixtofour()
{
}

Fast::Fast()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fast")
{
}

Fast::~Fast()
{
}

Aviciopticalether::Aviciopticalether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aviciOpticalEther")
{
}

Aviciopticalether::~Aviciopticalether()
{
}

X213::X213()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x213")
{
}

X213::~X213()
{
}

Ipforward::Ipforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipForward")
{
}

Ipforward::~Ipforward()
{
}

Atmdxi::Atmdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmDxi")
{
}

Atmdxi::~Atmdxi()
{
}

Frdlciendpt::Frdlciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frDlciEndPt")
{
}

Frdlciendpt::~Frdlciendpt()
{
}

Gpon::Gpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gpon")
{
}

Gpon::~Gpon()
{
}

Wwanpp::Wwanpp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP")
{
}

Wwanpp::~Wwanpp()
{
}

Starlan::Starlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:starLan")
{
}

Starlan::~Starlan()
{
}

Ibm370Parchan::Ibm370Parchan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ibm370parChan")
{
}

Ibm370Parchan::~Ibm370Parchan()
{
}

Capwapwtpvirtualradio::Capwapwtpvirtualradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapWtpVirtualRadio")
{
}

Capwapwtpvirtualradio::~Capwapwtpvirtualradio()
{
}

L2Vlan::L2Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l2vlan")
{
}

L2Vlan::~L2Vlan()
{
}

Pon622::Pon622()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon622")
{
}

Pon622::~Pon622()
{
}

Iso88026Man::Iso88026Man()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88026Man")
{
}

Iso88026Man::~Iso88026Man()
{
}

G9981::G9981()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9981")
{
}

G9981::~G9981()
{
}

Dvbrcsmaclayer::Dvbrcsmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsMacLayer")
{
}

Dvbrcsmaclayer::~Dvbrcsmaclayer()
{
}

Ip::Ip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ip")
{
}

Ip::~Ip()
{
}

Propcnls::Propcnls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propCnls")
{
}

Propcnls::~Propcnls()
{
}

Hiperlan2::Hiperlan2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hiperlan2")
{
}

Hiperlan2::~Hiperlan2()
{
}

Atmima::Atmima()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmIma")
{
}

Atmima::~Atmima()
{
}

Pos::Pos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pos")
{
}

Pos::~Pos()
{
}

Macsecuncontrolledif::Macsecuncontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecUncontrolledIF")
{
}

Macsecuncontrolledif::~Macsecuncontrolledif()
{
}

Econet::Econet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:econet")
{
}

Econet::~Econet()
{
}

Ces::Ces()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ces")
{
}

Ces::~Ces()
{
}

Bsc::Bsc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bsc")
{
}

Bsc::~Bsc()
{
}

Ipovercdlc::Ipovercdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverCdlc")
{
}

Ipovercdlc::~Ipovercdlc()
{
}

Plc::Plc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:plc")
{
}

Plc::~Plc()
{
}

Gfp::Gfp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gfp")
{
}

Gfp::~Gfp()
{
}

Ds0Bundle::Ds0Bundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0Bundle")
{
}

Ds0Bundle::~Ds0Bundle()
{
}

Channel::Channel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:channel")
{
}

Channel::~Channel()
{
}

Rfc1483::Rfc1483()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc1483")
{
}

Rfc1483::~Rfc1483()
{
}

Mvl::Mvl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mvl")
{
}

Mvl::~Mvl()
{
}

Rfc877X25::Rfc877X25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc877x25")
{
}

Rfc877X25::~Rfc877X25()
{
}

Localtalk::Localtalk()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:localTalk")
{
}

Localtalk::~Localtalk()
{
}

Nsip::Nsip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nsip")
{
}

Nsip::~Nsip()
{
}

Capwapdot11Profile::Capwapdot11Profile()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Profile")
{
}

Capwapdot11Profile::~Capwapdot11Profile()
{
}

Alugponphysicaluni::Alugponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponPhysicalUni")
{
}

Alugponphysicaluni::~Alugponphysicaluni()
{
}

Q2931::Q2931()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:q2931")
{
}

Q2931::~Q2931()
{
}

Sonetpath::Sonetpath()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetPath")
{
}

Sonetpath::~Sonetpath()
{
}

Ethernetcsmacd::Ethernetcsmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernetCsmacd")
{
}

Ethernetcsmacd::~Ethernetcsmacd()
{
}

Primaryisdn::Primaryisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:primaryISDN")
{
}

Primaryisdn::~Primaryisdn()
{
}

Mplstunnel::Mplstunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mplsTunnel")
{
}

Mplstunnel::~Mplstunnel()
{
}

Usb::Usb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:usb")
{
}

Usb::~Usb()
{
}

Cnr::Cnr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cnr")
{
}

Cnr::~Cnr()
{
}

Hssi::Hssi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hssi")
{
}

Hssi::~Hssi()
{
}

Ifvfitype::Ifvfitype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifVfiType")
{
}

Ifvfitype::~Ifvfitype()
{
}

Mfsiglink::Mfsiglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mfSigLink")
{
}

Mfsiglink::~Mfsiglink()
{
}

L3Ipxvlan::L3Ipxvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipxvlan")
{
}

L3Ipxvlan::~L3Ipxvlan()
{
}

Hdlc::Hdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdlc")
{
}

Hdlc::~Hdlc()
{
}

Cblvectastar::Cblvectastar()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cblVectaStar")
{
}

Cblvectastar::~Cblvectastar()
{
}

Capwapdot11Bss::Capwapdot11Bss()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Bss")
{
}

Capwapdot11Bss::~Capwapdot11Bss()
{
}

Otnodu::Otnodu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOdu")
{
}

Otnodu::~Otnodu()
{
}

Rpr::Rpr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rpr")
{
}

Rpr::~Rpr()
{
}

Gr303Rdt::Gr303Rdt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303RDT")
{
}

Gr303Rdt::~Gr303Rdt()
{
}

Voiceencap::Voiceencap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEncap")
{
}

Voiceencap::~Voiceencap()
{
}

Docscabledownstream::Docscabledownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableDownstream")
{
}

Docscabledownstream::~Docscabledownstream()
{
}

Isup::Isup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isup")
{
}

Isup::~Isup()
{
}

Modem::Modem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:modem")
{
}

Modem::~Modem()
{
}

Propatm::Propatm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propAtm")
{
}

Propatm::~Propatm()
{
}

Bits::Bits()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bits")
{
}

Bits::~Bits()
{
}

Eplrs::Eplrs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eplrs")
{
}

Eplrs::~Eplrs()
{
}

Frforward::Frforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frForward")
{
}

Frforward::~Frforward()
{
}

H323Gatekeeper::H323Gatekeeper()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Gatekeeper")
{
}

H323Gatekeeper::~H323Gatekeeper()
{
}

IfGsn::IfGsn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:if-gsn")
{
}

IfGsn::~IfGsn()
{
}

Qllc::Qllc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qllc")
{
}

Qllc::~Qllc()
{
}

Dvbasiout::Dvbasiout()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiOut")
{
}

Dvbasiout::~Dvbasiout()
{
}

Basicisdn::Basicisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:basicISDN")
{
}

Basicisdn::~Basicisdn()
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

Isdnu::Isdnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdnu")
{
}

Isdnu::~Isdnu()
{
}

Voicefxo::Voicefxo()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXO")
{
}

Voicefxo::~Voicefxo()
{
}

Docscableupstream::Docscableupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstream")
{
}

Docscableupstream::~Docscableupstream()
{
}

Adsl2Plus::Adsl2Plus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2plus")
{
}

Adsl2Plus::~Adsl2Plus()
{
}

Lapf::Lapf()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapf")
{
}

Lapf::~Lapf()
{
}

Miox25::Miox25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:miox25")
{
}

Miox25::~Miox25()
{
}

Atmvciendpt::Atmvciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVciEndPt")
{
}

Atmvciendpt::~Atmvciendpt()
{
}

Ieee1394::Ieee1394()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee1394")
{
}

Ieee1394::~Ieee1394()
{
}

Atm::Atm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atm")
{
}

Atm::~Atm()
{
}

X86Laps::X86Laps()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x86Laps")
{
}

X86Laps::~X86Laps()
{
}

Atmsubinterface::Atmsubinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmSubInterface")
{
}

Atmsubinterface::~Atmsubinterface()
{
}

Bgppolicyaccounting::Bgppolicyaccounting()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bgppolicyaccounting")
{
}

Bgppolicyaccounting::~Bgppolicyaccounting()
{
}

Digitalwrapperoverheadchannel::Digitalwrapperoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalWrapperOverheadChannel")
{
}

Digitalwrapperoverheadchannel::~Digitalwrapperoverheadchannel()
{
}

Wwanpp2::Wwanpp2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP2")
{
}

Wwanpp2::~Wwanpp2()
{
}

Dvbtdm::Dvbtdm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbTdm")
{
}

Dvbtdm::~Dvbtdm()
{
}

Opticaltransport::Opticaltransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalTransport")
{
}

Opticaltransport::~Opticaltransport()
{
}

X25Huntgroup::X25Huntgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25huntGroup")
{
}

X25Huntgroup::~X25Huntgroup()
{
}

Lapd::Lapd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapd")
{
}

Lapd::~Lapd()
{
}

Atmvirtual::Atmvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVirtual")
{
}

Atmvirtual::~Atmvirtual()
{
}

Smdsicip::Smdsicip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsIcip")
{
}

Smdsicip::~Smdsicip()
{
}

Framerelayinterconnect::Framerelayinterconnect()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayInterconnect")
{
}

Framerelayinterconnect::~Framerelayinterconnect()
{
}

V35::V35()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v35")
{
}

V35::~V35()
{
}

Sonetvt::Sonetvt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetVT")
{
}

Sonetvt::~Sonetvt()
{
}

Voiceoverip::Voiceoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverIp")
{
}

Voiceoverip::~Voiceoverip()
{
}

Tdlc::Tdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tdlc")
{
}

Tdlc::~Tdlc()
{
}

Hippi::Hippi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippi")
{
}

Hippi::~Hippi()
{
}

E1::E1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:e1")
{
}

E1::~E1()
{
}

Ethernet3Mbit::Ethernet3Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernet3Mbit")
{
}

Ethernet3Mbit::~Ethernet3Mbit()
{
}

Opticalchannelgroup::Opticalchannelgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannelGroup")
{
}

Opticalchannelgroup::~Opticalchannelgroup()
{
}

Ds3::Ds3()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds3")
{
}

Ds3::~Ds3()
{
}

Proppointtopointserial::Proppointtopointserial()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propPointToPointSerial")
{
}

Proppointtopointserial::~Proppointtopointserial()
{
}

V36::V36()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v36")
{
}

V36::~V36()
{
}

Docscablemcmtsdownstream::Docscablemcmtsdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMCmtsDownstream")
{
}

Docscablemcmtsdownstream::~Docscablemcmtsdownstream()
{
}

V37::V37()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v37")
{
}

V37::~V37()
{
}

Aflane8023::Aflane8023()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8023")
{
}

Aflane8023::~Aflane8023()
{
}

Framerelayservice::Framerelayservice()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayService")
{
}

Framerelayservice::~Framerelayservice()
{
}

Atmradio::Atmradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmRadio")
{
}

Atmradio::~Atmradio()
{
}

Iso88022Llc::Iso88022Llc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88022llc")
{
}

Iso88022Llc::~Iso88022Llc()
{
}

Opticalchannel::Opticalchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannel")
{
}

Opticalchannel::~Opticalchannel()
{
}

Aflane8025::Aflane8025()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8025")
{
}

Aflane8025::~Aflane8025()
{
}

Reachdsl::Reachdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:reachDSL")
{
}

Reachdsl::~Reachdsl()
{
}

A12Mppswitch::A12Mppswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:a12MppSwitch")
{
}

A12Mppswitch::~A12Mppswitch()
{
}

Siptg::Siptg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipTg")
{
}

Siptg::~Siptg()
{
}

Voiceoverframerelay::Voiceoverframerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverFrameRelay")
{
}

Voiceoverframerelay::~Voiceoverframerelay()
{
}

Arcnetplus::Arcnetplus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnetPlus")
{
}

Arcnetplus::~Arcnetplus()
{
}

Framerelay::Framerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelay")
{
}

Framerelay::~Framerelay()
{
}

Dvbrccupstream::Dvbrccupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccUpstream")
{
}

Dvbrccupstream::~Dvbrccupstream()
{
}

Dlsw::Dlsw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dlsw")
{
}

Dlsw::~Dlsw()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:other")
{
}

Other::~Other()
{
}

Ipswitch::Ipswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipSwitch")
{
}

Ipswitch::~Ipswitch()
{
}

Radsl::Radsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radsl")
{
}

Radsl::~Radsl()
{
}

Voicedid::Voicedid()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceDID")
{
}

Voicedid::~Voicedid()
{
}

Sdlc::Sdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdlc")
{
}

Sdlc::~Sdlc()
{
}

Aluelp::Aluelp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluELP")
{
}

Aluelp::~Aluelp()
{
}

Ieee80212::Ieee80212()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80212")
{
}

Ieee80212::~Ieee80212()
{
}

Actelismetaloop::Actelismetaloop()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:actelisMetaLOOP")
{
}

Actelismetaloop::~Actelismetaloop()
{
}

Mocaversion1::Mocaversion1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mocaVersion1")
{
}

Mocaversion1::~Mocaversion1()
{
}

Softwareloopback::Softwareloopback()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:softwareLoopback")
{
}

Softwareloopback::~Softwareloopback()
{
}

Iso88025Fiber::Iso88025Fiber()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Fiber")
{
}

Iso88025Fiber::~Iso88025Fiber()
{
}

Voiceemfgd::Voiceemfgd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEMFGD")
{
}

Voiceemfgd::~Voiceemfgd()
{
}

Iso88024Tokenbus::Iso88024Tokenbus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88024TokenBus")
{
}

Iso88024Tokenbus::~Iso88024Tokenbus()
{
}

Dvbasiin::Dvbasiin()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiIn")
{
}

Dvbasiin::~Dvbasiin()
{
}

Pdnetherloop1::Pdnetherloop1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop1")
{
}

Pdnetherloop1::~Pdnetherloop1()
{
}

Proteon10Mbit::Proteon10Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon10Mbit")
{
}

Proteon10Mbit::~Proteon10Mbit()
{
}

V11::V11()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v11")
{
}

V11::~V11()
{
}

Hyperchannel::Hyperchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hyperchannel")
{
}

Hyperchannel::~Hyperchannel()
{
}

G703At64K::G703At64K()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at64k")
{
}

G703At64K::~G703At64K()
{
}

Myrinet::Myrinet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:myrinet")
{
}

Myrinet::~Myrinet()
{
}

Alueponphysicaluni::Alueponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponPhysicalUni")
{
}

Alueponphysicaluni::~Alueponphysicaluni()
{
}

Pip::Pip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pip")
{
}

Pip::~Pip()
{
}

Ds1Fdl::Ds1Fdl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1FDL")
{
}

Ds1Fdl::~Ds1Fdl()
{
}

Escon::Escon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:escon")
{
}

Escon::~Escon()
{
}

Ss7Siglink::Ss7Siglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ss7SigLink")
{
}

Ss7Siglink::~Ss7Siglink()
{
}

Dcn::Dcn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dcn")
{
}

Dcn::~Dcn()
{
}

Async::Async()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:async")
{
}

Async::~Async()
{
}

Propmultiplexor::Propmultiplexor()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propMultiplexor")
{
}

Propmultiplexor::~Propmultiplexor()
{
}

Aal2::Aal2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal2")
{
}

Aal2::~Aal2()
{
}

Ddnx25::Ddnx25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ddnX25")
{
}

Ddnx25::~Ddnx25()
{
}

Tr008::Tr008()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tr008")
{
}

Tr008::~Tr008()
{
}

Ieee80216Wman::Ieee80216Wman()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80216WMAN")
{
}

Ieee80216Wman::~Ieee80216Wman()
{
}

Ciscoislvlan::Ciscoislvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ciscoISLvlan")
{
}

Ciscoislvlan::~Ciscoislvlan()
{
}

Fddi::Fddi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fddi")
{
}

Fddi::~Fddi()
{
}

Ds1::Ds1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1")
{
}

Ds1::~Ds1()
{
}

Sipsig::Sipsig()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipSig")
{
}

Sipsig::~Sipsig()
{
}

Ieee802154::Ieee802154()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee802154")
{
}

Ieee802154::~Ieee802154()
{
}

Ds0::Ds0()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0")
{
}

Ds0::~Ds0()
{
}

Pdnetherloop2::Pdnetherloop2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop2")
{
}

Pdnetherloop2::~Pdnetherloop2()
{
}

Compositelink::Compositelink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:compositeLink")
{
}

Compositelink::~Compositelink()
{
}

Propwirelessp2P::Propwirelessp2P()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propWirelessP2P")
{
}

Propwirelessp2P::~Propwirelessp2P()
{
}

Proteon80Mbit::Proteon80Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon80Mbit")
{
}

Proteon80Mbit::~Proteon80Mbit()
{
}

Fastetherfx::Fastetherfx()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEtherFX")
{
}

Fastetherfx::~Fastetherfx()
{
}

Qam::Qam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qam")
{
}

Qam::~Qam()
{
}

Aluepononu::Aluepononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponOnu")
{
}

Aluepononu::~Aluepononu()
{
}

Fibrechannel::Fibrechannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fibreChannel")
{
}

Fibrechannel::~Fibrechannel()
{
}

Slip::Slip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:slip")
{
}

Slip::~Slip()
{
}

Hdh1822::Hdh1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdh1822")
{
}

Hdh1822::~Hdh1822()
{
}

Arap::Arap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arap")
{
}

Arap::~Arap()
{
}

Iso88025Crfpint::Iso88025Crfpint()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025CRFPInt")
{
}

Iso88025Crfpint::~Iso88025Crfpint()
{
}

Voicefgdeana::Voicefgdeana()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDEANA")
{
}

Voicefgdeana::~Voicefgdeana()
{
}

Mpc::Mpc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpc")
{
}

Mpc::~Mpc()
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

Ppp::Ppp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ppp")
{
}

Ppp::~Ppp()
{
}

Isdns::Isdns()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdns")
{
}

Isdns::~Isdns()
{
}

Iso88025Tokenring::Iso88025Tokenring()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025TokenRing")
{
}

Iso88025Tokenring::~Iso88025Tokenring()
{
}

Iso88023Csmacd::Iso88023Csmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88023Csmacd")
{
}

Iso88023Csmacd::~Iso88023Csmacd()
{
}

Atmlogical::Atmlogical()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmLogical")
{
}

Atmlogical::~Atmlogical()
{
}

Fciplink::Fciplink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fcipLink")
{
}

Fciplink::~Fciplink()
{
}

Regular1822::Regular1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:regular1822")
{
}

Regular1822::~Regular1822()
{
}

Adsl::Adsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl")
{
}

Adsl::~Adsl()
{
}

Ultra::Ultra()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ultra")
{
}

Ultra::~Ultra()
{
}

Imt::Imt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:imt")
{
}

Imt::~Imt()
{
}

Para::Para()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:para")
{
}

Para::~Para()
{
}

Lapb::Lapb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapb")
{
}

Lapb::~Lapb()
{
}

Cabledownstreamrfport::Cabledownstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cableDownstreamRfPort")
{
}

Cabledownstreamrfport::~Cabledownstreamrfport()
{
}

Voiceem::Voiceem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEM")
{
}

Voiceem::~Voiceem()
{
}

Voiceoveratm::Voiceoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverAtm")
{
}

Voiceoveratm::~Voiceoveratm()
{
}

Nfas::Nfas()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nfas")
{
}

Nfas::~Nfas()
{
}

Srp::Srp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:srp")
{
}

Srp::~Srp()
{
}

Docscablemaclayer::Docscablemaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMaclayer")
{
}

Docscablemaclayer::~Docscablemaclayer()
{
}

Sonet::Sonet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonet")
{
}

Sonet::~Sonet()
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

Sdsl::Sdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdsl")
{
}

Sdsl::~Sdsl()
{
}

Framerelaympi::Framerelaympi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayMPI")
{
}

Framerelaympi::~Framerelaympi()
{
}

H323Proxy::H323Proxy()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Proxy")
{
}

H323Proxy::~H323Proxy()
{
}

Hostpad::Hostpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hostPad")
{
}

Hostpad::~Hostpad()
{
}

Mpegtransport::Mpegtransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpegTransport")
{
}

Mpegtransport::~Mpegtransport()
{
}

Pppmultilinkbundle::Pppmultilinkbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pppMultilinkBundle")
{
}

Pppmultilinkbundle::~Pppmultilinkbundle()
{
}

Propdocswirelessdownstream::Propdocswirelessdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessDownstream")
{
}

Propdocswirelessdownstream::~Propdocswirelessdownstream()
{
}

Tunnel::Tunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tunnel")
{
}

Tunnel::~Tunnel()
{
}

Shdsl::Shdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:shdsl")
{
}

Shdsl::~Shdsl()
{
}

Ipoverclaw::Ipoverclaw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverClaw")
{
}

Ipoverclaw::~Ipoverclaw()
{
}

Isdn::Isdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdn")
{
}

Isdn::~Isdn()
{
}

Voiceovercable::Voiceovercable()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverCable")
{
}

Voiceovercable::~Voiceovercable()
{
}

Virtualtg::Virtualtg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualTg")
{
}

Virtualtg::~Virtualtg()
{
}

Vdsl::Vdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl")
{
}

Vdsl::~Vdsl()
{
}

Dtm::Dtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dtm")
{
}

Dtm::~Dtm()
{
}

Propvirtual::Propvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propVirtual")
{
}

Propvirtual::~Propvirtual()
{
}

Ieee80211::Ieee80211()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80211")
{
}

Ieee80211::~Ieee80211()
{
}

Iso88025Dtr::Iso88025Dtr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Dtr")
{
}

Iso88025Dtr::~Iso88025Dtr()
{
}

Propdocswirelessupstream::Propdocswirelessupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessUpstream")
{
}

Propdocswirelessupstream::~Propdocswirelessupstream()
{
}

Frf16Mfrbundle::Frf16Mfrbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frf16MfrBundle")
{
}

Frf16Mfrbundle::~Frf16Mfrbundle()
{
}

Hdsl2::Hdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdsl2")
{
}

Hdsl2::~Hdsl2()
{
}

Ifpwtype::Ifpwtype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifPwType")
{
}

Ifpwtype::~Ifpwtype()
{
}

Telink::Telink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:teLink")
{
}

Telink::~Telink()
{
}

Sip::Sip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sip")
{
}

Sip::~Sip()
{
}

Virtualipaddress::Virtualipaddress()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualIpAddress")
{
}

Virtualipaddress::~Virtualipaddress()
{
}

Hippiinterface::Hippiinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippiInterface")
{
}

Hippiinterface::~Hippiinterface()
{
}

Smdsdxi::Smdsdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsDxi")
{
}

Smdsdxi::~Smdsdxi()
{
}

Rsrb::Rsrb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rsrb")
{
}

Rsrb::~Rsrb()
{
}

Lmp::Lmp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lmp")
{
}

Lmp::~Lmp()
{
}

Mediamailoverip::Mediamailoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mediaMailOverIp")
{
}

Mediamailoverip::~Mediamailoverip()
{
}

Bridge::Bridge()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bridge")
{
}

Bridge::~Bridge()
{
}

Ieee8023Adlag::Ieee8023Adlag()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee8023adLag")
{
}

Ieee8023Adlag::~Ieee8023Adlag()
{
}

X25Mlp::X25Mlp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25mlp")
{
}

X25Mlp::~X25Mlp()
{
}

Infiniband::Infiniband()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:infiniband")
{
}

Infiniband::~Infiniband()
{
}

Radiomac::Radiomac()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radioMAC")
{
}

Radiomac::~Radiomac()
{
}

Alueponlogicallink::Alueponlogicallink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponLogicalLink")
{
}

Alueponlogicallink::~Alueponlogicallink()
{
}

Aal5::Aal5()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal5")
{
}

Aal5::~Aal5()
{
}

Linegroup::Linegroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:linegroup")
{
}

Linegroup::~Linegroup()
{
}

Interleave::Interleave()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:interleave")
{
}

Interleave::~Interleave()
{
}

Atmfuni::Atmfuni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmFuni")
{
}

Atmfuni::~Atmfuni()
{
}

Otnotu::Otnotu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOtu")
{
}

Otnotu::~Otnotu()
{
}

Dvbrcstdma::Dvbrcstdma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsTdma")
{
}

Dvbrcstdma::~Dvbrcstdma()
{
}

Ipoveratm::Ipoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverAtm")
{
}

Ipoveratm::~Ipoveratm()
{
}

Gigabitethernet::Gigabitethernet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gigabitEthernet")
{
}

Gigabitethernet::~Gigabitethernet()
{
}

Voicefgdos::Voicefgdos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDOS")
{
}

Voicefgdos::~Voicefgdos()
{
}

Docscableupstreamchannel::Docscableupstreamchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamChannel")
{
}

Docscableupstreamchannel::~Docscableupstreamchannel()
{
}

Rs232::Rs232()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rs232")
{
}

Rs232::~Rs232()
{
}

Stacktostack::Stacktostack()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:stackToStack")
{
}

Stacktostack::~Stacktostack()
{
}

Termpad::Termpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:termPad")
{
}

Termpad::~Termpad()
{
}

Msdsl::Msdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:msdsl")
{
}

Msdsl::~Msdsl()
{
}

Propbwap2Mp::Propbwap2Mp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propBWAp2Mp")
{
}

Propbwap2Mp::~Propbwap2Mp()
{
}

Vmwarenicteam::Vmwarenicteam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareNicTeam")
{
}

Vmwarenicteam::~Vmwarenicteam()
{
}

Docscableupstreamrfport::Docscableupstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamRfPort")
{
}

Docscableupstreamrfport::~Docscableupstreamrfport()
{
}

Mpls::Mpls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpls")
{
}

Mpls::~Mpls()
{
}

Pon155::Pon155()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon155")
{
}

Pon155::~Pon155()
{
}

Atmbond::Atmbond()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmbond")
{
}

Atmbond::~Atmbond()
{
}

X25Ple::X25Ple()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25ple")
{
}

X25Ple::~X25Ple()
{
}

Propdocswirelessmaclayer::Propdocswirelessmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessMaclayer")
{
}

Propdocswirelessmaclayer::~Propdocswirelessmaclayer()
{
}

G703At2Mb::G703At2Mb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at2mb")
{
}

G703At2Mb::~G703At2Mb()
{
}

Homepna::Homepna()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:homepna")
{
}

Homepna::~Homepna()
{
}

Voicefxs::Voicefxs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXS")
{
}

Voicefxs::~Voicefxs()
{
}

Cctemul::Cctemul()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cctEmul")
{
}

Cctemul::~Cctemul()
{
}

G9982::G9982()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9982")
{
}

G9982::~G9982()
{
}

Gtp::Gtp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gtp")
{
}

Gtp::~Gtp()
{
}


}
}

