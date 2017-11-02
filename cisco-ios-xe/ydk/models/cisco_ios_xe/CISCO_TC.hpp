#ifndef _CISCO_TC_
#define _CISCO_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_TC {

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

};

class CiscoRowOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeDependencies;
        static const ydk::Enum::YLeaf inactiveDependency;
        static const ydk::Enum::YLeaf missingDependency;

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

};

class CiscoAlarmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cleared;
        static const ydk::Enum::YLeaf indeterminate;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf info;

};

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

};


}
}

#endif /* _CISCO_TC_ */

