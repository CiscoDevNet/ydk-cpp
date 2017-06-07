#ifndef _CISCO_TC_
#define _CISCO_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_TC {

class CiscoportlistrangeEnum : public Enum
{
    public:
        static const Enum::YLeaf oneto2k;
        static const Enum::YLeaf twoKto4K;
        static const Enum::YLeaf fourKto6K;
        static const Enum::YLeaf sixKto8K;
        static const Enum::YLeaf eightKto10K;
        static const Enum::YLeaf tenKto12K;
        static const Enum::YLeaf twelveKto14K;
        static const Enum::YLeaf fourteenKto16K;

};

class CisconetworkprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf decnet;
        static const Enum::YLeaf pup;
        static const Enum::YLeaf chaos;
        static const Enum::YLeaf xns;
        static const Enum::YLeaf x121;
        static const Enum::YLeaf appletalk;
        static const Enum::YLeaf clns;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf vines;
        static const Enum::YLeaf cons;
        static const Enum::YLeaf apollo;
        static const Enum::YLeaf stun;
        static const Enum::YLeaf novell;
        static const Enum::YLeaf qllc;
        static const Enum::YLeaf snapshot;
        static const Enum::YLeaf atmIlmi;
        static const Enum::YLeaf bstun;
        static const Enum::YLeaf x25pvc;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf cdm;
        static const Enum::YLeaf nbf;
        static const Enum::YLeaf bpxIgx;
        static const Enum::YLeaf clnsPfx;
        static const Enum::YLeaf http;
        static const Enum::YLeaf unknown;

};

class CiscorowoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf activeDependencies;
        static const Enum::YLeaf inactiveDependency;
        static const Enum::YLeaf missingDependency;

};

class CiscolocationclassEnum : public Enum
{
    public:
        static const Enum::YLeaf chassis;
        static const Enum::YLeaf shelf;
        static const Enum::YLeaf slot;
        static const Enum::YLeaf subSlot;
        static const Enum::YLeaf port;
        static const Enum::YLeaf subPort;
        static const Enum::YLeaf channel;
        static const Enum::YLeaf subChannel;

};

class IfoperstatusreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf none;
        static const Enum::YLeaf hwFailure;
        static const Enum::YLeaf loopbackDiagFailure;
        static const Enum::YLeaf errorDisabled;
        static const Enum::YLeaf swFailure;
        static const Enum::YLeaf linkFailure;
        static const Enum::YLeaf offline;
        static const Enum::YLeaf nonParticipating;
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf vsanInactive;
        static const Enum::YLeaf adminDown;
        static const Enum::YLeaf channelAdminDown;
        static const Enum::YLeaf channelOperSuspended;
        static const Enum::YLeaf channelConfigurationInProgress;
        static const Enum::YLeaf rcfInProgress;
        static const Enum::YLeaf elpFailureIsolation;
        static const Enum::YLeaf escFailureIsolation;
        static const Enum::YLeaf domainOverlapIsolation;
        static const Enum::YLeaf domainAddrAssignFailureIsolation;
        static const Enum::YLeaf domainOtherSideEportIsolation;
        static const Enum::YLeaf domainInvalidRcfReceived;
        static const Enum::YLeaf domainManagerDisabled;
        static const Enum::YLeaf zoneMergeFailureIsolation;
        static const Enum::YLeaf vsanMismatchIsolation;
        static const Enum::YLeaf parentDown;
        static const Enum::YLeaf srcPortNotBound;
        static const Enum::YLeaf interfaceRemoved;
        static const Enum::YLeaf fcotNotPresent;
        static const Enum::YLeaf fcotVendorNotSupported;
        static const Enum::YLeaf incompatibleAdminMode;
        static const Enum::YLeaf incompatibleAdminSpeed;
        static const Enum::YLeaf suspendedByMode;
        static const Enum::YLeaf suspendedBySpeed;
        static const Enum::YLeaf suspendedByWWN;
        static const Enum::YLeaf domainMaxReTxFailure;
        static const Enum::YLeaf eppFailure;
        static const Enum::YLeaf portVsanMismatchIsolation;
        static const Enum::YLeaf loopbackIsolation;
        static const Enum::YLeaf upgradeInProgress;
        static const Enum::YLeaf incompatibleAdminRxBbCredit;
        static const Enum::YLeaf incompatibleAdminRxBufferSize;
        static const Enum::YLeaf portChannelMembersDown;
        static const Enum::YLeaf zoneRemoteNoRespIsolation;
        static const Enum::YLeaf firstPortUpAsEport;
        static const Enum::YLeaf firstPortNotUp;
        static const Enum::YLeaf peerFCIPPortClosedConnection;
        static const Enum::YLeaf peerFCIPPortResetConnection;
        static const Enum::YLeaf fcipPortMaxReTx;
        static const Enum::YLeaf fcipPortKeepAliveTimerExpire;
        static const Enum::YLeaf fcipPortPersistTimerExpire;
        static const Enum::YLeaf fcipPortSrcLinkDown;
        static const Enum::YLeaf fcipPortSrcAdminDown;
        static const Enum::YLeaf fcipPortAdminCfgChange;
        static const Enum::YLeaf fcipSrcPortRemoved;
        static const Enum::YLeaf fcipSrcModuleNotOnline;
        static const Enum::YLeaf invalidConfig;
        static const Enum::YLeaf portBindFailure;
        static const Enum::YLeaf portFabricBindFailure;
        static const Enum::YLeaf noCommonVsanIsolation;
        static const Enum::YLeaf ficonVsanDown;
        static const Enum::YLeaf invalidAttachment;
        static const Enum::YLeaf portBlocked;
        static const Enum::YLeaf incomAdminRxBbCreditPerBuf;
        static const Enum::YLeaf tooManyInvalidFlogis;
        static const Enum::YLeaf deniedDueToPortBinding;
        static const Enum::YLeaf elpFailureRevMismatch;
        static const Enum::YLeaf elpFailureClassFParamErr;
        static const Enum::YLeaf elpFailureClassNParamErr;
        static const Enum::YLeaf elpFailureUnknownFlowCtlCode;
        static const Enum::YLeaf elpFailureInvalidFlowCtlParam;
        static const Enum::YLeaf elpFailureInvalidPortName;
        static const Enum::YLeaf elpFailureInvalidSwitchName;
        static const Enum::YLeaf elpFailureRatovEdtovMismatch;
        static const Enum::YLeaf elpFailureLoopbackDetected;
        static const Enum::YLeaf elpFailureInvalidTxBbCredit;
        static const Enum::YLeaf elpFailureInvalidPayloadSize;
        static const Enum::YLeaf bundleMisCfg;
        static const Enum::YLeaf bitErrRuntimeThreshExceeded;
        static const Enum::YLeaf linkFailLinkReset;
        static const Enum::YLeaf linkFailPortInitFail;
        static const Enum::YLeaf linkFailPortUnusable;
        static const Enum::YLeaf linkFailLossOfSignal;
        static const Enum::YLeaf linkFailLossOfSync;
        static const Enum::YLeaf linkFailNosRcvd;
        static const Enum::YLeaf linkFailOLSRcvd;
        static const Enum::YLeaf linkFailDebounceTimeout;
        static const Enum::YLeaf linkFailLrRcvd;
        static const Enum::YLeaf linkFailCreditLoss;
        static const Enum::YLeaf linkFailRxQOverflow;
        static const Enum::YLeaf linkFailTooManyInterrupts;
        static const Enum::YLeaf linkFailLipRcvdBb;
        static const Enum::YLeaf linkFailBbCreditLoss;
        static const Enum::YLeaf linkFailOpenPrimSignalTimeout;
        static const Enum::YLeaf linkFailOpenPrimSignalReturned;
        static const Enum::YLeaf linkFailLipF8Rcvd;
        static const Enum::YLeaf linkFailLineCardPortShutdown;
        static const Enum::YLeaf fcspAuthenfailure;
        static const Enum::YLeaf fcotChecksumError;
        static const Enum::YLeaf ohmsExtLoopbackTest;
        static const Enum::YLeaf invalidFabricBindExchange;
        static const Enum::YLeaf tovMismatch;
        static const Enum::YLeaf ficonNotEnabled;
        static const Enum::YLeaf ficonNoPortNumber;
        static const Enum::YLeaf ficonBeingEnabled;
        static const Enum::YLeaf ePortProhibited;
        static const Enum::YLeaf portGracefulShutdown;
        static const Enum::YLeaf trunkNotFullyActive;
        static const Enum::YLeaf fabricBindingSwitchWwnNotFound;
        static const Enum::YLeaf fabricBindingDomainInvalid;
        static const Enum::YLeaf fabricBindingDbMismatch;
        static const Enum::YLeaf fabricBindingNoRspFromPeer;
        static const Enum::YLeaf dpvmVsanSuspended;
        static const Enum::YLeaf dpvmVsanNotFound;
        static const Enum::YLeaf trackedPortDown;
        static const Enum::YLeaf ecSuspendedOnLoop;
        static const Enum::YLeaf isolateBundleMisCfg;
        static const Enum::YLeaf noPeerBundleSupport;
        static const Enum::YLeaf portBringupIsolation;
        static const Enum::YLeaf domainNotAllowedIsolated;
        static const Enum::YLeaf virtualIvrDomainOverlapIsolation;
        static const Enum::YLeaf outOfService;
        static const Enum::YLeaf portAuthFailed;
        static const Enum::YLeaf bundleStandby;
        static const Enum::YLeaf portConnectorTypeErr;
        static const Enum::YLeaf errorDisabledReInitLmtReached;
        static const Enum::YLeaf ficonDupPortNum;
        static const Enum::YLeaf localRcf;
        static const Enum::YLeaf twoSwitchesWithSameWWN;
        static const Enum::YLeaf invalidOtherSidePrincEFPReqRecd;
        static const Enum::YLeaf domainOther;
        static const Enum::YLeaf elpFailureAllZeroPeerWWNRcvd;
        static const Enum::YLeaf preferredPathIsolation;
        static const Enum::YLeaf fcRedirectIsolation;
        static const Enum::YLeaf portActLicenseNotAvailable;
        static const Enum::YLeaf sdmIsolation;
        static const Enum::YLeaf fcidAllocationFailed;
        static const Enum::YLeaf externallyDisabled;
        static const Enum::YLeaf unavailableNPVUpstreamPort;
        static const Enum::YLeaf unavailableNPVPrefUpstreamPort;
        static const Enum::YLeaf sfpReadError;
        static const Enum::YLeaf stickyDownOnLinkFailure;
        static const Enum::YLeaf tooManyLinkFlapsErr;
        static const Enum::YLeaf unidirectionalUDLD;
        static const Enum::YLeaf txRxLoopUDLD;
        static const Enum::YLeaf neighborMismatchUDLD;
        static const Enum::YLeaf authzPending;
        static const Enum::YLeaf hotStdbyInBundle;
        static const Enum::YLeaf incompleteConfig;
        static const Enum::YLeaf incompleteTunnelCfg;
        static const Enum::YLeaf hwProgrammingFailed;
        static const Enum::YLeaf tunnelDstUnreachable;
        static const Enum::YLeaf suspendByMtu;
        static const Enum::YLeaf sfpInvalid;
        static const Enum::YLeaf sfpAbsent;
        static const Enum::YLeaf portCapabilitiesUnknown;
        static const Enum::YLeaf channelErrDisabled;
        static const Enum::YLeaf vrfMismatch;
        static const Enum::YLeaf vrfForwardReferencing;
        static const Enum::YLeaf dupTunnelConfigDetected;
        static const Enum::YLeaf primaryVLANDown;
        static const Enum::YLeaf vrfUnusable;
        static const Enum::YLeaf errDisableHandShkFailure;
        static const Enum::YLeaf errDisabledBPDUGuard;
        static const Enum::YLeaf dot1xSecViolationErrDisabled;
        static const Enum::YLeaf emptyEchoUDLD;
        static const Enum::YLeaf vfTaggingCapErr;
        static const Enum::YLeaf portDisabled;
        static const Enum::YLeaf tunnelModeNotConfigured;
        static const Enum::YLeaf tunnelSrcNotConfigured;
        static const Enum::YLeaf tunnelDstNotConfigured;
        static const Enum::YLeaf tunnelUnableToResolveSrcIP;
        static const Enum::YLeaf tunnelUnableToResolveDstIP;
        static const Enum::YLeaf tunnelVrfDown;
        static const Enum::YLeaf sifAdminDown;
        static const Enum::YLeaf phyIntfDown;
        static const Enum::YLeaf ifSifLimitExceeded;
        static const Enum::YLeaf sifHoldDown;
        static const Enum::YLeaf noFcoe;
        static const Enum::YLeaf dcxCompatMismatch;
        static const Enum::YLeaf isolateBundleLimitExceeded;
        static const Enum::YLeaf sifNotBound;
        static const Enum::YLeaf errDisabledLacpMiscfg;
        static const Enum::YLeaf satFabricIfDown;
        static const Enum::YLeaf invalidSatFabricIf;
        static const Enum::YLeaf noRemoteChassis;
        static const Enum::YLeaf vicEnableNotReceived;
        static const Enum::YLeaf vicDisableReceived;
        static const Enum::YLeaf vlanVsanMappingNotEnabled;
        static const Enum::YLeaf stpNotFwdingInFcoeMappedVlan;
        static const Enum::YLeaf moduleOffline;
        static const Enum::YLeaf udldAggModeLinkFailure;
        static const Enum::YLeaf stpInconsVpcPeerDisabled;
        static const Enum::YLeaf setPortStateFailed;
        static const Enum::YLeaf suspendedByVpc;
        static const Enum::YLeaf vpcCfgInProgress;
        static const Enum::YLeaf vpcPeerLinkDown;
        static const Enum::YLeaf vpcNoRspFromPeer;
        static const Enum::YLeaf protoPortSuspend;
        static const Enum::YLeaf tunnelSrcDown;
        static const Enum::YLeaf cdpInfoUnavailable;
        static const Enum::YLeaf fexSfpInvalid;
        static const Enum::YLeaf errDisabledIpConflict;
        static const Enum::YLeaf fcotClkRateMismatch;
        static const Enum::YLeaf portGuardTrustSecViolation;
        static const Enum::YLeaf sdpTimeout;
        static const Enum::YLeaf satIncompatTopo;
        static const Enum::YLeaf waitForFlogi;
        static const Enum::YLeaf satNotConfigured;
        static const Enum::YLeaf npivNotEnabledInUpstream;
        static const Enum::YLeaf vsanMismatchWithUpstreamSwPort;
        static const Enum::YLeaf portGuardBitErrRate;
        static const Enum::YLeaf portGuardSigLoss;
        static const Enum::YLeaf portGuardSyncLoss;
        static const Enum::YLeaf portGuardLinkReset;
        static const Enum::YLeaf portGuardCreditLoss;
        static const Enum::YLeaf ipQosMgrPolicyAppFailure;
        static const Enum::YLeaf pauseRateLimitErrDisabled;
        static const Enum::YLeaf lstGrpUplinkDown;
        static const Enum::YLeaf stickyDnLinkFailure;
        static const Enum::YLeaf routerMacFailure;
        static const Enum::YLeaf dcxMultipleMsapIds;
        static const Enum::YLeaf dcxHundredPdusRcvdNoAck;
        static const Enum::YLeaf enmSatIncompatibleUplink;
        static const Enum::YLeaf enmLoopDetected;
        static const Enum::YLeaf nonStickyExternallyDisabled;
        static const Enum::YLeaf subGroupIdNotAssigned;
        static const Enum::YLeaf vemUnlicensed;
        static const Enum::YLeaf profileNotFound;
        static const Enum::YLeaf nonExistentVlan;
        static const Enum::YLeaf vlanInvalidType;
        static const Enum::YLeaf vlanDown;
        static const Enum::YLeaf vpcPeerUpgrade;
        static const Enum::YLeaf ipQosDcbxpCompatFailure;
        static const Enum::YLeaf nonCiscoHbaVfTag;
        static const Enum::YLeaf domainIdConfigMismatch;
        static const Enum::YLeaf sfpSpeedMismatch;
        static const Enum::YLeaf xcvrInitializing;
        static const Enum::YLeaf xcvrAbsent;
        static const Enum::YLeaf xcvrInvalid;
        static const Enum::YLeaf vfcBindingInvalid;
        static const Enum::YLeaf vlanNotFcoeEnabled;
        static const Enum::YLeaf pvlanNativeVlanErr;
        static const Enum::YLeaf ethL2VlanDown;
        static const Enum::YLeaf ethIntfInvalidBinding;
        static const Enum::YLeaf pmonFailure;
        static const Enum::YLeaf l3NotReady;
        static const Enum::YLeaf speedMismatch;
        static const Enum::YLeaf flowControlMismatch;
        static const Enum::YLeaf vdcMode;
        static const Enum::YLeaf suspendedDueToMinLinks;
        static const Enum::YLeaf enmPinFailLinkDown;
        static const Enum::YLeaf inactiveM1PortFpathActiveVlan;
        static const Enum::YLeaf parentPortDown;
        static const Enum::YLeaf moduleRemoved;
        static const Enum::YLeaf corePortMct;
        static const Enum::YLeaf nonCorePortMct;
        static const Enum::YLeaf ficonInorderNotActive;
        static const Enum::YLeaf invalidEncapsulation;
        static const Enum::YLeaf modemLineDeasserted;
        static const Enum::YLeaf ipSecHndshkInProgress;
        static const Enum::YLeaf sfpEthCompliantErr;
        static const Enum::YLeaf cellularModemUnattached;
        static const Enum::YLeaf outOfGlblRxBuffers;
        static const Enum::YLeaf sfpFcCompliantErr;
        static const Enum::YLeaf ethIntfNotLicensed;
        static const Enum::YLeaf domainIdsInvalid;
        static const Enum::YLeaf fabricNameInvalid;

};

class CiscoalarmseverityEnum : public Enum
{
    public:
        static const Enum::YLeaf cleared;
        static const Enum::YLeaf indeterminate;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf info;

};


}
}

#endif /* _CISCO_TC_ */

