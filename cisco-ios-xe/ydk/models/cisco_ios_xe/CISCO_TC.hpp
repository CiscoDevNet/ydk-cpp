#ifndef _CISCO_TC_
#define _CISCO_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_TC {

class CiscoPortListRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneto2k;
        static const ydk::Enum::YLeaf twoKto4K;
        static const ydk::Enum::YLeaf fourKto6K;
        static const ydk::Enum::YLeaf sixKto8K;
        static const ydk::Enum::YLeaf eightKto10K;
        static const ydk::Enum::YLeaf tenKto12K;
        static const ydk::Enum::YLeaf twelveKto14K;
        static const ydk::Enum::YLeaf fourteenKto16K;

        static int get_enum_value(const std::string & name) {
            if (name == "oneto2k") return 1;
            if (name == "twoKto4K") return 2;
            if (name == "fourKto6K") return 3;
            if (name == "sixKto8K") return 4;
            if (name == "eightKto10K") return 5;
            if (name == "tenKto12K") return 6;
            if (name == "twelveKto14K") return 7;
            if (name == "fourteenKto16K") return 8;
            return -1;
        }
};

class CiscoNetworkProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf decnet;
        static const ydk::Enum::YLeaf pup;
        static const ydk::Enum::YLeaf chaos;
        static const ydk::Enum::YLeaf xns;
        static const ydk::Enum::YLeaf x121;
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf clns;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf vines;
        static const ydk::Enum::YLeaf cons;
        static const ydk::Enum::YLeaf apollo;
        static const ydk::Enum::YLeaf stun;
        static const ydk::Enum::YLeaf novell;
        static const ydk::Enum::YLeaf qllc;
        static const ydk::Enum::YLeaf snapshot;
        static const ydk::Enum::YLeaf atmIlmi;
        static const ydk::Enum::YLeaf bstun;
        static const ydk::Enum::YLeaf x25pvc;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf cdm;
        static const ydk::Enum::YLeaf nbf;
        static const ydk::Enum::YLeaf bpxIgx;
        static const ydk::Enum::YLeaf clnsPfx;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "decnet") return 2;
            if (name == "pup") return 3;
            if (name == "chaos") return 4;
            if (name == "xns") return 5;
            if (name == "x121") return 6;
            if (name == "appletalk") return 7;
            if (name == "clns") return 8;
            if (name == "lat") return 9;
            if (name == "vines") return 10;
            if (name == "cons") return 11;
            if (name == "apollo") return 12;
            if (name == "stun") return 13;
            if (name == "novell") return 14;
            if (name == "qllc") return 15;
            if (name == "snapshot") return 16;
            if (name == "atmIlmi") return 17;
            if (name == "bstun") return 18;
            if (name == "x25pvc") return 19;
            if (name == "ipv6") return 20;
            if (name == "cdm") return 21;
            if (name == "nbf") return 22;
            if (name == "bpxIgx") return 23;
            if (name == "clnsPfx") return 24;
            if (name == "http") return 25;
            if (name == "unknown") return 65535;
            return -1;
        }
};

class CiscoRowOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeDependencies;
        static const ydk::Enum::YLeaf inactiveDependency;
        static const ydk::Enum::YLeaf missingDependency;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "activeDependencies") return 2;
            if (name == "inactiveDependency") return 3;
            if (name == "missingDependency") return 4;
            return -1;
        }
};

class CiscoLocationClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf chassis;
        static const ydk::Enum::YLeaf shelf;
        static const ydk::Enum::YLeaf slot;
        static const ydk::Enum::YLeaf subSlot;
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf subPort;
        static const ydk::Enum::YLeaf channel;
        static const ydk::Enum::YLeaf subChannel;

        static int get_enum_value(const std::string & name) {
            if (name == "chassis") return 1;
            if (name == "shelf") return 2;
            if (name == "slot") return 3;
            if (name == "subSlot") return 4;
            if (name == "port") return 5;
            if (name == "subPort") return 6;
            if (name == "channel") return 7;
            if (name == "subChannel") return 8;
            return -1;
        }
};

class IfOperStatusReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hwFailure;
        static const ydk::Enum::YLeaf loopbackDiagFailure;
        static const ydk::Enum::YLeaf errorDisabled;
        static const ydk::Enum::YLeaf swFailure;
        static const ydk::Enum::YLeaf linkFailure;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf nonParticipating;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf vsanInactive;
        static const ydk::Enum::YLeaf adminDown;
        static const ydk::Enum::YLeaf channelAdminDown;
        static const ydk::Enum::YLeaf channelOperSuspended;
        static const ydk::Enum::YLeaf channelConfigurationInProgress;
        static const ydk::Enum::YLeaf rcfInProgress;
        static const ydk::Enum::YLeaf elpFailureIsolation;
        static const ydk::Enum::YLeaf escFailureIsolation;
        static const ydk::Enum::YLeaf domainOverlapIsolation;
        static const ydk::Enum::YLeaf domainAddrAssignFailureIsolation;
        static const ydk::Enum::YLeaf domainOtherSideEportIsolation;
        static const ydk::Enum::YLeaf domainInvalidRcfReceived;
        static const ydk::Enum::YLeaf domainManagerDisabled;
        static const ydk::Enum::YLeaf zoneMergeFailureIsolation;
        static const ydk::Enum::YLeaf vsanMismatchIsolation;
        static const ydk::Enum::YLeaf parentDown;
        static const ydk::Enum::YLeaf srcPortNotBound;
        static const ydk::Enum::YLeaf interfaceRemoved;
        static const ydk::Enum::YLeaf fcotNotPresent;
        static const ydk::Enum::YLeaf fcotVendorNotSupported;
        static const ydk::Enum::YLeaf incompatibleAdminMode;
        static const ydk::Enum::YLeaf incompatibleAdminSpeed;
        static const ydk::Enum::YLeaf suspendedByMode;
        static const ydk::Enum::YLeaf suspendedBySpeed;
        static const ydk::Enum::YLeaf suspendedByWWN;
        static const ydk::Enum::YLeaf domainMaxReTxFailure;
        static const ydk::Enum::YLeaf eppFailure;
        static const ydk::Enum::YLeaf portVsanMismatchIsolation;
        static const ydk::Enum::YLeaf loopbackIsolation;
        static const ydk::Enum::YLeaf upgradeInProgress;
        static const ydk::Enum::YLeaf incompatibleAdminRxBbCredit;
        static const ydk::Enum::YLeaf incompatibleAdminRxBufferSize;
        static const ydk::Enum::YLeaf portChannelMembersDown;
        static const ydk::Enum::YLeaf zoneRemoteNoRespIsolation;
        static const ydk::Enum::YLeaf firstPortUpAsEport;
        static const ydk::Enum::YLeaf firstPortNotUp;
        static const ydk::Enum::YLeaf peerFCIPPortClosedConnection;
        static const ydk::Enum::YLeaf peerFCIPPortResetConnection;
        static const ydk::Enum::YLeaf fcipPortMaxReTx;
        static const ydk::Enum::YLeaf fcipPortKeepAliveTimerExpire;
        static const ydk::Enum::YLeaf fcipPortPersistTimerExpire;
        static const ydk::Enum::YLeaf fcipPortSrcLinkDown;
        static const ydk::Enum::YLeaf fcipPortSrcAdminDown;
        static const ydk::Enum::YLeaf fcipPortAdminCfgChange;
        static const ydk::Enum::YLeaf fcipSrcPortRemoved;
        static const ydk::Enum::YLeaf fcipSrcModuleNotOnline;
        static const ydk::Enum::YLeaf invalidConfig;
        static const ydk::Enum::YLeaf portBindFailure;
        static const ydk::Enum::YLeaf portFabricBindFailure;
        static const ydk::Enum::YLeaf noCommonVsanIsolation;
        static const ydk::Enum::YLeaf ficonVsanDown;
        static const ydk::Enum::YLeaf invalidAttachment;
        static const ydk::Enum::YLeaf portBlocked;
        static const ydk::Enum::YLeaf incomAdminRxBbCreditPerBuf;
        static const ydk::Enum::YLeaf tooManyInvalidFlogis;
        static const ydk::Enum::YLeaf deniedDueToPortBinding;
        static const ydk::Enum::YLeaf elpFailureRevMismatch;
        static const ydk::Enum::YLeaf elpFailureClassFParamErr;
        static const ydk::Enum::YLeaf elpFailureClassNParamErr;
        static const ydk::Enum::YLeaf elpFailureUnknownFlowCtlCode;
        static const ydk::Enum::YLeaf elpFailureInvalidFlowCtlParam;
        static const ydk::Enum::YLeaf elpFailureInvalidPortName;
        static const ydk::Enum::YLeaf elpFailureInvalidSwitchName;
        static const ydk::Enum::YLeaf elpFailureRatovEdtovMismatch;
        static const ydk::Enum::YLeaf elpFailureLoopbackDetected;
        static const ydk::Enum::YLeaf elpFailureInvalidTxBbCredit;
        static const ydk::Enum::YLeaf elpFailureInvalidPayloadSize;
        static const ydk::Enum::YLeaf bundleMisCfg;
        static const ydk::Enum::YLeaf bitErrRuntimeThreshExceeded;
        static const ydk::Enum::YLeaf linkFailLinkReset;
        static const ydk::Enum::YLeaf linkFailPortInitFail;
        static const ydk::Enum::YLeaf linkFailPortUnusable;
        static const ydk::Enum::YLeaf linkFailLossOfSignal;
        static const ydk::Enum::YLeaf linkFailLossOfSync;
        static const ydk::Enum::YLeaf linkFailNosRcvd;
        static const ydk::Enum::YLeaf linkFailOLSRcvd;
        static const ydk::Enum::YLeaf linkFailDebounceTimeout;
        static const ydk::Enum::YLeaf linkFailLrRcvd;
        static const ydk::Enum::YLeaf linkFailCreditLoss;
        static const ydk::Enum::YLeaf linkFailRxQOverflow;
        static const ydk::Enum::YLeaf linkFailTooManyInterrupts;
        static const ydk::Enum::YLeaf linkFailLipRcvdBb;
        static const ydk::Enum::YLeaf linkFailBbCreditLoss;
        static const ydk::Enum::YLeaf linkFailOpenPrimSignalTimeout;
        static const ydk::Enum::YLeaf linkFailOpenPrimSignalReturned;
        static const ydk::Enum::YLeaf linkFailLipF8Rcvd;
        static const ydk::Enum::YLeaf linkFailLineCardPortShutdown;
        static const ydk::Enum::YLeaf fcspAuthenfailure;
        static const ydk::Enum::YLeaf fcotChecksumError;
        static const ydk::Enum::YLeaf ohmsExtLoopbackTest;
        static const ydk::Enum::YLeaf invalidFabricBindExchange;
        static const ydk::Enum::YLeaf tovMismatch;
        static const ydk::Enum::YLeaf ficonNotEnabled;
        static const ydk::Enum::YLeaf ficonNoPortNumber;
        static const ydk::Enum::YLeaf ficonBeingEnabled;
        static const ydk::Enum::YLeaf ePortProhibited;
        static const ydk::Enum::YLeaf portGracefulShutdown;
        static const ydk::Enum::YLeaf trunkNotFullyActive;
        static const ydk::Enum::YLeaf fabricBindingSwitchWwnNotFound;
        static const ydk::Enum::YLeaf fabricBindingDomainInvalid;
        static const ydk::Enum::YLeaf fabricBindingDbMismatch;
        static const ydk::Enum::YLeaf fabricBindingNoRspFromPeer;
        static const ydk::Enum::YLeaf dpvmVsanSuspended;
        static const ydk::Enum::YLeaf dpvmVsanNotFound;
        static const ydk::Enum::YLeaf trackedPortDown;
        static const ydk::Enum::YLeaf ecSuspendedOnLoop;
        static const ydk::Enum::YLeaf isolateBundleMisCfg;
        static const ydk::Enum::YLeaf noPeerBundleSupport;
        static const ydk::Enum::YLeaf portBringupIsolation;
        static const ydk::Enum::YLeaf domainNotAllowedIsolated;
        static const ydk::Enum::YLeaf virtualIvrDomainOverlapIsolation;
        static const ydk::Enum::YLeaf outOfService;
        static const ydk::Enum::YLeaf portAuthFailed;
        static const ydk::Enum::YLeaf bundleStandby;
        static const ydk::Enum::YLeaf portConnectorTypeErr;
        static const ydk::Enum::YLeaf errorDisabledReInitLmtReached;
        static const ydk::Enum::YLeaf ficonDupPortNum;
        static const ydk::Enum::YLeaf localRcf;
        static const ydk::Enum::YLeaf twoSwitchesWithSameWWN;
        static const ydk::Enum::YLeaf invalidOtherSidePrincEFPReqRecd;
        static const ydk::Enum::YLeaf domainOther;
        static const ydk::Enum::YLeaf elpFailureAllZeroPeerWWNRcvd;
        static const ydk::Enum::YLeaf preferredPathIsolation;
        static const ydk::Enum::YLeaf fcRedirectIsolation;
        static const ydk::Enum::YLeaf portActLicenseNotAvailable;
        static const ydk::Enum::YLeaf sdmIsolation;
        static const ydk::Enum::YLeaf fcidAllocationFailed;
        static const ydk::Enum::YLeaf externallyDisabled;
        static const ydk::Enum::YLeaf unavailableNPVUpstreamPort;
        static const ydk::Enum::YLeaf unavailableNPVPrefUpstreamPort;
        static const ydk::Enum::YLeaf sfpReadError;
        static const ydk::Enum::YLeaf stickyDownOnLinkFailure;
        static const ydk::Enum::YLeaf tooManyLinkFlapsErr;
        static const ydk::Enum::YLeaf unidirectionalUDLD;
        static const ydk::Enum::YLeaf txRxLoopUDLD;
        static const ydk::Enum::YLeaf neighborMismatchUDLD;
        static const ydk::Enum::YLeaf authzPending;
        static const ydk::Enum::YLeaf hotStdbyInBundle;
        static const ydk::Enum::YLeaf incompleteConfig;
        static const ydk::Enum::YLeaf incompleteTunnelCfg;
        static const ydk::Enum::YLeaf hwProgrammingFailed;
        static const ydk::Enum::YLeaf tunnelDstUnreachable;
        static const ydk::Enum::YLeaf suspendByMtu;
        static const ydk::Enum::YLeaf sfpInvalid;
        static const ydk::Enum::YLeaf sfpAbsent;
        static const ydk::Enum::YLeaf portCapabilitiesUnknown;
        static const ydk::Enum::YLeaf channelErrDisabled;
        static const ydk::Enum::YLeaf vrfMismatch;
        static const ydk::Enum::YLeaf vrfForwardReferencing;
        static const ydk::Enum::YLeaf dupTunnelConfigDetected;
        static const ydk::Enum::YLeaf primaryVLANDown;
        static const ydk::Enum::YLeaf vrfUnusable;
        static const ydk::Enum::YLeaf errDisableHandShkFailure;
        static const ydk::Enum::YLeaf errDisabledBPDUGuard;
        static const ydk::Enum::YLeaf dot1xSecViolationErrDisabled;
        static const ydk::Enum::YLeaf emptyEchoUDLD;
        static const ydk::Enum::YLeaf vfTaggingCapErr;
        static const ydk::Enum::YLeaf portDisabled;
        static const ydk::Enum::YLeaf tunnelModeNotConfigured;
        static const ydk::Enum::YLeaf tunnelSrcNotConfigured;
        static const ydk::Enum::YLeaf tunnelDstNotConfigured;
        static const ydk::Enum::YLeaf tunnelUnableToResolveSrcIP;
        static const ydk::Enum::YLeaf tunnelUnableToResolveDstIP;
        static const ydk::Enum::YLeaf tunnelVrfDown;
        static const ydk::Enum::YLeaf sifAdminDown;
        static const ydk::Enum::YLeaf phyIntfDown;
        static const ydk::Enum::YLeaf ifSifLimitExceeded;
        static const ydk::Enum::YLeaf sifHoldDown;
        static const ydk::Enum::YLeaf noFcoe;
        static const ydk::Enum::YLeaf dcxCompatMismatch;
        static const ydk::Enum::YLeaf isolateBundleLimitExceeded;
        static const ydk::Enum::YLeaf sifNotBound;
        static const ydk::Enum::YLeaf errDisabledLacpMiscfg;
        static const ydk::Enum::YLeaf satFabricIfDown;
        static const ydk::Enum::YLeaf invalidSatFabricIf;
        static const ydk::Enum::YLeaf noRemoteChassis;
        static const ydk::Enum::YLeaf vicEnableNotReceived;
        static const ydk::Enum::YLeaf vicDisableReceived;
        static const ydk::Enum::YLeaf vlanVsanMappingNotEnabled;
        static const ydk::Enum::YLeaf stpNotFwdingInFcoeMappedVlan;
        static const ydk::Enum::YLeaf moduleOffline;
        static const ydk::Enum::YLeaf udldAggModeLinkFailure;
        static const ydk::Enum::YLeaf stpInconsVpcPeerDisabled;
        static const ydk::Enum::YLeaf setPortStateFailed;
        static const ydk::Enum::YLeaf suspendedByVpc;
        static const ydk::Enum::YLeaf vpcCfgInProgress;
        static const ydk::Enum::YLeaf vpcPeerLinkDown;
        static const ydk::Enum::YLeaf vpcNoRspFromPeer;
        static const ydk::Enum::YLeaf protoPortSuspend;
        static const ydk::Enum::YLeaf tunnelSrcDown;
        static const ydk::Enum::YLeaf cdpInfoUnavailable;
        static const ydk::Enum::YLeaf fexSfpInvalid;
        static const ydk::Enum::YLeaf errDisabledIpConflict;
        static const ydk::Enum::YLeaf fcotClkRateMismatch;
        static const ydk::Enum::YLeaf portGuardTrustSecViolation;
        static const ydk::Enum::YLeaf sdpTimeout;
        static const ydk::Enum::YLeaf satIncompatTopo;
        static const ydk::Enum::YLeaf waitForFlogi;
        static const ydk::Enum::YLeaf satNotConfigured;
        static const ydk::Enum::YLeaf npivNotEnabledInUpstream;
        static const ydk::Enum::YLeaf vsanMismatchWithUpstreamSwPort;
        static const ydk::Enum::YLeaf portGuardBitErrRate;
        static const ydk::Enum::YLeaf portGuardSigLoss;
        static const ydk::Enum::YLeaf portGuardSyncLoss;
        static const ydk::Enum::YLeaf portGuardLinkReset;
        static const ydk::Enum::YLeaf portGuardCreditLoss;
        static const ydk::Enum::YLeaf ipQosMgrPolicyAppFailure;
        static const ydk::Enum::YLeaf pauseRateLimitErrDisabled;
        static const ydk::Enum::YLeaf lstGrpUplinkDown;
        static const ydk::Enum::YLeaf stickyDnLinkFailure;
        static const ydk::Enum::YLeaf routerMacFailure;
        static const ydk::Enum::YLeaf dcxMultipleMsapIds;
        static const ydk::Enum::YLeaf dcxHundredPdusRcvdNoAck;
        static const ydk::Enum::YLeaf enmSatIncompatibleUplink;
        static const ydk::Enum::YLeaf enmLoopDetected;
        static const ydk::Enum::YLeaf nonStickyExternallyDisabled;
        static const ydk::Enum::YLeaf subGroupIdNotAssigned;
        static const ydk::Enum::YLeaf vemUnlicensed;
        static const ydk::Enum::YLeaf profileNotFound;
        static const ydk::Enum::YLeaf nonExistentVlan;
        static const ydk::Enum::YLeaf vlanInvalidType;
        static const ydk::Enum::YLeaf vlanDown;
        static const ydk::Enum::YLeaf vpcPeerUpgrade;
        static const ydk::Enum::YLeaf ipQosDcbxpCompatFailure;
        static const ydk::Enum::YLeaf nonCiscoHbaVfTag;
        static const ydk::Enum::YLeaf domainIdConfigMismatch;
        static const ydk::Enum::YLeaf sfpSpeedMismatch;
        static const ydk::Enum::YLeaf xcvrInitializing;
        static const ydk::Enum::YLeaf xcvrAbsent;
        static const ydk::Enum::YLeaf xcvrInvalid;
        static const ydk::Enum::YLeaf vfcBindingInvalid;
        static const ydk::Enum::YLeaf vlanNotFcoeEnabled;
        static const ydk::Enum::YLeaf pvlanNativeVlanErr;
        static const ydk::Enum::YLeaf ethL2VlanDown;
        static const ydk::Enum::YLeaf ethIntfInvalidBinding;
        static const ydk::Enum::YLeaf pmonFailure;
        static const ydk::Enum::YLeaf l3NotReady;
        static const ydk::Enum::YLeaf speedMismatch;
        static const ydk::Enum::YLeaf flowControlMismatch;
        static const ydk::Enum::YLeaf vdcMode;
        static const ydk::Enum::YLeaf suspendedDueToMinLinks;
        static const ydk::Enum::YLeaf enmPinFailLinkDown;
        static const ydk::Enum::YLeaf inactiveM1PortFpathActiveVlan;
        static const ydk::Enum::YLeaf parentPortDown;
        static const ydk::Enum::YLeaf moduleRemoved;
        static const ydk::Enum::YLeaf corePortMct;
        static const ydk::Enum::YLeaf nonCorePortMct;
        static const ydk::Enum::YLeaf ficonInorderNotActive;
        static const ydk::Enum::YLeaf invalidEncapsulation;
        static const ydk::Enum::YLeaf modemLineDeasserted;
        static const ydk::Enum::YLeaf ipSecHndshkInProgress;
        static const ydk::Enum::YLeaf sfpEthCompliantErr;
        static const ydk::Enum::YLeaf cellularModemUnattached;
        static const ydk::Enum::YLeaf outOfGlblRxBuffers;
        static const ydk::Enum::YLeaf sfpFcCompliantErr;
        static const ydk::Enum::YLeaf ethIntfNotLicensed;
        static const ydk::Enum::YLeaf domainIdsInvalid;
        static const ydk::Enum::YLeaf fabricNameInvalid;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "none") return 2;
            if (name == "hwFailure") return 3;
            if (name == "loopbackDiagFailure") return 4;
            if (name == "errorDisabled") return 5;
            if (name == "swFailure") return 6;
            if (name == "linkFailure") return 7;
            if (name == "offline") return 8;
            if (name == "nonParticipating") return 9;
            if (name == "initializing") return 10;
            if (name == "vsanInactive") return 11;
            if (name == "adminDown") return 12;
            if (name == "channelAdminDown") return 13;
            if (name == "channelOperSuspended") return 14;
            if (name == "channelConfigurationInProgress") return 15;
            if (name == "rcfInProgress") return 16;
            if (name == "elpFailureIsolation") return 17;
            if (name == "escFailureIsolation") return 18;
            if (name == "domainOverlapIsolation") return 19;
            if (name == "domainAddrAssignFailureIsolation") return 20;
            if (name == "domainOtherSideEportIsolation") return 21;
            if (name == "domainInvalidRcfReceived") return 22;
            if (name == "domainManagerDisabled") return 23;
            if (name == "zoneMergeFailureIsolation") return 24;
            if (name == "vsanMismatchIsolation") return 25;
            if (name == "parentDown") return 26;
            if (name == "srcPortNotBound") return 27;
            if (name == "interfaceRemoved") return 28;
            if (name == "fcotNotPresent") return 29;
            if (name == "fcotVendorNotSupported") return 30;
            if (name == "incompatibleAdminMode") return 31;
            if (name == "incompatibleAdminSpeed") return 32;
            if (name == "suspendedByMode") return 33;
            if (name == "suspendedBySpeed") return 34;
            if (name == "suspendedByWWN") return 35;
            if (name == "domainMaxReTxFailure") return 36;
            if (name == "eppFailure") return 37;
            if (name == "portVsanMismatchIsolation") return 38;
            if (name == "loopbackIsolation") return 39;
            if (name == "upgradeInProgress") return 40;
            if (name == "incompatibleAdminRxBbCredit") return 41;
            if (name == "incompatibleAdminRxBufferSize") return 42;
            if (name == "portChannelMembersDown") return 43;
            if (name == "zoneRemoteNoRespIsolation") return 44;
            if (name == "firstPortUpAsEport") return 45;
            if (name == "firstPortNotUp") return 46;
            if (name == "peerFCIPPortClosedConnection") return 47;
            if (name == "peerFCIPPortResetConnection") return 48;
            if (name == "fcipPortMaxReTx") return 49;
            if (name == "fcipPortKeepAliveTimerExpire") return 50;
            if (name == "fcipPortPersistTimerExpire") return 51;
            if (name == "fcipPortSrcLinkDown") return 52;
            if (name == "fcipPortSrcAdminDown") return 53;
            if (name == "fcipPortAdminCfgChange") return 54;
            if (name == "fcipSrcPortRemoved") return 55;
            if (name == "fcipSrcModuleNotOnline") return 56;
            if (name == "invalidConfig") return 57;
            if (name == "portBindFailure") return 58;
            if (name == "portFabricBindFailure") return 59;
            if (name == "noCommonVsanIsolation") return 60;
            if (name == "ficonVsanDown") return 61;
            if (name == "invalidAttachment") return 62;
            if (name == "portBlocked") return 63;
            if (name == "incomAdminRxBbCreditPerBuf") return 64;
            if (name == "tooManyInvalidFlogis") return 65;
            if (name == "deniedDueToPortBinding") return 66;
            if (name == "elpFailureRevMismatch") return 67;
            if (name == "elpFailureClassFParamErr") return 68;
            if (name == "elpFailureClassNParamErr") return 69;
            if (name == "elpFailureUnknownFlowCtlCode") return 70;
            if (name == "elpFailureInvalidFlowCtlParam") return 71;
            if (name == "elpFailureInvalidPortName") return 72;
            if (name == "elpFailureInvalidSwitchName") return 73;
            if (name == "elpFailureRatovEdtovMismatch") return 74;
            if (name == "elpFailureLoopbackDetected") return 75;
            if (name == "elpFailureInvalidTxBbCredit") return 76;
            if (name == "elpFailureInvalidPayloadSize") return 77;
            if (name == "bundleMisCfg") return 78;
            if (name == "bitErrRuntimeThreshExceeded") return 79;
            if (name == "linkFailLinkReset") return 80;
            if (name == "linkFailPortInitFail") return 81;
            if (name == "linkFailPortUnusable") return 82;
            if (name == "linkFailLossOfSignal") return 83;
            if (name == "linkFailLossOfSync") return 84;
            if (name == "linkFailNosRcvd") return 85;
            if (name == "linkFailOLSRcvd") return 86;
            if (name == "linkFailDebounceTimeout") return 87;
            if (name == "linkFailLrRcvd") return 88;
            if (name == "linkFailCreditLoss") return 89;
            if (name == "linkFailRxQOverflow") return 90;
            if (name == "linkFailTooManyInterrupts") return 91;
            if (name == "linkFailLipRcvdBb") return 92;
            if (name == "linkFailBbCreditLoss") return 93;
            if (name == "linkFailOpenPrimSignalTimeout") return 94;
            if (name == "linkFailOpenPrimSignalReturned") return 95;
            if (name == "linkFailLipF8Rcvd") return 96;
            if (name == "linkFailLineCardPortShutdown") return 97;
            if (name == "fcspAuthenfailure") return 98;
            if (name == "fcotChecksumError") return 99;
            if (name == "ohmsExtLoopbackTest") return 100;
            if (name == "invalidFabricBindExchange") return 101;
            if (name == "tovMismatch") return 102;
            if (name == "ficonNotEnabled") return 103;
            if (name == "ficonNoPortNumber") return 104;
            if (name == "ficonBeingEnabled") return 105;
            if (name == "ePortProhibited") return 106;
            if (name == "portGracefulShutdown") return 107;
            if (name == "trunkNotFullyActive") return 108;
            if (name == "fabricBindingSwitchWwnNotFound") return 109;
            if (name == "fabricBindingDomainInvalid") return 110;
            if (name == "fabricBindingDbMismatch") return 111;
            if (name == "fabricBindingNoRspFromPeer") return 112;
            if (name == "dpvmVsanSuspended") return 113;
            if (name == "dpvmVsanNotFound") return 114;
            if (name == "trackedPortDown") return 115;
            if (name == "ecSuspendedOnLoop") return 116;
            if (name == "isolateBundleMisCfg") return 117;
            if (name == "noPeerBundleSupport") return 118;
            if (name == "portBringupIsolation") return 119;
            if (name == "domainNotAllowedIsolated") return 120;
            if (name == "virtualIvrDomainOverlapIsolation") return 121;
            if (name == "outOfService") return 122;
            if (name == "portAuthFailed") return 123;
            if (name == "bundleStandby") return 124;
            if (name == "portConnectorTypeErr") return 125;
            if (name == "errorDisabledReInitLmtReached") return 126;
            if (name == "ficonDupPortNum") return 127;
            if (name == "localRcf") return 128;
            if (name == "twoSwitchesWithSameWWN") return 129;
            if (name == "invalidOtherSidePrincEFPReqRecd") return 130;
            if (name == "domainOther") return 131;
            if (name == "elpFailureAllZeroPeerWWNRcvd") return 132;
            if (name == "preferredPathIsolation") return 133;
            if (name == "fcRedirectIsolation") return 134;
            if (name == "portActLicenseNotAvailable") return 135;
            if (name == "sdmIsolation") return 136;
            if (name == "fcidAllocationFailed") return 137;
            if (name == "externallyDisabled") return 138;
            if (name == "unavailableNPVUpstreamPort") return 139;
            if (name == "unavailableNPVPrefUpstreamPort") return 140;
            if (name == "sfpReadError") return 141;
            if (name == "stickyDownOnLinkFailure") return 142;
            if (name == "tooManyLinkFlapsErr") return 143;
            if (name == "unidirectionalUDLD") return 144;
            if (name == "txRxLoopUDLD") return 145;
            if (name == "neighborMismatchUDLD") return 146;
            if (name == "authzPending") return 147;
            if (name == "hotStdbyInBundle") return 148;
            if (name == "incompleteConfig") return 149;
            if (name == "incompleteTunnelCfg") return 150;
            if (name == "hwProgrammingFailed") return 151;
            if (name == "tunnelDstUnreachable") return 152;
            if (name == "suspendByMtu") return 153;
            if (name == "sfpInvalid") return 154;
            if (name == "sfpAbsent") return 155;
            if (name == "portCapabilitiesUnknown") return 156;
            if (name == "channelErrDisabled") return 157;
            if (name == "vrfMismatch") return 158;
            if (name == "vrfForwardReferencing") return 159;
            if (name == "dupTunnelConfigDetected") return 160;
            if (name == "primaryVLANDown") return 161;
            if (name == "vrfUnusable") return 162;
            if (name == "errDisableHandShkFailure") return 163;
            if (name == "errDisabledBPDUGuard") return 164;
            if (name == "dot1xSecViolationErrDisabled") return 165;
            if (name == "emptyEchoUDLD") return 166;
            if (name == "vfTaggingCapErr") return 167;
            if (name == "portDisabled") return 168;
            if (name == "tunnelModeNotConfigured") return 169;
            if (name == "tunnelSrcNotConfigured") return 170;
            if (name == "tunnelDstNotConfigured") return 171;
            if (name == "tunnelUnableToResolveSrcIP") return 172;
            if (name == "tunnelUnableToResolveDstIP") return 173;
            if (name == "tunnelVrfDown") return 174;
            if (name == "sifAdminDown") return 175;
            if (name == "phyIntfDown") return 176;
            if (name == "ifSifLimitExceeded") return 177;
            if (name == "sifHoldDown") return 178;
            if (name == "noFcoe") return 179;
            if (name == "dcxCompatMismatch") return 180;
            if (name == "isolateBundleLimitExceeded") return 181;
            if (name == "sifNotBound") return 182;
            if (name == "errDisabledLacpMiscfg") return 183;
            if (name == "satFabricIfDown") return 184;
            if (name == "invalidSatFabricIf") return 185;
            if (name == "noRemoteChassis") return 186;
            if (name == "vicEnableNotReceived") return 187;
            if (name == "vicDisableReceived") return 188;
            if (name == "vlanVsanMappingNotEnabled") return 189;
            if (name == "stpNotFwdingInFcoeMappedVlan") return 190;
            if (name == "moduleOffline") return 191;
            if (name == "udldAggModeLinkFailure") return 192;
            if (name == "stpInconsVpcPeerDisabled") return 193;
            if (name == "setPortStateFailed") return 194;
            if (name == "suspendedByVpc") return 195;
            if (name == "vpcCfgInProgress") return 196;
            if (name == "vpcPeerLinkDown") return 197;
            if (name == "vpcNoRspFromPeer") return 198;
            if (name == "protoPortSuspend") return 199;
            if (name == "tunnelSrcDown") return 200;
            if (name == "cdpInfoUnavailable") return 201;
            if (name == "fexSfpInvalid") return 202;
            if (name == "errDisabledIpConflict") return 203;
            if (name == "fcotClkRateMismatch") return 204;
            if (name == "portGuardTrustSecViolation") return 205;
            if (name == "sdpTimeout") return 206;
            if (name == "satIncompatTopo") return 207;
            if (name == "waitForFlogi") return 208;
            if (name == "satNotConfigured") return 209;
            if (name == "npivNotEnabledInUpstream") return 210;
            if (name == "vsanMismatchWithUpstreamSwPort") return 211;
            if (name == "portGuardBitErrRate") return 212;
            if (name == "portGuardSigLoss") return 213;
            if (name == "portGuardSyncLoss") return 214;
            if (name == "portGuardLinkReset") return 215;
            if (name == "portGuardCreditLoss") return 216;
            if (name == "ipQosMgrPolicyAppFailure") return 217;
            if (name == "pauseRateLimitErrDisabled") return 218;
            if (name == "lstGrpUplinkDown") return 219;
            if (name == "stickyDnLinkFailure") return 220;
            if (name == "routerMacFailure") return 221;
            if (name == "dcxMultipleMsapIds") return 222;
            if (name == "dcxHundredPdusRcvdNoAck") return 223;
            if (name == "enmSatIncompatibleUplink") return 224;
            if (name == "enmLoopDetected") return 225;
            if (name == "nonStickyExternallyDisabled") return 226;
            if (name == "subGroupIdNotAssigned") return 227;
            if (name == "vemUnlicensed") return 228;
            if (name == "profileNotFound") return 229;
            if (name == "nonExistentVlan") return 230;
            if (name == "vlanInvalidType") return 231;
            if (name == "vlanDown") return 232;
            if (name == "vpcPeerUpgrade") return 233;
            if (name == "ipQosDcbxpCompatFailure") return 234;
            if (name == "nonCiscoHbaVfTag") return 235;
            if (name == "domainIdConfigMismatch") return 236;
            if (name == "sfpSpeedMismatch") return 237;
            if (name == "xcvrInitializing") return 238;
            if (name == "xcvrAbsent") return 239;
            if (name == "xcvrInvalid") return 240;
            if (name == "vfcBindingInvalid") return 241;
            if (name == "vlanNotFcoeEnabled") return 242;
            if (name == "pvlanNativeVlanErr") return 243;
            if (name == "ethL2VlanDown") return 244;
            if (name == "ethIntfInvalidBinding") return 245;
            if (name == "pmonFailure") return 246;
            if (name == "l3NotReady") return 247;
            if (name == "speedMismatch") return 248;
            if (name == "flowControlMismatch") return 249;
            if (name == "vdcMode") return 250;
            if (name == "suspendedDueToMinLinks") return 251;
            if (name == "enmPinFailLinkDown") return 252;
            if (name == "inactiveM1PortFpathActiveVlan") return 253;
            if (name == "parentPortDown") return 254;
            if (name == "moduleRemoved") return 255;
            if (name == "corePortMct") return 256;
            if (name == "nonCorePortMct") return 257;
            if (name == "ficonInorderNotActive") return 258;
            if (name == "invalidEncapsulation") return 259;
            if (name == "modemLineDeasserted") return 260;
            if (name == "ipSecHndshkInProgress") return 261;
            if (name == "sfpEthCompliantErr") return 262;
            if (name == "cellularModemUnattached") return 263;
            if (name == "outOfGlblRxBuffers") return 264;
            if (name == "sfpFcCompliantErr") return 265;
            if (name == "ethIntfNotLicensed") return 266;
            if (name == "domainIdsInvalid") return 267;
            if (name == "fabricNameInvalid") return 268;
            return -1;
        }
};

class CiscoAlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cleared;
        static const ydk::Enum::YLeaf indeterminate;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf info;

        static int get_enum_value(const std::string & name) {
            if (name == "cleared") return 1;
            if (name == "indeterminate") return 2;
            if (name == "critical") return 3;
            if (name == "major") return 4;
            if (name == "minor") return 5;
            if (name == "warning") return 6;
            if (name == "info") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_TC_ */

