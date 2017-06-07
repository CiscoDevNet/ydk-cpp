#ifndef _IANA_IF_TYPE_
#define _IANA_IF_TYPE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_interfaces.hpp"

namespace ydk {
namespace iana_if_type {

class IanaInterfaceTypeIdentity : public ietf_interfaces::InterfaceTypeIdentity, virtual Identity
{
    public:
        IanaInterfaceTypeIdentity();
        ~IanaInterfaceTypeIdentity();


}; // IanaInterfaceTypeIdentity

class VoicefxoIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoicefxoIdentity();
        ~VoicefxoIdentity();


}; // VoicefxoIdentity

class AtmvciendptIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmvciendptIdentity();
        ~AtmvciendptIdentity();


}; // AtmvciendptIdentity

class Propbwap2MpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Propbwap2MpIdentity();
        ~Propbwap2MpIdentity();


}; // Propbwap2MpIdentity

class PropdocswirelessdownstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropdocswirelessdownstreamIdentity();
        ~PropdocswirelessdownstreamIdentity();


}; // PropdocswirelessdownstreamIdentity

class V11Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        V11Identity();
        ~V11Identity();


}; // V11Identity

class SoftwareloopbackIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SoftwareloopbackIdentity();
        ~SoftwareloopbackIdentity();


}; // SoftwareloopbackIdentity

class HdlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HdlcIdentity();
        ~HdlcIdentity();


}; // HdlcIdentity

class VoicefgdosIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoicefgdosIdentity();
        ~VoicefgdosIdentity();


}; // VoicefgdosIdentity

class FastetherfxIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FastetherfxIdentity();
        ~FastetherfxIdentity();


}; // FastetherfxIdentity

class DvbtdmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbtdmIdentity();
        ~DvbtdmIdentity();


}; // DvbtdmIdentity

class NfasIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        NfasIdentity();
        ~NfasIdentity();


}; // NfasIdentity

class IfpwtypeIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IfpwtypeIdentity();
        ~IfpwtypeIdentity();


}; // IfpwtypeIdentity

class L2VlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        L2VlanIdentity();
        ~L2VlanIdentity();


}; // L2VlanIdentity

class Adsl2PlusIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Adsl2PlusIdentity();
        ~Adsl2PlusIdentity();


}; // Adsl2PlusIdentity

class Ieee802154Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee802154Identity();
        ~Ieee802154Identity();


}; // Ieee802154Identity

class VoicefxsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoicefxsIdentity();
        ~VoicefxsIdentity();


}; // VoicefxsIdentity

class DvbrcsmaclayerIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbrcsmaclayerIdentity();
        ~DvbrcsmaclayerIdentity();


}; // DvbrcsmaclayerIdentity

class IdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IdslIdentity();
        ~IdslIdentity();


}; // IdslIdentity

class InfinibandIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        InfinibandIdentity();
        ~InfinibandIdentity();


}; // InfinibandIdentity

class Ddnx25Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ddnx25Identity();
        ~Ddnx25Identity();


}; // Ddnx25Identity

class Wwanpp2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Wwanpp2Identity();
        ~Wwanpp2Identity();


}; // Wwanpp2Identity

class DocscableupstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscableupstreamIdentity();
        ~DocscableupstreamIdentity();


}; // DocscableupstreamIdentity

class Ethernet3MbitIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ethernet3MbitIdentity();
        ~Ethernet3MbitIdentity();


}; // Ethernet3MbitIdentity

class DigitalpowerlineIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DigitalpowerlineIdentity();
        ~DigitalpowerlineIdentity();


}; // DigitalpowerlineIdentity

class H323ProxyIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        H323ProxyIdentity();
        ~H323ProxyIdentity();


}; // H323ProxyIdentity

class GtpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        GtpIdentity();
        ~GtpIdentity();


}; // GtpIdentity

class IpoveratmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpoveratmIdentity();
        ~IpoveratmIdentity();


}; // IpoveratmIdentity

class AlueponIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AlueponIdentity();
        ~AlueponIdentity();


}; // AlueponIdentity

class ImtIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ImtIdentity();
        ~ImtIdentity();


}; // ImtIdentity

class IpswitchIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpswitchIdentity();
        ~IpswitchIdentity();


}; // IpswitchIdentity

class MsdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MsdslIdentity();
        ~MsdslIdentity();


}; // MsdslIdentity

class DvbrccmaclayerIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbrccmaclayerIdentity();
        ~DvbrccmaclayerIdentity();


}; // DvbrccmaclayerIdentity

class SmdsdxiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SmdsdxiIdentity();
        ~SmdsdxiIdentity();


}; // SmdsdxiIdentity

class VoiceoveratmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceoveratmIdentity();
        ~VoiceoveratmIdentity();


}; // VoiceoveratmIdentity

class ArapIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ArapIdentity();
        ~ArapIdentity();


}; // ArapIdentity

class FastetherIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FastetherIdentity();
        ~FastetherIdentity();


}; // FastetherIdentity

class MpcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MpcIdentity();
        ~MpcIdentity();


}; // MpcIdentity

class LinegroupIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LinegroupIdentity();
        ~LinegroupIdentity();


}; // LinegroupIdentity

class HippiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HippiIdentity();
        ~HippiIdentity();


}; // HippiIdentity

class RprIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        RprIdentity();
        ~RprIdentity();


}; // RprIdentity

class Ds1FdlIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ds1FdlIdentity();
        ~Ds1FdlIdentity();


}; // Ds1FdlIdentity

class SonetvtIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SonetvtIdentity();
        ~SonetvtIdentity();


}; // SonetvtIdentity

class VoiceencapIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceencapIdentity();
        ~VoiceencapIdentity();


}; // VoiceencapIdentity

class Ss7SiglinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ss7SiglinkIdentity();
        ~Ss7SiglinkIdentity();


}; // Ss7SiglinkIdentity

class ArcnetIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ArcnetIdentity();
        ~ArcnetIdentity();


}; // ArcnetIdentity

class ActelismetaloopIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ActelismetaloopIdentity();
        ~ActelismetaloopIdentity();


}; // ActelismetaloopIdentity

class QllcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        QllcIdentity();
        ~QllcIdentity();


}; // QllcIdentity

class Rfc877X25Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Rfc877X25Identity();
        ~Rfc877X25Identity();


}; // Rfc877X25Identity

class MpegtransportIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MpegtransportIdentity();
        ~MpegtransportIdentity();


}; // MpegtransportIdentity

class X25MlpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        X25MlpIdentity();
        ~X25MlpIdentity();


}; // X25MlpIdentity

class VirtualtgIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VirtualtgIdentity();
        ~VirtualtgIdentity();


}; // VirtualtgIdentity

class HostpadIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HostpadIdentity();
        ~HostpadIdentity();


}; // HostpadIdentity

class StarlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        StarlanIdentity();
        ~StarlanIdentity();


}; // StarlanIdentity

class Iso88025DtrIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88025DtrIdentity();
        ~Iso88025DtrIdentity();


}; // Iso88025DtrIdentity

class Ibm370ParchanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ibm370ParchanIdentity();
        ~Ibm370ParchanIdentity();


}; // Ibm370ParchanIdentity

class Adsl2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Adsl2Identity();
        ~Adsl2Identity();


}; // Adsl2Identity

class OtnotuIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OtnotuIdentity();
        ~OtnotuIdentity();


}; // OtnotuIdentity

class Propwirelessp2PIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Propwirelessp2PIdentity();
        ~Propwirelessp2PIdentity();


}; // Propwirelessp2PIdentity

class InterleaveIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        InterleaveIdentity();
        ~InterleaveIdentity();


}; // InterleaveIdentity

class IsupIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IsupIdentity();
        ~IsupIdentity();


}; // IsupIdentity

class Regular1822Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Regular1822Identity();
        ~Regular1822Identity();


}; // Regular1822Identity

class Gr303RdtIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Gr303RdtIdentity();
        ~Gr303RdtIdentity();


}; // Gr303RdtIdentity

class PropdocswirelessmaclayerIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropdocswirelessmaclayerIdentity();
        ~PropdocswirelessmaclayerIdentity();


}; // PropdocswirelessmaclayerIdentity

class AsyncIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AsyncIdentity();
        ~AsyncIdentity();


}; // AsyncIdentity

class RadiomacIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        RadiomacIdentity();
        ~RadiomacIdentity();


}; // RadiomacIdentity

class OpticalchannelgroupIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OpticalchannelgroupIdentity();
        ~OpticalchannelgroupIdentity();


}; // OpticalchannelgroupIdentity

class SixtofourIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SixtofourIdentity();
        ~SixtofourIdentity();


}; // SixtofourIdentity

class PropdocswirelessupstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropdocswirelessupstreamIdentity();
        ~PropdocswirelessupstreamIdentity();


}; // PropdocswirelessupstreamIdentity

class Q2931Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Q2931Identity();
        ~Q2931Identity();


}; // Q2931Identity

class FddiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FddiIdentity();
        ~FddiIdentity();


}; // FddiIdentity

class PropcnlsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropcnlsIdentity();
        ~PropcnlsIdentity();


}; // PropcnlsIdentity

class Aal2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Aal2Identity();
        ~Aal2Identity();


}; // Aal2Identity

class DvbasioutIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbasioutIdentity();
        ~DvbasioutIdentity();


}; // DvbasioutIdentity

class AluelpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AluelpIdentity();
        ~AluelpIdentity();


}; // AluelpIdentity

class CiscoislvlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CiscoislvlanIdentity();
        ~CiscoislvlanIdentity();


}; // CiscoislvlanIdentity

class DocscableupstreamrfportIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscableupstreamrfportIdentity();
        ~DocscableupstreamrfportIdentity();


}; // DocscableupstreamrfportIdentity

class Aal5Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Aal5Identity();
        ~Aal5Identity();


}; // Aal5Identity

class FrdlciendptIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FrdlciendptIdentity();
        ~FrdlciendptIdentity();


}; // FrdlciendptIdentity

class HippiinterfaceIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HippiinterfaceIdentity();
        ~HippiinterfaceIdentity();


}; // HippiinterfaceIdentity

class L3IpvlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        L3IpvlanIdentity();
        ~L3IpvlanIdentity();


}; // L3IpvlanIdentity

class Miox25Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Miox25Identity();
        ~Miox25Identity();


}; // Miox25Identity

class HssiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HssiIdentity();
        ~HssiIdentity();


}; // HssiIdentity

class AtmvirtualIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmvirtualIdentity();
        ~AtmvirtualIdentity();


}; // AtmvirtualIdentity

class AlugpononuIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AlugpononuIdentity();
        ~AlugpononuIdentity();


}; // AlugpononuIdentity

class Rfc1483Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Rfc1483Identity();
        ~Rfc1483Identity();


}; // Rfc1483Identity

class CnrIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CnrIdentity();
        ~CnrIdentity();


}; // CnrIdentity

class SipsigIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SipsigIdentity();
        ~SipsigIdentity();


}; // SipsigIdentity

class MyrinetIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MyrinetIdentity();
        ~MyrinetIdentity();


}; // MyrinetIdentity

class DlswIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DlswIdentity();
        ~DlswIdentity();


}; // DlswIdentity

class GigabitethernetIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        GigabitethernetIdentity();
        ~GigabitethernetIdentity();


}; // GigabitethernetIdentity

class X25PleIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        X25PleIdentity();
        ~X25PleIdentity();


}; // X25PleIdentity

class LmpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LmpIdentity();
        ~LmpIdentity();


}; // LmpIdentity

class OpticaltransportIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OpticaltransportIdentity();
        ~OpticaltransportIdentity();


}; // OpticaltransportIdentity

class SdlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SdlcIdentity();
        ~SdlcIdentity();


}; // SdlcIdentity

class VoiceemIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceemIdentity();
        ~VoiceemIdentity();


}; // VoiceemIdentity

class X86LapsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        X86LapsIdentity();
        ~X86LapsIdentity();


}; // X86LapsIdentity

class G9982Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        G9982Identity();
        ~G9982Identity();


}; // G9982Identity

class Iso88022LlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88022LlcIdentity();
        ~Iso88022LlcIdentity();


}; // Iso88022LlcIdentity

class DvbasiinIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbasiinIdentity();
        ~DvbasiinIdentity();


}; // DvbasiinIdentity

class BgppolicyaccountingIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        BgppolicyaccountingIdentity();
        ~BgppolicyaccountingIdentity();


}; // BgppolicyaccountingIdentity

class AluepononuIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AluepononuIdentity();
        ~AluepononuIdentity();


}; // AluepononuIdentity

class MfsiglinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MfsiglinkIdentity();
        ~MfsiglinkIdentity();


}; // MfsiglinkIdentity

class DcnIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DcnIdentity();
        ~DcnIdentity();


}; // DcnIdentity

class AtmdxiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmdxiIdentity();
        ~AtmdxiIdentity();


}; // AtmdxiIdentity

class VoiceoverframerelayIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceoverframerelayIdentity();
        ~VoiceoverframerelayIdentity();


}; // VoiceoverframerelayIdentity

class GfpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        GfpIdentity();
        ~GfpIdentity();


}; // GfpIdentity

class SonetoverheadchannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SonetoverheadchannelIdentity();
        ~SonetoverheadchannelIdentity();


}; // SonetoverheadchannelIdentity

class VmwarevirtualnicIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VmwarevirtualnicIdentity();
        ~VmwarevirtualnicIdentity();


}; // VmwarevirtualnicIdentity

class FciplinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FciplinkIdentity();
        ~FciplinkIdentity();


}; // FciplinkIdentity

class IpoverclawIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpoverclawIdentity();
        ~IpoverclawIdentity();


}; // IpoverclawIdentity

class CoffeeIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CoffeeIdentity();
        ~CoffeeIdentity();


}; // CoffeeIdentity

class RadslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        RadslIdentity();
        ~RadslIdentity();


}; // RadslIdentity

class Vdsl2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Vdsl2Identity();
        ~Vdsl2Identity();


}; // Vdsl2Identity

class Rs232Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Rs232Identity();
        ~Rs232Identity();


}; // Rs232Identity

class E1Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        E1Identity();
        ~E1Identity();


}; // E1Identity

class ReachdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ReachdslIdentity();
        ~ReachdslIdentity();


}; // ReachdslIdentity

class VoiceovercableIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceovercableIdentity();
        ~VoiceovercableIdentity();


}; // VoiceovercableIdentity

class Tr008Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Tr008Identity();
        ~Tr008Identity();


}; // Tr008Identity

class VoiceoveripIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceoveripIdentity();
        ~VoiceoveripIdentity();


}; // VoiceoveripIdentity

class AtmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmIdentity();
        ~AtmIdentity();


}; // AtmIdentity

class Ds3Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ds3Identity();
        ~Ds3Identity();


}; // Ds3Identity

class Ds0Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ds0Identity();
        ~Ds0Identity();


}; // Ds0Identity

class Ds1Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ds1Identity();
        ~Ds1Identity();


}; // Ds1Identity

class SrpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SrpIdentity();
        ~SrpIdentity();


}; // SrpIdentity

class DocscabledownstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscabledownstreamIdentity();
        ~DocscabledownstreamIdentity();


}; // DocscabledownstreamIdentity

class DvbrcstdmaIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbrcstdmaIdentity();
        ~DvbrcstdmaIdentity();


}; // DvbrcstdmaIdentity

class G9983Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        G9983Identity();
        ~G9983Identity();


}; // G9983Identity

class PlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PlcIdentity();
        ~PlcIdentity();


}; // PlcIdentity

class FramerelaympiIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FramerelaympiIdentity();
        ~FramerelaympiIdentity();


}; // FramerelaympiIdentity

class MvlIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MvlIdentity();
        ~MvlIdentity();


}; // MvlIdentity

class PropmultiplexorIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropmultiplexorIdentity();
        ~PropmultiplexorIdentity();


}; // PropmultiplexorIdentity

class VoicedidIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoicedidIdentity();
        ~VoicedidIdentity();


}; // VoicedidIdentity

class CompositelinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CompositelinkIdentity();
        ~CompositelinkIdentity();


}; // CompositelinkIdentity

class Proteon10MbitIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Proteon10MbitIdentity();
        ~Proteon10MbitIdentity();


}; // Proteon10MbitIdentity

class AtmbondIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmbondIdentity();
        ~AtmbondIdentity();


}; // AtmbondIdentity

class Frf16MfrbundleIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Frf16MfrbundleIdentity();
        ~Frf16MfrbundleIdentity();


}; // Frf16MfrbundleIdentity

class CctemulIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CctemulIdentity();
        ~CctemulIdentity();


}; // CctemulIdentity

class MplstunnelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MplstunnelIdentity();
        ~MplstunnelIdentity();


}; // MplstunnelIdentity

class GponIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        GponIdentity();
        ~GponIdentity();


}; // GponIdentity

class VdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VdslIdentity();
        ~VdslIdentity();


}; // VdslIdentity

class PosIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PosIdentity();
        ~PosIdentity();


}; // PosIdentity

class Ieee8023AdlagIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee8023AdlagIdentity();
        ~Ieee8023AdlagIdentity();


}; // Ieee8023AdlagIdentity

class DocscablemaclayerIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscablemaclayerIdentity();
        ~DocscablemaclayerIdentity();


}; // DocscablemaclayerIdentity

class DocscablemcmtsdownstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscablemcmtsdownstreamIdentity();
        ~DocscablemcmtsdownstreamIdentity();


}; // DocscablemcmtsdownstreamIdentity

class PppIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PppIdentity();
        ~PppIdentity();


}; // PppIdentity

class FramerelayIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FramerelayIdentity();
        ~FramerelayIdentity();


}; // FramerelayIdentity

class EplrsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        EplrsIdentity();
        ~EplrsIdentity();


}; // EplrsIdentity

class VmwarenicteamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VmwarenicteamIdentity();
        ~VmwarenicteamIdentity();


}; // VmwarenicteamIdentity

class CabledownstreamrfportIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CabledownstreamrfportIdentity();
        ~CabledownstreamrfportIdentity();


}; // CabledownstreamrfportIdentity

class MacsecuncontrolledifIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MacsecuncontrolledifIdentity();
        ~MacsecuncontrolledifIdentity();


}; // MacsecuncontrolledifIdentity

class Iso88023CsmacdIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88023CsmacdIdentity();
        ~Iso88023CsmacdIdentity();


}; // Iso88023CsmacdIdentity

class UsbIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        UsbIdentity();
        ~UsbIdentity();


}; // UsbIdentity

class AtmfuniIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmfuniIdentity();
        ~AtmfuniIdentity();


}; // AtmfuniIdentity

class TelinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        TelinkIdentity();
        ~TelinkIdentity();


}; // TelinkIdentity

class Pon622Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Pon622Identity();
        ~Pon622Identity();


}; // Pon622Identity

class EconetIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        EconetIdentity();
        ~EconetIdentity();


}; // EconetIdentity

class TdlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        TdlcIdentity();
        ~TdlcIdentity();


}; // TdlcIdentity

class Ds0BundleIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ds0BundleIdentity();
        ~Ds0BundleIdentity();


}; // Ds0BundleIdentity

class FastIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FastIdentity();
        ~FastIdentity();


}; // FastIdentity

class Ieee1394Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee1394Identity();
        ~Ieee1394Identity();


}; // Ieee1394Identity

class CblvectastarIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CblvectastarIdentity();
        ~CblvectastarIdentity();


}; // CblvectastarIdentity

class RsrbIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        RsrbIdentity();
        ~RsrbIdentity();


}; // RsrbIdentity

class FramerelayinterconnectIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FramerelayinterconnectIdentity();
        ~FramerelayinterconnectIdentity();


}; // FramerelayinterconnectIdentity

class IsdnsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IsdnsIdentity();
        ~IsdnsIdentity();


}; // IsdnsIdentity

class PppmultilinkbundleIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PppmultilinkbundleIdentity();
        ~PppmultilinkbundleIdentity();


}; // PppmultilinkbundleIdentity

class Aflane8025Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Aflane8025Identity();
        ~Aflane8025Identity();


}; // Aflane8025Identity

class LapbIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LapbIdentity();
        ~LapbIdentity();


}; // LapbIdentity

class Aflane8023Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Aflane8023Identity();
        ~Aflane8023Identity();


}; // Aflane8023Identity

class LapdIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LapdIdentity();
        ~LapdIdentity();


}; // LapdIdentity

class IsdnuIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IsdnuIdentity();
        ~IsdnuIdentity();


}; // IsdnuIdentity

class LapfIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LapfIdentity();
        ~LapfIdentity();


}; // LapfIdentity

class CapwapwtpvirtualradioIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CapwapwtpvirtualradioIdentity();
        ~CapwapwtpvirtualradioIdentity();


}; // CapwapwtpvirtualradioIdentity

class IfvfitypeIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IfvfitypeIdentity();
        ~IfvfitypeIdentity();


}; // IfvfitypeIdentity

class X25HuntgroupIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        X25HuntgroupIdentity();
        ~X25HuntgroupIdentity();


}; // X25HuntgroupIdentity

class ParaIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ParaIdentity();
        ~ParaIdentity();


}; // ParaIdentity

class MacseccontrolledifIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MacseccontrolledifIdentity();
        ~MacseccontrolledifIdentity();


}; // MacseccontrolledifIdentity

class Iso88024TokenbusIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88024TokenbusIdentity();
        ~Iso88024TokenbusIdentity();


}; // Iso88024TokenbusIdentity

class LocaltalkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        LocaltalkIdentity();
        ~LocaltalkIdentity();


}; // LocaltalkIdentity

class HyperchannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HyperchannelIdentity();
        ~HyperchannelIdentity();


}; // HyperchannelIdentity

class MediamailoveripIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MediamailoveripIdentity();
        ~MediamailoveripIdentity();


}; // MediamailoveripIdentity

class IfGsnIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IfGsnIdentity();
        ~IfGsnIdentity();


}; // IfGsnIdentity

class Capwapdot11ProfileIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Capwapdot11ProfileIdentity();
        ~Capwapdot11ProfileIdentity();


}; // Capwapdot11ProfileIdentity

class L3IpxvlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        L3IpxvlanIdentity();
        ~L3IpxvlanIdentity();


}; // L3IpxvlanIdentity

class AtmsubinterfaceIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmsubinterfaceIdentity();
        ~AtmsubinterfaceIdentity();


}; // AtmsubinterfaceIdentity

class PrimaryisdnIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PrimaryisdnIdentity();
        ~PrimaryisdnIdentity();


}; // PrimaryisdnIdentity

class Proteon80MbitIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Proteon80MbitIdentity();
        ~Proteon80MbitIdentity();


}; // Proteon80MbitIdentity

class Iso88026ManIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88026ManIdentity();
        ~Iso88026ManIdentity();


}; // Iso88026ManIdentity

class DigitalwrapperoverheadchannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DigitalwrapperoverheadchannelIdentity();
        ~DigitalwrapperoverheadchannelIdentity();


}; // DigitalwrapperoverheadchannelIdentity

class DocscableupstreamchannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DocscableupstreamchannelIdentity();
        ~DocscableupstreamchannelIdentity();


}; // DocscableupstreamchannelIdentity

class OpticalchannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OpticalchannelIdentity();
        ~OpticalchannelIdentity();


}; // OpticalchannelIdentity

class EthernetcsmacdIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        EthernetcsmacdIdentity();
        ~EthernetcsmacdIdentity();


}; // EthernetcsmacdIdentity

class BitsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        BitsIdentity();
        ~BitsIdentity();


}; // BitsIdentity

class TunnelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        TunnelIdentity();
        ~TunnelIdentity();


}; // TunnelIdentity

class Hdsl2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Hdsl2Identity();
        ~Hdsl2Identity();


}; // Hdsl2Identity

class FramerelayserviceIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FramerelayserviceIdentity();
        ~FramerelayserviceIdentity();


}; // FramerelayserviceIdentity

class MplsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        MplsIdentity();
        ~MplsIdentity();


}; // MplsIdentity

class Ieee80211Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee80211Identity();
        ~Ieee80211Identity();


}; // Ieee80211Identity

class Ieee80212Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee80212Identity();
        ~Ieee80212Identity();


}; // Ieee80212Identity

class Mocaversion1Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Mocaversion1Identity();
        ~Mocaversion1Identity();


}; // Mocaversion1Identity

class SonetIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SonetIdentity();
        ~SonetIdentity();


}; // SonetIdentity

class EsconIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        EsconIdentity();
        ~EsconIdentity();


}; // EsconIdentity

class AlueponlogicallinkIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AlueponlogicallinkIdentity();
        ~AlueponlogicallinkIdentity();


}; // AlueponlogicallinkIdentity

class G703At2MbIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        G703At2MbIdentity();
        ~G703At2MbIdentity();


}; // G703At2MbIdentity

class UltraIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        UltraIdentity();
        ~UltraIdentity();


}; // UltraIdentity

class DvbrccdownstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbrccdownstreamIdentity();
        ~DvbrccdownstreamIdentity();


}; // DvbrccdownstreamIdentity

class SiptgIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SiptgIdentity();
        ~SiptgIdentity();


}; // SiptgIdentity

class SmdsicipIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SmdsicipIdentity();
        ~SmdsicipIdentity();


}; // SmdsicipIdentity

class BridgeIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        BridgeIdentity();
        ~BridgeIdentity();


}; // BridgeIdentity

class AtmlogicalIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmlogicalIdentity();
        ~AtmlogicalIdentity();


}; // AtmlogicalIdentity

class ProppointtopointserialIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ProppointtopointserialIdentity();
        ~ProppointtopointserialIdentity();


}; // ProppointtopointserialIdentity

class V35Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        V35Identity();
        ~V35Identity();


}; // V35Identity

class V36Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        V36Identity();
        ~V36Identity();


}; // V36Identity

class V37Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        V37Identity();
        ~V37Identity();


}; // V37Identity

class IpIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpIdentity();
        ~IpIdentity();


}; // IpIdentity

class Gr303IdtIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Gr303IdtIdentity();
        ~Gr303IdtIdentity();


}; // Gr303IdtIdentity

class BasicisdnIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        BasicisdnIdentity();
        ~BasicisdnIdentity();


}; // BasicisdnIdentity

class G703At64KIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        G703At64KIdentity();
        ~G703At64KIdentity();


}; // G703At64KIdentity

class ArcnetplusIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ArcnetplusIdentity();
        ~ArcnetplusIdentity();


}; // ArcnetplusIdentity

class PipIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PipIdentity();
        ~PipIdentity();


}; // PipIdentity

class DtmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DtmIdentity();
        ~DtmIdentity();


}; // DtmIdentity

class SlipIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SlipIdentity();
        ~SlipIdentity();


}; // SlipIdentity

class Hiperlan2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Hiperlan2Identity();
        ~Hiperlan2Identity();


}; // Hiperlan2Identity

class AdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AdslIdentity();
        ~AdslIdentity();


}; // AdslIdentity

class Ieee80216WmanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Ieee80216WmanIdentity();
        ~Ieee80216WmanIdentity();


}; // Ieee80216WmanIdentity

class AtmimaIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmimaIdentity();
        ~AtmimaIdentity();


}; // AtmimaIdentity

class IsdnIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IsdnIdentity();
        ~IsdnIdentity();


}; // IsdnIdentity

class Capwapdot11BssIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Capwapdot11BssIdentity();
        ~Capwapdot11BssIdentity();


}; // Capwapdot11BssIdentity

class SipIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SipIdentity();
        ~SipIdentity();


}; // SipIdentity

class Pdnetherloop2Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Pdnetherloop2Identity();
        ~Pdnetherloop2Identity();


}; // Pdnetherloop2Identity

class VoiceebsIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceebsIdentity();
        ~VoiceebsIdentity();


}; // VoiceebsIdentity

class IpforwardIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpforwardIdentity();
        ~IpforwardIdentity();


}; // IpforwardIdentity

class Iso88025CrfpintIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88025CrfpintIdentity();
        ~Iso88025CrfpintIdentity();


}; // Iso88025CrfpintIdentity

class PropvirtualIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropvirtualIdentity();
        ~PropvirtualIdentity();


}; // PropvirtualIdentity

class WwanppIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        WwanppIdentity();
        ~WwanppIdentity();


}; // WwanppIdentity

class OtherIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OtherIdentity();
        ~OtherIdentity();


}; // OtherIdentity

class Pon155Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Pon155Identity();
        ~Pon155Identity();


}; // Pon155Identity

class QamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        QamIdentity();
        ~QamIdentity();


}; // QamIdentity

class OtnoduIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        OtnoduIdentity();
        ~OtnoduIdentity();


}; // OtnoduIdentity

class Iso88025FiberIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88025FiberIdentity();
        ~Iso88025FiberIdentity();


}; // Iso88025FiberIdentity

class ChannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ChannelIdentity();
        ~ChannelIdentity();


}; // ChannelIdentity

class VoiceemfgdIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoiceemfgdIdentity();
        ~VoiceemfgdIdentity();


}; // VoiceemfgdIdentity

class AlugponphysicaluniIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AlugponphysicaluniIdentity();
        ~AlugponphysicaluniIdentity();


}; // AlugponphysicaluniIdentity

class A12MppswitchIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        A12MppswitchIdentity();
        ~A12MppswitchIdentity();


}; // A12MppswitchIdentity

class IlanIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IlanIdentity();
        ~IlanIdentity();


}; // IlanIdentity

class Pdnetherloop1Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Pdnetherloop1Identity();
        ~Pdnetherloop1Identity();


}; // Pdnetherloop1Identity

class X213Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        X213Identity();
        ~X213Identity();


}; // X213Identity

class SonetpathIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SonetpathIdentity();
        ~SonetpathIdentity();


}; // SonetpathIdentity

class VoicefgdeanaIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VoicefgdeanaIdentity();
        ~VoicefgdeanaIdentity();


}; // VoicefgdeanaIdentity

class Iso88025TokenringIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Iso88025TokenringIdentity();
        ~Iso88025TokenringIdentity();


}; // Iso88025TokenringIdentity

class PropatmIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        PropatmIdentity();
        ~PropatmIdentity();


}; // PropatmIdentity

class AlueponphysicaluniIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AlueponphysicaluniIdentity();
        ~AlueponphysicaluniIdentity();


}; // AlueponphysicaluniIdentity

class StacktostackIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        StacktostackIdentity();
        ~StacktostackIdentity();


}; // StacktostackIdentity

class FrforwardIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FrforwardIdentity();
        ~FrforwardIdentity();


}; // FrforwardIdentity

class HomepnaIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        HomepnaIdentity();
        ~HomepnaIdentity();


}; // HomepnaIdentity

class SdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        SdslIdentity();
        ~SdslIdentity();


}; // SdslIdentity

class VirtualipaddressIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        VirtualipaddressIdentity();
        ~VirtualipaddressIdentity();


}; // VirtualipaddressIdentity

class BscIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        BscIdentity();
        ~BscIdentity();


}; // BscIdentity

class AtmradioIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AtmradioIdentity();
        ~AtmradioIdentity();


}; // AtmradioIdentity

class AviciopticaletherIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        AviciopticaletherIdentity();
        ~AviciopticaletherIdentity();


}; // AviciopticaletherIdentity

class G9981Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        G9981Identity();
        ~G9981Identity();


}; // G9981Identity

class FibrechannelIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        FibrechannelIdentity();
        ~FibrechannelIdentity();


}; // FibrechannelIdentity

class ShdslIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ShdslIdentity();
        ~ShdslIdentity();


}; // ShdslIdentity

class EonIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        EonIdentity();
        ~EonIdentity();


}; // EonIdentity

class H323GatekeeperIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        H323GatekeeperIdentity();
        ~H323GatekeeperIdentity();


}; // H323GatekeeperIdentity

class Hdh1822Identity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        Hdh1822Identity();
        ~Hdh1822Identity();


}; // Hdh1822Identity

class DvbrccupstreamIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        DvbrccupstreamIdentity();
        ~DvbrccupstreamIdentity();


}; // DvbrccupstreamIdentity

class NsipIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        NsipIdentity();
        ~NsipIdentity();


}; // NsipIdentity

class TransphdlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        TransphdlcIdentity();
        ~TransphdlcIdentity();


}; // TransphdlcIdentity

class TermpadIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        TermpadIdentity();
        ~TermpadIdentity();


}; // TermpadIdentity

class IpovercdlcIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        IpovercdlcIdentity();
        ~IpovercdlcIdentity();


}; // IpovercdlcIdentity

class CesIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        CesIdentity();
        ~CesIdentity();


}; // CesIdentity

class ModemIdentity : public iana_if_type::IanaInterfaceTypeIdentity, virtual Identity
{
    public:
        ModemIdentity();
        ~ModemIdentity();


}; // ModemIdentity


}
}

#endif /* _IANA_IF_TYPE_ */

