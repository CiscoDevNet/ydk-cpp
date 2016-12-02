
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "iana_if_type.hpp"

namespace ydk {
namespace iana_if_type {

IanaInterfaceTypeIdentity::IanaInterfaceTypeIdentity()
     : Identity("iana-if-type:iana-interface-type")
{
}

IanaInterfaceTypeIdentity::~IanaInterfaceTypeIdentity()
{
}

VoicefxoIdentity::VoicefxoIdentity()
     : Identity("iana-if-type:voiceFXO")
{
}

VoicefxoIdentity::~VoicefxoIdentity()
{
}

AtmvciendptIdentity::AtmvciendptIdentity()
     : Identity("iana-if-type:atmVciEndPt")
{
}

AtmvciendptIdentity::~AtmvciendptIdentity()
{
}

Propbwap2MpIdentity::Propbwap2MpIdentity()
     : Identity("iana-if-type:propBWAp2Mp")
{
}

Propbwap2MpIdentity::~Propbwap2MpIdentity()
{
}

PropdocswirelessdownstreamIdentity::PropdocswirelessdownstreamIdentity()
     : Identity("iana-if-type:propDocsWirelessDownstream")
{
}

PropdocswirelessdownstreamIdentity::~PropdocswirelessdownstreamIdentity()
{
}

V11Identity::V11Identity()
     : Identity("iana-if-type:v11")
{
}

V11Identity::~V11Identity()
{
}

SoftwareloopbackIdentity::SoftwareloopbackIdentity()
     : Identity("iana-if-type:softwareLoopback")
{
}

SoftwareloopbackIdentity::~SoftwareloopbackIdentity()
{
}

HdlcIdentity::HdlcIdentity()
     : Identity("iana-if-type:hdlc")
{
}

HdlcIdentity::~HdlcIdentity()
{
}

VoicefgdosIdentity::VoicefgdosIdentity()
     : Identity("iana-if-type:voiceFGDOS")
{
}

VoicefgdosIdentity::~VoicefgdosIdentity()
{
}

FastetherfxIdentity::FastetherfxIdentity()
     : Identity("iana-if-type:fastEtherFX")
{
}

FastetherfxIdentity::~FastetherfxIdentity()
{
}

DvbtdmIdentity::DvbtdmIdentity()
     : Identity("iana-if-type:dvbTdm")
{
}

DvbtdmIdentity::~DvbtdmIdentity()
{
}

NfasIdentity::NfasIdentity()
     : Identity("iana-if-type:nfas")
{
}

NfasIdentity::~NfasIdentity()
{
}

IfpwtypeIdentity::IfpwtypeIdentity()
     : Identity("iana-if-type:ifPwType")
{
}

IfpwtypeIdentity::~IfpwtypeIdentity()
{
}

L2VlanIdentity::L2VlanIdentity()
     : Identity("iana-if-type:l2vlan")
{
}

L2VlanIdentity::~L2VlanIdentity()
{
}

Adsl2PlusIdentity::Adsl2PlusIdentity()
     : Identity("iana-if-type:adsl2plus")
{
}

Adsl2PlusIdentity::~Adsl2PlusIdentity()
{
}

Ieee802154Identity::Ieee802154Identity()
     : Identity("iana-if-type:ieee802154")
{
}

Ieee802154Identity::~Ieee802154Identity()
{
}

VoicefxsIdentity::VoicefxsIdentity()
     : Identity("iana-if-type:voiceFXS")
{
}

VoicefxsIdentity::~VoicefxsIdentity()
{
}

DvbrcsmaclayerIdentity::DvbrcsmaclayerIdentity()
     : Identity("iana-if-type:dvbRcsMacLayer")
{
}

DvbrcsmaclayerIdentity::~DvbrcsmaclayerIdentity()
{
}

IdslIdentity::IdslIdentity()
     : Identity("iana-if-type:idsl")
{
}

IdslIdentity::~IdslIdentity()
{
}

InfinibandIdentity::InfinibandIdentity()
     : Identity("iana-if-type:infiniband")
{
}

InfinibandIdentity::~InfinibandIdentity()
{
}

Ddnx25Identity::Ddnx25Identity()
     : Identity("iana-if-type:ddnX25")
{
}

Ddnx25Identity::~Ddnx25Identity()
{
}

Wwanpp2Identity::Wwanpp2Identity()
     : Identity("iana-if-type:wwanPP2")
{
}

Wwanpp2Identity::~Wwanpp2Identity()
{
}

DocscableupstreamIdentity::DocscableupstreamIdentity()
     : Identity("iana-if-type:docsCableUpstream")
{
}

DocscableupstreamIdentity::~DocscableupstreamIdentity()
{
}

Ethernet3MbitIdentity::Ethernet3MbitIdentity()
     : Identity("iana-if-type:ethernet3Mbit")
{
}

Ethernet3MbitIdentity::~Ethernet3MbitIdentity()
{
}

DigitalpowerlineIdentity::DigitalpowerlineIdentity()
     : Identity("iana-if-type:digitalPowerline")
{
}

DigitalpowerlineIdentity::~DigitalpowerlineIdentity()
{
}

H323ProxyIdentity::H323ProxyIdentity()
     : Identity("iana-if-type:h323Proxy")
{
}

H323ProxyIdentity::~H323ProxyIdentity()
{
}

GtpIdentity::GtpIdentity()
     : Identity("iana-if-type:gtp")
{
}

GtpIdentity::~GtpIdentity()
{
}

IpoveratmIdentity::IpoveratmIdentity()
     : Identity("iana-if-type:ipOverAtm")
{
}

IpoveratmIdentity::~IpoveratmIdentity()
{
}

AlueponIdentity::AlueponIdentity()
     : Identity("iana-if-type:aluEpon")
{
}

AlueponIdentity::~AlueponIdentity()
{
}

ImtIdentity::ImtIdentity()
     : Identity("iana-if-type:imt")
{
}

ImtIdentity::~ImtIdentity()
{
}

IpswitchIdentity::IpswitchIdentity()
     : Identity("iana-if-type:ipSwitch")
{
}

IpswitchIdentity::~IpswitchIdentity()
{
}

MsdslIdentity::MsdslIdentity()
     : Identity("iana-if-type:msdsl")
{
}

MsdslIdentity::~MsdslIdentity()
{
}

DvbrccmaclayerIdentity::DvbrccmaclayerIdentity()
     : Identity("iana-if-type:dvbRccMacLayer")
{
}

DvbrccmaclayerIdentity::~DvbrccmaclayerIdentity()
{
}

SmdsdxiIdentity::SmdsdxiIdentity()
     : Identity("iana-if-type:smdsDxi")
{
}

SmdsdxiIdentity::~SmdsdxiIdentity()
{
}

VoiceoveratmIdentity::VoiceoveratmIdentity()
     : Identity("iana-if-type:voiceOverAtm")
{
}

VoiceoveratmIdentity::~VoiceoveratmIdentity()
{
}

ArapIdentity::ArapIdentity()
     : Identity("iana-if-type:arap")
{
}

ArapIdentity::~ArapIdentity()
{
}

FastetherIdentity::FastetherIdentity()
     : Identity("iana-if-type:fastEther")
{
}

FastetherIdentity::~FastetherIdentity()
{
}

MpcIdentity::MpcIdentity()
     : Identity("iana-if-type:mpc")
{
}

MpcIdentity::~MpcIdentity()
{
}

LinegroupIdentity::LinegroupIdentity()
     : Identity("iana-if-type:linegroup")
{
}

LinegroupIdentity::~LinegroupIdentity()
{
}

HippiIdentity::HippiIdentity()
     : Identity("iana-if-type:hippi")
{
}

HippiIdentity::~HippiIdentity()
{
}

RprIdentity::RprIdentity()
     : Identity("iana-if-type:rpr")
{
}

RprIdentity::~RprIdentity()
{
}

Ds1FdlIdentity::Ds1FdlIdentity()
     : Identity("iana-if-type:ds1FDL")
{
}

Ds1FdlIdentity::~Ds1FdlIdentity()
{
}

SonetvtIdentity::SonetvtIdentity()
     : Identity("iana-if-type:sonetVT")
{
}

SonetvtIdentity::~SonetvtIdentity()
{
}

VoiceencapIdentity::VoiceencapIdentity()
     : Identity("iana-if-type:voiceEncap")
{
}

VoiceencapIdentity::~VoiceencapIdentity()
{
}

Ss7SiglinkIdentity::Ss7SiglinkIdentity()
     : Identity("iana-if-type:ss7SigLink")
{
}

Ss7SiglinkIdentity::~Ss7SiglinkIdentity()
{
}

ArcnetIdentity::ArcnetIdentity()
     : Identity("iana-if-type:arcnet")
{
}

ArcnetIdentity::~ArcnetIdentity()
{
}

ActelismetaloopIdentity::ActelismetaloopIdentity()
     : Identity("iana-if-type:actelisMetaLOOP")
{
}

ActelismetaloopIdentity::~ActelismetaloopIdentity()
{
}

QllcIdentity::QllcIdentity()
     : Identity("iana-if-type:qllc")
{
}

QllcIdentity::~QllcIdentity()
{
}

Rfc877X25Identity::Rfc877X25Identity()
     : Identity("iana-if-type:rfc877x25")
{
}

Rfc877X25Identity::~Rfc877X25Identity()
{
}

MpegtransportIdentity::MpegtransportIdentity()
     : Identity("iana-if-type:mpegTransport")
{
}

MpegtransportIdentity::~MpegtransportIdentity()
{
}

X25MlpIdentity::X25MlpIdentity()
     : Identity("iana-if-type:x25mlp")
{
}

X25MlpIdentity::~X25MlpIdentity()
{
}

VirtualtgIdentity::VirtualtgIdentity()
     : Identity("iana-if-type:virtualTg")
{
}

VirtualtgIdentity::~VirtualtgIdentity()
{
}

HostpadIdentity::HostpadIdentity()
     : Identity("iana-if-type:hostPad")
{
}

HostpadIdentity::~HostpadIdentity()
{
}

StarlanIdentity::StarlanIdentity()
     : Identity("iana-if-type:starLan")
{
}

StarlanIdentity::~StarlanIdentity()
{
}

Iso88025DtrIdentity::Iso88025DtrIdentity()
     : Identity("iana-if-type:iso88025Dtr")
{
}

Iso88025DtrIdentity::~Iso88025DtrIdentity()
{
}

Ibm370ParchanIdentity::Ibm370ParchanIdentity()
     : Identity("iana-if-type:ibm370parChan")
{
}

Ibm370ParchanIdentity::~Ibm370ParchanIdentity()
{
}

Adsl2Identity::Adsl2Identity()
     : Identity("iana-if-type:adsl2")
{
}

Adsl2Identity::~Adsl2Identity()
{
}

OtnotuIdentity::OtnotuIdentity()
     : Identity("iana-if-type:otnOtu")
{
}

OtnotuIdentity::~OtnotuIdentity()
{
}

Propwirelessp2PIdentity::Propwirelessp2PIdentity()
     : Identity("iana-if-type:propWirelessP2P")
{
}

Propwirelessp2PIdentity::~Propwirelessp2PIdentity()
{
}

InterleaveIdentity::InterleaveIdentity()
     : Identity("iana-if-type:interleave")
{
}

InterleaveIdentity::~InterleaveIdentity()
{
}

IsupIdentity::IsupIdentity()
     : Identity("iana-if-type:isup")
{
}

IsupIdentity::~IsupIdentity()
{
}

Regular1822Identity::Regular1822Identity()
     : Identity("iana-if-type:regular1822")
{
}

Regular1822Identity::~Regular1822Identity()
{
}

Gr303RdtIdentity::Gr303RdtIdentity()
     : Identity("iana-if-type:gr303RDT")
{
}

Gr303RdtIdentity::~Gr303RdtIdentity()
{
}

PropdocswirelessmaclayerIdentity::PropdocswirelessmaclayerIdentity()
     : Identity("iana-if-type:propDocsWirelessMaclayer")
{
}

PropdocswirelessmaclayerIdentity::~PropdocswirelessmaclayerIdentity()
{
}

AsyncIdentity::AsyncIdentity()
     : Identity("iana-if-type:async")
{
}

AsyncIdentity::~AsyncIdentity()
{
}

RadiomacIdentity::RadiomacIdentity()
     : Identity("iana-if-type:radioMAC")
{
}

RadiomacIdentity::~RadiomacIdentity()
{
}

OpticalchannelgroupIdentity::OpticalchannelgroupIdentity()
     : Identity("iana-if-type:opticalChannelGroup")
{
}

OpticalchannelgroupIdentity::~OpticalchannelgroupIdentity()
{
}

SixtofourIdentity::SixtofourIdentity()
     : Identity("iana-if-type:sixToFour")
{
}

SixtofourIdentity::~SixtofourIdentity()
{
}

PropdocswirelessupstreamIdentity::PropdocswirelessupstreamIdentity()
     : Identity("iana-if-type:propDocsWirelessUpstream")
{
}

PropdocswirelessupstreamIdentity::~PropdocswirelessupstreamIdentity()
{
}

Q2931Identity::Q2931Identity()
     : Identity("iana-if-type:q2931")
{
}

Q2931Identity::~Q2931Identity()
{
}

FddiIdentity::FddiIdentity()
     : Identity("iana-if-type:fddi")
{
}

FddiIdentity::~FddiIdentity()
{
}

PropcnlsIdentity::PropcnlsIdentity()
     : Identity("iana-if-type:propCnls")
{
}

PropcnlsIdentity::~PropcnlsIdentity()
{
}

Aal2Identity::Aal2Identity()
     : Identity("iana-if-type:aal2")
{
}

Aal2Identity::~Aal2Identity()
{
}

DvbasioutIdentity::DvbasioutIdentity()
     : Identity("iana-if-type:dvbAsiOut")
{
}

DvbasioutIdentity::~DvbasioutIdentity()
{
}

AluelpIdentity::AluelpIdentity()
     : Identity("iana-if-type:aluELP")
{
}

AluelpIdentity::~AluelpIdentity()
{
}

CiscoislvlanIdentity::CiscoislvlanIdentity()
     : Identity("iana-if-type:ciscoISLvlan")
{
}

CiscoislvlanIdentity::~CiscoislvlanIdentity()
{
}

DocscableupstreamrfportIdentity::DocscableupstreamrfportIdentity()
     : Identity("iana-if-type:docsCableUpstreamRfPort")
{
}

DocscableupstreamrfportIdentity::~DocscableupstreamrfportIdentity()
{
}

Aal5Identity::Aal5Identity()
     : Identity("iana-if-type:aal5")
{
}

Aal5Identity::~Aal5Identity()
{
}

FrdlciendptIdentity::FrdlciendptIdentity()
     : Identity("iana-if-type:frDlciEndPt")
{
}

FrdlciendptIdentity::~FrdlciendptIdentity()
{
}

HippiinterfaceIdentity::HippiinterfaceIdentity()
     : Identity("iana-if-type:hippiInterface")
{
}

HippiinterfaceIdentity::~HippiinterfaceIdentity()
{
}

L3IpvlanIdentity::L3IpvlanIdentity()
     : Identity("iana-if-type:l3ipvlan")
{
}

L3IpvlanIdentity::~L3IpvlanIdentity()
{
}

Miox25Identity::Miox25Identity()
     : Identity("iana-if-type:miox25")
{
}

Miox25Identity::~Miox25Identity()
{
}

HssiIdentity::HssiIdentity()
     : Identity("iana-if-type:hssi")
{
}

HssiIdentity::~HssiIdentity()
{
}

AtmvirtualIdentity::AtmvirtualIdentity()
     : Identity("iana-if-type:atmVirtual")
{
}

AtmvirtualIdentity::~AtmvirtualIdentity()
{
}

AlugpononuIdentity::AlugpononuIdentity()
     : Identity("iana-if-type:aluGponOnu")
{
}

AlugpononuIdentity::~AlugpononuIdentity()
{
}

Rfc1483Identity::Rfc1483Identity()
     : Identity("iana-if-type:rfc1483")
{
}

Rfc1483Identity::~Rfc1483Identity()
{
}

CnrIdentity::CnrIdentity()
     : Identity("iana-if-type:cnr")
{
}

CnrIdentity::~CnrIdentity()
{
}

SipsigIdentity::SipsigIdentity()
     : Identity("iana-if-type:sipSig")
{
}

SipsigIdentity::~SipsigIdentity()
{
}

MyrinetIdentity::MyrinetIdentity()
     : Identity("iana-if-type:myrinet")
{
}

MyrinetIdentity::~MyrinetIdentity()
{
}

DlswIdentity::DlswIdentity()
     : Identity("iana-if-type:dlsw")
{
}

DlswIdentity::~DlswIdentity()
{
}

GigabitethernetIdentity::GigabitethernetIdentity()
     : Identity("iana-if-type:gigabitEthernet")
{
}

GigabitethernetIdentity::~GigabitethernetIdentity()
{
}

X25PleIdentity::X25PleIdentity()
     : Identity("iana-if-type:x25ple")
{
}

X25PleIdentity::~X25PleIdentity()
{
}

LmpIdentity::LmpIdentity()
     : Identity("iana-if-type:lmp")
{
}

LmpIdentity::~LmpIdentity()
{
}

OpticaltransportIdentity::OpticaltransportIdentity()
     : Identity("iana-if-type:opticalTransport")
{
}

OpticaltransportIdentity::~OpticaltransportIdentity()
{
}

SdlcIdentity::SdlcIdentity()
     : Identity("iana-if-type:sdlc")
{
}

SdlcIdentity::~SdlcIdentity()
{
}

VoiceemIdentity::VoiceemIdentity()
     : Identity("iana-if-type:voiceEM")
{
}

VoiceemIdentity::~VoiceemIdentity()
{
}

X86LapsIdentity::X86LapsIdentity()
     : Identity("iana-if-type:x86Laps")
{
}

X86LapsIdentity::~X86LapsIdentity()
{
}

G9982Identity::G9982Identity()
     : Identity("iana-if-type:g9982")
{
}

G9982Identity::~G9982Identity()
{
}

Iso88022LlcIdentity::Iso88022LlcIdentity()
     : Identity("iana-if-type:iso88022llc")
{
}

Iso88022LlcIdentity::~Iso88022LlcIdentity()
{
}

DvbasiinIdentity::DvbasiinIdentity()
     : Identity("iana-if-type:dvbAsiIn")
{
}

DvbasiinIdentity::~DvbasiinIdentity()
{
}

BgppolicyaccountingIdentity::BgppolicyaccountingIdentity()
     : Identity("iana-if-type:bgppolicyaccounting")
{
}

BgppolicyaccountingIdentity::~BgppolicyaccountingIdentity()
{
}

AluepononuIdentity::AluepononuIdentity()
     : Identity("iana-if-type:aluEponOnu")
{
}

AluepononuIdentity::~AluepononuIdentity()
{
}

MfsiglinkIdentity::MfsiglinkIdentity()
     : Identity("iana-if-type:mfSigLink")
{
}

MfsiglinkIdentity::~MfsiglinkIdentity()
{
}

DcnIdentity::DcnIdentity()
     : Identity("iana-if-type:dcn")
{
}

DcnIdentity::~DcnIdentity()
{
}

AtmdxiIdentity::AtmdxiIdentity()
     : Identity("iana-if-type:atmDxi")
{
}

AtmdxiIdentity::~AtmdxiIdentity()
{
}

VoiceoverframerelayIdentity::VoiceoverframerelayIdentity()
     : Identity("iana-if-type:voiceOverFrameRelay")
{
}

VoiceoverframerelayIdentity::~VoiceoverframerelayIdentity()
{
}

GfpIdentity::GfpIdentity()
     : Identity("iana-if-type:gfp")
{
}

GfpIdentity::~GfpIdentity()
{
}

SonetoverheadchannelIdentity::SonetoverheadchannelIdentity()
     : Identity("iana-if-type:sonetOverheadChannel")
{
}

SonetoverheadchannelIdentity::~SonetoverheadchannelIdentity()
{
}

VmwarevirtualnicIdentity::VmwarevirtualnicIdentity()
     : Identity("iana-if-type:vmwareVirtualNic")
{
}

VmwarevirtualnicIdentity::~VmwarevirtualnicIdentity()
{
}

FciplinkIdentity::FciplinkIdentity()
     : Identity("iana-if-type:fcipLink")
{
}

FciplinkIdentity::~FciplinkIdentity()
{
}

IpoverclawIdentity::IpoverclawIdentity()
     : Identity("iana-if-type:ipOverClaw")
{
}

IpoverclawIdentity::~IpoverclawIdentity()
{
}

CoffeeIdentity::CoffeeIdentity()
     : Identity("iana-if-type:coffee")
{
}

CoffeeIdentity::~CoffeeIdentity()
{
}

RadslIdentity::RadslIdentity()
     : Identity("iana-if-type:radsl")
{
}

RadslIdentity::~RadslIdentity()
{
}

Vdsl2Identity::Vdsl2Identity()
     : Identity("iana-if-type:vdsl2")
{
}

Vdsl2Identity::~Vdsl2Identity()
{
}

Rs232Identity::Rs232Identity()
     : Identity("iana-if-type:rs232")
{
}

Rs232Identity::~Rs232Identity()
{
}

E1Identity::E1Identity()
     : Identity("iana-if-type:e1")
{
}

E1Identity::~E1Identity()
{
}

ReachdslIdentity::ReachdslIdentity()
     : Identity("iana-if-type:reachDSL")
{
}

ReachdslIdentity::~ReachdslIdentity()
{
}

VoiceovercableIdentity::VoiceovercableIdentity()
     : Identity("iana-if-type:voiceOverCable")
{
}

VoiceovercableIdentity::~VoiceovercableIdentity()
{
}

Tr008Identity::Tr008Identity()
     : Identity("iana-if-type:tr008")
{
}

Tr008Identity::~Tr008Identity()
{
}

VoiceoveripIdentity::VoiceoveripIdentity()
     : Identity("iana-if-type:voiceOverIp")
{
}

VoiceoveripIdentity::~VoiceoveripIdentity()
{
}

AtmIdentity::AtmIdentity()
     : Identity("iana-if-type:atm")
{
}

AtmIdentity::~AtmIdentity()
{
}

Ds3Identity::Ds3Identity()
     : Identity("iana-if-type:ds3")
{
}

Ds3Identity::~Ds3Identity()
{
}

Ds0Identity::Ds0Identity()
     : Identity("iana-if-type:ds0")
{
}

Ds0Identity::~Ds0Identity()
{
}

Ds1Identity::Ds1Identity()
     : Identity("iana-if-type:ds1")
{
}

Ds1Identity::~Ds1Identity()
{
}

SrpIdentity::SrpIdentity()
     : Identity("iana-if-type:srp")
{
}

SrpIdentity::~SrpIdentity()
{
}

DocscabledownstreamIdentity::DocscabledownstreamIdentity()
     : Identity("iana-if-type:docsCableDownstream")
{
}

DocscabledownstreamIdentity::~DocscabledownstreamIdentity()
{
}

DvbrcstdmaIdentity::DvbrcstdmaIdentity()
     : Identity("iana-if-type:dvbRcsTdma")
{
}

DvbrcstdmaIdentity::~DvbrcstdmaIdentity()
{
}

G9983Identity::G9983Identity()
     : Identity("iana-if-type:g9983")
{
}

G9983Identity::~G9983Identity()
{
}

PlcIdentity::PlcIdentity()
     : Identity("iana-if-type:plc")
{
}

PlcIdentity::~PlcIdentity()
{
}

FramerelaympiIdentity::FramerelaympiIdentity()
     : Identity("iana-if-type:frameRelayMPI")
{
}

FramerelaympiIdentity::~FramerelaympiIdentity()
{
}

MvlIdentity::MvlIdentity()
     : Identity("iana-if-type:mvl")
{
}

MvlIdentity::~MvlIdentity()
{
}

PropmultiplexorIdentity::PropmultiplexorIdentity()
     : Identity("iana-if-type:propMultiplexor")
{
}

PropmultiplexorIdentity::~PropmultiplexorIdentity()
{
}

VoicedidIdentity::VoicedidIdentity()
     : Identity("iana-if-type:voiceDID")
{
}

VoicedidIdentity::~VoicedidIdentity()
{
}

CompositelinkIdentity::CompositelinkIdentity()
     : Identity("iana-if-type:compositeLink")
{
}

CompositelinkIdentity::~CompositelinkIdentity()
{
}

Proteon10MbitIdentity::Proteon10MbitIdentity()
     : Identity("iana-if-type:proteon10Mbit")
{
}

Proteon10MbitIdentity::~Proteon10MbitIdentity()
{
}

AtmbondIdentity::AtmbondIdentity()
     : Identity("iana-if-type:atmbond")
{
}

AtmbondIdentity::~AtmbondIdentity()
{
}

Frf16MfrbundleIdentity::Frf16MfrbundleIdentity()
     : Identity("iana-if-type:frf16MfrBundle")
{
}

Frf16MfrbundleIdentity::~Frf16MfrbundleIdentity()
{
}

CctemulIdentity::CctemulIdentity()
     : Identity("iana-if-type:cctEmul")
{
}

CctemulIdentity::~CctemulIdentity()
{
}

MplstunnelIdentity::MplstunnelIdentity()
     : Identity("iana-if-type:mplsTunnel")
{
}

MplstunnelIdentity::~MplstunnelIdentity()
{
}

GponIdentity::GponIdentity()
     : Identity("iana-if-type:gpon")
{
}

GponIdentity::~GponIdentity()
{
}

VdslIdentity::VdslIdentity()
     : Identity("iana-if-type:vdsl")
{
}

VdslIdentity::~VdslIdentity()
{
}

PosIdentity::PosIdentity()
     : Identity("iana-if-type:pos")
{
}

PosIdentity::~PosIdentity()
{
}

Ieee8023AdlagIdentity::Ieee8023AdlagIdentity()
     : Identity("iana-if-type:ieee8023adLag")
{
}

Ieee8023AdlagIdentity::~Ieee8023AdlagIdentity()
{
}

DocscablemaclayerIdentity::DocscablemaclayerIdentity()
     : Identity("iana-if-type:docsCableMaclayer")
{
}

DocscablemaclayerIdentity::~DocscablemaclayerIdentity()
{
}

DocscablemcmtsdownstreamIdentity::DocscablemcmtsdownstreamIdentity()
     : Identity("iana-if-type:docsCableMCmtsDownstream")
{
}

DocscablemcmtsdownstreamIdentity::~DocscablemcmtsdownstreamIdentity()
{
}

PppIdentity::PppIdentity()
     : Identity("iana-if-type:ppp")
{
}

PppIdentity::~PppIdentity()
{
}

FramerelayIdentity::FramerelayIdentity()
     : Identity("iana-if-type:frameRelay")
{
}

FramerelayIdentity::~FramerelayIdentity()
{
}

EplrsIdentity::EplrsIdentity()
     : Identity("iana-if-type:eplrs")
{
}

EplrsIdentity::~EplrsIdentity()
{
}

VmwarenicteamIdentity::VmwarenicteamIdentity()
     : Identity("iana-if-type:vmwareNicTeam")
{
}

VmwarenicteamIdentity::~VmwarenicteamIdentity()
{
}

CabledownstreamrfportIdentity::CabledownstreamrfportIdentity()
     : Identity("iana-if-type:cableDownstreamRfPort")
{
}

CabledownstreamrfportIdentity::~CabledownstreamrfportIdentity()
{
}

MacsecuncontrolledifIdentity::MacsecuncontrolledifIdentity()
     : Identity("iana-if-type:macSecUncontrolledIF")
{
}

MacsecuncontrolledifIdentity::~MacsecuncontrolledifIdentity()
{
}

Iso88023CsmacdIdentity::Iso88023CsmacdIdentity()
     : Identity("iana-if-type:iso88023Csmacd")
{
}

Iso88023CsmacdIdentity::~Iso88023CsmacdIdentity()
{
}

UsbIdentity::UsbIdentity()
     : Identity("iana-if-type:usb")
{
}

UsbIdentity::~UsbIdentity()
{
}

AtmfuniIdentity::AtmfuniIdentity()
     : Identity("iana-if-type:atmFuni")
{
}

AtmfuniIdentity::~AtmfuniIdentity()
{
}

TelinkIdentity::TelinkIdentity()
     : Identity("iana-if-type:teLink")
{
}

TelinkIdentity::~TelinkIdentity()
{
}

Pon622Identity::Pon622Identity()
     : Identity("iana-if-type:pon622")
{
}

Pon622Identity::~Pon622Identity()
{
}

EconetIdentity::EconetIdentity()
     : Identity("iana-if-type:econet")
{
}

EconetIdentity::~EconetIdentity()
{
}

TdlcIdentity::TdlcIdentity()
     : Identity("iana-if-type:tdlc")
{
}

TdlcIdentity::~TdlcIdentity()
{
}

Ds0BundleIdentity::Ds0BundleIdentity()
     : Identity("iana-if-type:ds0Bundle")
{
}

Ds0BundleIdentity::~Ds0BundleIdentity()
{
}

FastIdentity::FastIdentity()
     : Identity("iana-if-type:fast")
{
}

FastIdentity::~FastIdentity()
{
}

Ieee1394Identity::Ieee1394Identity()
     : Identity("iana-if-type:ieee1394")
{
}

Ieee1394Identity::~Ieee1394Identity()
{
}

CblvectastarIdentity::CblvectastarIdentity()
     : Identity("iana-if-type:cblVectaStar")
{
}

CblvectastarIdentity::~CblvectastarIdentity()
{
}

RsrbIdentity::RsrbIdentity()
     : Identity("iana-if-type:rsrb")
{
}

RsrbIdentity::~RsrbIdentity()
{
}

FramerelayinterconnectIdentity::FramerelayinterconnectIdentity()
     : Identity("iana-if-type:frameRelayInterconnect")
{
}

FramerelayinterconnectIdentity::~FramerelayinterconnectIdentity()
{
}

IsdnsIdentity::IsdnsIdentity()
     : Identity("iana-if-type:isdns")
{
}

IsdnsIdentity::~IsdnsIdentity()
{
}

PppmultilinkbundleIdentity::PppmultilinkbundleIdentity()
     : Identity("iana-if-type:pppMultilinkBundle")
{
}

PppmultilinkbundleIdentity::~PppmultilinkbundleIdentity()
{
}

Aflane8025Identity::Aflane8025Identity()
     : Identity("iana-if-type:aflane8025")
{
}

Aflane8025Identity::~Aflane8025Identity()
{
}

LapbIdentity::LapbIdentity()
     : Identity("iana-if-type:lapb")
{
}

LapbIdentity::~LapbIdentity()
{
}

Aflane8023Identity::Aflane8023Identity()
     : Identity("iana-if-type:aflane8023")
{
}

Aflane8023Identity::~Aflane8023Identity()
{
}

LapdIdentity::LapdIdentity()
     : Identity("iana-if-type:lapd")
{
}

LapdIdentity::~LapdIdentity()
{
}

IsdnuIdentity::IsdnuIdentity()
     : Identity("iana-if-type:isdnu")
{
}

IsdnuIdentity::~IsdnuIdentity()
{
}

LapfIdentity::LapfIdentity()
     : Identity("iana-if-type:lapf")
{
}

LapfIdentity::~LapfIdentity()
{
}

CapwapwtpvirtualradioIdentity::CapwapwtpvirtualradioIdentity()
     : Identity("iana-if-type:capwapWtpVirtualRadio")
{
}

CapwapwtpvirtualradioIdentity::~CapwapwtpvirtualradioIdentity()
{
}

IfvfitypeIdentity::IfvfitypeIdentity()
     : Identity("iana-if-type:ifVfiType")
{
}

IfvfitypeIdentity::~IfvfitypeIdentity()
{
}

X25HuntgroupIdentity::X25HuntgroupIdentity()
     : Identity("iana-if-type:x25huntGroup")
{
}

X25HuntgroupIdentity::~X25HuntgroupIdentity()
{
}

ParaIdentity::ParaIdentity()
     : Identity("iana-if-type:para")
{
}

ParaIdentity::~ParaIdentity()
{
}

MacseccontrolledifIdentity::MacseccontrolledifIdentity()
     : Identity("iana-if-type:macSecControlledIF")
{
}

MacseccontrolledifIdentity::~MacseccontrolledifIdentity()
{
}

Iso88024TokenbusIdentity::Iso88024TokenbusIdentity()
     : Identity("iana-if-type:iso88024TokenBus")
{
}

Iso88024TokenbusIdentity::~Iso88024TokenbusIdentity()
{
}

LocaltalkIdentity::LocaltalkIdentity()
     : Identity("iana-if-type:localTalk")
{
}

LocaltalkIdentity::~LocaltalkIdentity()
{
}

HyperchannelIdentity::HyperchannelIdentity()
     : Identity("iana-if-type:hyperchannel")
{
}

HyperchannelIdentity::~HyperchannelIdentity()
{
}

MediamailoveripIdentity::MediamailoveripIdentity()
     : Identity("iana-if-type:mediaMailOverIp")
{
}

MediamailoveripIdentity::~MediamailoveripIdentity()
{
}

IfGsnIdentity::IfGsnIdentity()
     : Identity("iana-if-type:if-gsn")
{
}

IfGsnIdentity::~IfGsnIdentity()
{
}

Capwapdot11ProfileIdentity::Capwapdot11ProfileIdentity()
     : Identity("iana-if-type:capwapDot11Profile")
{
}

Capwapdot11ProfileIdentity::~Capwapdot11ProfileIdentity()
{
}

L3IpxvlanIdentity::L3IpxvlanIdentity()
     : Identity("iana-if-type:l3ipxvlan")
{
}

L3IpxvlanIdentity::~L3IpxvlanIdentity()
{
}

AtmsubinterfaceIdentity::AtmsubinterfaceIdentity()
     : Identity("iana-if-type:atmSubInterface")
{
}

AtmsubinterfaceIdentity::~AtmsubinterfaceIdentity()
{
}

PrimaryisdnIdentity::PrimaryisdnIdentity()
     : Identity("iana-if-type:primaryISDN")
{
}

PrimaryisdnIdentity::~PrimaryisdnIdentity()
{
}

Proteon80MbitIdentity::Proteon80MbitIdentity()
     : Identity("iana-if-type:proteon80Mbit")
{
}

Proteon80MbitIdentity::~Proteon80MbitIdentity()
{
}

Iso88026ManIdentity::Iso88026ManIdentity()
     : Identity("iana-if-type:iso88026Man")
{
}

Iso88026ManIdentity::~Iso88026ManIdentity()
{
}

DigitalwrapperoverheadchannelIdentity::DigitalwrapperoverheadchannelIdentity()
     : Identity("iana-if-type:digitalWrapperOverheadChannel")
{
}

DigitalwrapperoverheadchannelIdentity::~DigitalwrapperoverheadchannelIdentity()
{
}

DocscableupstreamchannelIdentity::DocscableupstreamchannelIdentity()
     : Identity("iana-if-type:docsCableUpstreamChannel")
{
}

DocscableupstreamchannelIdentity::~DocscableupstreamchannelIdentity()
{
}

OpticalchannelIdentity::OpticalchannelIdentity()
     : Identity("iana-if-type:opticalChannel")
{
}

OpticalchannelIdentity::~OpticalchannelIdentity()
{
}

EthernetcsmacdIdentity::EthernetcsmacdIdentity()
     : Identity("iana-if-type:ethernetCsmacd")
{
}

EthernetcsmacdIdentity::~EthernetcsmacdIdentity()
{
}

BitsIdentity::BitsIdentity()
     : Identity("iana-if-type:bits")
{
}

BitsIdentity::~BitsIdentity()
{
}

TunnelIdentity::TunnelIdentity()
     : Identity("iana-if-type:tunnel")
{
}

TunnelIdentity::~TunnelIdentity()
{
}

Hdsl2Identity::Hdsl2Identity()
     : Identity("iana-if-type:hdsl2")
{
}

Hdsl2Identity::~Hdsl2Identity()
{
}

FramerelayserviceIdentity::FramerelayserviceIdentity()
     : Identity("iana-if-type:frameRelayService")
{
}

FramerelayserviceIdentity::~FramerelayserviceIdentity()
{
}

MplsIdentity::MplsIdentity()
     : Identity("iana-if-type:mpls")
{
}

MplsIdentity::~MplsIdentity()
{
}

Ieee80211Identity::Ieee80211Identity()
     : Identity("iana-if-type:ieee80211")
{
}

Ieee80211Identity::~Ieee80211Identity()
{
}

Ieee80212Identity::Ieee80212Identity()
     : Identity("iana-if-type:ieee80212")
{
}

Ieee80212Identity::~Ieee80212Identity()
{
}

Mocaversion1Identity::Mocaversion1Identity()
     : Identity("iana-if-type:mocaVersion1")
{
}

Mocaversion1Identity::~Mocaversion1Identity()
{
}

SonetIdentity::SonetIdentity()
     : Identity("iana-if-type:sonet")
{
}

SonetIdentity::~SonetIdentity()
{
}

EsconIdentity::EsconIdentity()
     : Identity("iana-if-type:escon")
{
}

EsconIdentity::~EsconIdentity()
{
}

AlueponlogicallinkIdentity::AlueponlogicallinkIdentity()
     : Identity("iana-if-type:aluEponLogicalLink")
{
}

AlueponlogicallinkIdentity::~AlueponlogicallinkIdentity()
{
}

G703At2MbIdentity::G703At2MbIdentity()
     : Identity("iana-if-type:g703at2mb")
{
}

G703At2MbIdentity::~G703At2MbIdentity()
{
}

UltraIdentity::UltraIdentity()
     : Identity("iana-if-type:ultra")
{
}

UltraIdentity::~UltraIdentity()
{
}

DvbrccdownstreamIdentity::DvbrccdownstreamIdentity()
     : Identity("iana-if-type:dvbRccDownstream")
{
}

DvbrccdownstreamIdentity::~DvbrccdownstreamIdentity()
{
}

SiptgIdentity::SiptgIdentity()
     : Identity("iana-if-type:sipTg")
{
}

SiptgIdentity::~SiptgIdentity()
{
}

SmdsicipIdentity::SmdsicipIdentity()
     : Identity("iana-if-type:smdsIcip")
{
}

SmdsicipIdentity::~SmdsicipIdentity()
{
}

BridgeIdentity::BridgeIdentity()
     : Identity("iana-if-type:bridge")
{
}

BridgeIdentity::~BridgeIdentity()
{
}

AtmlogicalIdentity::AtmlogicalIdentity()
     : Identity("iana-if-type:atmLogical")
{
}

AtmlogicalIdentity::~AtmlogicalIdentity()
{
}

ProppointtopointserialIdentity::ProppointtopointserialIdentity()
     : Identity("iana-if-type:propPointToPointSerial")
{
}

ProppointtopointserialIdentity::~ProppointtopointserialIdentity()
{
}

V35Identity::V35Identity()
     : Identity("iana-if-type:v35")
{
}

V35Identity::~V35Identity()
{
}

V36Identity::V36Identity()
     : Identity("iana-if-type:v36")
{
}

V36Identity::~V36Identity()
{
}

V37Identity::V37Identity()
     : Identity("iana-if-type:v37")
{
}

V37Identity::~V37Identity()
{
}

IpIdentity::IpIdentity()
     : Identity("iana-if-type:ip")
{
}

IpIdentity::~IpIdentity()
{
}

Gr303IdtIdentity::Gr303IdtIdentity()
     : Identity("iana-if-type:gr303IDT")
{
}

Gr303IdtIdentity::~Gr303IdtIdentity()
{
}

BasicisdnIdentity::BasicisdnIdentity()
     : Identity("iana-if-type:basicISDN")
{
}

BasicisdnIdentity::~BasicisdnIdentity()
{
}

G703At64KIdentity::G703At64KIdentity()
     : Identity("iana-if-type:g703at64k")
{
}

G703At64KIdentity::~G703At64KIdentity()
{
}

ArcnetplusIdentity::ArcnetplusIdentity()
     : Identity("iana-if-type:arcnetPlus")
{
}

ArcnetplusIdentity::~ArcnetplusIdentity()
{
}

PipIdentity::PipIdentity()
     : Identity("iana-if-type:pip")
{
}

PipIdentity::~PipIdentity()
{
}

DtmIdentity::DtmIdentity()
     : Identity("iana-if-type:dtm")
{
}

DtmIdentity::~DtmIdentity()
{
}

SlipIdentity::SlipIdentity()
     : Identity("iana-if-type:slip")
{
}

SlipIdentity::~SlipIdentity()
{
}

Hiperlan2Identity::Hiperlan2Identity()
     : Identity("iana-if-type:hiperlan2")
{
}

Hiperlan2Identity::~Hiperlan2Identity()
{
}

AdslIdentity::AdslIdentity()
     : Identity("iana-if-type:adsl")
{
}

AdslIdentity::~AdslIdentity()
{
}

Ieee80216WmanIdentity::Ieee80216WmanIdentity()
     : Identity("iana-if-type:ieee80216WMAN")
{
}

Ieee80216WmanIdentity::~Ieee80216WmanIdentity()
{
}

AtmimaIdentity::AtmimaIdentity()
     : Identity("iana-if-type:atmIma")
{
}

AtmimaIdentity::~AtmimaIdentity()
{
}

IsdnIdentity::IsdnIdentity()
     : Identity("iana-if-type:isdn")
{
}

IsdnIdentity::~IsdnIdentity()
{
}

Capwapdot11BssIdentity::Capwapdot11BssIdentity()
     : Identity("iana-if-type:capwapDot11Bss")
{
}

Capwapdot11BssIdentity::~Capwapdot11BssIdentity()
{
}

SipIdentity::SipIdentity()
     : Identity("iana-if-type:sip")
{
}

SipIdentity::~SipIdentity()
{
}

Pdnetherloop2Identity::Pdnetherloop2Identity()
     : Identity("iana-if-type:pdnEtherLoop2")
{
}

Pdnetherloop2Identity::~Pdnetherloop2Identity()
{
}

VoiceebsIdentity::VoiceebsIdentity()
     : Identity("iana-if-type:voiceEBS")
{
}

VoiceebsIdentity::~VoiceebsIdentity()
{
}

IpforwardIdentity::IpforwardIdentity()
     : Identity("iana-if-type:ipForward")
{
}

IpforwardIdentity::~IpforwardIdentity()
{
}

Iso88025CrfpintIdentity::Iso88025CrfpintIdentity()
     : Identity("iana-if-type:iso88025CRFPInt")
{
}

Iso88025CrfpintIdentity::~Iso88025CrfpintIdentity()
{
}

PropvirtualIdentity::PropvirtualIdentity()
     : Identity("iana-if-type:propVirtual")
{
}

PropvirtualIdentity::~PropvirtualIdentity()
{
}

WwanppIdentity::WwanppIdentity()
     : Identity("iana-if-type:wwanPP")
{
}

WwanppIdentity::~WwanppIdentity()
{
}

OtherIdentity::OtherIdentity()
     : Identity("iana-if-type:other")
{
}

OtherIdentity::~OtherIdentity()
{
}

Pon155Identity::Pon155Identity()
     : Identity("iana-if-type:pon155")
{
}

Pon155Identity::~Pon155Identity()
{
}

QamIdentity::QamIdentity()
     : Identity("iana-if-type:qam")
{
}

QamIdentity::~QamIdentity()
{
}

OtnoduIdentity::OtnoduIdentity()
     : Identity("iana-if-type:otnOdu")
{
}

OtnoduIdentity::~OtnoduIdentity()
{
}

Iso88025FiberIdentity::Iso88025FiberIdentity()
     : Identity("iana-if-type:iso88025Fiber")
{
}

Iso88025FiberIdentity::~Iso88025FiberIdentity()
{
}

ChannelIdentity::ChannelIdentity()
     : Identity("iana-if-type:channel")
{
}

ChannelIdentity::~ChannelIdentity()
{
}

VoiceemfgdIdentity::VoiceemfgdIdentity()
     : Identity("iana-if-type:voiceEMFGD")
{
}

VoiceemfgdIdentity::~VoiceemfgdIdentity()
{
}

AlugponphysicaluniIdentity::AlugponphysicaluniIdentity()
     : Identity("iana-if-type:aluGponPhysicalUni")
{
}

AlugponphysicaluniIdentity::~AlugponphysicaluniIdentity()
{
}

A12MppswitchIdentity::A12MppswitchIdentity()
     : Identity("iana-if-type:a12MppSwitch")
{
}

A12MppswitchIdentity::~A12MppswitchIdentity()
{
}

IlanIdentity::IlanIdentity()
     : Identity("iana-if-type:ilan")
{
}

IlanIdentity::~IlanIdentity()
{
}

Pdnetherloop1Identity::Pdnetherloop1Identity()
     : Identity("iana-if-type:pdnEtherLoop1")
{
}

Pdnetherloop1Identity::~Pdnetherloop1Identity()
{
}

X213Identity::X213Identity()
     : Identity("iana-if-type:x213")
{
}

X213Identity::~X213Identity()
{
}

SonetpathIdentity::SonetpathIdentity()
     : Identity("iana-if-type:sonetPath")
{
}

SonetpathIdentity::~SonetpathIdentity()
{
}

VoicefgdeanaIdentity::VoicefgdeanaIdentity()
     : Identity("iana-if-type:voiceFGDEANA")
{
}

VoicefgdeanaIdentity::~VoicefgdeanaIdentity()
{
}

Iso88025TokenringIdentity::Iso88025TokenringIdentity()
     : Identity("iana-if-type:iso88025TokenRing")
{
}

Iso88025TokenringIdentity::~Iso88025TokenringIdentity()
{
}

PropatmIdentity::PropatmIdentity()
     : Identity("iana-if-type:propAtm")
{
}

PropatmIdentity::~PropatmIdentity()
{
}

AlueponphysicaluniIdentity::AlueponphysicaluniIdentity()
     : Identity("iana-if-type:aluEponPhysicalUni")
{
}

AlueponphysicaluniIdentity::~AlueponphysicaluniIdentity()
{
}

StacktostackIdentity::StacktostackIdentity()
     : Identity("iana-if-type:stackToStack")
{
}

StacktostackIdentity::~StacktostackIdentity()
{
}

FrforwardIdentity::FrforwardIdentity()
     : Identity("iana-if-type:frForward")
{
}

FrforwardIdentity::~FrforwardIdentity()
{
}

HomepnaIdentity::HomepnaIdentity()
     : Identity("iana-if-type:homepna")
{
}

HomepnaIdentity::~HomepnaIdentity()
{
}

SdslIdentity::SdslIdentity()
     : Identity("iana-if-type:sdsl")
{
}

SdslIdentity::~SdslIdentity()
{
}

VirtualipaddressIdentity::VirtualipaddressIdentity()
     : Identity("iana-if-type:virtualIpAddress")
{
}

VirtualipaddressIdentity::~VirtualipaddressIdentity()
{
}

BscIdentity::BscIdentity()
     : Identity("iana-if-type:bsc")
{
}

BscIdentity::~BscIdentity()
{
}

AtmradioIdentity::AtmradioIdentity()
     : Identity("iana-if-type:atmRadio")
{
}

AtmradioIdentity::~AtmradioIdentity()
{
}

AviciopticaletherIdentity::AviciopticaletherIdentity()
     : Identity("iana-if-type:aviciOpticalEther")
{
}

AviciopticaletherIdentity::~AviciopticaletherIdentity()
{
}

G9981Identity::G9981Identity()
     : Identity("iana-if-type:g9981")
{
}

G9981Identity::~G9981Identity()
{
}

FibrechannelIdentity::FibrechannelIdentity()
     : Identity("iana-if-type:fibreChannel")
{
}

FibrechannelIdentity::~FibrechannelIdentity()
{
}

ShdslIdentity::ShdslIdentity()
     : Identity("iana-if-type:shdsl")
{
}

ShdslIdentity::~ShdslIdentity()
{
}

EonIdentity::EonIdentity()
     : Identity("iana-if-type:eon")
{
}

EonIdentity::~EonIdentity()
{
}

H323GatekeeperIdentity::H323GatekeeperIdentity()
     : Identity("iana-if-type:h323Gatekeeper")
{
}

H323GatekeeperIdentity::~H323GatekeeperIdentity()
{
}

Hdh1822Identity::Hdh1822Identity()
     : Identity("iana-if-type:hdh1822")
{
}

Hdh1822Identity::~Hdh1822Identity()
{
}

DvbrccupstreamIdentity::DvbrccupstreamIdentity()
     : Identity("iana-if-type:dvbRccUpstream")
{
}

DvbrccupstreamIdentity::~DvbrccupstreamIdentity()
{
}

NsipIdentity::NsipIdentity()
     : Identity("iana-if-type:nsip")
{
}

NsipIdentity::~NsipIdentity()
{
}

TransphdlcIdentity::TransphdlcIdentity()
     : Identity("iana-if-type:transpHdlc")
{
}

TransphdlcIdentity::~TransphdlcIdentity()
{
}

TermpadIdentity::TermpadIdentity()
     : Identity("iana-if-type:termPad")
{
}

TermpadIdentity::~TermpadIdentity()
{
}

IpovercdlcIdentity::IpovercdlcIdentity()
     : Identity("iana-if-type:ipOverCdlc")
{
}

IpovercdlcIdentity::~IpovercdlcIdentity()
{
}

CesIdentity::CesIdentity()
     : Identity("iana-if-type:ces")
{
}

CesIdentity::~CesIdentity()
{
}

ModemIdentity::ModemIdentity()
     : Identity("iana-if-type:modem")
{
}

ModemIdentity::~ModemIdentity()
{
}



}
}

