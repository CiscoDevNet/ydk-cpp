
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

Pos::Pos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pos")
{
}

Pos::~Pos()
{
}

Hiperlan2::Hiperlan2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hiperlan2")
{
}

Hiperlan2::~Hiperlan2()
{
}

G703At2Mb::G703At2Mb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at2mb")
{
}

G703At2Mb::~G703At2Mb()
{
}

Rfc877X25::Rfc877X25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc877x25")
{
}

Rfc877X25::~Rfc877X25()
{
}

Dvbasiin::Dvbasiin()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiIn")
{
}

Dvbasiin::~Dvbasiin()
{
}

Gfp::Gfp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gfp")
{
}

Gfp::~Gfp()
{
}

Sonetoverheadchannel::Sonetoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetOverheadChannel")
{
}

Sonetoverheadchannel::~Sonetoverheadchannel()
{
}

Pppmultilinkbundle::Pppmultilinkbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pppMultilinkBundle")
{
}

Pppmultilinkbundle::~Pppmultilinkbundle()
{
}

Lmp::Lmp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lmp")
{
}

Lmp::~Lmp()
{
}

Eplrs::Eplrs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eplrs")
{
}

Eplrs::~Eplrs()
{
}

Lapd::Lapd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapd")
{
}

Lapd::~Lapd()
{
}

Ds0Bundle::Ds0Bundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0Bundle")
{
}

Ds0Bundle::~Ds0Bundle()
{
}

Docscablemcmtsdownstream::Docscablemcmtsdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMCmtsDownstream")
{
}

Docscablemcmtsdownstream::~Docscablemcmtsdownstream()
{
}

Ifvfitype::Ifvfitype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifVfiType")
{
}

Ifvfitype::~Ifvfitype()
{
}

Propmultiplexor::Propmultiplexor()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propMultiplexor")
{
}

Propmultiplexor::~Propmultiplexor()
{
}

IfGsn::IfGsn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:if-gsn")
{
}

IfGsn::~IfGsn()
{
}

Macseccontrolledif::Macseccontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecControlledIF")
{
}

Macseccontrolledif::~Macseccontrolledif()
{
}

Gr303Idt::Gr303Idt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303IDT")
{
}

Gr303Idt::~Gr303Idt()
{
}

Vdsl::Vdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl")
{
}

Vdsl::~Vdsl()
{
}

Wwanpp2::Wwanpp2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP2")
{
}

Wwanpp2::~Wwanpp2()
{
}

A12Mppswitch::A12Mppswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:a12MppSwitch")
{
}

A12Mppswitch::~A12Mppswitch()
{
}

Interleave::Interleave()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:interleave")
{
}

Interleave::~Interleave()
{
}

Ds1Fdl::Ds1Fdl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1FDL")
{
}

Ds1Fdl::~Ds1Fdl()
{
}

Frf16Mfrbundle::Frf16Mfrbundle()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frf16MfrBundle")
{
}

Frf16Mfrbundle::~Frf16Mfrbundle()
{
}

Tr008::Tr008()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tr008")
{
}

Tr008::~Tr008()
{
}

Mpegtransport::Mpegtransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpegTransport")
{
}

Mpegtransport::~Mpegtransport()
{
}

Econet::Econet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:econet")
{
}

Econet::~Econet()
{
}

Ciscoislvlan::Ciscoislvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ciscoISLvlan")
{
}

Ciscoislvlan::~Ciscoislvlan()
{
}

L2Vlan::L2Vlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l2vlan")
{
}

L2Vlan::~L2Vlan()
{
}

Dvbrcsmaclayer::Dvbrcsmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsMacLayer")
{
}

Dvbrcsmaclayer::~Dvbrcsmaclayer()
{
}

Pdnetherloop1::Pdnetherloop1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop1")
{
}

Pdnetherloop1::~Pdnetherloop1()
{
}

Atmlogical::Atmlogical()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmLogical")
{
}

Atmlogical::~Atmlogical()
{
}

Aal5::Aal5()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal5")
{
}

Aal5::~Aal5()
{
}

Basicisdn::Basicisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:basicISDN")
{
}

Basicisdn::~Basicisdn()
{
}

Dvbrcstdma::Dvbrcstdma()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRcsTdma")
{
}

Dvbrcstdma::~Dvbrcstdma()
{
}

Rsrb::Rsrb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rsrb")
{
}

Rsrb::~Rsrb()
{
}

Atmbond::Atmbond()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmbond")
{
}

Atmbond::~Atmbond()
{
}

X86Laps::X86Laps()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x86Laps")
{
}

X86Laps::~X86Laps()
{
}

Framerelayinterconnect::Framerelayinterconnect()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayInterconnect")
{
}

Framerelayinterconnect::~Framerelayinterconnect()
{
}

Slip::Slip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:slip")
{
}

Slip::~Slip()
{
}

Vmwarevirtualnic::Vmwarevirtualnic()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareVirtualNic")
{
}

Vmwarevirtualnic::~Vmwarevirtualnic()
{
}

Atmvirtual::Atmvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVirtual")
{
}

Atmvirtual::~Atmvirtual()
{
}

Fciplink::Fciplink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fcipLink")
{
}

Fciplink::~Fciplink()
{
}

Isup::Isup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isup")
{
}

Isup::~Isup()
{
}

Virtualtg::Virtualtg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualTg")
{
}

Virtualtg::~Virtualtg()
{
}

Miox25::Miox25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:miox25")
{
}

Miox25::~Miox25()
{
}

Adsl2Plus::Adsl2Plus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2plus")
{
}

Adsl2Plus::~Adsl2Plus()
{
}

Iso88024Tokenbus::Iso88024Tokenbus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88024TokenBus")
{
}

Iso88024Tokenbus::~Iso88024Tokenbus()
{
}

Rfc1483::Rfc1483()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rfc1483")
{
}

Rfc1483::~Rfc1483()
{
}

Framerelayservice::Framerelayservice()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayService")
{
}

Framerelayservice::~Framerelayservice()
{
}

Propcnls::Propcnls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propCnls")
{
}

Propcnls::~Propcnls()
{
}

Dvbasiout::Dvbasiout()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbAsiOut")
{
}

Dvbasiout::~Dvbasiout()
{
}

Adsl::Adsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl")
{
}

Adsl::~Adsl()
{
}

Mvl::Mvl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mvl")
{
}

Mvl::~Mvl()
{
}

Iso88022Llc::Iso88022Llc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88022llc")
{
}

Iso88022Llc::~Iso88022Llc()
{
}

Propdocswirelessmaclayer::Propdocswirelessmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessMaclayer")
{
}

Propdocswirelessmaclayer::~Propdocswirelessmaclayer()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:other")
{
}

Other::~Other()
{
}

Ss7Siglink::Ss7Siglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ss7SigLink")
{
}

Ss7Siglink::~Ss7Siglink()
{
}

Atmsubinterface::Atmsubinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmSubInterface")
{
}

Atmsubinterface::~Atmsubinterface()
{
}

G9983::G9983()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9983")
{
}

G9983::~G9983()
{
}

Ppp::Ppp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ppp")
{
}

Ppp::~Ppp()
{
}

Sonetpath::Sonetpath()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetPath")
{
}

Sonetpath::~Sonetpath()
{
}

Myrinet::Myrinet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:myrinet")
{
}

Myrinet::~Myrinet()
{
}

Pip::Pip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pip")
{
}

Pip::~Pip()
{
}

Framerelaympi::Framerelaympi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelayMPI")
{
}

Framerelaympi::~Framerelaympi()
{
}

Atmvciendpt::Atmvciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmVciEndPt")
{
}

Atmvciendpt::~Atmvciendpt()
{
}

Hostpad::Hostpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hostPad")
{
}

Hostpad::~Hostpad()
{
}

Qllc::Qllc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qllc")
{
}

Qllc::~Qllc()
{
}

Ipforward::Ipforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipForward")
{
}

Ipforward::~Ipforward()
{
}

Qam::Qam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:qam")
{
}

Qam::~Qam()
{
}

Escon::Escon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:escon")
{
}

Escon::~Escon()
{
}

Voiceoverframerelay::Voiceoverframerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverFrameRelay")
{
}

Voiceoverframerelay::~Voiceoverframerelay()
{
}

Propatm::Propatm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propAtm")
{
}

Propatm::~Propatm()
{
}

Ds3::Ds3()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds3")
{
}

Ds3::~Ds3()
{
}

Vmwarenicteam::Vmwarenicteam()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vmwareNicTeam")
{
}

Vmwarenicteam::~Vmwarenicteam()
{
}

Hdh1822::Hdh1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdh1822")
{
}

Hdh1822::~Hdh1822()
{
}

G9981::G9981()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9981")
{
}

G9981::~G9981()
{
}

Ultra::Ultra()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ultra")
{
}

Ultra::~Ultra()
{
}

Sdsl::Sdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdsl")
{
}

Sdsl::~Sdsl()
{
}

H323Proxy::H323Proxy()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Proxy")
{
}

H323Proxy::~H323Proxy()
{
}

Stacktostack::Stacktostack()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:stackToStack")
{
}

Stacktostack::~Stacktostack()
{
}

Voicefxs::Voicefxs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXS")
{
}

Voicefxs::~Voicefxs()
{
}

Mpls::Mpls()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpls")
{
}

Mpls::~Mpls()
{
}

Smdsdxi::Smdsdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsDxi")
{
}

Smdsdxi::~Smdsdxi()
{
}

Voiceebs::Voiceebs()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEBS")
{
}

Voiceebs::~Voiceebs()
{
}

Wwanpp::Wwanpp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:wwanPP")
{
}

Wwanpp::~Wwanpp()
{
}

Cabledownstreamrfport::Cabledownstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cableDownstreamRfPort")
{
}

Cabledownstreamrfport::~Cabledownstreamrfport()
{
}

Voiceencap::Voiceencap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEncap")
{
}

Voiceencap::~Voiceencap()
{
}

Gtp::Gtp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gtp")
{
}

Gtp::~Gtp()
{
}

Tdlc::Tdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tdlc")
{
}

Tdlc::~Tdlc()
{
}

Regular1822::Regular1822()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:regular1822")
{
}

Regular1822::~Regular1822()
{
}

Dlsw::Dlsw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dlsw")
{
}

Dlsw::~Dlsw()
{
}

Ipswitch::Ipswitch()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipSwitch")
{
}

Ipswitch::~Ipswitch()
{
}

Smdsicip::Smdsicip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:smdsIcip")
{
}

Smdsicip::~Smdsicip()
{
}

Alueponphysicaluni::Alueponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponPhysicalUni")
{
}

Alueponphysicaluni::~Alueponphysicaluni()
{
}

Docscabledownstream::Docscabledownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableDownstream")
{
}

Docscabledownstream::~Docscabledownstream()
{
}

Coffee::Coffee()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:coffee")
{
}

Coffee::~Coffee()
{
}

Pon622::Pon622()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon622")
{
}

Pon622::~Pon622()
{
}

Sonetvt::Sonetvt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonetVT")
{
}

Sonetvt::~Sonetvt()
{
}

Lapb::Lapb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapb")
{
}

Lapb::~Lapb()
{
}

Q2931::Q2931()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:q2931")
{
}

Q2931::~Q2931()
{
}

Fastether::Fastether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEther")
{
}

Fastether::~Fastether()
{
}

Proppointtopointserial::Proppointtopointserial()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propPointToPointSerial")
{
}

Proppointtopointserial::~Proppointtopointserial()
{
}

Lapf::Lapf()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:lapf")
{
}

Lapf::~Lapf()
{
}

Dvbrccupstream::Dvbrccupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccUpstream")
{
}

Dvbrccupstream::~Dvbrccupstream()
{
}

Atmfuni::Atmfuni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmFuni")
{
}

Atmfuni::~Atmfuni()
{
}

Frforward::Frforward()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frForward")
{
}

Frforward::~Frforward()
{
}

Primaryisdn::Primaryisdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:primaryISDN")
{
}

Primaryisdn::~Primaryisdn()
{
}

Ipoverclaw::Ipoverclaw()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverClaw")
{
}

Ipoverclaw::~Ipoverclaw()
{
}

Atmradio::Atmradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmRadio")
{
}

Atmradio::~Atmradio()
{
}

Ieee1394::Ieee1394()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee1394")
{
}

Ieee1394::~Ieee1394()
{
}

Ces::Ces()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ces")
{
}

Ces::~Ces()
{
}

Opticaltransport::Opticaltransport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalTransport")
{
}

Opticaltransport::~Opticaltransport()
{
}

X25Mlp::X25Mlp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25mlp")
{
}

X25Mlp::~X25Mlp()
{
}

Mfsiglink::Mfsiglink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mfSigLink")
{
}

Mfsiglink::~Mfsiglink()
{
}

Hippiinterface::Hippiinterface()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippiInterface")
{
}

Hippiinterface::~Hippiinterface()
{
}

Aal2::Aal2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aal2")
{
}

Aal2::~Aal2()
{
}

V11::V11()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v11")
{
}

V11::~V11()
{
}

Atmdxi::Atmdxi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmDxi")
{
}

Atmdxi::~Atmdxi()
{
}

Aflane8025::Aflane8025()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8025")
{
}

Aflane8025::~Aflane8025()
{
}

Voiceoverip::Voiceoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverIp")
{
}

Voiceoverip::~Voiceoverip()
{
}

Alugponphysicaluni::Alugponphysicaluni()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponPhysicalUni")
{
}

Alugponphysicaluni::~Alugponphysicaluni()
{
}

Atmima::Atmima()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atmIma")
{
}

Atmima::~Atmima()
{
}

Capwapdot11Profile::Capwapdot11Profile()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Profile")
{
}

Capwapdot11Profile::~Capwapdot11Profile()
{
}

Aluelp::Aluelp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluELP")
{
}

Aluelp::~Aluelp()
{
}

Aflane8023::Aflane8023()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aflane8023")
{
}

Aflane8023::~Aflane8023()
{
}

Ipovercdlc::Ipovercdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverCdlc")
{
}

Ipovercdlc::~Ipovercdlc()
{
}

Iso88025Dtr::Iso88025Dtr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Dtr")
{
}

Iso88025Dtr::~Iso88025Dtr()
{
}

Siptg::Siptg()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipTg")
{
}

Siptg::~Siptg()
{
}

Hippi::Hippi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hippi")
{
}

Hippi::~Hippi()
{
}

Sonet::Sonet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sonet")
{
}

Sonet::~Sonet()
{
}

Modem::Modem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:modem")
{
}

Modem::~Modem()
{
}

Plc::Plc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:plc")
{
}

Plc::~Plc()
{
}

Ieee80216Wman::Ieee80216Wman()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80216WMAN")
{
}

Ieee80216Wman::~Ieee80216Wman()
{
}

Async::Async()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:async")
{
}

Async::~Async()
{
}

Opticalchannelgroup::Opticalchannelgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannelGroup")
{
}

Opticalchannelgroup::~Opticalchannelgroup()
{
}

Ethernetcsmacd::Ethernetcsmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernetCsmacd")
{
}

Ethernetcsmacd::~Ethernetcsmacd()
{
}

Msdsl::Msdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:msdsl")
{
}

Msdsl::~Msdsl()
{
}

X25Ple::X25Ple()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25ple")
{
}

X25Ple::~X25Ple()
{
}

Docscableupstreamchannel::Docscableupstreamchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamChannel")
{
}

Docscableupstreamchannel::~Docscableupstreamchannel()
{
}

Docscableupstream::Docscableupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstream")
{
}

Docscableupstream::~Docscableupstream()
{
}

Framerelay::Framerelay()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frameRelay")
{
}

Framerelay::~Framerelay()
{
}

Gr303Rdt::Gr303Rdt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gr303RDT")
{
}

Gr303Rdt::~Gr303Rdt()
{
}

Infiniband::Infiniband()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:infiniband")
{
}

Infiniband::~Infiniband()
{
}

Cctemul::Cctemul()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cctEmul")
{
}

Cctemul::~Cctemul()
{
}

Pdnetherloop2::Pdnetherloop2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pdnEtherLoop2")
{
}

Pdnetherloop2::~Pdnetherloop2()
{
}

Dcn::Dcn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dcn")
{
}

Dcn::~Dcn()
{
}

Docscablemaclayer::Docscablemaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableMaclayer")
{
}

Docscablemaclayer::~Docscablemaclayer()
{
}

Arcnetplus::Arcnetplus()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnetPlus")
{
}

Arcnetplus::~Arcnetplus()
{
}

Voiceem::Voiceem()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEM")
{
}

Voiceem::~Voiceem()
{
}

Fast::Fast()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fast")
{
}

Fast::~Fast()
{
}

Compositelink::Compositelink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:compositeLink")
{
}

Compositelink::~Compositelink()
{
}

Rpr::Rpr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rpr")
{
}

Rpr::~Rpr()
{
}

Atm::Atm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:atm")
{
}

Atm::~Atm()
{
}

Transphdlc::Transphdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:transpHdlc")
{
}

Transphdlc::~Transphdlc()
{
}

Voiceoveratm::Voiceoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverAtm")
{
}

Voiceoveratm::~Voiceoveratm()
{
}

G9982::G9982()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g9982")
{
}

G9982::~G9982()
{
}

Ieee80211::Ieee80211()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80211")
{
}

Ieee80211::~Ieee80211()
{
}

Capwapwtpvirtualradio::Capwapwtpvirtualradio()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapWtpVirtualRadio")
{
}

Capwapwtpvirtualradio::~Capwapwtpvirtualradio()
{
}

Otnodu::Otnodu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOdu")
{
}

Otnodu::~Otnodu()
{
}

Sixtofour::Sixtofour()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sixToFour")
{
}

Sixtofour::~Sixtofour()
{
}

Docscableupstreamrfport::Docscableupstreamrfport()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:docsCableUpstreamRfPort")
{
}

Docscableupstreamrfport::~Docscableupstreamrfport()
{
}

Mplstunnel::Mplstunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mplsTunnel")
{
}

Mplstunnel::~Mplstunnel()
{
}

Bridge::Bridge()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bridge")
{
}

Bridge::~Bridge()
{
}

Ds0::Ds0()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds0")
{
}

Ds0::~Ds0()
{
}

Proteon80Mbit::Proteon80Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon80Mbit")
{
}

Proteon80Mbit::~Proteon80Mbit()
{
}

Fibrechannel::Fibrechannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fibreChannel")
{
}

Fibrechannel::~Fibrechannel()
{
}

V35::V35()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v35")
{
}

V35::~V35()
{
}

Propvirtual::Propvirtual()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propVirtual")
{
}

Propvirtual::~Propvirtual()
{
}

Shdsl::Shdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:shdsl")
{
}

Shdsl::~Shdsl()
{
}

E1::E1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:e1")
{
}

E1::~E1()
{
}

Bsc::Bsc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bsc")
{
}

Bsc::~Bsc()
{
}

Isdnu::Isdnu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdnu")
{
}

Isdnu::~Isdnu()
{
}

Cnr::Cnr()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cnr")
{
}

Cnr::~Cnr()
{
}

Srp::Srp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:srp")
{
}

Srp::~Srp()
{
}

Digitalwrapperoverheadchannel::Digitalwrapperoverheadchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalWrapperOverheadChannel")
{
}

Digitalwrapperoverheadchannel::~Digitalwrapperoverheadchannel()
{
}

Starlan::Starlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:starLan")
{
}

Starlan::~Starlan()
{
}

Iso88023Csmacd::Iso88023Csmacd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88023Csmacd")
{
}

Iso88023Csmacd::~Iso88023Csmacd()
{
}

Virtualipaddress::Virtualipaddress()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:virtualIpAddress")
{
}

Virtualipaddress::~Virtualipaddress()
{
}

Nsip::Nsip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nsip")
{
}

Nsip::~Nsip()
{
}

Ethernet3Mbit::Ethernet3Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ethernet3Mbit")
{
}

Ethernet3Mbit::~Ethernet3Mbit()
{
}

Ifpwtype::Ifpwtype()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ifPwType")
{
}

Ifpwtype::~Ifpwtype()
{
}

Localtalk::Localtalk()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:localTalk")
{
}

Localtalk::~Localtalk()
{
}

Otnotu::Otnotu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:otnOtu")
{
}

Otnotu::~Otnotu()
{
}

Iso88025Fiber::Iso88025Fiber()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025Fiber")
{
}

Iso88025Fiber::~Iso88025Fiber()
{
}

Voicefxo::Voicefxo()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFXO")
{
}

Voicefxo::~Voicefxo()
{
}

Reachdsl::Reachdsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:reachDSL")
{
}

Reachdsl::~Reachdsl()
{
}

Capwapdot11Bss::Capwapdot11Bss()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:capwapDot11Bss")
{
}

Capwapdot11Bss::~Capwapdot11Bss()
{
}

Propwirelessp2P::Propwirelessp2P()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propWirelessP2P")
{
}

Propwirelessp2P::~Propwirelessp2P()
{
}

Iso88025Crfpint::Iso88025Crfpint()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025CRFPInt")
{
}

Iso88025Crfpint::~Iso88025Crfpint()
{
}

Ddnx25::Ddnx25()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ddnX25")
{
}

Ddnx25::~Ddnx25()
{
}

Ieee80212::Ieee80212()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee80212")
{
}

Ieee80212::~Ieee80212()
{
}

Dvbrccmaclayer::Dvbrccmaclayer()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccMacLayer")
{
}

Dvbrccmaclayer::~Dvbrccmaclayer()
{
}

Linegroup::Linegroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:linegroup")
{
}

Linegroup::~Linegroup()
{
}

Aluepononu::Aluepononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponOnu")
{
}

Aluepononu::~Aluepononu()
{
}

Sip::Sip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sip")
{
}

Sip::~Sip()
{
}

Voicedid::Voicedid()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceDID")
{
}

Voicedid::~Voicedid()
{
}

Alugpononu::Alugpononu()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluGponOnu")
{
}

Alugpononu::~Alugpononu()
{
}

Cblvectastar::Cblvectastar()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:cblVectaStar")
{
}

Cblvectastar::~Cblvectastar()
{
}

Ipoveratm::Ipoveratm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ipOverAtm")
{
}

Ipoveratm::~Ipoveratm()
{
}

Aviciopticalether::Aviciopticalether()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aviciOpticalEther")
{
}

Aviciopticalether::~Aviciopticalether()
{
}

L3Ipvlan::L3Ipvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipvlan")
{
}

L3Ipvlan::~L3Ipvlan()
{
}

Termpad::Termpad()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:termPad")
{
}

Termpad::~Termpad()
{
}

X213::X213()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x213")
{
}

X213::~X213()
{
}

Adsl2::Adsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:adsl2")
{
}

Adsl2::~Adsl2()
{
}

Tunnel::Tunnel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:tunnel")
{
}

Tunnel::~Tunnel()
{
}

Arap::Arap()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arap")
{
}

Arap::~Arap()
{
}

Ds1::Ds1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ds1")
{
}

Ds1::~Ds1()
{
}

Proteon10Mbit::Proteon10Mbit()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:proteon10Mbit")
{
}

Proteon10Mbit::~Proteon10Mbit()
{
}

Alueponlogicallink::Alueponlogicallink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEponLogicalLink")
{
}

Alueponlogicallink::~Alueponlogicallink()
{
}

Voicefgdos::Voicefgdos()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDOS")
{
}

Voicefgdos::~Voicefgdos()
{
}

V36::V36()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v36")
{
}

V36::~V36()
{
}

Ieee8023Adlag::Ieee8023Adlag()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee8023adLag")
{
}

Ieee8023Adlag::~Ieee8023Adlag()
{
}

Gigabitethernet::Gigabitethernet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gigabitEthernet")
{
}

Gigabitethernet::~Gigabitethernet()
{
}

Mediamailoverip::Mediamailoverip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mediaMailOverIp")
{
}

Mediamailoverip::~Mediamailoverip()
{
}

Voicefgdeana::Voicefgdeana()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceFGDEANA")
{
}

Voicefgdeana::~Voicefgdeana()
{
}

Nfas::Nfas()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:nfas")
{
}

Nfas::~Nfas()
{
}

X25Huntgroup::X25Huntgroup()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:x25huntGroup")
{
}

X25Huntgroup::~X25Huntgroup()
{
}

Idsl::Idsl()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:idsl")
{
}

Idsl::~Idsl()
{
}

Homepna::Homepna()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:homepna")
{
}

Homepna::~Homepna()
{
}

Sipsig::Sipsig()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sipSig")
{
}

Sipsig::~Sipsig()
{
}

Pon155::Pon155()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:pon155")
{
}

Pon155::~Pon155()
{
}

Para::Para()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:para")
{
}

Para::~Para()
{
}

Hdlc::Hdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdlc")
{
}

Hdlc::~Hdlc()
{
}

Propbwap2Mp::Propbwap2Mp()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propBWAp2Mp")
{
}

Propbwap2Mp::~Propbwap2Mp()
{
}

Fastetherfx::Fastetherfx()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fastEtherFX")
{
}

Fastetherfx::~Fastetherfx()
{
}

Actelismetaloop::Actelismetaloop()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:actelisMetaLOOP")
{
}

Actelismetaloop::~Actelismetaloop()
{
}

Dvbrccdownstream::Dvbrccdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbRccDownstream")
{
}

Dvbrccdownstream::~Dvbrccdownstream()
{
}

Bits::Bits()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bits")
{
}

Bits::~Bits()
{
}

Voiceovercable::Voiceovercable()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceOverCable")
{
}

Voiceovercable::~Voiceovercable()
{
}

Channel::Channel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:channel")
{
}

Channel::~Channel()
{
}

V37::V37()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:v37")
{
}

V37::~V37()
{
}

Dvbtdm::Dvbtdm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dvbTdm")
{
}

Dvbtdm::~Dvbtdm()
{
}

Bgppolicyaccounting::Bgppolicyaccounting()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:bgppolicyaccounting")
{
}

Bgppolicyaccounting::~Bgppolicyaccounting()
{
}

Mpc::Mpc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mpc")
{
}

Mpc::~Mpc()
{
}

Dtm::Dtm()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:dtm")
{
}

Dtm::~Dtm()
{
}

Eon::Eon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:eon")
{
}

Eon::~Eon()
{
}

Radiomac::Radiomac()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:radioMAC")
{
}

Radiomac::~Radiomac()
{
}

Ilan::Ilan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ilan")
{
}

Ilan::~Ilan()
{
}

Frdlciendpt::Frdlciendpt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:frDlciEndPt")
{
}

Frdlciendpt::~Frdlciendpt()
{
}

G703At64K::G703At64K()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:g703at64k")
{
}

G703At64K::~G703At64K()
{
}

Propdocswirelessdownstream::Propdocswirelessdownstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessDownstream")
{
}

Propdocswirelessdownstream::~Propdocswirelessdownstream()
{
}

Ieee802154::Ieee802154()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ieee802154")
{
}

Ieee802154::~Ieee802154()
{
}

Hssi::Hssi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hssi")
{
}

Hssi::~Hssi()
{
}

Aluepon::Aluepon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:aluEpon")
{
}

Aluepon::~Aluepon()
{
}

Sdlc::Sdlc()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:sdlc")
{
}

Sdlc::~Sdlc()
{
}

Isdn::Isdn()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:isdn")
{
}

Isdn::~Isdn()
{
}

Digitalpowerline::Digitalpowerline()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:digitalPowerline")
{
}

Digitalpowerline::~Digitalpowerline()
{
}

Vdsl2::Vdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:vdsl2")
{
}

Vdsl2::~Vdsl2()
{
}

Arcnet::Arcnet()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:arcnet")
{
}

Arcnet::~Arcnet()
{
}

Rs232::Rs232()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:rs232")
{
}

Rs232::~Rs232()
{
}

Usb::Usb()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:usb")
{
}

Usb::~Usb()
{
}

Macsecuncontrolledif::Macsecuncontrolledif()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:macSecUncontrolledIF")
{
}

Macsecuncontrolledif::~Macsecuncontrolledif()
{
}

Iso88025Tokenring::Iso88025Tokenring()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88025TokenRing")
{
}

Iso88025Tokenring::~Iso88025Tokenring()
{
}

Opticalchannel::Opticalchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:opticalChannel")
{
}

Opticalchannel::~Opticalchannel()
{
}

Fddi::Fddi()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:fddi")
{
}

Fddi::~Fddi()
{
}

Gpon::Gpon()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:gpon")
{
}

Gpon::~Gpon()
{
}

Softwareloopback::Softwareloopback()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:softwareLoopback")
{
}

Softwareloopback::~Softwareloopback()
{
}

Imt::Imt()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:imt")
{
}

Imt::~Imt()
{
}

Ibm370Parchan::Ibm370Parchan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ibm370parChan")
{
}

Ibm370Parchan::~Ibm370Parchan()
{
}

L3Ipxvlan::L3Ipxvlan()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:l3ipxvlan")
{
}

L3Ipxvlan::~L3Ipxvlan()
{
}

Iso88026Man::Iso88026Man()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:iso88026Man")
{
}

Iso88026Man::~Iso88026Man()
{
}

Ip::Ip()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:ip")
{
}

Ip::~Ip()
{
}

Propdocswirelessupstream::Propdocswirelessupstream()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:propDocsWirelessUpstream")
{
}

Propdocswirelessupstream::~Propdocswirelessupstream()
{
}

Telink::Telink()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:teLink")
{
}

Telink::~Telink()
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

Hyperchannel::Hyperchannel()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hyperchannel")
{
}

Hyperchannel::~Hyperchannel()
{
}

Hdsl2::Hdsl2()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:hdsl2")
{
}

Hdsl2::~Hdsl2()
{
}

Mocaversion1::Mocaversion1()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:mocaVersion1")
{
}

Mocaversion1::~Mocaversion1()
{
}

H323Gatekeeper::H323Gatekeeper()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:h323Gatekeeper")
{
}

H323Gatekeeper::~H323Gatekeeper()
{
}

Voiceemfgd::Voiceemfgd()
     : Identity("urn:ietf:params:xml:ns:yang:iana-if-type", "iana-if-type", "iana-if-type:voiceEMFGD")
{
}

Voiceemfgd::~Voiceemfgd()
{
}


}
}

