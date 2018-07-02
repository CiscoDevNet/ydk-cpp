#ifndef _CISCO_SIP_UA_MIB_
#define _CISCO_SIP_UA_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace CISCO_SIP_UA_MIB {

class CiscoSipUaMIBNotificationPrefix : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoSipUaMIBNotificationPrefix();
        ~CiscoSipUaMIBNotificationPrefix();


}; // CiscoSipUaMIBNotificationPrefix

class CiscoSipUaMIBNotifications : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoSipUaMIBNotifications();
        ~CiscoSipUaMIBNotifications();


}; // CiscoSipUaMIBNotifications

class CISCOSIPUAMIB : public ydk::Entity
{
    public:
        CISCOSIPUAMIB();
        ~CISCOSIPUAMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CSipCfgBase; //type: CISCOSIPUAMIB::CSipCfgBase
        class CSipCfgTimer; //type: CISCOSIPUAMIB::CSipCfgTimer
        class CSipCfgRetry; //type: CISCOSIPUAMIB::CSipCfgRetry
        class CSipCfgPeer; //type: CISCOSIPUAMIB::CSipCfgPeer
        class CSipCfgAaa; //type: CISCOSIPUAMIB::CSipCfgAaa
        class CSipCfgVoiceServiceVoip; //type: CISCOSIPUAMIB::CSipCfgVoiceServiceVoip
        class CSipStatsInfo; //type: CISCOSIPUAMIB::CSipStatsInfo
        class CSipStatsSuccess; //type: CISCOSIPUAMIB::CSipStatsSuccess
        class CSipStatsRedirect; //type: CISCOSIPUAMIB::CSipStatsRedirect
        class CSipStatsErrClient; //type: CISCOSIPUAMIB::CSipStatsErrClient
        class CSipStatsErrServer; //type: CISCOSIPUAMIB::CSipStatsErrServer
        class CSipStatsGlobalFail; //type: CISCOSIPUAMIB::CSipStatsGlobalFail
        class CSipStatsTraffic; //type: CISCOSIPUAMIB::CSipStatsTraffic
        class CSipStatsRetry; //type: CISCOSIPUAMIB::CSipStatsRetry
        class CSipStatsMisc; //type: CISCOSIPUAMIB::CSipStatsMisc
        class CSipStatsConnection; //type: CISCOSIPUAMIB::CSipStatsConnection
        class CSipCfgEarlyMediaTable; //type: CISCOSIPUAMIB::CSipCfgEarlyMediaTable
        class CSipCfgBindSourceAddrTable; //type: CISCOSIPUAMIB::CSipCfgBindSourceAddrTable
        class CSipCfgPeerTable; //type: CISCOSIPUAMIB::CSipCfgPeerTable
        class CSipCfgStatusCauseTable; //type: CISCOSIPUAMIB::CSipCfgStatusCauseTable
        class CSipCfgCauseStatusTable; //type: CISCOSIPUAMIB::CSipCfgCauseStatusTable
        class CSipStatsSuccessOkTable; //type: CISCOSIPUAMIB::CSipStatsSuccessOkTable

        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgBase> csipcfgbase;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgTimer> csipcfgtimer;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgRetry> csipcfgretry;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgPeer> csipcfgpeer;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgAaa> csipcfgaaa;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgVoiceServiceVoip> csipcfgvoiceservicevoip;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsInfo> csipstatsinfo;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsSuccess> csipstatssuccess;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsRedirect> csipstatsredirect;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsErrClient> csipstatserrclient;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsErrServer> csipstatserrserver;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsGlobalFail> csipstatsglobalfail;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsTraffic> csipstatstraffic;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsRetry> csipstatsretry;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsMisc> csipstatsmisc;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsConnection> csipstatsconnection;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgEarlyMediaTable> csipcfgearlymediatable;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgBindSourceAddrTable> csipcfgbindsourceaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgPeerTable> csipcfgpeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgStatusCauseTable> csipcfgstatuscausetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipCfgCauseStatusTable> csipcfgcausestatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_SIP_UA_MIB::CISCOSIPUAMIB::CSipStatsSuccessOkTable> csipstatssuccessoktable;
        
}; // CISCOSIPUAMIB


class CISCOSIPUAMIB::CSipCfgBase : public ydk::Entity
{
    public:
        CSipCfgBase();
        ~CSipCfgBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgversion; //type: string
        ydk::YLeaf csipcfgtransport; //type: CSipCfgTransport
        ydk::YLeaf csipcfguserlocationserveraddr; //type: string
        ydk::YLeaf csipcfgmaxforwards; //type: int32
        ydk::YLeaf csipcfgbindsrcaddrinterface; //type: int32
        ydk::YLeaf csipcfgbindsrcaddrscope; //type: CSipCfgBindSrcAddrScope
        ydk::YLeaf csipcfgdnssrvquerystringformat; //type: CSipCfgDnsSrvQueryStringFormat
        ydk::YLeaf csipcfgredirectiondisabled; //type: boolean
        ydk::YLeaf csipcfgsymnatenabled; //type: boolean
        ydk::YLeaf csipcfgsymnatdirectionrole; //type: CSipCfgSymNatDirectionRole
        ydk::YLeaf csipcfgsuspendresumeenabled; //type: boolean
        ydk::YLeaf csipcfgoffercallhold; //type: CSipCfgOfferCallHold
        ydk::YLeaf csipcfgreasonheaderoveride; //type: boolean
        ydk::YLeaf csipcfgmaximumforwards; //type: int32
        class CSipCfgTransport;
        class CSipCfgBindSrcAddrScope;
        class CSipCfgDnsSrvQueryStringFormat;
        class CSipCfgSymNatDirectionRole;
        class CSipCfgOfferCallHold;

}; // CISCOSIPUAMIB::CSipCfgBase


class CISCOSIPUAMIB::CSipCfgTimer : public ydk::Entity
{
    public:
        CSipCfgTimer();
        ~CSipCfgTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgtimertrying; //type: int32
        ydk::YLeaf csipcfgtimerexpires; //type: int32
        ydk::YLeaf csipcfgtimerconnect; //type: int32
        ydk::YLeaf csipcfgtimerdisconnect; //type: int32
        ydk::YLeaf csipcfgtimerprack; //type: int32
        ydk::YLeaf csipcfgtimercomet; //type: int32
        ydk::YLeaf csipcfgtimerreliablersp; //type: int32
        ydk::YLeaf csipcfgtimernotify; //type: int32
        ydk::YLeaf csipcfgtimerrefer; //type: int32
        ydk::YLeaf csipcfgtimersessiontimer; //type: int32
        ydk::YLeaf csipcfgtimerhold; //type: int32
        ydk::YLeaf csipcfgtimerinfo; //type: int32
        ydk::YLeaf csipcfgtimerconnectionaging; //type: int32
        ydk::YLeaf csipcfgtimerbufferinvite; //type: int32

}; // CISCOSIPUAMIB::CSipCfgTimer


class CISCOSIPUAMIB::CSipCfgRetry : public ydk::Entity
{
    public:
        CSipCfgRetry();
        ~CSipCfgRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgretryinvite; //type: int32
        ydk::YLeaf csipcfgretrybye; //type: int32
        ydk::YLeaf csipcfgretrycancel; //type: int32
        ydk::YLeaf csipcfgretryregister; //type: int32
        ydk::YLeaf csipcfgretryresponse; //type: int32
        ydk::YLeaf csipcfgretryprack; //type: int32
        ydk::YLeaf csipcfgretrycomet; //type: int32
        ydk::YLeaf csipcfgretryreliablersp; //type: int32
        ydk::YLeaf csipcfgretrynotify; //type: int32
        ydk::YLeaf csipcfgretryrefer; //type: int32
        ydk::YLeaf csipcfgretryinfo; //type: int32
        ydk::YLeaf csipcfgretrysubscribe; //type: int32

}; // CISCOSIPUAMIB::CSipCfgRetry


class CISCOSIPUAMIB::CSipCfgPeer : public ydk::Entity
{
    public:
        CSipCfgPeer();
        ~CSipCfgPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgoutsessiontransport; //type: CSipCfgOutSessionTransport
        ydk::YLeaf csipcfgreliable1xxrspstr; //type: string
        ydk::YLeaf csipcfgreliable1xxrsphdr; //type: CSipCfgReliable1xxRspHdr
        ydk::YLeaf csipcfgurltype; //type: CSipCfgUrlType
        class CSipCfgOutSessionTransport;
        class CSipCfgReliable1xxRspHdr;
        class CSipCfgUrlType;

}; // CISCOSIPUAMIB::CSipCfgPeer


class CISCOSIPUAMIB::CSipCfgAaa : public ydk::Entity
{
    public:
        CSipCfgAaa();
        ~CSipCfgAaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgaaausername; //type: CSipCfgAaaUsername
        class CSipCfgAaaUsername;

}; // CISCOSIPUAMIB::CSipCfgAaa


class CISCOSIPUAMIB::CSipCfgVoiceServiceVoip : public ydk::Entity
{
    public:
        CSipCfgVoiceServiceVoip();
        ~CSipCfgVoiceServiceVoip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgheaderpassingenabled; //type: boolean
        ydk::YLeaf csipcfgmaxsubscriptionaccept; //type: uint32
        ydk::YLeaf csipcfgmaxsubscriptionoriginate; //type: uint32
        ydk::YLeaf csipcfgswitchtransportenabled; //type: boolean

}; // CISCOSIPUAMIB::CSipCfgVoiceServiceVoip


class CISCOSIPUAMIB::CSipStatsInfo : public ydk::Entity
{
    public:
        CSipStatsInfo();
        ~CSipStatsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsinfotryingins; //type: uint32
        ydk::YLeaf csipstatsinfotryingouts; //type: uint32
        ydk::YLeaf csipstatsinforingingins; //type: uint32
        ydk::YLeaf csipstatsinforingingouts; //type: uint32
        ydk::YLeaf csipstatsinfoforwardedins; //type: uint32
        ydk::YLeaf csipstatsinfoforwardedouts; //type: uint32
        ydk::YLeaf csipstatsinfoqueuedins; //type: uint32
        ydk::YLeaf csipstatsinfoqueuedouts; //type: uint32
        ydk::YLeaf csipstatsinfosessionprogins; //type: uint32
        ydk::YLeaf csipstatsinfosessionprogouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsInfo


class CISCOSIPUAMIB::CSipStatsSuccess : public ydk::Entity
{
    public:
        CSipStatsSuccess();
        ~CSipStatsSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatssuccessokins; //type: uint32
        ydk::YLeaf csipstatssuccessokouts; //type: uint32
        ydk::YLeaf csipstatssuccessacceptedins; //type: uint32
        ydk::YLeaf csipstatssuccessacceptedouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsSuccess


class CISCOSIPUAMIB::CSipStatsRedirect : public ydk::Entity
{
    public:
        CSipStatsRedirect();
        ~CSipStatsRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsredirmultiplechoices; //type: uint32
        ydk::YLeaf csipstatsredirmovedperms; //type: uint32
        ydk::YLeaf csipstatsredirmovedtemps; //type: uint32
        ydk::YLeaf csipstatsredirseeothers; //type: uint32
        ydk::YLeaf csipstatsrediruseproxys; //type: uint32
        ydk::YLeaf csipstatsrediraltservices; //type: uint32
        ydk::YLeaf csipstatsredirmovedtempsins; //type: uint32
        ydk::YLeaf csipstatsredirmovedtempsouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsRedirect


class CISCOSIPUAMIB::CSipStatsErrClient : public ydk::Entity
{
    public:
        CSipStatsErrClient();
        ~CSipStatsErrClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsclientbadrequestins; //type: uint32
        ydk::YLeaf csipstatsclientbadrequestouts; //type: uint32
        ydk::YLeaf csipstatsclientunauthorizedins; //type: uint32
        ydk::YLeaf csipstatsclientunauthorizedouts; //type: uint32
        ydk::YLeaf csipstatsclientpaymentreqdins; //type: uint32
        ydk::YLeaf csipstatsclientpaymentreqdouts; //type: uint32
        ydk::YLeaf csipstatsclientforbiddenins; //type: uint32
        ydk::YLeaf csipstatsclientforbiddenouts; //type: uint32
        ydk::YLeaf csipstatsclientnotfoundins; //type: uint32
        ydk::YLeaf csipstatsclientnotfoundouts; //type: uint32
        ydk::YLeaf csipstatsclientmethnotallowedins; //type: uint32
        ydk::YLeaf csipstatsclientmethnotallowedouts; //type: uint32
        ydk::YLeaf csipstatsclientnotacceptableins; //type: uint32
        ydk::YLeaf csipstatsclientnotacceptableouts; //type: uint32
        ydk::YLeaf csipstatsclientproxyauthreqdins; //type: uint32
        ydk::YLeaf csipstatsclientproxyauthreqdouts; //type: uint32
        ydk::YLeaf csipstatsclientreqtimeoutins; //type: uint32
        ydk::YLeaf csipstatsclientreqtimeoutouts; //type: uint32
        ydk::YLeaf csipstatsclientconflictins; //type: uint32
        ydk::YLeaf csipstatsclientconflictouts; //type: uint32
        ydk::YLeaf csipstatsclientgoneins; //type: uint32
        ydk::YLeaf csipstatsclientgoneouts; //type: uint32
        ydk::YLeaf csipstatsclientlengthrequiredins; //type: uint32
        ydk::YLeaf csipstatsclientlengthrequiredouts; //type: uint32
        ydk::YLeaf csipstatsclientreqenttoolargeins; //type: uint32
        ydk::YLeaf csipstatsclientreqenttoolargeouts; //type: uint32
        ydk::YLeaf csipstatsclientrequritoolargeins; //type: uint32
        ydk::YLeaf csipstatsclientrequritoolargeouts; //type: uint32
        ydk::YLeaf csipstatsclientnosupmediatypeins; //type: uint32
        ydk::YLeaf csipstatsclientnosupmediatypeouts; //type: uint32
        ydk::YLeaf csipstatsclientbadextensionins; //type: uint32
        ydk::YLeaf csipstatsclientbadextensionouts; //type: uint32
        ydk::YLeaf csipstatsclienttempnotavailins; //type: uint32
        ydk::YLeaf csipstatsclienttempnotavailouts; //type: uint32
        ydk::YLeaf csipstatsclientcalllegnoexistins; //type: uint32
        ydk::YLeaf csipstatsclientcalllegnoexistouts; //type: uint32
        ydk::YLeaf csipstatsclientloopdetectedins; //type: uint32
        ydk::YLeaf csipstatsclientloopdetectedouts; //type: uint32
        ydk::YLeaf csipstatsclienttoomanyhopsins; //type: uint32
        ydk::YLeaf csipstatsclienttoomanyhopsouts; //type: uint32
        ydk::YLeaf csipstatsclientaddrincompleteins; //type: uint32
        ydk::YLeaf csipstatsclientaddrincompleteouts; //type: uint32
        ydk::YLeaf csipstatsclientambiguousins; //type: uint32
        ydk::YLeaf csipstatsclientambiguousouts; //type: uint32
        ydk::YLeaf csipstatsclientbusyhereins; //type: uint32
        ydk::YLeaf csipstatsclientbusyhereouts; //type: uint32
        ydk::YLeaf csipstatsclientreqtermins; //type: uint32
        ydk::YLeaf csipstatsclientreqtermouts; //type: uint32
        ydk::YLeaf csipstatsclientnoaccepthereins; //type: uint32
        ydk::YLeaf csipstatsclientnoaccepthereouts; //type: uint32
        ydk::YLeaf csipstatsclientbadeventins; //type: uint32
        ydk::YLeaf csipstatsclientbadeventouts; //type: uint32
        ydk::YLeaf csipstatsclientsttoosmallins; //type: uint32
        ydk::YLeaf csipstatsclientsttoosmallouts; //type: uint32
        ydk::YLeaf csipstatsclientreqpendingins; //type: uint32
        ydk::YLeaf csipstatsclientreqpendingouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsErrClient


class CISCOSIPUAMIB::CSipStatsErrServer : public ydk::Entity
{
    public:
        CSipStatsErrServer();
        ~CSipStatsErrServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsserverinterrorins; //type: uint32
        ydk::YLeaf csipstatsserverinterrorouts; //type: uint32
        ydk::YLeaf csipstatsservernotimplementedins; //type: uint32
        ydk::YLeaf csipstatsservernotimplementedouts; //type: uint32
        ydk::YLeaf csipstatsserverbadgatewayins; //type: uint32
        ydk::YLeaf csipstatsserverbadgatewayouts; //type: uint32
        ydk::YLeaf csipstatsserverserviceunavailins; //type: uint32
        ydk::YLeaf csipstatsserverserviceunavailouts; //type: uint32
        ydk::YLeaf csipstatsservergatewaytimeoutins; //type: uint32
        ydk::YLeaf csipstatsservergatewaytimeoutouts; //type: uint32
        ydk::YLeaf csipstatsserverbadsipversionins; //type: uint32
        ydk::YLeaf csipstatsserverbadsipversionouts; //type: uint32
        ydk::YLeaf csipstatsserverprecondfailureins; //type: uint32
        ydk::YLeaf csipstatsserverprecondfailureouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsErrServer


class CISCOSIPUAMIB::CSipStatsGlobalFail : public ydk::Entity
{
    public:
        CSipStatsGlobalFail();
        ~CSipStatsGlobalFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsglobalbusyeverywhereins; //type: uint32
        ydk::YLeaf csipstatsglobalbusyeverywhereouts; //type: uint32
        ydk::YLeaf csipstatsglobaldeclineins; //type: uint32
        ydk::YLeaf csipstatsglobaldeclineouts; //type: uint32
        ydk::YLeaf csipstatsglobalnotanywhereins; //type: uint32
        ydk::YLeaf csipstatsglobalnotanywhereouts; //type: uint32
        ydk::YLeaf csipstatsglobalnotacceptableins; //type: uint32
        ydk::YLeaf csipstatsglobalnotacceptableouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsGlobalFail


class CISCOSIPUAMIB::CSipStatsTraffic : public ydk::Entity
{
    public:
        CSipStatsTraffic();
        ~CSipStatsTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatstrafficinviteins; //type: uint32
        ydk::YLeaf csipstatstrafficinviteouts; //type: uint32
        ydk::YLeaf csipstatstrafficackins; //type: uint32
        ydk::YLeaf csipstatstrafficackouts; //type: uint32
        ydk::YLeaf csipstatstrafficbyeins; //type: uint32
        ydk::YLeaf csipstatstrafficbyeouts; //type: uint32
        ydk::YLeaf csipstatstrafficcancelins; //type: uint32
        ydk::YLeaf csipstatstrafficcancelouts; //type: uint32
        ydk::YLeaf csipstatstrafficoptionsins; //type: uint32
        ydk::YLeaf csipstatstrafficoptionsouts; //type: uint32
        ydk::YLeaf csipstatstrafficregisterins; //type: uint32
        ydk::YLeaf csipstatstrafficregisterouts; //type: uint32
        ydk::YLeaf csipstatstrafficcometins; //type: uint32
        ydk::YLeaf csipstatstrafficcometouts; //type: uint32
        ydk::YLeaf csipstatstrafficprackins; //type: uint32
        ydk::YLeaf csipstatstrafficprackouts; //type: uint32
        ydk::YLeaf csipstatstrafficreferins; //type: uint32
        ydk::YLeaf csipstatstrafficreferouts; //type: uint32
        ydk::YLeaf csipstatstrafficnotifyins; //type: uint32
        ydk::YLeaf csipstatstrafficnotifyouts; //type: uint32
        ydk::YLeaf csipstatstrafficinfoins; //type: uint32
        ydk::YLeaf csipstatstrafficinfoouts; //type: uint32
        ydk::YLeaf csipstatstrafficsubscribeins; //type: uint32
        ydk::YLeaf csipstatstrafficsubscribeouts; //type: uint32
        ydk::YLeaf csipstatstrafficupdateins; //type: uint32
        ydk::YLeaf csipstatstrafficupdateouts; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsTraffic


class CISCOSIPUAMIB::CSipStatsRetry : public ydk::Entity
{
    public:
        CSipStatsRetry();
        ~CSipStatsRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsretryinvites; //type: uint32
        ydk::YLeaf csipstatsretrybyes; //type: uint32
        ydk::YLeaf csipstatsretrycancels; //type: uint32
        ydk::YLeaf csipstatsretryregisters; //type: uint32
        ydk::YLeaf csipstatsretryresponses; //type: uint32
        ydk::YLeaf csipstatsretrypracks; //type: uint32
        ydk::YLeaf csipstatsretrycomets; //type: uint32
        ydk::YLeaf csipstatsretryreliable1xxrsps; //type: uint32
        ydk::YLeaf csipstatsretrynotifys; //type: uint32
        ydk::YLeaf csipstatsretryrefers; //type: uint32
        ydk::YLeaf csipstatsretryinfo; //type: uint32
        ydk::YLeaf csipstatsretrysubscribe; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsRetry


class CISCOSIPUAMIB::CSipStatsMisc : public ydk::Entity
{
    public:
        CSipStatsMisc();
        ~CSipStatsMisc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsmisc3xxmappedto4xxrsps; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsMisc


class CISCOSIPUAMIB::CSipStatsConnection : public ydk::Entity
{
    public:
        CSipStatsConnection();
        ~CSipStatsConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatsconntcpsendfailures; //type: uint32
        ydk::YLeaf csipstatsconnudpsendfailures; //type: uint32
        ydk::YLeaf csipstatsconntcpremoteclosures; //type: uint32
        ydk::YLeaf csipstatsconnudpcreatefailures; //type: uint32
        ydk::YLeaf csipstatsconntcpcreatefailures; //type: uint32
        ydk::YLeaf csipstatsconnudpinactivetimeouts; //type: uint32
        ydk::YLeaf csipstatsconntcpinactivetimeouts; //type: uint32
        ydk::YLeaf csipstatsactiveudpconnections; //type: uint32
        ydk::YLeaf csipstatsactivetcpconnections; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsConnection


class CISCOSIPUAMIB::CSipCfgEarlyMediaTable : public ydk::Entity
{
    public:
        CSipCfgEarlyMediaTable();
        ~CSipCfgEarlyMediaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipCfgEarlyMediaEntry; //type: CISCOSIPUAMIB::CSipCfgEarlyMediaTable::CSipCfgEarlyMediaEntry

        ydk::YList csipcfgearlymediaentry;
        
}; // CISCOSIPUAMIB::CSipCfgEarlyMediaTable


class CISCOSIPUAMIB::CSipCfgEarlyMediaTable::CSipCfgEarlyMediaEntry : public ydk::Entity
{
    public:
        CSipCfgEarlyMediaEntry();
        ~CSipCfgEarlyMediaEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgearlymediastatuscodeindex; //type: int32
        ydk::YLeaf csipcfgearlymediacutthrudisabled; //type: boolean

}; // CISCOSIPUAMIB::CSipCfgEarlyMediaTable::CSipCfgEarlyMediaEntry


class CISCOSIPUAMIB::CSipCfgBindSourceAddrTable : public ydk::Entity
{
    public:
        CSipCfgBindSourceAddrTable();
        ~CSipCfgBindSourceAddrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipCfgBindSourceAddrEntry; //type: CISCOSIPUAMIB::CSipCfgBindSourceAddrTable::CSipCfgBindSourceAddrEntry

        ydk::YList csipcfgbindsourceaddrentry;
        
}; // CISCOSIPUAMIB::CSipCfgBindSourceAddrTable


class CISCOSIPUAMIB::CSipCfgBindSourceAddrTable::CSipCfgBindSourceAddrEntry : public ydk::Entity
{
    public:
        CSipCfgBindSourceAddrEntry();
        ~CSipCfgBindSourceAddrEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgbindsourceaddrscope; //type: CSipCfgBindSourceAddrScope
        ydk::YLeaf csipcfgbindsourceaddrinterface; //type: int32
        class CSipCfgBindSourceAddrScope;

}; // CISCOSIPUAMIB::CSipCfgBindSourceAddrTable::CSipCfgBindSourceAddrEntry


class CISCOSIPUAMIB::CSipCfgPeerTable : public ydk::Entity
{
    public:
        CSipCfgPeerTable();
        ~CSipCfgPeerTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipCfgPeerEntry; //type: CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry

        ydk::YList csipcfgpeerentry;
        
}; // CISCOSIPUAMIB::CSipCfgPeerTable


class CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry : public ydk::Entity
{
    public:
        CSipCfgPeerEntry();
        ~CSipCfgPeerEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgpeerindex; //type: int32
        ydk::YLeaf csipcfgpeeroutsessiontransport; //type: CSipCfgPeerOutSessionTransport
        ydk::YLeaf csipcfgpeerreliable1xxrspstr; //type: string
        ydk::YLeaf csipcfgpeerreliable1xxrsphdr; //type: CSipCfgPeerReliable1xxRspHdr
        ydk::YLeaf csipcfgpeerurltype; //type: CSipCfgPeerUrlType
        ydk::YLeaf csipcfgpeerswitchtransenabled; //type: boolean
        class CSipCfgPeerOutSessionTransport;
        class CSipCfgPeerReliable1xxRspHdr;
        class CSipCfgPeerUrlType;

}; // CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry


class CISCOSIPUAMIB::CSipCfgStatusCauseTable : public ydk::Entity
{
    public:
        CSipCfgStatusCauseTable();
        ~CSipCfgStatusCauseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipCfgStatusCauseEntry; //type: CISCOSIPUAMIB::CSipCfgStatusCauseTable::CSipCfgStatusCauseEntry

        ydk::YList csipcfgstatuscauseentry;
        
}; // CISCOSIPUAMIB::CSipCfgStatusCauseTable


class CISCOSIPUAMIB::CSipCfgStatusCauseTable::CSipCfgStatusCauseEntry : public ydk::Entity
{
    public:
        CSipCfgStatusCauseEntry();
        ~CSipCfgStatusCauseEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgstatuscodeindex; //type: int32
        ydk::YLeaf csipcfgpstncause; //type: int32
        ydk::YLeaf csipcfgstatuscausestorestatus; //type: StorageType

}; // CISCOSIPUAMIB::CSipCfgStatusCauseTable::CSipCfgStatusCauseEntry


class CISCOSIPUAMIB::CSipCfgCauseStatusTable : public ydk::Entity
{
    public:
        CSipCfgCauseStatusTable();
        ~CSipCfgCauseStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipCfgCauseStatusEntry; //type: CISCOSIPUAMIB::CSipCfgCauseStatusTable::CSipCfgCauseStatusEntry

        ydk::YList csipcfgcausestatusentry;
        
}; // CISCOSIPUAMIB::CSipCfgCauseStatusTable


class CISCOSIPUAMIB::CSipCfgCauseStatusTable::CSipCfgCauseStatusEntry : public ydk::Entity
{
    public:
        CSipCfgCauseStatusEntry();
        ~CSipCfgCauseStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipcfgpstncauseindex; //type: int32
        ydk::YLeaf csipcfgstatuscode; //type: int32
        ydk::YLeaf csipcfgcausestatusstorestatus; //type: StorageType

}; // CISCOSIPUAMIB::CSipCfgCauseStatusTable::CSipCfgCauseStatusEntry


class CISCOSIPUAMIB::CSipStatsSuccessOkTable : public ydk::Entity
{
    public:
        CSipStatsSuccessOkTable();
        ~CSipStatsSuccessOkTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CSipStatsSuccessOkEntry; //type: CISCOSIPUAMIB::CSipStatsSuccessOkTable::CSipStatsSuccessOkEntry

        ydk::YList csipstatssuccessokentry;
        
}; // CISCOSIPUAMIB::CSipStatsSuccessOkTable


class CISCOSIPUAMIB::CSipStatsSuccessOkTable::CSipStatsSuccessOkEntry : public ydk::Entity
{
    public:
        CSipStatsSuccessOkEntry();
        ~CSipStatsSuccessOkEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csipstatssuccessokmethod; //type: binary
        ydk::YLeaf csipstatssuccessokinbounds; //type: uint32
        ydk::YLeaf csipstatssuccessokoutbounds; //type: uint32

}; // CISCOSIPUAMIB::CSipStatsSuccessOkTable::CSipStatsSuccessOkEntry

class CISCOSIPUAMIB::CSipCfgBase::CSipCfgTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udpAndTcp;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOSIPUAMIB::CSipCfgBase::CSipCfgBindSrcAddrScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf control;

};

class CISCOSIPUAMIB::CSipCfgBase::CSipCfgDnsSrvQueryStringFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

};

class CISCOSIPUAMIB::CSipCfgBase::CSipCfgSymNatDirectionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;

};

class CISCOSIPUAMIB::CSipCfgBase::CSipCfgOfferCallHold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf directionAttr;
        static const ydk::Enum::YLeaf connAddr;

};

class CISCOSIPUAMIB::CSipCfgPeer::CSipCfgOutSessionTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;

};

class CISCOSIPUAMIB::CSipCfgPeer::CSipCfgReliable1xxRspHdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf require;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOSIPUAMIB::CSipCfgPeer::CSipCfgUrlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf tel;

};

class CISCOSIPUAMIB::CSipCfgAaa::CSipCfgAaaUsername : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingNumber;
        static const ydk::Enum::YLeaf proxyAuth;

};

class CISCOSIPUAMIB::CSipCfgBindSourceAddrTable::CSipCfgBindSourceAddrEntry::CSipCfgBindSourceAddrScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media;
        static const ydk::Enum::YLeaf control;

};

class CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry::CSipCfgPeerOutSessionTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;

};

class CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry::CSipCfgPeerReliable1xxRspHdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf require;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOSIPUAMIB::CSipCfgPeerTable::CSipCfgPeerEntry::CSipCfgPeerUrlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf tel;

};


}
}

#endif /* _CISCO_SIP_UA_MIB_ */

