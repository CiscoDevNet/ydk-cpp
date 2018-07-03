#ifndef _IANA_IF_TYPE_
#define _IANA_IF_TYPE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_interfaces.hpp"

namespace ietf {
namespace iana_if_type {

class IanaInterfaceType : public ietf::ietf_interfaces::InterfaceType, virtual ydk::Identity
{
    public:
        IanaInterfaceType();
        ~IanaInterfaceType();


}; // IanaInterfaceType

class VoiceFXO : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFXO();
        ~VoiceFXO();


}; // VoiceFXO

class AtmVciEndPt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmVciEndPt();
        ~AtmVciEndPt();


}; // AtmVciEndPt

class PropBWAp2Mp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropBWAp2Mp();
        ~PropBWAp2Mp();


}; // PropBWAp2Mp

class PropDocsWirelessDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessDownstream();
        ~PropDocsWirelessDownstream();


}; // PropDocsWirelessDownstream

class V11 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V11();
        ~V11();


}; // V11

class SoftwareLoopback : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SoftwareLoopback();
        ~SoftwareLoopback();


}; // SoftwareLoopback

class Hdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdlc();
        ~Hdlc();


}; // Hdlc

class VoiceFGDOS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFGDOS();
        ~VoiceFGDOS();


}; // VoiceFGDOS

class FastEtherFX : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FastEtherFX();
        ~FastEtherFX();


}; // FastEtherFX

class DvbTdm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbTdm();
        ~DvbTdm();


}; // DvbTdm

class Nfas : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nfas();
        ~Nfas();


}; // Nfas

class IfPwType : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfPwType();
        ~IfPwType();


}; // IfPwType

class L2vlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L2vlan();
        ~L2vlan();


}; // L2vlan

class Adsl2plus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2plus();
        ~Adsl2plus();


}; // Adsl2plus

class Ieee802154 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class VoiceFXS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFXS();
        ~VoiceFXS();


}; // VoiceFXS

class DvbRcsMacLayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRcsMacLayer();
        ~DvbRcsMacLayer();


}; // DvbRcsMacLayer

class Idsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class Infiniband : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class DdnX25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DdnX25();
        ~DdnX25();


}; // DdnX25

class WwanPP2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        WwanPP2();
        ~WwanPP2();


}; // WwanPP2

class DocsCableUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstream();
        ~DocsCableUpstream();


}; // DocsCableUpstream

class Ethernet3Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernet3Mbit();
        ~Ethernet3Mbit();


}; // Ethernet3Mbit

class DigitalPowerline : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DigitalPowerline();
        ~DigitalPowerline();


}; // DigitalPowerline

class H323Proxy : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Proxy();
        ~H323Proxy();


}; // H323Proxy

class Gtp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

class IpOverAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverAtm();
        ~IpOverAtm();


}; // IpOverAtm

class AluEpon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEpon();
        ~AluEpon();


}; // AluEpon

class Imt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Imt();
        ~Imt();


}; // Imt

class IpSwitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpSwitch();
        ~IpSwitch();


}; // IpSwitch

class Msdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Msdsl();
        ~Msdsl();


}; // Msdsl

class DvbRccMacLayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccMacLayer();
        ~DvbRccMacLayer();


}; // DvbRccMacLayer

class SmdsDxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SmdsDxi();
        ~SmdsDxi();


}; // SmdsDxi

class VoiceOverAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverAtm();
        ~VoiceOverAtm();


}; // VoiceOverAtm

class Arap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arap();
        ~Arap();


}; // Arap

class FastEther : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FastEther();
        ~FastEther();


}; // FastEther

class Mpc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class Linegroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Linegroup();
        ~Linegroup();


}; // Linegroup

class Hippi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippi();
        ~Hippi();


}; // Hippi

class Rpr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rpr();
        ~Rpr();


}; // Rpr

class Ds1FDL : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1FDL();
        ~Ds1FDL();


}; // Ds1FDL

class SonetVT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetVT();
        ~SonetVT();


}; // SonetVT

class VoiceEncap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEncap();
        ~VoiceEncap();


}; // VoiceEncap

class Ss7SigLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7SigLink();
        ~Ss7SigLink();


}; // Ss7SigLink

class Arcnet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnet();
        ~Arcnet();


}; // Arcnet

class ActelisMetaLOOP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ActelisMetaLOOP();
        ~ActelisMetaLOOP();


}; // ActelisMetaLOOP

class Qllc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class Rfc877x25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877x25();
        ~Rfc877x25();


}; // Rfc877x25

class MpegTransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MpegTransport();
        ~MpegTransport();


}; // MpegTransport

class X25mlp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25mlp();
        ~X25mlp();


}; // X25mlp

class VirtualTg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VirtualTg();
        ~VirtualTg();


}; // VirtualTg

class HostPad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        HostPad();
        ~HostPad();


}; // HostPad

class StarLan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        StarLan();
        ~StarLan();


}; // StarLan

class Iso88025Dtr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Dtr();
        ~Iso88025Dtr();


}; // Iso88025Dtr

class Ibm370parChan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370parChan();
        ~Ibm370parChan();


}; // Ibm370parChan

class Adsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class OtnOtu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OtnOtu();
        ~OtnOtu();


}; // OtnOtu

class PropWirelessP2P : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropWirelessP2P();
        ~PropWirelessP2P();


}; // PropWirelessP2P

class Interleave : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Interleave();
        ~Interleave();


}; // Interleave

class Isup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

class Regular1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Regular1822();
        ~Regular1822();


}; // Regular1822

class Gr303RDT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303RDT();
        ~Gr303RDT();


}; // Gr303RDT

class PropDocsWirelessMaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessMaclayer();
        ~PropDocsWirelessMaclayer();


}; // PropDocsWirelessMaclayer

class Async : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Async();
        ~Async();


}; // Async

class RadioMAC : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        RadioMAC();
        ~RadioMAC();


}; // RadioMAC

class OpticalChannelGroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalChannelGroup();
        ~OpticalChannelGroup();


}; // OpticalChannelGroup

class SixToFour : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SixToFour();
        ~SixToFour();


}; // SixToFour

class PropDocsWirelessUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessUpstream();
        ~PropDocsWirelessUpstream();


}; // PropDocsWirelessUpstream

class Q2931 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class Fddi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fddi();
        ~Fddi();


}; // Fddi

class PropCnls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropCnls();
        ~PropCnls();


}; // PropCnls

class Aal2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class DvbAsiOut : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbAsiOut();
        ~DvbAsiOut();


}; // DvbAsiOut

class AluELP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluELP();
        ~AluELP();


}; // AluELP

class CiscoISLvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CiscoISLvlan();
        ~CiscoISLvlan();


}; // CiscoISLvlan

class DocsCableUpstreamRfPort : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstreamRfPort();
        ~DocsCableUpstreamRfPort();


}; // DocsCableUpstreamRfPort

class Aal5 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal5();
        ~Aal5();


}; // Aal5

class FrDlciEndPt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrDlciEndPt();
        ~FrDlciEndPt();


}; // FrDlciEndPt

class HippiInterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        HippiInterface();
        ~HippiInterface();


}; // HippiInterface

class L3ipvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3ipvlan();
        ~L3ipvlan();


}; // L3ipvlan

class Miox25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Miox25();
        ~Miox25();


}; // Miox25

class Hssi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hssi();
        ~Hssi();


}; // Hssi

class AtmVirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmVirtual();
        ~AtmVirtual();


}; // AtmVirtual

class AluGponOnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluGponOnu();
        ~AluGponOnu();


}; // AluGponOnu

class Rfc1483 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc1483();
        ~Rfc1483();


}; // Rfc1483

class Cnr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cnr();
        ~Cnr();


}; // Cnr

class SipSig : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SipSig();
        ~SipSig();


}; // SipSig

class Myrinet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class Dlsw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dlsw();
        ~Dlsw();


}; // Dlsw

class GigabitEthernet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        GigabitEthernet();
        ~GigabitEthernet();


}; // GigabitEthernet

class X25ple : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25ple();
        ~X25ple();


}; // X25ple

class Lmp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lmp();
        ~Lmp();


}; // Lmp

class OpticalTransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalTransport();
        ~OpticalTransport();


}; // OpticalTransport

class Sdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdlc();
        ~Sdlc();


}; // Sdlc

class VoiceEM : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEM();
        ~VoiceEM();


}; // VoiceEM

class X86Laps : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps

class G9982 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9982();
        ~G9982();


}; // G9982

class Iso88022llc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022llc();
        ~Iso88022llc();


}; // Iso88022llc

class DvbAsiIn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbAsiIn();
        ~DvbAsiIn();


}; // DvbAsiIn

class Bgppolicyaccounting : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class AluEponOnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponOnu();
        ~AluEponOnu();


}; // AluEponOnu

class MfSigLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MfSigLink();
        ~MfSigLink();


}; // MfSigLink

class Dcn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dcn();
        ~Dcn();


}; // Dcn

class AtmDxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmDxi();
        ~AtmDxi();


}; // AtmDxi

class VoiceOverFrameRelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverFrameRelay();
        ~VoiceOverFrameRelay();


}; // VoiceOverFrameRelay

class Gfp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gfp();
        ~Gfp();


}; // Gfp

class SonetOverheadChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetOverheadChannel();
        ~SonetOverheadChannel();


}; // SonetOverheadChannel

class VmwareVirtualNic : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VmwareVirtualNic();
        ~VmwareVirtualNic();


}; // VmwareVirtualNic

class FcipLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FcipLink();
        ~FcipLink();


}; // FcipLink

class IpOverClaw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverClaw();
        ~IpOverClaw();


}; // IpOverClaw

class Coffee : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Coffee();
        ~Coffee();


}; // Coffee

class Radsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radsl();
        ~Radsl();


}; // Radsl

class Vdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl2();
        ~Vdsl2();


}; // Vdsl2

class Rs232 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rs232();
        ~Rs232();


}; // Rs232

class E1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        E1();
        ~E1();


}; // E1

class ReachDSL : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ReachDSL();
        ~ReachDSL();


}; // ReachDSL

class VoiceOverCable : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverCable();
        ~VoiceOverCable();


}; // VoiceOverCable

class Tr008 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tr008();
        ~Tr008();


}; // Tr008

class VoiceOverIp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverIp();
        ~VoiceOverIp();


}; // VoiceOverIp

class Atm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atm();
        ~Atm();


}; // Atm

class Ds3 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds3();
        ~Ds3();


}; // Ds3

class Ds0 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0();
        ~Ds0();


}; // Ds0

class Ds1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1();
        ~Ds1();


}; // Ds1

class Srp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class DocsCableDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableDownstream();
        ~DocsCableDownstream();


}; // DocsCableDownstream

class DvbRcsTdma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRcsTdma();
        ~DvbRcsTdma();


}; // DvbRcsTdma

class G9983 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9983();
        ~G9983();


}; // G9983

class Plc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Plc();
        ~Plc();


}; // Plc

class FrameRelayMPI : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayMPI();
        ~FrameRelayMPI();


}; // FrameRelayMPI

class Mvl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mvl();
        ~Mvl();


}; // Mvl

class PropMultiplexor : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropMultiplexor();
        ~PropMultiplexor();


}; // PropMultiplexor

class VoiceDID : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceDID();
        ~VoiceDID();


}; // VoiceDID

class CompositeLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CompositeLink();
        ~CompositeLink();


}; // CompositeLink

class Proteon10Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon10Mbit();
        ~Proteon10Mbit();


}; // Proteon10Mbit

class Atmbond : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

class Frf16MfrBundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16MfrBundle();
        ~Frf16MfrBundle();


}; // Frf16MfrBundle

class CctEmul : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CctEmul();
        ~CctEmul();


}; // CctEmul

class MplsTunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MplsTunnel();
        ~MplsTunnel();


}; // MplsTunnel

class Gpon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gpon();
        ~Gpon();


}; // Gpon

class Vdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl();
        ~Vdsl();


}; // Vdsl

class Pos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class Ieee8023adLag : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023adLag();
        ~Ieee8023adLag();


}; // Ieee8023adLag

class DocsCableMaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableMaclayer();
        ~DocsCableMaclayer();


}; // DocsCableMaclayer

class DocsCableMCmtsDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableMCmtsDownstream();
        ~DocsCableMCmtsDownstream();


}; // DocsCableMCmtsDownstream

class Ppp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class FrameRelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelay();
        ~FrameRelay();


}; // FrameRelay

class Eplrs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eplrs();
        ~Eplrs();


}; // Eplrs

class VmwareNicTeam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VmwareNicTeam();
        ~VmwareNicTeam();


}; // VmwareNicTeam

class CableDownstreamRfPort : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CableDownstreamRfPort();
        ~CableDownstreamRfPort();


}; // CableDownstreamRfPort

class MacSecUncontrolledIF : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MacSecUncontrolledIF();
        ~MacSecUncontrolledIF();


}; // MacSecUncontrolledIF

class Iso88023Csmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88023Csmacd();
        ~Iso88023Csmacd();


}; // Iso88023Csmacd

class Usb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Usb();
        ~Usb();


}; // Usb

class AtmFuni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmFuni();
        ~AtmFuni();


}; // AtmFuni

class TeLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TeLink();
        ~TeLink();


}; // TeLink

class Pon622 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon622();
        ~Pon622();


}; // Pon622

class Econet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Econet();
        ~Econet();


}; // Econet

class Tdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tdlc();
        ~Tdlc();


}; // Tdlc

class Ds0Bundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0Bundle();
        ~Ds0Bundle();


}; // Ds0Bundle

class Fast : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fast();
        ~Fast();


}; // Fast

class Ieee1394 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee1394();
        ~Ieee1394();


}; // Ieee1394

class CblVectaStar : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CblVectaStar();
        ~CblVectaStar();


}; // CblVectaStar

class Rsrb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class FrameRelayInterconnect : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayInterconnect();
        ~FrameRelayInterconnect();


}; // FrameRelayInterconnect

class Isdns : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdns();
        ~Isdns();


}; // Isdns

class PppMultilinkBundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PppMultilinkBundle();
        ~PppMultilinkBundle();


}; // PppMultilinkBundle

class Aflane8025 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8025();
        ~Aflane8025();


}; // Aflane8025

class Lapb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapb();
        ~Lapb();


}; // Lapb

class Aflane8023 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8023();
        ~Aflane8023();


}; // Aflane8023

class Lapd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapd();
        ~Lapd();


}; // Lapd

class Isdnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdnu();
        ~Isdnu();


}; // Isdnu

class Lapf : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapf();
        ~Lapf();


}; // Lapf

class CapwapWtpVirtualRadio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapWtpVirtualRadio();
        ~CapwapWtpVirtualRadio();


}; // CapwapWtpVirtualRadio

class IfVfiType : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfVfiType();
        ~IfVfiType();


}; // IfVfiType

class X25huntGroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25huntGroup();
        ~X25huntGroup();


}; // X25huntGroup

class Para : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Para();
        ~Para();


}; // Para

class MacSecControlledIF : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MacSecControlledIF();
        ~MacSecControlledIF();


}; // MacSecControlledIF

class Iso88024TokenBus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88024TokenBus();
        ~Iso88024TokenBus();


}; // Iso88024TokenBus

class LocalTalk : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        LocalTalk();
        ~LocalTalk();


}; // LocalTalk

class Hyperchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hyperchannel();
        ~Hyperchannel();


}; // Hyperchannel

class MediaMailOverIp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MediaMailOverIp();
        ~MediaMailOverIp();


}; // MediaMailOverIp

class IfGsn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfGsn();
        ~IfGsn();


}; // IfGsn

class CapwapDot11Profile : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapDot11Profile();
        ~CapwapDot11Profile();


}; // CapwapDot11Profile

class L3ipxvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3ipxvlan();
        ~L3ipxvlan();


}; // L3ipxvlan

class AtmSubInterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmSubInterface();
        ~AtmSubInterface();


}; // AtmSubInterface

class PrimaryISDN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PrimaryISDN();
        ~PrimaryISDN();


}; // PrimaryISDN

class Proteon80Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon80Mbit();
        ~Proteon80Mbit();


}; // Proteon80Mbit

class Iso88026Man : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88026Man();
        ~Iso88026Man();


}; // Iso88026Man

class DigitalWrapperOverheadChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DigitalWrapperOverheadChannel();
        ~DigitalWrapperOverheadChannel();


}; // DigitalWrapperOverheadChannel

class DocsCableUpstreamChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstreamChannel();
        ~DocsCableUpstreamChannel();


}; // DocsCableUpstreamChannel

class OpticalChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalChannel();
        ~OpticalChannel();


}; // OpticalChannel

class EthernetCsmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        EthernetCsmacd();
        ~EthernetCsmacd();


}; // EthernetCsmacd

class Bits : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class Tunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tunnel();
        ~Tunnel();


}; // Tunnel

class Hdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdsl2();
        ~Hdsl2();


}; // Hdsl2

class FrameRelayService : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayService();
        ~FrameRelayService();


}; // FrameRelayService

class Mpls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpls();
        ~Mpls();


}; // Mpls

class Ieee80211 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80211();
        ~Ieee80211();


}; // Ieee80211

class Ieee80212 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class MocaVersion1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MocaVersion1();
        ~MocaVersion1();


}; // MocaVersion1

class Sonet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonet();
        ~Sonet();


}; // Sonet

class Escon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Escon();
        ~Escon();


}; // Escon

class AluEponLogicalLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponLogicalLink();
        ~AluEponLogicalLink();


}; // AluEponLogicalLink

class G703at2mb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703at2mb();
        ~G703at2mb();


}; // G703at2mb

class Ultra : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ultra();
        ~Ultra();


}; // Ultra

class DvbRccDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccDownstream();
        ~DvbRccDownstream();


}; // DvbRccDownstream

class SipTg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SipTg();
        ~SipTg();


}; // SipTg

class SmdsIcip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SmdsIcip();
        ~SmdsIcip();


}; // SmdsIcip

class Bridge : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bridge();
        ~Bridge();


}; // Bridge

class AtmLogical : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmLogical();
        ~AtmLogical();


}; // AtmLogical

class PropPointToPointSerial : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropPointToPointSerial();
        ~PropPointToPointSerial();


}; // PropPointToPointSerial

class V35 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V35();
        ~V35();


}; // V35

class V36 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V36();
        ~V36();


}; // V36

class V37 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V37();
        ~V37();


}; // V37

class Ip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ip();
        ~Ip();


}; // Ip

class Gr303IDT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303IDT();
        ~Gr303IDT();


}; // Gr303IDT

class BasicISDN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        BasicISDN();
        ~BasicISDN();


}; // BasicISDN

class G703at64k : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703at64k();
        ~G703at64k();


}; // G703at64k

class ArcnetPlus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ArcnetPlus();
        ~ArcnetPlus();


}; // ArcnetPlus

class Pip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pip();
        ~Pip();


}; // Pip

class Dtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dtm();
        ~Dtm();


}; // Dtm

class Slip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Slip();
        ~Slip();


}; // Slip

class Hiperlan2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class Adsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl();
        ~Adsl();


}; // Adsl

class Ieee80216WMAN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216WMAN();
        ~Ieee80216WMAN();


}; // Ieee80216WMAN

class AtmIma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmIma();
        ~AtmIma();


}; // AtmIma

class Isdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdn();
        ~Isdn();


}; // Isdn

class CapwapDot11Bss : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapDot11Bss();
        ~CapwapDot11Bss();


}; // CapwapDot11Bss

class Sip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sip();
        ~Sip();


}; // Sip

class PdnEtherLoop2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PdnEtherLoop2();
        ~PdnEtherLoop2();


}; // PdnEtherLoop2

class VoiceEBS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEBS();
        ~VoiceEBS();


}; // VoiceEBS

class IpForward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpForward();
        ~IpForward();


}; // IpForward

class Iso88025CRFPInt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025CRFPInt();
        ~Iso88025CRFPInt();


}; // Iso88025CRFPInt

class PropVirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropVirtual();
        ~PropVirtual();


}; // PropVirtual

class WwanPP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        WwanPP();
        ~WwanPP();


}; // WwanPP

class Other : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class Pon155 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon155();
        ~Pon155();


}; // Pon155

class Qam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qam();
        ~Qam();


}; // Qam

class OtnOdu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OtnOdu();
        ~OtnOdu();


}; // OtnOdu

class Iso88025Fiber : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Fiber();
        ~Iso88025Fiber();


}; // Iso88025Fiber

class Channel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Channel();
        ~Channel();


}; // Channel

class VoiceEMFGD : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEMFGD();
        ~VoiceEMFGD();


}; // VoiceEMFGD

class AluGponPhysicalUni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluGponPhysicalUni();
        ~AluGponPhysicalUni();


}; // AluGponPhysicalUni

class A12MppSwitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12MppSwitch();
        ~A12MppSwitch();


}; // A12MppSwitch

class Ilan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ilan();
        ~Ilan();


}; // Ilan

class PdnEtherLoop1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PdnEtherLoop1();
        ~PdnEtherLoop1();


}; // PdnEtherLoop1

class X213 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X213();
        ~X213();


}; // X213

class SonetPath : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetPath();
        ~SonetPath();


}; // SonetPath

class VoiceFGDEANA : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFGDEANA();
        ~VoiceFGDEANA();


}; // VoiceFGDEANA

class Iso88025TokenRing : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025TokenRing();
        ~Iso88025TokenRing();


}; // Iso88025TokenRing

class PropAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropAtm();
        ~PropAtm();


}; // PropAtm

class AluEponPhysicalUni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponPhysicalUni();
        ~AluEponPhysicalUni();


}; // AluEponPhysicalUni

class StackToStack : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        StackToStack();
        ~StackToStack();


}; // StackToStack

class FrForward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrForward();
        ~FrForward();


}; // FrForward

class Homepna : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Homepna();
        ~Homepna();


}; // Homepna

class Sdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdsl();
        ~Sdsl();


}; // Sdsl

class VirtualIpAddress : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VirtualIpAddress();
        ~VirtualIpAddress();


}; // VirtualIpAddress

class Bsc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bsc();
        ~Bsc();


}; // Bsc

class AtmRadio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmRadio();
        ~AtmRadio();


}; // AtmRadio

class AviciOpticalEther : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AviciOpticalEther();
        ~AviciOpticalEther();


}; // AviciOpticalEther

class G9981 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9981();
        ~G9981();


}; // G9981

class FibreChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FibreChannel();
        ~FibreChannel();


}; // FibreChannel

class Shdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Shdsl();
        ~Shdsl();


}; // Shdsl

class Eon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eon();
        ~Eon();


}; // Eon

class H323Gatekeeper : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Gatekeeper();
        ~H323Gatekeeper();


}; // H323Gatekeeper

class Hdh1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdh1822();
        ~Hdh1822();


}; // Hdh1822

class DvbRccUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccUpstream();
        ~DvbRccUpstream();


}; // DvbRccUpstream

class Nsip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nsip();
        ~Nsip();


}; // Nsip

class TranspHdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TranspHdlc();
        ~TranspHdlc();


}; // TranspHdlc

class TermPad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TermPad();
        ~TermPad();


}; // TermPad

class IpOverCdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverCdlc();
        ~IpOverCdlc();


}; // IpOverCdlc

class Ces : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ces();
        ~Ces();


}; // Ces

class Modem : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Modem();
        ~Modem();


}; // Modem


}
}

#endif /* _IANA_IF_TYPE_ */

